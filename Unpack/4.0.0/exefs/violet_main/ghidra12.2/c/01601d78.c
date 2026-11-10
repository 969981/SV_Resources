/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01601d78; name: FUN_01601d78
 */


void FUN_01601d78(long *param_1)

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
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  param_1[1] = lVar5;
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,8);
  }
  else {
    FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,8);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


