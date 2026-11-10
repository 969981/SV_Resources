/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008757dc; name: FUN_008757dc
 */


void FUN_008757dc(long *param_1,long *param_2,long *param_3,uint *param_4)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  long lVar12;
  float *pfVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((char)param_1[0x82] != '\0') {
    FUN_0087615c();
    cVar1 = *(char *)((long)param_1 + 0x3ec);
    cVar2 = *(char *)((long)param_1 + 0x3ed);
    if (DAT_044ea8dc == 0) {
      uVar9 = (uint)*(byte *)(param_2 + 1);
      if (0xb < uVar9) {
        uVar9 = 0xc;
      }
      if (uVar9 != 0) {
        lVar12 = 0;
        do {
          *(undefined4 *)((long)&DAT_044ea8a0 + lVar12) =
               *(undefined4 *)
                (*param_2 + lVar12 * (ulong)*(ushort *)(param_2 + 2) +
                 (ulong)*(ushort *)((long)param_2 + 0x12) * 4 + -4);
          lVar12 = lVar12 + 4;
        } while ((ulong)uVar9 * 4 != lVar12);
      }
      lVar7 = DAT_047fc3a0;
      lVar12 = DAT_047fc398;
      if ((param_3 != (long *)0x0) && (cVar1 != '\0')) {
        bVar11 = *(byte *)(param_3 + 1);
        if (1 < bVar11) {
          bVar11 = 2;
        }
        if ((bVar11 != 0) &&
           (DAT_044ea8d0 = *(float *)(*param_3 + (ulong)*(ushort *)((long)param_3 + 0x12) * 4 + -4),
           bVar11 != 1)) {
          DAT_044ea8d4 = *(float *)(*param_3 + (ulong)*(ushort *)(param_3 + 2) * 4 +
                                    (ulong)*(ushort *)((long)param_3 + 0x12) * 4 + -4);
        }
      }
      if (cVar2 != '\0') {
        uVar9 = *param_4;
        if (DAT_047fc388 <= *param_4) {
          uVar9 = DAT_047fc388;
        }
        DAT_044ea8e0 = 0;
        if (uVar9 != 0) {
          lVar16 = 0;
          uVar6 = 0;
          do {
            plVar8 = *(long **)(*(long *)(param_4 + 2) + lVar16);
            if ((*(int *)((long)plVar8 + 0xc) != 0x11) && (*(short *)((long)plVar8 + 0x12) != 0)) {
              *(undefined8 *)(lVar12 + uVar6 * 8) =
                   **(undefined8 **)(*(long *)(param_4 + 4) + lVar16);
              *(undefined4 *)(lVar7 + (ulong)DAT_044ea8e0 * 4) =
                   *(undefined4 *)(*plVar8 + (ulong)*(ushort *)((long)plVar8 + 0x12) * 4 + -4);
              DAT_044ea8e0 = DAT_044ea8e0 + 1;
              uVar6 = (ulong)DAT_044ea8e0;
            }
            lVar16 = lVar16 + 8;
          } while ((ulong)uVar9 * 8 != lVar16);
        }
      }
    }
    else {
      uVar3 = *(ushort *)(param_2 + 2);
      uVar9 = DAT_044ea8dc;
      if (uVar3 <= DAT_044ea8dc) {
        uVar9 = (uint)uVar3;
      }
      uVar10 = (uint)*(byte *)(param_2 + 1);
      if (0xb < uVar10) {
        uVar10 = 0xc;
      }
      if (uVar10 != 0) {
        lVar12 = 0;
        uVar6 = 0;
        uVar4 = *(ushort *)((long)param_2 + 0x12);
        while( true ) {
          if (uVar4 != 0) {
            fVar17 = (float)(&DAT_044ea8a0)[uVar6];
            fVar18 = (float)NEON_ucvtf(DAT_044ea8d8);
            if (uVar4 < uVar9) {
              lVar7 = *param_2 + lVar12 * (ulong)uVar3;
              iVar14 = 0;
              uVar15 = 0;
              do {
                uVar5 = uVar15 & 0xffffffff;
                lVar16 = uVar15 * 4;
                uVar15 = uVar15 + 1;
                fVar19 = (1.0 / fVar18) * (float)(iVar14 + DAT_044ea8dc);
                fVar19 = fVar19 - fVar19 * (float)uVar5 * (1.0 / (float)uVar4);
                fVar20 = 1.0 - fVar19;
                iVar14 = iVar14 + -1;
                *(float *)(lVar7 + lVar16) =
                     (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (37.939247 -
                                                                       fVar19 * 11.209858) +
                                                             -50.8083) + 34.484993) + -12.930046) +
                               3.447074) + 0.07175691) * fVar17 +
                     *(float *)(lVar7 + lVar16) *
                     (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (37.939247 -
                                                                       fVar20 * 11.209858) +
                                                             -50.8083) + 34.484993) + -12.930046) +
                               3.447074) + 0.07175691);
              } while (uVar4 != uVar15);
            }
            else if (uVar9 != 0) {
              lVar7 = 0;
              pfVar13 = (float *)(*param_2 + lVar12 * (ulong)uVar3);
              do {
                fVar19 = (1.0 / fVar18) * (float)((int)lVar7 + DAT_044ea8dc);
                fVar20 = 1.0 - fVar19;
                lVar7 = lVar7 + -1;
                *pfVar13 = (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (37.939247 -
                                                                             fVar19 * 11.209858) +
                                                                   -50.8083) + 34.484993) +
                                               -12.930046) + 3.447074) + 0.07175691) * fVar17 +
                           *pfVar13 *
                           (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (37.939247 -
                                                                             fVar20 * 11.209858) +
                                                                   -50.8083) + 34.484993) +
                                               -12.930046) + 3.447074) + 0.07175691);
                pfVar13 = pfVar13 + 1;
              } while (-lVar7 != (ulong)uVar9);
            }
          }
          uVar6 = uVar6 + 1;
          if (uVar6 == uVar10) break;
          uVar3 = *(ushort *)(param_2 + 2);
          lVar12 = lVar12 + 4;
          uVar4 = *(ushort *)((long)param_2 + 0x12);
        }
      }
      fVar17 = DAT_044ea8d0;
      if ((param_3 != (long *)0x0) && (cVar1 != '\0')) {
        bVar11 = *(byte *)(param_3 + 1);
        if (1 < bVar11) {
          bVar11 = 2;
        }
        if (bVar11 != 0) {
          uVar3 = *(ushort *)((long)param_3 + 0x12);
          if (uVar3 != 0) {
            fVar18 = (float)NEON_ucvtf(DAT_044ea8d8);
            pfVar13 = (float *)*param_3;
            if (uVar9 < uVar3 || uVar9 == uVar3) {
              if (uVar9 != 0) {
                lVar12 = 0;
                do {
                  fVar19 = (1.0 / fVar18) * (float)((int)lVar12 + DAT_044ea8dc);
                  fVar20 = 1.0 - fVar19;
                  lVar12 = lVar12 + -1;
                  *pfVar13 = (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (37.939247 -
                                                                               fVar19 * 11.209858) +
                                                                     -50.8083) + 34.484993) +
                                                 -12.930046) + 3.447074) + 0.07175691) * fVar17 +
                             *pfVar13 *
                             (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (37.939247 -
                                                                               fVar20 * 11.209858) +
                                                                     -50.8083) + 34.484993) +
                                                 -12.930046) + 3.447074) + 0.07175691);
                  pfVar13 = pfVar13 + 1;
                } while (-lVar12 != (ulong)uVar9);
              }
            }
            else {
              iVar14 = 0;
              uVar6 = 0;
              do {
                uVar15 = uVar6 + 1;
                fVar19 = (1.0 / fVar18) * (float)(iVar14 + DAT_044ea8dc);
                fVar19 = fVar19 - fVar19 * (float)(uVar6 & 0xffffffff) * (1.0 / (float)(uint)uVar3);
                fVar20 = 1.0 - fVar19;
                iVar14 = iVar14 + -1;
                pfVar13[uVar6] =
                     (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (37.939247 -
                                                                       fVar19 * 11.209858) +
                                                             -50.8083) + 34.484993) + -12.930046) +
                               3.447074) + 0.07175691) * fVar17 +
                     pfVar13[uVar6] *
                     (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (37.939247 -
                                                                       fVar20 * 11.209858) +
                                                             -50.8083) + 34.484993) + -12.930046) +
                               3.447074) + 0.07175691);
                uVar6 = uVar15;
              } while (uVar3 != uVar15);
            }
          }
          fVar17 = DAT_044ea8d4;
          if (bVar11 != 1) {
            uVar3 = *(ushort *)((long)param_3 + 0x12);
            if (uVar3 != 0) {
              fVar18 = (float)NEON_ucvtf(DAT_044ea8d8);
              pfVar13 = (float *)(*param_3 + (ulong)*(ushort *)(param_3 + 2) * 4);
              if (uVar9 < uVar3 || uVar9 == uVar3) {
                if (uVar9 != 0) {
                  lVar12 = 0;
                  do {
                    fVar19 = (1.0 / fVar18) * (float)((int)lVar12 + DAT_044ea8dc);
                    fVar20 = 1.0 - fVar19;
                    lVar12 = lVar12 + -1;
                    *pfVar13 = (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (37.939247 -
                                                                                 fVar19 * 11.209858)
                                                                       + -50.8083) + 34.484993) +
                                                   -12.930046) + 3.447074) + 0.07175691) * fVar17 +
                               *pfVar13 *
                               (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (37.939247 -
                                                                                 fVar20 * 11.209858)
                                                                       + -50.8083) + 34.484993) +
                                                   -12.930046) + 3.447074) + 0.07175691);
                    pfVar13 = pfVar13 + 1;
                  } while (-lVar12 != (ulong)uVar9);
                }
              }
              else {
                iVar14 = 0;
                uVar6 = 0;
                do {
                  uVar15 = uVar6 + 1;
                  fVar19 = (1.0 / fVar18) * (float)(iVar14 + DAT_044ea8dc);
                  fVar19 = fVar19 - fVar19 * (float)(uVar6 & 0xffffffff) *
                                             (1.0 / (float)(uint)uVar3);
                  fVar20 = 1.0 - fVar19;
                  iVar14 = iVar14 + -1;
                  pfVar13[uVar6] =
                       (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (37.939247 -
                                                                         fVar19 * 11.209858) +
                                                               -50.8083) + 34.484993) + -12.930046)
                                 + 3.447074) + 0.07175691) * fVar17 +
                       pfVar13[uVar6] *
                       (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (37.939247 -
                                                                         fVar20 * 11.209858) +
                                                               -50.8083) + 34.484993) + -12.930046)
                                 + 3.447074) + 0.07175691);
                  uVar6 = uVar15;
                } while (uVar3 != uVar15);
              }
            }
          }
        }
      }
      lVar7 = DAT_047fc3a0;
      lVar12 = DAT_047fc398;
      if (cVar2 != '\0') {
        uVar10 = *param_4;
        if (DAT_044ea8e0 <= *param_4) {
          uVar10 = DAT_044ea8e0;
        }
        if (uVar10 != 0) {
          uVar6 = 0;
          do {
            if (DAT_044ea8e0 != 0) {
              uVar15 = 0;
              plVar8 = *(long **)(*(long *)(param_4 + 2) + uVar6 * 8);
              do {
                if (*(long *)(lVar12 + (uVar15 & 0xffffffff) * 8) ==
                    **(long **)(*(long *)(param_4 + 4) + uVar6 * 8)) {
                  uVar3 = *(ushort *)((long)plVar8 + 0x12);
                  if (uVar3 != 0) {
                    fVar17 = *(float *)(lVar7 + uVar15 * 4);
                    fVar18 = (float)NEON_ucvtf(DAT_044ea8d8);
                    pfVar13 = (float *)*plVar8;
                    if (uVar9 < uVar3 || uVar9 == uVar3) {
                      if (uVar9 != 0) {
                        lVar16 = 0;
                        do {
                          fVar19 = (1.0 / fVar18) * (float)((int)lVar16 + DAT_044ea8dc);
                          fVar20 = 1.0 - fVar19;
                          lVar16 = lVar16 + -1;
                          *pfVar13 = (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (37.939247 -
                                                                                       fVar19 * 
                                                  11.209858) + -50.8083) + 34.484993) + -12.930046)
                                               + 3.447074) + 0.07175691) * fVar17 +
                                     *pfVar13 *
                                     (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (37.939247 -
                                                                                       fVar20 * 
                                                  11.209858) + -50.8083) + 34.484993) + -12.930046)
                                               + 3.447074) + 0.07175691);
                          pfVar13 = pfVar13 + 1;
                        } while (-lVar16 != (ulong)uVar9);
                      }
                    }
                    else {
                      iVar14 = 0;
                      uVar15 = 0;
                      do {
                        uVar5 = uVar15 + 1;
                        fVar19 = (1.0 / fVar18) * (float)(iVar14 + DAT_044ea8dc);
                        fVar19 = fVar19 - fVar19 * (float)(uVar15 & 0xffffffff) *
                                                   (1.0 / (float)(uint)uVar3);
                        fVar20 = 1.0 - fVar19;
                        iVar14 = iVar14 + -1;
                        pfVar13[uVar15] =
                             (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (37.939247 -
                                                                               fVar19 * 11.209858) +
                                                                     -50.8083) + 34.484993) +
                                                 -12.930046) + 3.447074) + 0.07175691) * fVar17 +
                             pfVar13[uVar15] *
                             (fVar20 * (fVar20 * (fVar20 * (fVar20 * (fVar20 * (37.939247 -
                                                                               fVar20 * 11.209858) +
                                                                     -50.8083) + 34.484993) +
                                                 -12.930046) + 3.447074) + 0.07175691);
                        uVar15 = uVar5;
                      } while (uVar3 != uVar5);
                    }
                  }
                  break;
                }
                uVar15 = uVar15 + 1;
              } while (DAT_044ea8e0 != (uint)uVar15);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar10);
        }
      }
      DAT_044ea8dc = DAT_044ea8dc - uVar9;
    }
    DAT_047fc380 = (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}


