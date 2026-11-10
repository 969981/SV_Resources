/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


