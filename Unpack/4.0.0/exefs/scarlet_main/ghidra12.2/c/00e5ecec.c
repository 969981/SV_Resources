/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e5ecec; name: FUN_00e5ecec
 */


undefined8 FUN_00e5ecec(long param_1,ushort param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((*(long *)PTR_DAT_047d0860 == 0) || (*(ushort *)(param_1 + 0x18) <= param_2)) ||
      (*(long *)(param_1 + 8) == 0)) ||
     (iVar1 = *(int *)(*(long *)(param_1 + 8) + (ulong)param_2 * 4), iVar1 == 0)) {
    return 0;
  }
  uVar2 = FUN_00f21488(*(long *)PTR_DAT_047d0860 + 0x10,iVar1,0xb0);
  return uVar2;
}


