Blockly.JavaScript['MANHelloWorld.random-text'] = function (block) {
  return [`DEV_IO.MANHelloWorld().random()`, Blockly.JavaScript.ORDER_ATOMIC];
};

Blockly.JavaScript['MANHelloWorld.writeled'] = function (block) {
  // return 'DEV_IO.MANHelloWorld()' + '.writeled(' + block.getFieldValue('pin') + ',' + block.getFieldValue('state') + ');\n';
  return 'DEV_IO.MANHelloWorld().init();\n MANHelloWorld tmp; \n tmp.writeled(GPIO_NUM_17, 0);\n';
};

//return 'DEV_IO.kidbrightled()' + '.outputpin(' + block.getFieldValue('OUTPUT') + ',' + block.getFieldValue('STATUS') + ');\n';
