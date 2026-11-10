/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eda60c; name: FUN_01eda60c
 */


void FUN_01eda60c(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[3];
  if (plVar4 != *(long **)(param_2 + 0x18)) {
    lVar5 = *param_1;
    param_1[1] = lVar5;
    lVar3 = param_1[2];
    uVar2 = FUN_00c4e564(plVar4);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar3 - lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar4,lVar5,lVar3 - lVar5,8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x30);
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[6] = lVar1;
  param_1[3] = lVar3;
  param_1[4] = lVar5;
  return;
}


