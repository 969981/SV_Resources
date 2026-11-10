/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00156b40; name: FUN_00156b40
 */


long FUN_00156b40(long param_1,long param_2,long param_3,undefined4 param_4,long param_5,
                 long param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_5 == 0) {
    param_5 = FUN_00152a30(4,param_4);
    iVar2 = *(int *)(param_5 + 8);
  }
  else {
    iVar2 = *(int *)(param_5 + 8);
  }
  if (iVar2 == 0) {
    lVar4 = param_1;
    if (param_6 != 0) {
      lVar4 = param_6;
    }
    lVar4 = param_1 - lVar4;
    if (0xfff6 < lVar4) {
      lVar4 = 0xfff7;
    }
    lVar4 = FUN_00156c50(param_1,param_2,param_3,param_4,param_5,param_1 - lVar4);
    return lVar4;
  }
  if (param_3 < 1) {
    lVar4 = 0;
  }
  else {
    iVar2 = *(int *)(param_5 + 0xc);
    lVar4 = 0;
    do {
      lVar1 = param_3;
      if (iVar2 <= param_3) {
        lVar1 = (long)iVar2;
      }
      lVar3 = FUN_00156c50(param_1,param_2,lVar1,param_4,param_5,param_1);
      param_3 = param_3 - lVar1;
      param_1 = param_1 + lVar1;
      param_2 = param_2 + lVar3;
      lVar4 = lVar3 + lVar4;
    } while (0 < param_3);
  }
  return lVar4;
}


