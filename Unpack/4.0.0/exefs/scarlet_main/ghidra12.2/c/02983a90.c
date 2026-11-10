/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02983a90; name: FUN_02983a90
 */


void FUN_02983a90(long param_1,char param_2)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  
  uVar1 = (ulong)*(byte *)(param_1 + 0x1b);
  if (uVar1 != 0) {
    pcVar2 = (char *)(param_1 + 0x10);
    uVar3 = uVar1;
    do {
      if (*pcVar2 == param_2) {
        return;
      }
      uVar3 = uVar3 - 1;
      pcVar2 = pcVar2 + 1;
    } while (uVar3 != 0);
  }
  *(char *)(param_1 + uVar1 + 0x10) = param_2;
  *(char *)(param_1 + 0x1b) = *(char *)(param_1 + 0x1b) + '\x01';
  return;
}


