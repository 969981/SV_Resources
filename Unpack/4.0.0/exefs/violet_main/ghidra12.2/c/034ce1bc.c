/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ce1bc; name: FUN_034ce1bc
 */


undefined8 FUN_034ce1bc(float param_1,uint param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = 3.1415927 / (float)(param_2 & 0x7fffffff);
  uVar4 = (uint)(param_1 * fVar9 + 1.01);
  if ((int)param_2 < 0) {
    uVar4 = (uVar4 & 1) + uVar4;
    uVar6 = uVar4 * 8;
    if ((*(uint *)(param_3 + 1) <= uVar6) && (*(uint *)((long)param_3 + 0xc) < uVar6)) {
      uVar1 = *(uint *)((long)param_3 + 0xc) + (uVar6 - *(uint *)(param_3 + 1));
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,*param_3,(ulong)uVar1 << 4,0x10);
      if (lVar3 == 0) {
        return 2;
      }
      *param_3 = lVar3;
      *(uint *)((long)param_3 + 0xc) = uVar1;
    }
    *(uint *)(param_3 + 1) = uVar6;
    fVar9 = cosf(fVar9);
    if (uVar4 != 0) {
      fVar10 = (1.0 - fVar9) / (float)uVar4;
      fVar9 = fVar9 + fVar10 * 0.5;
      pfVar5 = (float *)*param_3;
      do {
        fVar7 = SQRT(-(fVar9 * fVar9) - -1.0);
        fVar8 = fVar7 * 0.70710677;
        pfVar5[4] = fVar8;
        pfVar5[5] = fVar8;
        pfVar5[8] = fVar7 * -4.371139e-08;
        pfVar5[9] = fVar7;
        pfVar5[0x19] = -fVar7;
        pfVar5[0x1a] = fVar9;
        pfVar5[0xc] = fVar7 * -0.70710677;
        pfVar5[0xd] = fVar8;
        pfVar5[0x10] = -fVar7;
        pfVar5[0x11] = fVar7 * -8.742278e-08;
        *pfVar5 = fVar7;
        pfVar5[2] = fVar9;
        pfVar5[6] = fVar9;
        pfVar5[10] = fVar9;
        pfVar5[0xe] = fVar9;
        pfVar5[0x12] = fVar9;
        pfVar5[0x15] = fVar7 * -0.7071069;
        pfVar5[0x16] = fVar9;
        pfVar5[1] = 0.0;
        pfVar5[3] = 0.0;
        pfVar5[7] = 0.0;
        pfVar5[0xb] = 0.0;
        pfVar5[0xf] = 0.0;
        pfVar5[0x13] = 0.0;
        pfVar5[0x17] = 0.0;
        pfVar5[0x1b] = 0.0;
        pfVar5[0x18] = fVar7 * 1.1924881e-08;
        pfVar5[0x1d] = fVar7 * -0.7071069;
        pfVar5[0x1e] = fVar9;
        fVar9 = fVar9 + fVar10;
        pfVar5[0x1f] = 0.0;
        pfVar5[0x14] = fVar7 * -0.70710665;
        pfVar5[0x1c] = fVar7 * 0.70710665;
        uVar4 = uVar4 - 1;
        pfVar5 = pfVar5 + 0x20;
      } while (uVar4 != 0);
    }
  }
  else {
    iVar2 = 0;
    if ((uVar4 & 3) != 0) {
      iVar2 = 4 - (uVar4 & 3);
    }
    uVar4 = iVar2 + uVar4;
    if ((*(uint *)(param_3 + 1) <= uVar4) && (*(uint *)((long)param_3 + 0xc) < uVar4)) {
      uVar6 = *(uint *)((long)param_3 + 0xc) + (uVar4 - *(uint *)(param_3 + 1));
      lVar3 = (**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,*param_3,(ulong)uVar6 << 4,0x10);
      if (lVar3 == 0) {
        return 2;
      }
      *param_3 = lVar3;
      *(uint *)((long)param_3 + 0xc) = uVar6;
    }
    fVar9 = fVar9 / (float)uVar4;
    fVar10 = fVar9 * (float)(uVar4 - 1);
    *(uint *)(param_3 + 1) = uVar4;
    pfVar5 = (float *)*param_3;
    uVar6 = 0;
    do {
      fVar7 = sinf(fVar10);
      *pfVar5 = -fVar7;
      pfVar5[1] = 0.0;
      fVar7 = cosf(fVar10);
      fVar10 = fVar10 - (fVar9 + fVar9);
      uVar6 = uVar6 + 1;
      pfVar5[2] = fVar7;
      pfVar5[3] = 0.0;
      pfVar5 = pfVar5 + 4;
    } while (uVar6 < uVar4);
  }
  return 1;
}


