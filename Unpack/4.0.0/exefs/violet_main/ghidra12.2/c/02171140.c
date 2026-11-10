/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02171140; name: FUN_02171140
 */


void FUN_02171140(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                 long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_6 < param_5) {
    lVar1 = param_7;
    if (param_2 == param_3) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      lVar2 = param_2;
      do {
        FUN_0113987c(lVar1,lVar2);
        lVar2 = lVar2 + 0x1d0;
        lVar3 = lVar3 + 1;
        lVar1 = lVar1 + 0x1d0;
      } while (param_3 != lVar2);
    }
    FUN_021714e0(lVar1,lVar1,param_7,param_7,param_2,param_2,param_1,param_1,param_3,param_3);
  }
  else {
    lVar1 = param_7;
    if (param_1 == param_2) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      lVar2 = param_1;
      do {
        FUN_0113987c(lVar1,lVar2);
        lVar2 = lVar2 + 0x1d0;
        lVar3 = lVar3 + 1;
        lVar1 = lVar1 + 0x1d0;
      } while (param_2 != lVar2);
    }
    FUN_021713e0(param_7,lVar1,param_2,param_3,param_1);
  }
  if (param_7 != 0) {
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      FUN_01139754(param_7);
      param_7 = param_7 + 0x1d0;
    }
  }
  return;
}


