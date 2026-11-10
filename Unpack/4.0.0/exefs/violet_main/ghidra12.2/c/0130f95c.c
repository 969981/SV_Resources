/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0130f95c; name: FUN_0130f95c
 */


void FUN_0130f95c(long param_1,long *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  
  if (*param_2 == 0) {
    return;
  }
  *(long *)(param_1 + 0x10) = *param_2;
  *(int *)(param_1 + 0x18) = (int)param_2[1];
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)((long)param_2 + 0xc);
  pfVar2 = (float *)FUN_008887b4();
  fVar6 = (float)*(uint *)(param_1 + 0x18);
  *(int *)(param_1 + 0x20) = (int)(*pfVar2 * fVar6 + 0.5);
  iVar5 = (int)(pfVar2[1] * fVar6 + 0.5);
  *(int *)(param_1 + 0x1c) = iVar5;
  *(int *)(param_1 + 0x24) = (int)(pfVar2[2] * fVar6 + 0.5);
  iVar1 = *(int *)((long)param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  uVar3 = (undefined1)*(uint *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x2d) = uVar3;
  *(undefined1 *)(param_1 + 0x2e) = uVar3;
  *(int *)(param_1 + 0x28) = iVar1 + iVar5;
  if (*(char *)((long)param_2 + 0xe) == '\0') {
    if (*(char *)((long)param_2 + 0xf) == '\0') {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 0x2f) = uVar3;
    uVar4 = (undefined4)param_2[2];
  }
  else {
    *(undefined1 *)(param_1 + 0x2f) = 0;
    uVar4 = 0x20;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(char *)(param_1 + 0x30) = (char)param_2[3];
  FUN_02251b80(param_1);
  return;
}


