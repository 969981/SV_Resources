/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fff960; name: FUN_02fff960
 */


void FUN_02fff960(long param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar9;
  undefined8 uVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  param_3[1] = *(undefined8 *)(param_2 + 0xa8);
  *param_3 = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0xa0);
  param_3[3] = *(undefined8 *)(param_2 + 0xa8);
  param_3[2] = uVar5;
  plVar3 = *(long **)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x28) * 8 + 0x18);
  iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,param_1,param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x54);
  if ((iVar1 != -1) && (iVar2 = iVar1, (param_4 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  }
  if ((param_4 & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar2 != iVar1) {
      plVar3 = *(long **)(*(long *)(param_1 + 0x20) + (long)iVar1 * 8 + 0x18);
      (**(code **)(*plVar3 + 0x40))(plVar3,param_1,iVar2,param_2,param_3);
      *(int *)(param_1 + 0x28) = iVar2;
      *(undefined4 *)(param_1 + 0x50) = 0;
      plVar3 = *(long **)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8 + 0x18);
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1,iVar1,param_2,param_3);
    }
  }
  if (iVar2 == *(int *)(param_1 + 0x2c)) {
    plVar3 = *(long **)(*(long *)(param_1 + 0x20) + (long)iVar2 * 8 + 0x18);
    (**(code **)(*plVar3 + 0x28))(plVar3,param_1,param_2,param_3);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar8 = param_3[1];
    uVar5 = *param_3;
    fVar9 = (float)uVar5;
    fVar10 = (float)((ulong)uVar5 >> 0x20);
    fVar11 = (float)uVar8;
    fVar4 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
    if (*(float *)(param_1 + 0x38) < fVar4) {
      fVar4 = *(float *)(param_1 + 0x38) / fVar4;
      uVar5 = CONCAT44(fVar10 * fVar4,fVar9 * fVar4);
      uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) * fVar4,fVar11 * fVar4);
      param_3[1] = uVar8;
      *param_3 = uVar5;
    }
    uVar7 = param_3[3];
    uVar6 = param_3[2];
    fVar4 = (float)((ulong)uVar6 >> 0x20);
    fVar9 = (float)((ulong)uVar7 >> 0x20);
    fVar13 = *(float *)(param_2 + 0x8c);
    fVar10 = ((float)uVar5 - (float)uVar6) * fVar13;
    fVar11 = ((float)((ulong)uVar5 >> 0x20) - fVar4) * fVar13;
    fVar12 = ((float)uVar8 - (float)uVar7) * fVar13;
    fVar14 = *(float *)(param_1 + 0x34);
    param_3[1] = uVar7;
    *param_3 = uVar6;
    fVar14 = SQRT(fVar10 * fVar10 + fVar11 * fVar11 + fVar12 * fVar12) / fVar14;
    if ((fVar14 <= 1.0) || (*(int *)(param_1 + 0x28) == 1)) {
      fVar14 = *(float *)(param_1 + 0x3c) * *(float *)(param_2 + 0x88);
    }
    else {
      fVar14 = (*(float *)(param_1 + 0x3c) * *(float *)(param_2 + 0x88)) / fVar14;
    }
    param_3[1] = CONCAT44(fVar9 + ((float)((ulong)uVar8 >> 0x20) - fVar9) * fVar13 * fVar14,
                          (float)uVar7 + fVar12 * fVar14);
    *param_3 = CONCAT44(fVar4 + fVar11 * fVar14,(float)uVar6 + fVar10 * fVar14);
  }
  if ((param_4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_2 + 0x68);
    uVar5 = *(undefined8 *)(param_2 + 0x60);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
    *(undefined8 *)(param_1 + 0x48) = uVar8;
    *(undefined8 *)(param_1 + 0x40) = uVar5;
  }
  return;
}


