/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dfffd8; name: FUN_01dfffd8
 */


void FUN_01dfffd8(long *param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (*param_1 == 0) {
    return;
  }
  FUN_01937824();
  lVar5 = *param_1;
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,0x10);
  }
  else {
    FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,0x10);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


