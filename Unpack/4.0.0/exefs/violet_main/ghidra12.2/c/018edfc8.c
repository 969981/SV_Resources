/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018edfc8; name: FUN_018edfc8
 */


void FUN_018edfc8(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar2 = param_2[1];
  }
  else {
    plVar1 = param_1 + 3;
    FUN_018edab4(plVar1,param_2[1] + -0x88,lVar4 + -0x88);
    lVar3 = param_2[1];
    lVar2 = lVar3 + -0x88;
    param_2[1] = lVar2;
    if (lVar4 + -0x88 != lVar5) {
      FUN_018edab4(plVar1,lVar3 + -0x110,lVar4 + -0x110);
      lVar3 = param_2[1];
      lVar2 = lVar3 + -0x88;
      param_2[1] = lVar2;
      if (lVar4 + -0x110 != lVar5) {
        FUN_018edab4(plVar1,lVar3 + -0x110,lVar4 + -0x198);
        lVar3 = param_2[1];
        lVar2 = lVar3 + -0x88;
        param_2[1] = lVar2;
        if (lVar4 + -0x198 != lVar5) {
          FUN_018edab4(plVar1,lVar3 + -0x110,lVar4 + -0x220);
          lVar3 = param_2[1];
          lVar2 = lVar3 + -0x88;
          param_2[1] = lVar2;
          if (lVar4 + -0x220 != lVar5) {
            do {
              FUN_018edab4(plVar1,lVar3 + -0x110,lVar4 + -0x2a8);
              lVar3 = param_2[1];
              lVar4 = lVar4 + -0x88;
              lVar2 = lVar3 + -0x88;
              param_2[1] = lVar2;
            } while (lVar5 + 0x220 != lVar4);
          }
        }
      }
    }
    lVar5 = *param_1;
  }
  *param_1 = lVar2;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}


