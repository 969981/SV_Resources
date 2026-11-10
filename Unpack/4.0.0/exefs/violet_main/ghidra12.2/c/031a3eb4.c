/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031a3eb4; name: FUN_031a3eb4
 */


undefined8 FUN_031a3eb4(long *param_1,float *param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  byte *pbVar8;
  float *pfVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  
  cVar1 = *(char *)((long)param_1 + 0xc);
  if (cVar1 == '\x02') {
    bVar2 = *(byte *)((long)param_1 + 0xd);
    if ((0 < (int)param_3) && (bVar2 < 4)) {
      memset(param_2,0,(ulong)(param_3 - 1) * 0x10 + 0x10);
    }
    if (3 < bVar2) {
      bVar2 = 4;
    }
    if ((int)param_3 < 1) {
      return 0;
    }
    if (bVar2 != 0) {
      uVar7 = (ulong)param_3;
      pfVar9 = param_2 + 2;
      lVar3 = param_1[1];
      pbVar8 = (byte *)(*param_1 + 3);
      do {
        fVar10 = (float)NEON_ucvtf((uint)pbVar8[-3]);
        pfVar9[-2] = fVar10 / 255.0;
        if (bVar2 != 1) {
          fVar10 = (float)NEON_ucvtf((uint)pbVar8[-2]);
          pfVar9[-1] = fVar10 / 255.0;
          if (bVar2 != 2) {
            fVar10 = (float)NEON_ucvtf((uint)pbVar8[-1]);
            *pfVar9 = fVar10 / 255.0;
            if (bVar2 != 3) {
              fVar10 = (float)NEON_ucvtf((uint)*pbVar8);
              pfVar9[1] = fVar10 / 255.0;
            }
          }
        }
        pbVar8 = pbVar8 + (int)lVar3;
        uVar7 = uVar7 - 1;
        pfVar9 = pfVar9 + 4;
      } while (uVar7 != 0);
    }
  }
  else if (cVar1 == '\n') {
    bVar2 = *(byte *)((long)param_1 + 0xd);
    if ((0 < (int)param_3) && (bVar2 < 4)) {
      memset(param_2,0,(ulong)(param_3 - 1) * 0x10 + 0x10);
    }
    uVar4 = (uint)bVar2 << 2;
    if (3 < bVar2) {
      uVar4 = 0x10;
    }
    FUN_031a4104(*param_1,(int)param_1[1],param_2,0x10,uVar4 & 0xfc,param_3);
  }
  else {
    if (cVar1 != '\b') {
      return 0x80040200;
    }
    if ((int)param_3 < 1) {
      return 0;
    }
    lVar3 = param_1[1];
    uVar7 = (ulong)param_3;
    puVar6 = (uint *)*param_1;
    pfVar9 = param_2;
    do {
      uVar4 = *puVar6;
      puVar6 = (uint *)((long)puVar6 + (long)(int)lVar3);
      auVar12._0_8_ = CONCAT44(uVar4 >> 8,uVar4) & 0xff000000ff;
      auVar12._8_4_ = uVar4 >> 0x10 & 0xff;
      uVar7 = uVar7 - 1;
      auVar12._12_4_ = uVar4 >> 0x18;
      auVar12 = NEON_scvtf(auVar12,4);
      pfVar9[2] = auVar12._8_4_ * 0.003921569;
      pfVar9[3] = auVar12._12_4_ * 0.003921569;
      *pfVar9 = auVar12._0_4_ * 0.003921569;
      pfVar9[1] = auVar12._4_4_ * 0.003921569;
      pfVar9 = pfVar9 + 4;
    } while (uVar7 != 0);
  }
  if ((int)param_3 < 1) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0xe) != '\b') {
    return 0;
  }
  uVar11 = NEON_fmov(0x3f800000,4);
  iVar5 = param_3 * 4;
  lVar3 = (ulong)param_3 + 1;
  do {
    iVar5 = iVar5 + -4;
    pfVar9 = param_2 + iVar5;
    uVar13 = *(undefined8 *)pfVar9;
    fVar14 = pfVar9[2];
    fVar10 = (float)((ulong)uVar13 >> 0x20);
    uVar15 = NEON_fmax(CONCAT44((float)((ulong)uVar11 >> 0x20) - ((float)uVar13 + fVar10 + fVar14),
                                (float)uVar11 - ((float)uVar13 + fVar10 + fVar14)),0,4);
    lVar3 = lVar3 + -1;
    *(ulong *)(pfVar9 + 2) = CONCAT44((int)uVar15,fVar14);
    *(undefined8 *)pfVar9 = uVar13;
  } while (1 < lVar3);
  return 0;
}


