/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011061a0; name: FUN_011061a0
 */


undefined8 FUN_011061a0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x98) + (long)param_3 * 8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 9) == '\0')) {
    return 0xffffffff;
  }
  uVar2 = FUN_008dc1f8();
  return uVar2;
}


