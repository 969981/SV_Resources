/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0189ef8c; name: FUN_0189ef8c
 */


void FUN_0189ef8c(undefined1 *param_1,undefined8 param_2)

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
  
  puVar1 = PTR_LAB_047d79e8;
  if (DAT_04831090 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0189eff8(&local_60,param_2,puVar1,0);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_0189f318(param_1 + 8,&local_40);
  return;
}


