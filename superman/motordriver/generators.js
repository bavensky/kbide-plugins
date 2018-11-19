Blockly.JavaScript['motordriver.direction'] = function (block) {
  return ['DEV_IO.motordriver()' + '.drivermotor(' + block.getFieldValue('state') + block.getFieldValue('pwm') + ')',Blockly.JavaScript.ORDER_ATOMIC];
};

Blockly.JavaScript['motordriver.connectpin'] = function(block) {
	return ['DEV_IO.motordriver()' + '.motordriver(' + block.getFieldValue('enable1') + block.getFieldValue('enable2') + ', ' + block.getFieldValue('in1') + block.getFieldValue('in2') + block.getFieldValue('in3') + block.getFieldValue('in4') +')',Blockly.JavaScript.ORDER_ATOMIC];
};

// Blockly.JavaScript['motordriver.connectpin'] = function (block) {
//   return ['DEV_IO.motordriver()' + '.init(' + block.getFieldValue('enable1') + block.getFieldValue('enable2') + block.getFieldValue('in1') + block.getFieldValue('in2') + block.getFieldValue('in3') + block.getFieldValue('in4') +')',Blockly.JavaScript.ORDER_ATOMIC];
// };
