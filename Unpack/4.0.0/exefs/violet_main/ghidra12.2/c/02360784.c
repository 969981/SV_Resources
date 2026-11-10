/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02360784; name: FUN_02360784
 */


void FUN_02360784(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 local_60 [16];
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_30;
  
  uVar1 = 0x68;
  if (DAT_04849148 == '\0') {
    uVar1 = 0;
  }
  local_60 = FUN_02363248(param_6,uVar1,DAT_04849150);
  *param_1 = 1;
  uStack_50 = param_3;
  local_40 = param_4;
  uStack_30 = param_5;
  FUN_00d319d0(param_1 + 8,local_60);
  return;
}


