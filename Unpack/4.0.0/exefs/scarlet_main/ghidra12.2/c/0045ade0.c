/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0045ade0; name: FUN_0045ade0
 */


long FUN_0045ade0(long param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = 0;
  if (param_3 == 0) {
    lVar6 = 0;
  }
  else {
    do {
      if (*(char *)(param_1 + uVar5) == '\0') {
        puVar4 = (undefined1 *)(param_1 + uVar5);
        if (1 < param_3 - uVar5) {
          lVar6 = 0;
          goto LAB_0045ae34;
        }
        lVar6 = 0;
        goto LAB_0045ae70;
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != uVar5);
    lVar6 = 0;
    uVar5 = param_3;
  }
  goto LAB_0045ae74;
  while( true ) {
    lVar2 = param_1 + lVar6;
    lVar6 = lVar6 + 1;
    *(char *)(lVar2 + uVar5) = *pcVar1;
    if (~uVar5 + param_3 == lVar6) break;
LAB_0045ae34:
    pcVar1 = param_2 + lVar6;
    if (*pcVar1 == '\0') {
      param_2 = param_2 + lVar6;
      puVar4 = puVar4 + lVar6;
      goto LAB_0045ae70;
    }
  }
  param_2 = param_2 + lVar6;
  puVar4 = puVar4 + lVar6;
  lVar6 = ~uVar5 + param_3;
LAB_0045ae70:
  *puVar4 = 0;
LAB_0045ae74:
  sVar3 = strlen(param_2);
  return lVar6 + uVar5 + sVar3;
}


