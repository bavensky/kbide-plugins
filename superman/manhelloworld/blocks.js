Blockly.Blocks["MANHelloWorld.random-text"] = {
    init: function () {
        this.appendDummyInput()
            .appendField(Blockly.Msg.MANHelloWorld_TEXT_TITLE);

        // this.appendDummyInput()
        // 	.appendField(Blockly.Msg.CHANNEL)
        // 	.appendField(new Blockly.FieldDropdown(channel_array), 'CHANNEL');
        // device addess
        // this.appendDummyInput()
        // 	.appendField(Blockly.Msg.ADDRESS)
        // 	.appendField(new Blockly.FieldDropdown([
        // 		["0x29", "41"],
        // 		["0x39", "57"],
        // 		["0x49", "73"]
        // 	]), 'ADDRESS');

        this.setOutput(true, 'String');
        this.setInputsInline(true)
        this.setPreviousStatement(false);
        this.setNextStatement(false);
        this.setColour(58);
        this.setTooltip(Blockly.Msg.MANHelloWorld_TEXT_TOOLTIP);
        this.setHelpUrl(Blockly.Msg.MANHelloWorld_TEXT_HELPURL);
    }
};

Blockly.Blocks['MANHelloWorld.writeled'] = {
    init: function() {
      this.appendDummyInput()
          .appendField("Write LED")
          .appendField("PIN")
          .appendField(new Blockly.FieldDropdown([["BT","17"], ["WIFI","2"]]), "pin")
          .appendField("STATE")
          .appendField(new Blockly.FieldDropdown([["ON","0"], ["OFF","1"]]), "state");
      this.setPreviousStatement(true, null);
      this.setNextStatement(true, null);
      this.setColour(330);
   this.setTooltip("");
   this.setHelpUrl("");
    }
  };

