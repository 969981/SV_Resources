/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088439c; name: FUN_0088439c
 */


void FUN_0088439c(float param_1,float *param_2,long param_3)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = *(ushort *)(param_3 + 0x18);
  if (*(char *)(*(long *)(param_2 + 10) + 9) == '\0') {
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x14));
    fVar9 = (float)uVar1 / fVar8;
    fVar8 = (float)((uint)*(ushort *)(param_3 + 0xe) + (uint)uVar1) / fVar8;
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 10));
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x16));
    fVar11 = (float)*(ushort *)(param_3 + 0x1a) / fVar12;
    fVar2 = param_2[3] * fVar2;
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10));
    fVar13 = (float)((uint)*(ushort *)(param_3 + 0x12) + (uint)*(ushort *)(param_3 + 0x1a));
    fVar3 = param_2[4] * fVar3;
    fVar10 = param_2[6];
  }
  else {
    fVar8 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x14));
    fVar9 = ((float)uVar1 + -0.5) / fVar8;
    fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x16));
    fVar8 = ((float)((uint)*(ushort *)(param_3 + 0xe) + (uint)uVar1) + 0.5) / fVar8;
    fVar13 = (float)((uint)*(ushort *)(param_3 + 0x12) + (uint)*(ushort *)(param_3 + 0x1a)) + 0.5;
    param_1 = param_1 + param_2[3] * -0.5;
    fVar10 = param_2[6] + param_2[4] * -0.5;
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 10));
    fVar2 = param_2[3] * (fVar2 + 1.0);
    fVar11 = ((float)*(ushort *)(param_3 + 0x1a) + -0.5) / fVar12;
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x10));
    fVar3 = param_2[4] * (fVar3 + 1.0);
  }
  lVar6 = *(long *)(param_2 + 0xc);
  iVar4 = *(int *)(lVar6 + 0x9c);
  if (iVar4 < *(int *)(lVar6 + 0x98)) {
    *(int *)(lVar6 + 0x9c) = iVar4 + 1;
    pfVar7 = (float *)(*(long *)(*(long *)(param_2 + 0xc) + 0xa0) + (long)iVar4 * 0x38);
    *pfVar7 = fVar2;
    pfVar7[1] = fVar3;
    pfVar7[2] = param_1;
    pfVar7[3] = fVar10;
    pfVar7[4] = *param_2;
    pfVar7[5] = param_2[1];
    *(undefined1 *)((long)pfVar7 + 0x33) = *(undefined1 *)((long)param_2 + 0x39);
    pfVar7[6] = fVar9;
    pfVar7[7] = 1.0 - fVar11;
    pfVar7[8] = fVar8;
    pfVar7[9] = 1.0 - fVar13 / fVar12;
    fVar8 = param_2[9];
    fVar10 = param_2[3];
    iVar4 = (**(code **)(**(long **)(param_2 + 10) + 0x20))();
    *(short *)(pfVar7 + 0xc) = (short)(int)(fVar8 * fVar10 * (float)iVar4);
    iVar4 = (**(code **)(**(long **)(param_2 + 10) + 0x28))();
    fVar8 = param_2[4] * (float)iVar4;
    if (*(char *)(*(long *)(param_2 + 10) + 9) != '\0') {
      fVar8 = param_2[4] + fVar8;
    }
    FUN_00885450(fVar8,*(undefined8 *)(param_2 + 0xc));
    *(undefined1 *)((long)pfVar7 + 0x32) = *(undefined1 *)(param_3 + 0x1f);
    uVar5 = (**(code **)(**(long **)(param_2 + 10) + 0x110))();
    *(ulong *)(pfVar7 + 10) = *(ulong *)(param_3 + 0x20) | uVar5 & 1;
  }
  return;
}


