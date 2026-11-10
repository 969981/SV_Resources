/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027066ac; name: FUN_027066ac
 */


void FUN_027066ac(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  
  if (*param_3 == '\0') {
    lVar3 = (*(long **)(param_3 + 8))[2];
    plVar2 = *(long **)(param_3 + 8);
    if (lVar3 == 0) {
      do {
        bVar1 = plVar2 == (long *)((long *)*plVar2)[2];
        plVar2 = (long *)*plVar2;
      } while (bVar1);
    }
    else {
      do {
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != 0);
    }
  }
  FUN_0270683c(param_2);
  FUN_027068a4(param_2);
  *param_1 = param_2;
  DAT_04859d80 = DAT_04859d80 + 1;
  return;
}


