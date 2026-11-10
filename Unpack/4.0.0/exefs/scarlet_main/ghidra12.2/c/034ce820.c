/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ce820; name: FUN_034ce820
 */


long FUN_034ce820(uint param_1)

{
  ulong uVar1;
  float *pfVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  float fVar15;
  
  uVar1 = (long)(int)param_1 + 1;
  lVar11 = (&DAT_048b0468)[uVar1];
  if ((-1 < (int)param_1) && (lVar11 == 0)) {
    uVar4 = *(uint *)(&DAT_03d984a0 + (ulong)param_1 * 4);
    uVar12 = (ulong)uVar4;
    uVar5 = (param_1 + 2) * (param_1 + 2);
    lVar11 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)(uVar4 * uVar5) << 2);
    if (lVar11 != 0) {
      lVar14 = 0;
      puVar13 = (&PTR_DAT_047c5318)[param_1];
      uVar9 = uVar12;
      do {
        pfVar2 = (float *)(puVar13 + lVar14 * 4);
        FUN_034ce9c0(pfVar2[2],-*pfVar2,pfVar2[1],uVar1 & 0xffffffff,uVar4,lVar11 + lVar14);
        uVar9 = uVar9 - 1;
        lVar14 = lVar14 + 4;
      } while (uVar9 != 0);
      if (uVar5 != 0) {
        lVar14 = 0;
        uVar6 = 0;
        iVar7 = 1;
        do {
          fVar15 = (float)(&DAT_03d98488)[iVar7 - 1] * (float)(&DAT_03d98488)[iVar7 - 1];
          if (uVar12 - 1 < 3) {
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            do {
              uVar3 = lVar14 + uVar9;
              uVar9 = uVar9 + 4;
              *(float *)(lVar11 + (uVar3 & 0xffffffff) * 4) =
                   fVar15 * *(float *)(lVar11 + (uVar3 & 0xffffffff) * 4);
              iVar10 = (int)uVar3;
              *(float *)(lVar11 + (ulong)(iVar10 + 1U) * 4) =
                   fVar15 * *(float *)(lVar11 + (ulong)(iVar10 + 1U) * 4);
              *(float *)(lVar11 + (ulong)(iVar10 + 2U) * 4) =
                   fVar15 * *(float *)(lVar11 + (ulong)(iVar10 + 2U) * 4);
              *(float *)(lVar11 + (ulong)(iVar10 + 3U) * 4) =
                   fVar15 * *(float *)(lVar11 + (ulong)(iVar10 + 3U) * 4);
            } while ((uVar12 & 0xfffffffc) != uVar9);
          }
          if ((uVar4 & 3) != 0) {
            uVar8 = (int)lVar14 + (int)uVar9;
            uVar9 = uVar12 & 3;
            do {
              uVar9 = uVar9 - 1;
              *(float *)(lVar11 + (ulong)uVar8 * 4) = fVar15 * *(float *)(lVar11 + (ulong)uVar8 * 4)
              ;
              uVar8 = uVar8 + 1;
            } while (uVar9 != 0);
          }
          uVar6 = uVar6 + 1;
          lVar14 = lVar14 + uVar12;
          uVar8 = 0;
          if (iVar7 * iVar7 != 0) {
            uVar8 = uVar6 / (uint)(iVar7 * iVar7);
          }
          iVar7 = uVar8 + iVar7;
        } while (uVar6 != uVar5);
      }
      (&DAT_048b0468)[uVar1] = lVar11;
    }
  }
  return lVar11;
}


