/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029b7bcc; name: FUN_029b7bcc
 */


void FUN_029b7bcc(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    return;
  }
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar4 = lVar5;
  }
  else {
    do {
      lVar4 = lVar4 + -0x68;
      FUN_00f720b4(lVar4);
    } while (lVar5 != lVar4);
    lVar4 = *param_1;
  }
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar5;
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar4,lVar1 - lVar4,8);
  }
  else {
    FUN_00c48fe8(plVar2,lVar4,lVar1 - lVar4,8);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


