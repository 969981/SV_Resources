/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008b3058; name: FUN_008b3058
 */


void FUN_008b3058(ulong param_1,long param_2,long param_3)

{
  float *pfVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar4 = PTR_SinCosSampleTable_047d2398;
  lVar5 = *(long *)(param_2 + 0x150);
  bVar3 = *(byte *)(lVar5 + 0x12);
  if ((ulong)bVar3 != 0) {
    fVar9 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
    fVar11 = *(float *)PTR_FloatDegree180_047d2390;
    lVar7 = 0;
    while( true ) {
      lVar8 = *(long *)(lVar5 + lVar7 + 0x20);
      uVar2 = *(uint *)(lVar5 + lVar7 + 0x28);
      pfVar1 = (float *)(lVar8 + (ulong)*(uint *)(lVar8 + 8));
      uVar6 = param_1;
      if ((*(char *)(lVar5 + 0x10) == '\x01') && (1 < *(ushort *)(lVar8 + 4))) {
        fVar13 = pfVar1[(ulong)(*(ushort *)(lVar8 + 4) - 1) * 3];
        fVar12 = *pfVar1;
        fVar10 = (float)param_1;
        if (fVar10 <= fVar13) {
          if (fVar10 < fVar12) {
            fVar10 = fmodf(fVar12 - fVar10,fVar13 - fVar12);
            uVar6 = (ulong)(uint)(fVar13 - fVar10);
          }
        }
        else {
          fVar10 = fmodf(fVar10 - fVar12,fVar13 - fVar12);
          uVar6 = (ulong)(uint)(fVar12 + fVar10);
        }
      }
      fVar10 = (float)FUN_008b4610(uVar6,pfVar1,*(undefined2 *)(lVar8 + 4));
      if ((int)uVar2 < 3) {
        fVar12 = -fVar10;
        if (uVar2 != 1) {
          fVar12 = fVar10;
        }
        *(float *)(param_3 + (ulong)uVar2 * 4 + 0x20) = fVar12;
      }
      else if ((int)uVar2 < 6) {
        if (uVar2 != 4) {
          fVar10 = -fVar10;
        }
        uVar6 = (ulong)(fVar10 * (fVar9 / fVar11));
        pfVar1 = (float *)(puVar4 + (uVar6 >> 0x18 & 0xff) * 0x10);
        fVar10 = (float)((uint)uVar6 & 0xffffff) * 5.9604645e-08;
        lVar5 = param_3 + (ulong)(uVar2 - 3) * 4;
        *(float *)(lVar5 + 0x14) = pfVar1[1] + pfVar1[3] * fVar10;
        *(float *)(lVar5 + 8) = *pfVar1 + pfVar1[2] * fVar10;
      }
      else if ((int)uVar2 < 10) {
        *(char *)(param_3 + (ulong)(uVar2 - 6) + 0x2c) = (char)(int)fVar10;
      }
      else if ((int)uVar2 < 0xe) {
        *(char *)(param_3 + (ulong)(uVar2 - 10) + 0x30) = (char)(int)fVar10;
      }
      else {
        *(float *)(param_3 + (ulong)(uVar2 - 0xe) * 4) = fVar10;
      }
      if ((ulong)bVar3 * 0x10 + -0x10 == lVar7) break;
      lVar5 = *(long *)(param_2 + 0x150);
      lVar7 = lVar7 + 0x10;
    }
  }
  return;
}


