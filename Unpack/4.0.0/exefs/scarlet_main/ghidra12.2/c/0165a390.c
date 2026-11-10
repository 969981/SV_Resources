/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0165a390; name: FUN_0165a390
 */


void FUN_0165a390(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_1;
  lVar5 = param_1[1];
  if (lVar5 == lVar3) {
    lVar2 = param_2[1];
  }
  else {
    plVar1 = param_1 + 3;
    FUN_0165a1f4(plVar1,param_2[1] + -0x10,lVar5 + -0x10);
    lVar4 = param_2[1];
    lVar2 = lVar4 + -0x10;
    param_2[1] = lVar2;
    if (lVar5 + -0x10 != lVar3) {
      FUN_0165a1f4(plVar1,lVar4 + -0x20,lVar5 + -0x20);
      lVar4 = param_2[1];
      lVar2 = lVar4 + -0x10;
      param_2[1] = lVar2;
      if (lVar5 + -0x20 != lVar3) {
        do {
          FUN_0165a1f4(plVar1,lVar4 + -0x20,lVar5 + -0x30);
          lVar4 = param_2[1];
          lVar5 = lVar5 + -0x10;
          lVar2 = lVar4 + -0x10;
          param_2[1] = lVar2;
        } while (lVar3 + 0x20 != lVar5);
      }
    }
    lVar3 = *param_1;
  }
  *param_1 = lVar2;
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return;
}


