/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029b6b24; name: FUN_029b6b24
 */


void FUN_029b6b24(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[3];
  if (plVar4 == *(long **)(param_2 + 0x18)) goto LAB_029b6b9c;
  lVar5 = *param_1;
  param_1[1] = lVar5;
  lVar3 = param_1[2];
  uVar1 = (**(code **)(*plVar4 + 0xf8))(plVar4);
  if ((uVar1 & 1) == 0) {
LAB_029b6b78:
    (**(code **)(*plVar4 + 0x18))(plVar4,lVar5,lVar3 - lVar5,0x10);
  }
  else {
    lVar2 = FUN_00c4e600();
    if (*(int *)(lVar2 + 0x12c8) < 1) goto LAB_029b6b78;
    FUN_00c48fe8(plVar4,lVar5,lVar3 - lVar5,0x10);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
LAB_029b6b9c:
  lVar3 = *(long *)(param_2 + 0x18);
  lVar5 = *(long *)(param_2 + 0x20);
  lVar2 = *(long *)(param_2 + 0x30);
  param_1[5] = *(long *)(param_2 + 0x28);
  param_1[6] = lVar2;
  param_1[3] = lVar3;
  param_1[4] = lVar5;
  return;
}


