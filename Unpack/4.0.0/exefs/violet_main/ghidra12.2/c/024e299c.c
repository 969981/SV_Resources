/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024e299c; name: FUN_024e299c
 */


void FUN_024e299c(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_FUN_047df0b0;
  if (DAT_0484f120 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_70[0] = param_2;
  FUN_024e4c90(&local_60,param_3,puVar1,0,local_70);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_024e4ccc(param_1 + 8,&local_40);
  return;
}


