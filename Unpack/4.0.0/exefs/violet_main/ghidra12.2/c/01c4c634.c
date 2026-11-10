/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c4c634; name: FUN_01c4c634
 */


void FUN_01c4c634(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined4 local_4;
  
  puVar1 = PTR_LAB_047d60d8;
  if (DAT_04815c08 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_4 = param_3;
  FUN_01c4dc3c(&local_60,param_2,puVar1,0,&local_4);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_01c48460(param_1 + 8,&local_40);
  return;
}


