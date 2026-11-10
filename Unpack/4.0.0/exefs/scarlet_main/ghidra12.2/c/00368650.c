/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00368650; name: FUN_00368650
 */


long FUN_00368650(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_1[2];
  if (lVar4 == 0) {
    lVar2 = *param_1;
    param_1[1] = lVar2;
  }
  else {
    lVar2 = param_1[1];
    if ((lVar2 - *param_1 >> 5) + lVar4 == param_1[3]) {
      FUN_003693d0(param_1);
      lVar2 = param_1[1];
    }
  }
  lVar5 = *param_2;
  lVar7 = param_2[3];
  lVar6 = param_2[2];
  plVar1 = (long *)(lVar2 + lVar4 * 0x20);
  plVar1[1] = param_2[1];
  *plVar1 = lVar5;
  plVar1[3] = lVar7;
  plVar1[2] = lVar6;
  if (*param_2 == 0) {
    uVar3 = (ulong)*(byte *)(param_2 + 1);
  }
  else {
    uVar3 = param_2[1];
  }
  param_1[4] = param_1[4] + uVar3;
  param_1[2] = lVar4 + 1;
  return lVar4;
}


