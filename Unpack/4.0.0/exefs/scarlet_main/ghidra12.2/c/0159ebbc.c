/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159ebbc; name: FUN_0159ebbc
 */


void FUN_0159ebbc(long param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = *(short **)(param_1 + 0x100);
  psVar1 = *(short **)(param_1 + 0x108);
  if (psVar2 != psVar1) {
    if (*psVar2 != *param_2) {
      do {
        psVar2 = psVar2 + 1;
        if (psVar1 == psVar2) {
          psVar2 = psVar1;
          break;
        }
      } while (*psVar2 != *param_2);
    }
  }
  if (psVar1 == psVar2) {
    FUN_01833648(param_1 + 0x100);
    return;
  }
  return;
}


