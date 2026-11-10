/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dffdbc; name: FUN_01dffdbc
 */


void FUN_01dffdbc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1[3] == *(long *)(param_2 + 0x18)) goto LAB_01dffe38;
  FUN_01937824(param_1,*param_1);
  lVar5 = *param_1;
  lVar1 = param_1[2];
  plVar2 = (long *)param_1[3];
  uVar3 = (**(code **)(*plVar2 + 0xf8))(plVar2);
  if ((uVar3 & 1) == 0) {
LAB_01dffe14:
    (**(code **)(*plVar2 + 0x18))(plVar2,lVar5,lVar1 - lVar5,0x10);
  }
  else {
    lVar4 = FUN_00c4e600();
    if (*(int *)(lVar4 + 0x12c8) < 1) goto LAB_01dffe14;
    FUN_00c48fe8(plVar2,lVar5,lVar1 - lVar5,0x10);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_01dffe38:
  lVar1 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar4 = *(long *)(param_2 + 0x30);
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[6] = lVar4;
  param_1[3] = lVar1;
  param_1[4] = lVar5;
  return;
}


