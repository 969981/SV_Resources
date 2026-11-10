/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c95c78; name: FUN_01c95c78
 */


void FUN_01c95c78(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  puVar1 = &LAB_009709e8;
  if (DAT_04816cb0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_01c97498(&local_50,param_2,puVar1,0);
  *param_1 = 1;
  local_38 = local_50;
  uStack_30 = uStack_48;
  local_28 = local_40;
  FUN_01c974ec(param_1 + 8,&local_38);
  return;
}


