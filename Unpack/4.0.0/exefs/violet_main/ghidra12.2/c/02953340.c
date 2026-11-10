/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02953340; name: FUN_02953340
 */


undefined8 FUN_02953340(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x68))(param_2,PTR_DAT_047e2700);
  if (((*(ulong *)(param_1 + 8) & 7) == 1) &&
     (((uint)*(ulong *)(param_1 + 8) >> 3 & 0x3f) == iVar1 - 1U)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


