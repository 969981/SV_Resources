/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fef244; name: FUN_00fef244
 */


void FUN_00fef244(long param_1,char *param_2)

{
  char *pcVar2;
  char *pcVar1;
  
  if (*(char **)(param_1 + 8) != param_2) {
    pcVar2 = *(char **)(param_1 + 8);
    do {
      pcVar1 = pcVar2 + -0x28;
      if (*pcVar1 != '\0') {
        if (*(long **)(pcVar2 + -8) != (long *)0x0) {
          (**(code **)(**(long **)(pcVar2 + -8) + 0x20))();
        }
        pcVar2[-0x28] = '\0';
      }
      pcVar2 = pcVar1;
    } while (param_2 != pcVar1);
  }
  *(char **)(param_1 + 8) = param_2;
  return;
}


