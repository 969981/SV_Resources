/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02a27f00; name: FUN_02a27f00
 */


bool FUN_02a27f00(long param_1,char param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0xc0);
  pcVar1 = *(char **)(param_1 + 200);
  if (pcVar2 == pcVar1) {
    return true;
  }
  do {
    if (*pcVar2 == param_2) goto LAB_02a27f28;
    pcVar2 = pcVar2 + 1;
  } while (pcVar1 != pcVar2);
  pcVar2 = pcVar1;
LAB_02a27f28:
  return pcVar2 != pcVar1;
}


