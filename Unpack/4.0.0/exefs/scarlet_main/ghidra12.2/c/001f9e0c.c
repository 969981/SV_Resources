/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f9e0c; name: FUN_001f9e0c
 */


undefined8 FUN_001f9e0c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + *(int *)(param_2 + 0xd0);
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != 0) {
    *(long *)(param_2 + 0x88) = lVar3;
    *(long *)(lVar3 + 0x80) = param_2;
  }
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_2 + 0x70) = param_1;
  if ((((*(long *)(param_2 + 0xa8) == 0) || ((*(byte *)(param_2 + 0xe4) & 0xc) != 0)) &&
      (iVar1 = FUN_001f9538(param_2 + 0x18), iVar1 != 0)) ||
     (uVar2 = FUN_001f9a90(param_1,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}


