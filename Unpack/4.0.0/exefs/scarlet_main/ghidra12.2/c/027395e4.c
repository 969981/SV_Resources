/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027395e4; name: FUN_027395e4
 */


void FUN_027395e4(long param_1,char *param_2,long param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = strcmp(*(char **)(param_3 + 0x30),PTR_s_Point_047dcf18);
  if (iVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x10) + 0x88;
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x90);
    if (lVar1 != lVar3) {
      if (*param_2 == '\0') {
        do {
          if (*(char *)(lVar3 + 0x10) == '\0') goto LAB_02739674;
          lVar3 = *(long *)(lVar3 + 8);
        } while (lVar1 != lVar3);
      }
      else {
        do {
          if ((*(char *)(lVar3 + 0x10) != '\0') && (*(int *)(lVar3 + 0x14) == *(int *)(param_2 + 4))
             ) {
LAB_02739674:
            FUN_02739154();
            return;
          }
          lVar3 = *(long *)(lVar3 + 8);
        } while (lVar1 != lVar3);
      }
    }
  }
  return;
}


