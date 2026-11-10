/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011afa50; name: FUN_011afa50
 */


long FUN_011afa50(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = param_2 + 0x10;
  if (lVar3 == lVar4) {
    lVar2 = param_2;
  }
  else {
    FUN_01a2c20c(param_2,lVar3);
    lVar2 = param_2 + 0x20;
    if (lVar2 == lVar4) {
      lVar2 = lVar3;
    }
    else {
      FUN_01a2c20c(lVar3,lVar2);
      lVar3 = lVar2;
      if (param_2 + 0x30 != lVar4) {
        do {
          lVar2 = lVar3 + 0x10;
          FUN_01a2c20c(lVar3,lVar2);
          lVar1 = lVar3 + 0x20;
          lVar3 = lVar2;
        } while (lVar1 != lVar4);
      }
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == lVar2) goto LAB_011afaec;
  }
  FUN_011afb4c(lVar3 + -0x10);
  if ((lVar3 + -0x10 != lVar2) && (FUN_011afb4c(lVar3 + -0x20), lVar3 + -0x20 != lVar2)) {
    do {
      FUN_011afb4c(lVar3 + -0x30);
      lVar3 = lVar3 + -0x10;
    } while (lVar2 + 0x20 != lVar3);
  }
LAB_011afaec:
  *(long *)(param_1 + 8) = lVar2;
  return param_2;
}


