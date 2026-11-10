/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124e224; name: FUN_0124e224
 */


void FUN_0124e224(long param_1,int param_2)

{
  byte bVar1;
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(param_1 + 8);
  uVar2 = (ulong)bVar1;
  if (uVar2 < 10) {
    if (bVar1 != 0) {
      piVar3 = (int *)(param_1 + 0xc);
      uVar4 = uVar2;
      do {
        if (*piVar3 == param_2) {
          return;
        }
        uVar4 = uVar4 - 1;
        piVar3 = piVar3 + 1;
      } while (uVar4 != 0);
    }
    *(int *)(param_1 + uVar2 * 4 + 0xc) = param_2;
    *(byte *)(param_1 + 8) = bVar1 + 1;
  }
  return;
}


