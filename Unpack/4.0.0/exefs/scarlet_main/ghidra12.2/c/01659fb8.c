/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01659fb8; name: FUN_01659fb8
 */


void FUN_01659fb8(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  plVar3 = (long *)*param_1;
  lVar4 = param_1[7];
  plVar2 = plVar3 + lVar4 * 2;
  if ((lVar4 == 0) || (*plVar3 == *param_2)) {
    plVar5 = plVar3;
  }
  else {
    lVar6 = lVar4 * 0x10;
    plVar7 = plVar3;
    do {
      lVar6 = lVar6 + -0x10;
      if (lVar6 == 0) {
        plVar5 = plVar2;
        break;
      }
      plVar5 = plVar7 + 2;
      plVar1 = plVar7 + 2;
      plVar7 = plVar5;
    } while (*plVar1 != *param_2);
  }
  if (plVar2 == plVar5) {
    if (lVar4 == param_1[1] - (long)plVar3 >> 4) {
      FUN_0165a070(param_1);
    }
    else {
      lVar4 = param_2[1];
      *plVar2 = *param_2;
      plVar2[1] = lVar4;
    }
    param_1[7] = param_1[7] + 1;
  }
  else {
    lVar4 = param_2[1];
    *plVar5 = *param_2;
    plVar5[1] = lVar4;
  }
  return;
}


