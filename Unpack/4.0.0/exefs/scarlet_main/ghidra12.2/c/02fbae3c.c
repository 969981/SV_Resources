/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02fbae3c; name: FUN_02fbae3c
 */


/* WARNING: Removing unreachable block (ram,0x02fbb0a0) */

int FUN_02fbae3c(long param_1)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  uint uVar30;
  ushort *puVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  uint uVar41;
  ulong uVar42;
  int iVar43;
  ulong uVar44;
  long lVar45;
  ulong uVar46;
  long lVar47;
  int iVar48;
  float fVar49;
  float fVar50;
  long local_100;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  ulong local_68;
  
  uVar4 = *(uint *)(param_1 + 0x38);
  local_98 = 0;
  local_90 = 0x8000000000000000;
  lVar16 = tpidr_el0;
  lVar25 = *(long *)(lVar16 + 0x1000b8);
  if (lVar25 == 0) {
    lVar25 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar25;
  }
  lVar45 = (long)(int)uVar4;
  local_88 = *(long *)(*(long *)(lVar25 + 0x3d0) + 0x10);
  if (*(long *)(local_88 + 8) != 0) {
    local_88 = 0;
  }
  local_78 = lVar45 * 2;
  local_70 = local_78;
  if (local_88 == 0) {
    local_80 = (**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
  }
  else {
    local_68 = local_78 + 0x3fU & 0xffffffffffffffc0;
    if (local_68 <= *(ulong *)(local_88 + 0x28)) {
      local_80 = *(long *)(local_88 + 0x38);
      if (local_68 + local_80 <= *(ulong *)(local_88 + 0x40)) {
        *(ulong *)(local_88 + 0x38) = local_68 + local_80;
        goto LAB_02fbaf00;
      }
    }
    local_80 = FUN_031cf3b4(local_88,&local_68);
  }
LAB_02fbaf00:
  local_90 = CONCAT44(uVar4,(uint)local_90) | 0x8000000000000000;
  lVar25 = *(long *)(lVar16 + 0x1000b8);
  local_98 = local_80;
  if (lVar25 == 0) {
    lVar25 = FUN_00e5d3b4();
    *(long *)(lVar16 + 0x1000b8) = lVar25;
  }
  local_100 = *(long *)(*(long *)(lVar25 + 0x3d0) + 0x10);
  local_70 = lVar45;
  if (*(long *)(local_100 + 8) == 0) {
    if (local_100 == 0) goto LAB_02fbafe4;
    local_68 = lVar45 + 0x3fU & 0xffffffffffffffc0;
    if (*(ulong *)(local_100 + 0x28) < local_68) {
LAB_02fbaf70:
      lVar16 = FUN_031cf3b4(local_100,&local_68);
      goto LAB_02fbb000;
    }
    lVar16 = *(long *)(local_100 + 0x38);
    if (*(ulong *)(local_100 + 0x40) < local_68 + lVar16) goto LAB_02fbaf70;
    *(ulong *)(local_100 + 0x38) = local_68 + lVar16;
  }
  else {
    local_100 = 0;
LAB_02fbafe4:
    lVar16 = (**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
LAB_02fbb000:
  }
  if ((int)(local_90._4_4_ & 0x7fffffff) < (int)uVar4) {
    FUN_02fbe258(&local_98,PTR_PTR_047d1a50,lVar45);
  }
  if ((uint)local_90 != uVar4) {
    local_90 = CONCAT44(local_90._4_4_,uVar4);
  }
  if ((int)uVar4 < 1) {
    iVar48 = 0;
  }
  else {
    iVar48 = 0;
    uVar19 = 0;
    do {
      lVar25 = *(long *)(param_1 + 0x30) + uVar19 * 8;
      bVar7 = *(byte *)(*(long *)(param_1 + 0x80) + uVar19);
      uVar26 = uVar19 + 1;
      uVar9 = *(ushort *)(*(long *)(param_1 + 0x70) + uVar19 * 2);
      uVar35 = (ulong)uVar9;
      bVar5 = *(byte *)(lVar25 + 6);
      uVar42 = (ulong)bVar5;
      uVar41 = (uint)*(ushort *)(*(long *)(param_1 + 0x70) + uVar26 * 2) - (uint)uVar9;
      if ((int)uVar41 < 1) {
        uVar28 = 0xffffffffffffffff;
      }
      else {
        if (uVar41 == 1) {
          uVar28 = 0;
LAB_02fbb130:
          puVar31 = (ushort *)(*(long *)(param_1 + 0x60) + (uVar28 + uVar35) * 4);
          *(ushort *)(local_98 + (ulong)*puVar31 * 2) = puVar31[1];
          *(undefined1 *)(lVar16 + (ulong)*puVar31) =
               *(undefined1 *)(*(long *)(param_1 + 0x30) + (ulong)*puVar31 * 8 + 6);
        }
        else {
          uVar28 = 0;
          lVar47 = uVar35 << 2;
          do {
            puVar31 = (ushort *)(*(long *)(param_1 + 0x60) + lVar47);
            uVar28 = uVar28 + 2;
            *(ushort *)(local_98 + (ulong)*puVar31 * 2) = puVar31[1];
            *(undefined1 *)(lVar16 + (ulong)*puVar31) =
                 *(undefined1 *)(*(long *)(param_1 + 0x30) + (ulong)*puVar31 * 8 + 6);
            lVar37 = *(long *)(param_1 + 0x60);
            lVar3 = lVar37 + lVar47;
            *(undefined2 *)(local_98 + (ulong)*(ushort *)(lVar3 + 4) * 2) =
                 *(undefined2 *)(lVar3 + 6);
            lVar47 = lVar47 + 8;
            *(undefined1 *)(lVar16 + (ulong)*(ushort *)(lVar3 + 4)) =
                 *(undefined1 *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(lVar3 + 4) * 8 + 6);
          } while (((ulong)uVar41 & 0xfffffffe) != uVar28);
          puVar31 = (ushort *)(lVar37 + lVar47 + -4);
          if ((uVar41 & 1) != 0) goto LAB_02fbb130;
        }
        uVar28 = (ulong)*puVar31;
      }
      uVar41 = (uint)bVar5;
      if (bVar7 != 0) {
        uVar29 = 0;
        do {
          uVar32 = (ulong)*(ushort *)(*(long *)(param_1 + 0x60) + (uVar29 + uVar35) * 4);
          lVar47 = *(long *)(param_1 + 0x30) + uVar32 * 8;
          bVar6 = *(byte *)(lVar47 + 6);
          uVar20 = (uint)bVar6;
          if (uVar20 != 0) {
            uVar22 = 0;
            puVar31 = (ushort *)(*(long *)(param_1 + 0x70) + uVar32 * 2);
            lVar3 = (ulong)*(byte *)(*(long *)(param_1 + 0x80) + uVar32) + (ulong)*puVar31;
            uVar9 = puVar31[1];
            uVar2 = (int)lVar3 + 1;
            uVar8 = *(ushort *)(*(long *)(param_1 + 0x60) + lVar3 * 4 + 2);
            do {
              if (bVar5 != 0) {
                uVar15 = bVar6 - uVar22;
                iVar43 = *(ushort *)(lVar47 + 2) + 1;
                uVar39 = (uint)uVar8 + uVar22 * iVar43;
                lVar37 = (ulong)(iVar43 * uVar22) + (ulong)uVar8;
                iVar43 = uVar22 + (int)*(short *)(local_98 + uVar32 * 2);
                uVar27 = 0;
                if ((int)uVar15 < 2) {
                  do {
                    uVar30 = (uint)*(ushort *)(lVar25 + 2);
                    iVar12 = iVar43 + uVar27 * uVar30;
                    lVar38 = *(long *)(param_1 + 0x18);
                    fVar49 = *(float *)(lVar38 + lVar37 * 4) * *(float *)(lVar38 + (long)iVar12 * 4)
                    ;
                    *(float *)(lVar38 + (long)iVar12 * 4) = fVar49;
                    if (uVar2 < uVar9) {
                      iVar12 = uVar27 * uVar30;
                      uVar44 = lVar3 + 1U;
                      uVar30 = uVar15;
                      do {
                        uVar33 = (ulong)*(ushort *)(*(long *)(param_1 + 0x60) + uVar44 * 4);
                        cVar10 = *(char *)(lVar16 + uVar33);
                        uVar34 = (ulong)cVar10;
                        if ('\0' < cVar10) {
                          uVar36 = uVar34 & 3;
                          lVar38 = *(long *)(param_1 + 0x18);
                          iVar24 = (int)*(short *)(local_98 + uVar33 * 2);
                          if (uVar34 - 1 < 3) {
                            uVar33 = 0;
                          }
                          else {
                            pfVar17 = (float *)(lVar38 + 8 + (long)(iVar12 + iVar24) * 4);
                            pfVar18 = (float *)(lVar38 + 8 + (long)(int)(uVar39 + uVar30) * 4);
                            uVar33 = 0;
                            do {
                              uVar33 = uVar33 + 4;
                              pfVar17[-2] = pfVar17[-2] - fVar49 * pfVar18[-2];
                              pfVar17[-1] = pfVar17[-1] - fVar49 * pfVar18[-1];
                              *pfVar17 = *pfVar17 - fVar49 * *pfVar18;
                              pfVar1 = pfVar18 + 1;
                              pfVar18 = pfVar18 + 4;
                              pfVar17[1] = pfVar17[1] - fVar49 * *pfVar1;
                              pfVar17 = pfVar17 + 4;
                            } while ((uVar34 & 0xfffffffc) != uVar33);
                          }
                          if (uVar36 != 0) {
                            pfVar17 = (float *)(lVar38 + (uVar33 + (long)(iVar12 + iVar24)) * 4);
                            pfVar18 = (float *)(lVar38 + (uVar33 + (long)(int)(uVar39 + uVar30)) * 4
                                               );
                            do {
                              uVar36 = uVar36 - 1;
                              *pfVar17 = *pfVar17 - fVar49 * *pfVar18;
                              pfVar17 = pfVar17 + 1;
                              pfVar18 = pfVar18 + 1;
                            } while (uVar36 != 0);
                          }
                        }
                        uVar44 = uVar44 + 1;
                        uVar30 = uVar30 + (int)cVar10;
                      } while (uVar44 < uVar9);
                    }
                    uVar27 = uVar27 + 1;
                  } while (uVar27 != bVar5);
                }
                else {
                  uVar44 = (ulong)uVar15 - 1 & 3;
                  do {
                    uVar30 = (uint)*(ushort *)(lVar25 + 2);
                    iVar12 = iVar43 + uVar27 * uVar30;
                    lVar38 = *(long *)(param_1 + 0x18);
                    fVar49 = *(float *)(lVar38 + lVar37 * 4) * *(float *)(lVar38 + (long)iVar12 * 4)
                    ;
                    *(float *)(lVar38 + (long)iVar12 * 4) = fVar49;
                    lVar38 = *(long *)(param_1 + 0x18);
                    if ((ulong)uVar15 - 2 < 3) {
                      lVar40 = 1;
                    }
                    else {
                      pfVar18 = (float *)(lVar38 + 8 + (ulong)uVar39 * 4);
                      pfVar17 = (float *)(lVar38 + 8 + (long)iVar12 * 4);
                      uVar34 = 0;
                      do {
                        uVar33 = uVar34;
                        pfVar17[-1] = pfVar17[-1] - fVar49 * pfVar18[-1];
                        *pfVar17 = *pfVar17 - fVar49 * *pfVar18;
                        pfVar17[1] = pfVar17[1] - fVar49 * pfVar18[1];
                        pfVar1 = pfVar18 + 2;
                        pfVar18 = pfVar18 + 4;
                        uVar34 = uVar33 + 4;
                        pfVar17[2] = pfVar17[2] - fVar49 * *pfVar1;
                        pfVar17 = pfVar17 + 4;
                      } while (((ulong)uVar20 - 1 & 0xfffffffffffffffc) != uVar34);
                      lVar40 = uVar33 + 5;
                    }
                    if (uVar44 != 0) {
                      pfVar17 = (float *)(lVar38 + (lVar40 + iVar12) * 4);
                      uVar34 = uVar44;
                      pfVar18 = (float *)(lVar38 + (ulong)uVar39 * 4 + lVar40 * 4);
                      do {
                        uVar34 = uVar34 - 1;
                        *pfVar17 = *pfVar17 - fVar49 * *pfVar18;
                        pfVar17 = pfVar17 + 1;
                        pfVar18 = pfVar18 + 1;
                      } while (uVar34 != 0);
                    }
                    if (uVar2 < uVar9) {
                      iVar12 = uVar27 * uVar30;
                      uVar34 = lVar3 + 1U;
                      uVar30 = uVar15;
                      do {
                        uVar36 = (ulong)*(ushort *)(*(long *)(param_1 + 0x60) + uVar34 * 4);
                        cVar10 = *(char *)(lVar16 + uVar36);
                        uVar33 = (ulong)cVar10;
                        if ('\0' < cVar10) {
                          uVar46 = uVar33 & 3;
                          lVar38 = *(long *)(param_1 + 0x18);
                          iVar24 = (int)*(short *)(local_98 + uVar36 * 2);
                          if (uVar33 - 1 < 3) {
                            uVar36 = 0;
                          }
                          else {
                            pfVar17 = (float *)(lVar38 + 8 + (long)(iVar12 + iVar24) * 4);
                            pfVar18 = (float *)(lVar38 + 8 + (long)(int)(uVar39 + uVar30) * 4);
                            uVar36 = 0;
                            do {
                              uVar36 = uVar36 + 4;
                              pfVar17[-2] = pfVar17[-2] - fVar49 * pfVar18[-2];
                              pfVar17[-1] = pfVar17[-1] - fVar49 * pfVar18[-1];
                              *pfVar17 = *pfVar17 - fVar49 * *pfVar18;
                              pfVar1 = pfVar18 + 1;
                              pfVar18 = pfVar18 + 4;
                              pfVar17[1] = pfVar17[1] - fVar49 * *pfVar1;
                              pfVar17 = pfVar17 + 4;
                            } while ((uVar33 & 0xfffffffc) != uVar36);
                          }
                          if (uVar46 != 0) {
                            pfVar17 = (float *)(lVar38 + (uVar36 + (long)(int)(uVar39 + uVar30)) * 4
                                               );
                            pfVar18 = (float *)(lVar38 + (uVar36 + (long)(iVar12 + iVar24)) * 4);
                            do {
                              uVar46 = uVar46 - 1;
                              *pfVar18 = *pfVar18 - fVar49 * *pfVar17;
                              pfVar17 = pfVar17 + 1;
                              pfVar18 = pfVar18 + 1;
                            } while (uVar46 != 0);
                          }
                        }
                        uVar34 = uVar34 + 1;
                        uVar30 = uVar30 + (int)cVar10;
                      } while (uVar34 < uVar9);
                    }
                    uVar27 = uVar27 + 1;
                  } while (uVar27 != uVar41);
                }
              }
              uVar22 = uVar22 + 1;
              uVar20 = uVar20 - 1;
            } while (uVar22 != bVar6);
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != bVar7);
      }
      if (uVar41 != 0) {
        uVar35 = 0;
        iVar43 = 0;
        sVar11 = *(short *)(local_98 + uVar19 * 2);
        uVar22 = ((int)*(char *)(lVar16 + uVar28) + (int)*(short *)(local_98 + uVar28 * 2)) -
                 (int)sVar11;
        puVar31 = (ushort *)(lVar25 + 2);
        uVar28 = uVar42;
        uVar20 = uVar41 - 2;
        uVar2 = uVar22;
        while( true ) {
          uVar9 = *puVar31;
          iVar24 = (int)uVar35;
          iVar12 = (uVar9 + 1) * iVar24 + (int)sVar11;
          fVar49 = *(float *)(*(long *)(param_1 + 0x18) + (long)iVar12 * 4);
          if (ABS(fVar49) <= 1e-07) {
            fVar49 = *(float *)(&DAT_03cb5570 + (ulong)(fVar49 < 0.0) * 4);
            iVar48 = iVar48 + 1;
          }
          else {
            fVar49 = 1.0 / fVar49;
          }
          *(float *)(*(long *)(param_1 + 0x18) + (long)iVar12 * 4) = fVar49;
          iVar21 = (int)uVar28;
          if (1 < (long)(uVar42 - uVar35)) {
            lVar25 = *(long *)(param_1 + 0x18);
            fVar49 = *(float *)(lVar25 + (long)iVar12 * 4);
            if ((int)(uVar22 - iVar43) < 2) {
              *(float *)(lVar25 + (long)(int)(iVar12 + (uint)*puVar31) * 4) =
                   fVar49 * *(float *)(lVar25 + (long)(int)(iVar12 + (uint)*puVar31) * 4);
              if (iVar21 != 2) {
                if (bVar5 - 3 == iVar24) {
                  iVar23 = 2;
                }
                else {
                  uVar27 = 0;
                  do {
                    uVar39 = uVar27;
                    uVar27 = uVar39 + 2;
                    iVar23 = iVar12 + uVar27 * *puVar31;
                    *(float *)(*(long *)(param_1 + 0x18) + (long)iVar23 * 4) =
                         fVar49 * *(float *)(*(long *)(param_1 + 0x18) + (long)iVar23 * 4);
                    iVar23 = iVar12 + (uVar39 + 3) * (uint)*puVar31;
                    *(float *)(*(long *)(param_1 + 0x18) + (long)iVar23 * 4) =
                         fVar49 * *(float *)(*(long *)(param_1 + 0x18) + (long)iVar23 * 4);
                  } while ((uVar20 & 0xfffffffe) != uVar27);
                  iVar23 = uVar39 + 4;
                }
                if (((uVar41 - 2) - iVar24 & 1) != 0) {
                  iVar12 = iVar12 + iVar23 * (uint)*puVar31;
                  *(float *)(*(long *)(param_1 + 0x18) + (long)iVar12 * 4) =
                       fVar49 * *(float *)(*(long *)(param_1 + 0x18) + (long)iVar12 * 4);
                }
              }
            }
            else {
              uVar28 = (ulong)(uVar22 - iVar24) - 1 & 3;
              iVar13 = (int)sVar11 + iVar43 * (uVar9 + 1);
              iVar23 = 1;
              while( true ) {
                uVar9 = *puVar31;
                iVar14 = iVar12 + iVar23 * (uint)uVar9;
                fVar50 = fVar49 * *(float *)(lVar25 + (long)iVar14 * 4);
                *(float *)(lVar25 + (long)iVar14 * 4) = fVar50;
                lVar25 = *(long *)(param_1 + 0x18);
                if ((ulong)(uVar22 - iVar24) - 2 < 3) {
                  lVar47 = 1;
                }
                else {
                  pfVar18 = (float *)(lVar25 + 8 + (long)iVar13 * 4);
                  pfVar17 = (float *)(lVar25 + 8 + (long)(int)(iVar13 + iVar23 * (uint)uVar9) * 4);
                  uVar29 = 0;
                  do {
                    uVar32 = uVar29;
                    pfVar17[-1] = pfVar17[-1] - fVar50 * pfVar18[-1];
                    *pfVar17 = *pfVar17 - fVar50 * *pfVar18;
                    pfVar17[1] = pfVar17[1] - fVar50 * pfVar18[1];
                    pfVar1 = pfVar18 + 2;
                    pfVar18 = pfVar18 + 4;
                    uVar29 = uVar32 + 4;
                    pfVar17[2] = pfVar17[2] - fVar50 * *pfVar1;
                    pfVar17 = pfVar17 + 4;
                  } while (((ulong)uVar2 - 1 & 0xfffffffffffffffc) != uVar29);
                  lVar47 = uVar32 + 5;
                }
                if (uVar28 != 0) {
                  pfVar17 = (float *)(lVar25 + (lVar47 + (int)(iVar13 + iVar23 * (uint)uVar9)) * 4);
                  pfVar18 = (float *)(lVar25 + (long)iVar13 * 4 + lVar47 * 4);
                  uVar29 = uVar28;
                  do {
                    uVar29 = uVar29 - 1;
                    *pfVar17 = *pfVar17 - fVar50 * *pfVar18;
                    pfVar17 = pfVar17 + 1;
                    pfVar18 = pfVar18 + 1;
                  } while (uVar29 != 0);
                }
                iVar23 = iVar23 + 1;
                if (iVar23 == iVar21) break;
                lVar25 = *(long *)(param_1 + 0x18);
              }
            }
          }
          uVar35 = uVar35 + 1;
          if (uVar35 == uVar42) break;
          uVar28 = (ulong)(iVar21 - 1);
          iVar43 = iVar43 + 1;
          sVar11 = *(short *)(local_98 + uVar19 * 2);
          uVar20 = uVar20 - 1;
          uVar2 = uVar2 - 1;
        }
      }
      uVar19 = uVar26;
    } while (uVar26 != uVar4);
  }
  if (local_100 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1,lVar16);
  }
  else {
    uVar19 = lVar45 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_100 + 0x28) < uVar19) || (*(long *)(local_100 + 0x38) != uVar19 + lVar16))
    {
      if (lVar16 != 0) {
        if (*(ulong *)(local_100 + 0x28) < uVar19 + 0x40) {
          *(int *)(*(long *)(local_100 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_100 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_100 + 0x10) + 0x18))
                    (*(long **)(local_100 + 0x10),lVar16 - *(int *)(lVar16 + -4),uVar19 + 0x44);
        }
        else {
          if (*(long *)(local_100 + 0x38) == uVar19 + lVar16) {
            *(long *)(local_100 + 0x38) = lVar16;
            goto LAB_02fbb924;
          }
          FUN_031cf778(local_100,lVar16);
        }
      }
    }
    else {
      *(long *)(local_100 + 0x38) = lVar16;
      if (*(long *)(local_100 + 0x48) == lVar16) {
LAB_02fbb924:
        FUN_031cf578();
      }
    }
  }
  if (local_80 == local_98) {
    local_90 = local_90 & 0xffffffff00000000;
  }
  if (local_88 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
    goto LAB_02fbb9f4;
  }
  uVar19 = local_78 + 0x3fU & 0xffffffffffffffc0;
  if ((*(ulong *)(local_88 + 0x28) < uVar19) || (*(long *)(local_88 + 0x38) != uVar19 + local_80)) {
    if (local_80 == 0) goto LAB_02fbb9f4;
    if (*(ulong *)(local_88 + 0x28) < uVar19 + 0x40) {
      *(int *)(*(long *)(local_88 + 0x30) + 0x20) = *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1
      ;
      (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                (*(long **)(local_88 + 0x10),local_80 - *(int *)(local_80 + -4),uVar19 + 0x44);
      goto LAB_02fbb9f4;
    }
    if (*(long *)(local_88 + 0x38) != uVar19 + local_80) {
      FUN_031cf778();
      goto LAB_02fbb9f4;
    }
    *(long *)(local_88 + 0x38) = local_80;
  }
  else {
    *(long *)(local_88 + 0x38) = local_80;
    if (*(long *)(local_88 + 0x48) != local_80) goto LAB_02fbb9f4;
  }
  FUN_031cf578();
LAB_02fbb9f4:
  uVar19 = local_90;
  uVar26 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (long)uVar19) && (local_98 != 0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_98,uVar26 << 1);
  }
  return iVar48;
}


