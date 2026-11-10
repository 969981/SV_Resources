/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d7f90; name: FUN_003d7f90
 */


undefined8 FUN_003d7f90(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 1 & 1) == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x550) == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  if (param_3 == 0) {
    uVar1 = FUN_003d7e80(param_2,lVar2 + 0x2e8,lVar2 + 0x2f8);
    return uVar1;
  }
  uVar1 = FUN_003d7e80(param_2,lVar2 + 0x2f0,lVar2 + 0x300);
  return uVar1;
}


