/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6d7c; name: FUN_001c6d7c
 */


int FUN_001c6d7c(long param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0278c9b4();
  *(long *)(param_1 + 0x50) = lVar2;
  if (lVar2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_001c8880(param_1,param_2,PTR_LAB_047cb958,PTR_DAT_047cb960,&LAB_001c6df4);
    if (iVar1 == 0) {
      *(long *)(*(long *)(param_1 + 0x50) + 0x1100) = param_1;
    }
    else {
      FUN_001e4720();
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  return iVar1;
}


