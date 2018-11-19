Blockly.Blocks['motordriver.direction'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("motordriver")
        .appendField("state")
        .appendField(new Blockly.FieldDropdown([["forward","1"], ["backward","2"], ["left","3"], ["right","4"]]), "state")
        .appendField("power")
        .appendField(new Blockly.FieldDropdown([["0%","0"], ["50%","128"], ["100%","255"]]), "pwm");
    this.setTooltip(Blockly.Msg.motordriver_TEXT_TOOLTIP);
    this.setHelpUrl(Blockly.Msg.motordriver_TEXT_HELPURL);
    this.setColour(0);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
  }
};

Blockly.Blocks['motordriver.connectpin'] = {
  init: function() {
    this.appendDummyInput()
        .appendField("Connect Pin");
    this.appendValueInput("enable1")
        .setCheck("Number")
        .appendField("enable1");
    this.appendValueInput("enable2")
        .setCheck("Number")
        .appendField("enable2");
    this.appendValueInput("in1")
        .setCheck("Number")
        .appendField("in1");
    this.appendValueInput("in2")
        .setCheck("Number")
        .appendField("in2");
    this.appendValueInput("in3")
        .setCheck("Number")
        .appendField("in3");
    this.appendValueInput("in4")
        .setCheck("Number")
        .appendField("in4");
    this.setInputsInline(true);
    this.setPreviousStatement(true, null);
    this.setNextStatement(true, null);
    this.setColour(230);
 this.setTooltip("");
 this.setHelpUrl("");
  }
};
