/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008a2d8c; name: FUN_008a2d8c
 */


void FUN_008a2d8c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar4 = PTR_SinCosSampleTable_047d2398;
  uVar5 = *(uint *)(param_1 + 0x14);
  if ((uVar5 & 0xc) != 0) {
    uVar3 = uVar5 >> 2 & 3;
    uVar1 = uVar5 & 3;
    if (uVar3 <= (uVar5 & 3)) {
      uVar1 = uVar3;
    }
    uVar3 = (int)*(char *)(param_2 + 0x18d);
    if ((int)uVar1 <= (int)*(char *)(param_2 + 0x18d)) {
      uVar3 = uVar1;
    }
    if (uVar3 != 0) {
      fVar14 = *(float *)PTR_FloatDegree180_047d2390;
      fVar13 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_047d2388);
      uVar5 = 0;
      do {
        uVar12 = (ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30;
        if (*(byte *)(*(long *)(param_1 + 0x18) +
                      uVar12 + ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 +
                      (long)(int)uVar5 * 0x10 + 1) - 5 < 2) {
          lVar7 = *(long *)(*(long *)(param_2 + 200) + 0x38);
          lVar2 = 0;
          if (lVar7 != 0) {
            lVar2 = lVar7 + (ulong)*(uint *)(param_1 + 0x30);
          }
          if (uVar5 == 2) {
            puVar6 = (undefined8 *)(lVar2 + 0xb0);
            puVar10 = (undefined8 *)(lVar2 + 0xc0);
          }
          else if (uVar5 == 1) {
            puVar6 = (undefined8 *)(lVar2 + 0x90);
            puVar10 = (undefined8 *)(lVar2 + 0xa0);
          }
          else {
            if (uVar5 != 0) goto LAB_008a2e34;
            puVar6 = (undefined8 *)(lVar2 + 0x70);
            puVar10 = (undefined8 *)(lVar2 + 0x80);
          }
          *puVar6 = 0x3f800000;
          puVar6[1] = 0;
          *puVar10 = 0xbf80000000000000;
          puVar10[1] = 0x3f80000000000000;
        }
        else {
          pfVar8 = (float *)(*(long *)(param_1 + 0x18) + uVar12 + (long)(int)uVar5 * 0x14);
          fVar15 = pfVar8[3];
          fVar18 = *pfVar8;
          fVar17 = pfVar8[1];
          uVar12 = (ulong)(pfVar8[2] * (fVar13 / fVar14));
          fVar16 = pfVar8[4];
          lVar7 = *(long *)(*(long *)(param_2 + 200) + 0x38);
          pfVar8 = (float *)(puVar4 + (uVar12 >> 0x18 & 0xff) * 0x10);
          lVar2 = 0;
          if (lVar7 != 0) {
            lVar2 = lVar7 + (ulong)*(uint *)(param_1 + 0x30);
          }
          if (uVar5 == 2) {
            pfVar9 = (float *)(lVar2 + 0xb0);
            pfVar11 = (float *)(lVar2 + 0xc0);
          }
          else if (uVar5 == 1) {
            pfVar9 = (float *)(lVar2 + 0x90);
            pfVar11 = (float *)(lVar2 + 0xa0);
          }
          else {
            if (uVar5 != 0) goto LAB_008a2e34;
            pfVar9 = (float *)(lVar2 + 0x70);
            pfVar11 = (float *)(lVar2 + 0x80);
          }
          fVar20 = (float)((uint)uVar12 & 0xffffff) * 5.9604645e-08;
          fVar19 = *pfVar8 + pfVar8[2] * fVar20;
          fVar20 = pfVar8[1] + pfVar8[3] * fVar20;
          *pfVar9 = fVar15 * fVar19;
          pfVar9[1] = fVar16 * -fVar20;
          pfVar9[3] = ((fVar18 + 0.5) - fVar15 * fVar19 * 0.5) - fVar16 * -fVar20 * 0.5;
          pfVar9[2] = 0.0;
          *pfVar11 = -(fVar15 * fVar20);
          pfVar11[1] = -(fVar16 * fVar19);
          pfVar11[2] = 0.0;
          pfVar11[3] = (fVar16 * fVar19 * 0.5 - ((fVar17 + 0.5) - fVar15 * fVar20 * 0.5)) + 1.0;
        }
LAB_008a2e34:
        uVar5 = uVar5 + 1;
      } while (uVar3 != uVar5);
      uVar5 = *(uint *)(param_1 + 0x14);
    }
  }
  if ((uVar5 & 0x30) == 0) {
    *(undefined1 *)(param_2 + 0x188) = 0xff;
  }
  else {
    uVar5 = uVar5 >> 4 & 3;
    if (uVar5 != 0) {
      *(undefined1 *)(param_2 + 0x188) =
           *(undefined1 *)
            (*(long *)(param_1 + 0x18) +
             ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
             ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 1);
      if (uVar5 != 1) {
        *(undefined1 *)(param_2 + 0x189) =
             *(undefined1 *)
              (*(long *)(param_1 + 0x18) +
               ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
               ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 0x11);
        if (uVar5 != 2) {
          *(undefined1 *)(param_2 + 0x18a) =
               *(undefined1 *)
                (*(long *)(param_1 + 0x18) +
                 ((ulong)(*(uint *)(param_1 + 0x10) << 4) & 0x30) +
                 ((ulong)(*(uint *)(param_1 + 0x10) >> 2) & 3) * 0x14 + 0x21);
          if (uVar5 == 3) goto LAB_008a308c;
        }
      }
    }
    memset((void *)(param_2 + (ulong)(uVar5 | 0x188)),0xff,(ulong)(2 - uVar5) + 1);
  }
LAB_008a308c:
  FUN_008a344c(param_1,param_2,param_3,param_4);
  return;
}


