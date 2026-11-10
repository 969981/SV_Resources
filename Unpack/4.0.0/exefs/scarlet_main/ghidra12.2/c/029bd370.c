/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029bd370; name: FUN_029bd370
 */


void FUN_029bd370(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = PTR_DAT_047d8b70;
  lVar4 = *param_2;
  if (lVar4 != *param_3) {
    do {
      plVar1 = (long *)puVar3;
      if (*(long *)(lVar4 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 0x30);
      }
      plVar2 = (long *)puVar3;
      if (*param_4 != 0) {
        plVar2 = (long *)(*param_4 + 0x30);
      }
      if ((*plVar1 == *plVar2) &&
         ((*(long *)(lVar4 + 0x48) == 0 || (*(short *)(*(long *)(lVar4 + 0x48) + 0x1a) == 0))))
      break;
      FUN_029bd79c(param_2);
      lVar4 = *param_2;
    } while (lVar4 != *param_3);
  }
  lVar4 = *param_2;
  lVar5 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar5;
  *param_1 = lVar4;
  return;
}


