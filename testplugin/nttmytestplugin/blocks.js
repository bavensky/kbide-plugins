Blockly.Blocks["NTTMyTestPlugin_out"] = {
    init: function() {
        this.appendDummyInput()
            .appendField("set LED")
            .appendField(new Blockly.FieldDropdown([
                ["BT", "17"],
                ["WIFI", "2"],
                ["NTP", "15"],
                ["IOT", "12"]
            ]), 'outputpin')
            .appendField("state")
            .appendField(new Blockly.FieldDropdown([
                ["ON", "0"],
                ["OFF", "1"]
            ]), 'state');
        this.setInputsInline(true);
        this.setPreviousStatement(true);
        this.setNextStatement(true);
        this.setColour(270);
        this.setTooltip("Tooltip");
        this.setHelpUrl("HelpUrl");
    }
};