/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0293d870; name: FUN_0293d870
 */


undefined8 FUN_0293d870(long param_1,int param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = (ulong)*(byte *)(*(long *)(param_1 + 0x10) + 0x2420);
  if (uVar1 != 0) {
    pcVar2 = (char *)(*(long *)(param_1 + 0x10) + 0x91);
    do {
      if (((*pcVar2 == '\0') && (*(int *)(pcVar2 + -0x89) == param_2)) &&
         (*(int *)(pcVar2 + -0x85) == 3)) {
        return 1;
      }
      uVar1 = uVar1 - 1;
      pcVar2 = pcVar2 + 0x8c;
    } while (uVar1 != 0);
  }
  return 0;
}


