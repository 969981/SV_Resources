/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea9c0c; name: FUN_01ea9c0c
 */


void FUN_01ea9c0c(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xd8);
  for (pcVar1 = *(char **)(param_1 + 0xd0); pcVar1 != pcVar2; pcVar1 = pcVar1 + 0x20) {
    if ((*pcVar1 != '\0') && (FUN_00de97a4(pcVar1 + 8), *pcVar1 != '\0')) {
      *pcVar1 = '\0';
    }
  }
  return;
}


