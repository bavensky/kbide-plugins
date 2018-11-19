Blockly.JavaScript['kidbrightled.out'] = function (block) {
  return 'DEV_IO.kidbrightled()' + '.outputpin(' + block.getFieldValue('OUTPUT') + ',' + block.getFieldValue('STATUS') + ');\n';
};

Blockly.JavaScript['kidbrightled.buttonpin'] = function (block) {
  return 'DEV_IO.kidbrightled()' + '.inputpin(' + block.getFieldValue('buttonpin') + ');\n';
};

// return ['DEV_SPI.MCP23S17_16IN()' + '.read(' + block.getFieldValue('INPUT') + ')',Blockly.JavaScript.ORDER_ATOMIC];


// Blockly.JavaScript['kidbrightled.out'] = function(block) {
//     return ['DEV_IO.kidbrightled()' + '.outputpin(' + block.getFieldValue('OUTPUT') + block.getFieldValue('STATUS') + ')', Blockly.JavaScript.ORDER_ATOMIC];
// };

