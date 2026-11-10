/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fd890; name: FUN_013fd890
 */


void FUN_013fd890(long *param_1,undefined8 *param_2)

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
    FUN_013fd7a4(plVar1,param_2[1] + -0x18,lVar5 + -0x18);
    lVar4 = param_2[1];
    lVar2 = lVar4 + -0x18;
    param_2[1] = lVar2;
    if (lVar5 + -0x18 != lVar3) {
      FUN_013fd7a4(plVar1,lVar4 + -0x30,lVar5 + -0x30);
      lVar4 = param_2[1];
      lVar2 = lVar4 + -0x18;
      param_2[1] = lVar2;
      if (lVar5 + -0x30 != lVar3) {
        do {
          FUN_013fd7a4(plVar1,lVar4 + -0x30,lVar5 + -0x48);
          lVar4 = param_2[1];
          lVar5 = lVar5 + -0x18;
          lVar2 = lVar4 + -0x18;
          param_2[1] = lVar2;
        } while (lVar3 + 0x30 != lVar5);
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


