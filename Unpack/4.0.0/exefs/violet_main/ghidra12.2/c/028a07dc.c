/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a07dc; name: FUN_028a07dc
 */


void FUN_028a07dc(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[3];
  if (plVar4 == *(long **)(param_2 + 0x18)) goto LAB_028a0854;
  lVar5 = *param_1;
  param_1[1] = lVar5;
  lVar3 = param_1[2];
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar1 & 1) == 0) {
LAB_028a0830:
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar3 - lVar5,8);
  }
  else {
    lVar2 = FUN_00c4e600();
    if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_028a0830;
    FUN_00c48fe8(plVar4,lVar5,lVar3 - lVar5,8);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_028a0854:
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x30);
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[6] = lVar2;
  param_1[3] = lVar3;
  param_1[4] = lVar5;
  return;
}


