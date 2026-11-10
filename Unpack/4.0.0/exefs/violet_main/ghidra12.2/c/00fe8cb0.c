/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fe8cb0; name: FUN_00fe8cb0
 */


undefined8 FUN_00fe8cb0(long *param_1,float *param_2,long *param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_4 == 9) {
    lVar5 = *param_3;
    *param_2 = *(float *)(lVar5 + 0x14);
    lVar4 = *param_3;
    iVar1 = *(int *)(lVar4 + 0x4c);
    if (0 < iVar1) {
      if (*(char *)(lVar4 + 0x38) == '\0') {
        fVar7 = (float)FUN_00fe8c18(lVar4);
      }
      else {
        fVar7 = *(float *)(lVar4 + 0x20);
      }
      fVar7 = fVar7 * (float)iVar1;
      *(float *)(lVar4 + 0x14) =
           *(float *)(param_3 + 3) +
           fVar7 * (float)((int)((*(float *)(lVar4 + 0x14) - *(float *)(param_3 + 3)) / fVar7) + 1);
    }
    param_2[2] = *(float *)(lVar5 + 0x14);
    fVar9 = *(float *)(lVar5 + 0x18);
    param_2[1] = fVar9;
    fVar8 = (float)FUN_00884288(lVar5);
    fVar7 = *param_2;
    fVar11 = param_2[1];
    fVar9 = fVar9 + fVar8;
    fVar10 = param_2[2];
    fVar8 = fVar10;
    if (fVar10 - fVar7 < 0.0) {
      fVar8 = fVar7;
      fVar7 = fVar10;
    }
    param_2[2] = fVar8;
    fVar8 = fVar9;
    if (fVar9 - fVar11 < 0.0) {
      fVar8 = fVar11;
      fVar11 = fVar9;
    }
    uVar3 = 1;
    *param_2 = fVar7;
    param_2[1] = fVar11;
  }
  else {
    if (param_4 != 10) {
      return 0;
    }
    lVar6 = *param_3;
    param_2[2] = *(float *)(lVar6 + 0x14);
    param_2[1] = *(float *)(lVar6 + 0x18);
    lVar4 = *param_3;
    fVar11 = *(float *)(lVar4 + 0x18);
    lVar5 = param_3[3];
    fVar7 = (float)(**(code **)(*param_1 + 0x28))(param_1,lVar4);
    *(int *)(lVar4 + 0x14) = (int)lVar5;
    *(float *)(lVar4 + 0x18) = fVar11 + fVar7;
    fVar7 = *(float *)(lVar6 + 0x14);
    *param_2 = fVar7;
    fVar8 = *(float *)(lVar6 + 0x18);
    param_2[3] = fVar8;
    if (*(char *)(*param_3 + 0x62) == '\0') {
      fVar8 = (float)FUN_00884288();
      fVar8 = fVar8 + param_2[3];
      fVar7 = *param_2;
      param_2[3] = fVar8;
    }
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar11 = fVar10;
    if (fVar10 - fVar7 < 0.0) {
      fVar11 = fVar7;
      fVar7 = fVar10;
    }
    param_2[2] = fVar11;
    bVar2 = fVar8 - fVar9 < 0.0;
    fVar11 = fVar9;
    if (bVar2) {
      fVar11 = fVar8;
    }
    *param_2 = fVar7;
    param_2[1] = fVar11;
    if (bVar2) {
      fVar8 = fVar9;
    }
    uVar3 = 3;
  }
  param_2[3] = fVar8;
  return uVar3;
}


