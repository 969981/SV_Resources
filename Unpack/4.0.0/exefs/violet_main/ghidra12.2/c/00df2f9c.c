/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df2f9c; name: FUN_00df2f9c
 */


undefined8 FUN_00df2f9c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  long local_40;
  undefined1 auStack_38 [24];
  
  uVar2 = *(undefined8 *)(param_1[1] + 0x10);
  local_48 = *(undefined8 *)(*param_1 + 8);
  FUN_00df3a90(&local_40,local_48,param_1 + 2,&local_48);
  uVar2 = FUN_00df3010(uVar2,&local_40);
  lVar1 = local_40;
  local_40 = 0;
  if (lVar1 != 0) {
    FUN_00df40ec(auStack_38);
  }
  return uVar2;
}


