/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0310570c; name: FUN_0310570c
 */


bool FUN_0310570c(float *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 local_10 [16];
  
  bVar1 = *(byte *)(param_1 + 10);
  if (bVar1 == 0xfe) {
    bVar8 = true;
  }
  else {
    iVar2 = (int)((uint)bVar1 << 0x18) >> 0x19;
    if (iVar2 == 3) {
      fVar15 = param_1[3];
      fVar16 = (float)((ulong)param_2[1] >> 0x20);
    }
    else if (iVar2 == 2) {
      fVar15 = param_1[2];
      fVar16 = (float)param_2[1];
    }
    else if (iVar2 == 1) {
      fVar15 = param_1[1];
      fVar16 = (float)((ulong)*param_2 >> 0x20);
    }
    else {
      fVar15 = *param_1;
      fVar16 = (float)*param_2;
    }
    if (fVar16 - fVar15 != 0.0) {
      bVar8 = (bVar1 & 1) != 0;
      iVar10 = 1;
      if (bVar8) {
        iVar10 = 2;
      }
      iVar11 = 1;
      if (!bVar8) {
        iVar11 = 2;
      }
      uVar3 = (iVar10 + iVar2) % 3;
      uVar4 = (iVar11 + iVar2) % 3;
      uVar12 = uVar3;
      if (2 < uVar3) {
        uVar12 = 3;
      }
      uVar13 = uVar4;
      if (2 < uVar4) {
        uVar13 = 3;
      }
      fVar15 = *(float *)((ulong)local_10 | ((ulong)uVar12 & 3) << 2);
      fVar16 = *(float *)((ulong)local_10 | ((ulong)uVar13 & 3) << 2);
      pfVar9 = param_1 + 4;
      if (uVar3 == 0) {
        pfVar14 = pfVar9;
      }
      else if (uVar3 == 1) {
        pfVar14 = param_1 + 5;
      }
      else if (uVar3 == 2) {
        pfVar14 = param_1 + 6;
      }
      else {
        pfVar14 = param_1 + 7;
      }
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          pfVar9 = param_1 + 5;
        }
        else if (uVar4 == 2) {
          pfVar9 = param_1 + 6;
        }
        else {
          pfVar9 = param_1 + 7;
        }
      }
      if (*pfVar14 <= fVar15) {
        fVar18 = *pfVar9;
        fVar17 = *pfVar14 + param_1[8];
        bVar8 = true;
        if ((fVar16 <= fVar18 + param_1[9]) && (bVar8 = false, !NAN(fVar16) && !NAN(fVar18))) {
          bVar8 = fVar16 < fVar18;
        }
        bVar5 = false;
        bVar6 = false;
        bVar7 = false;
        if (!bVar8) {
          bVar5 = false;
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar15) && !NAN(fVar17)) {
            bVar5 = fVar15 < fVar17;
            bVar6 = fVar15 == fVar17;
            bVar7 = false;
          }
        }
        if (bVar6 || bVar5 != bVar7) {
          if (uVar3 == 0) {
            pfVar9 = param_1;
          }
          else if (uVar3 == 1) {
            pfVar9 = param_1 + 1;
          }
          else if (uVar3 == 2) {
            pfVar9 = param_1 + 2;
          }
          else {
            pfVar9 = param_1 + 3;
          }
          fVar17 = *pfVar9;
          if (uVar4 == 0) {
            pfVar9 = param_1;
          }
          else if (uVar4 == 1) {
            pfVar9 = param_1 + 1;
          }
          else if (uVar4 == 2) {
            pfVar9 = param_1 + 2;
          }
          else {
            pfVar9 = param_1 + 3;
          }
          fVar18 = *pfVar9;
          if ((fVar16 - fVar18) * (param_1[0xe] - fVar17) -
              (fVar15 - fVar17) * (param_1[0xf] - fVar18) <= 0.0) {
            return (fVar17 - param_1[0xc]) * (fVar16 - param_1[0xd]) -
                   (fVar15 - param_1[0xc]) * (fVar18 - param_1[0xd]) <= 0.0;
          }
        }
      }
    }
    bVar8 = false;
  }
  return bVar8;
}


