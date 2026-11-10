/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017b9e20; name: FUN_017b9e20
 */


void FUN_017b9e20(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = &LAB_0193c50c;
  if (DAT_048491c8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_017b9e8c(&local_60,param_2,puVar1,0);
  *param_1 = 1;
  local_40 = local_60;
  uStack_38 = uStack_58;
  local_30 = local_50;
  uStack_28 = uStack_48;
  FUN_017b9f00(param_1 + 8,&local_40);
  return;
}


