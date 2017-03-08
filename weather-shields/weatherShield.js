(function() {
  var shieldUuid = 99999;
  var shieldName = 'weather-shield';
  var hazardTitle = 'Temperature outside limits';

  var delay = 5000;
  var preProcessing = undefined;

  var tempMin = -10;
  var tempMax = 35;

  function safe(payload) {
    return ((payload.weatherData.temperature < shield.tempMin) || (payload.weatherData.temperature > shield.tempMax));
  }

  function entryCondition(payload) {
    return (payload && payload.weatherData && payload.weatherData.temperature);
  }

  function message(payload) {
    var hazardUuid = shieldName + '_' + Date.now();
    return (constructMessage(payload, shieldUuid, hazardUuid, hazardTitle));
  }

  registerShield(shieldUuid, shieldName, entryCondition, preProcessing, safelet, message, delay);
})();