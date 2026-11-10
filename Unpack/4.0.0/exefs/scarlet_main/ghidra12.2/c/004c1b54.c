/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c1b54; name: FUN_004c1b54
 */


void FUN_004c1b54(long *param_1,ulong param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  byte *__s2;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  ulong uVar16;
  ulong uVar17;
  void *__s1;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined2 uVar21;
  undefined8 uVar22;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__next_prime(param_2);
  }
  uVar17 = param_1[1];
  if (param_2 <= uVar17) {
    if (param_2 < uVar17) {
      uVar6 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar17 < 3) ||
         (uVar22 = CONCAT17(POPCOUNT((char)(uVar17 >> 0x38)),
                            CONCAT16(POPCOUNT((char)(uVar17 >> 0x30)),
                                     CONCAT15(POPCOUNT((char)(uVar17 >> 0x28)),
                                              CONCAT14(POPCOUNT((char)(uVar17 >> 0x20)),
                                                       CONCAT13(POPCOUNT((char)(uVar17 >> 0x18)),
                                                                CONCAT12(POPCOUNT((char)(uVar17 >>
                                                                                        0x10)),
                                                                         CONCAT11(POPCOUNT((char)(
                                                  uVar17 >> 8)),POPCOUNT((char)uVar17)))))))),
         uVar21 = NEON_uaddlv(uVar22,1), 1 < (uint)CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21)))
      {
        uVar6 = std::__next_prime(uVar6);
        if (uVar6 <= param_2) {
          uVar6 = param_2;
        }
      }
      else {
        if (1 < uVar6) {
          uVar6 = 1L << (-LZCOUNT(uVar6 - 1) & 0x3fU);
        }
        if (uVar6 <= param_2) {
          uVar6 = param_2;
        }
      }
      param_2 = uVar6;
      if (param_2 < uVar17) goto LAB_004c1c3c;
    }
    return;
  }
LAB_004c1c3c:
  if (param_2 == 0) {
    lVar7 = *param_1;
    *param_1 = 0;
    if (lVar7 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    param_1[1] = 0;
  }
  else {
    lVar7 = FUN_0049e770(PTR_FUN_047cba38,param_2 << 3);
    lVar9 = *param_1;
    *param_1 = lVar7;
    if (lVar9 != 0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    uVar6 = param_2 - 1;
    uVar17 = param_2;
    if (param_2 == 0 || uVar6 == 0) {
      uVar17 = 1;
    }
    uVar10 = uVar17 & 3;
    param_1[1] = param_2;
    if (uVar17 - 1 < 3) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      do {
        lVar7 = uVar12 * 8;
        uVar12 = uVar12 + 4;
        *(undefined8 *)(*param_1 + lVar7) = 0;
        *(undefined8 *)(*param_1 + lVar7 + 8) = 0;
        *(undefined8 *)(*param_1 + lVar7 + 0x10) = 0;
        *(undefined8 *)(*param_1 + lVar7 + 0x18) = 0;
      } while ((uVar17 & 0xfffffffffffffffc) != uVar12);
    }
    if (uVar10 != 0) {
      lVar7 = uVar12 << 3;
      do {
        *(undefined8 *)(*param_1 + lVar7) = 0;
        uVar10 = uVar10 - 1;
        lVar7 = lVar7 + 8;
      } while (uVar10 != 0);
    }
    plVar18 = (long *)param_1[2];
    if (plVar18 != (long *)0x0) {
      uVar22 = CONCAT17(POPCOUNT((char)(param_2 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(param_2 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(param_2 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(param_2 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(param_2 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(param_2 >> 0x10
                                                                                    )),
                                                                     CONCAT11(POPCOUNT((char)(
                                                  param_2 >> 8)),POPCOUNT((char)param_2))))))));
      uVar21 = NEON_uaddlv(uVar22,1);
      uVar10 = CONCAT62((int6)((ulong)uVar22 >> 0x10),uVar21) & 0xffffffff;
      uVar17 = plVar18[1];
      if (uVar10 < 2) {
        uVar17 = uVar17 & uVar6;
      }
      else if (param_2 <= uVar17) {
        uVar12 = 0;
        if (param_2 != 0) {
          uVar12 = uVar17 / param_2;
        }
        uVar17 = uVar17 - uVar12 * param_2;
      }
      *(long **)(*param_1 + uVar17 * 8) = param_1 + 2;
      while (plVar19 = (long *)*plVar18, plVar19 != (long *)0x0) {
        uVar12 = plVar19[1];
        if (uVar10 < 2) {
          uVar12 = uVar12 & uVar6;
        }
        else if (param_2 <= uVar12) {
          uVar16 = 0;
          if (param_2 != 0) {
            uVar16 = uVar12 / param_2;
          }
          uVar12 = uVar12 - uVar16 * param_2;
        }
        if (uVar12 == uVar17) {
          plVar18 = plVar19;
        }
        else if (*(long *)(*param_1 + uVar12 * 8) == 0) {
          *(long **)(*param_1 + uVar12 * 8) = plVar18;
          plVar18 = plVar19;
          uVar17 = uVar12;
        }
        else {
          plVar11 = (long *)*plVar19;
          plVar20 = plVar19;
          if (plVar11 != (long *)0x0) {
            bVar3 = *(byte *)(plVar19 + 2);
            __n = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              __n = plVar19[3];
            }
            if ((bVar3 & 1) == 0) {
              if (__n == 0) {
                uVar16 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
                if ((*(byte *)(plVar11 + 2) & 1) != 0) {
                  uVar16 = plVar11[3];
                }
                while( true ) {
                  plVar8 = plVar11;
                  if (uVar16 != 0) break;
                  plVar11 = (long *)*plVar8;
                  plVar20 = plVar8;
                  if (plVar11 == (long *)0x0) break;
                  uVar16 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
                  if ((*(byte *)(plVar11 + 2) & 1) != 0) {
                    uVar16 = plVar11[3];
                  }
                }
              }
              else {
                plVar8 = plVar19;
                do {
                  plVar20 = plVar11;
                  bVar2 = *(byte *)(plVar20 + 2);
                  sVar1 = (ulong)(bVar2 >> 1);
                  if ((bVar2 & 1) != 0) {
                    sVar1 = plVar20[3];
                  }
                  if (__n != sVar1) {
LAB_004c1ef8:
                    plVar20 = plVar8;
                    break;
                  }
                  pcVar15 = (char *)plVar20[4];
                  if ((bVar2 & 1) == 0) {
                    pcVar15 = (char *)((long)plVar20 + 0x11);
                  }
                  pcVar14 = (char *)((long)plVar19 + 0x11);
                  uVar16 = (ulong)(bVar3 >> 1);
                  do {
                    if (*pcVar14 != *pcVar15) goto LAB_004c1ef8;
                    uVar16 = uVar16 - 1;
                    pcVar14 = pcVar14 + 1;
                    pcVar15 = pcVar15 + 1;
                  } while (uVar16 != 0);
                  plVar8 = plVar20;
                  plVar11 = (long *)*plVar20;
                } while ((long *)*plVar20 != (long *)0x0);
              }
            }
            else {
              pbVar13 = (byte *)(plVar11 + 2);
              bVar4 = (*pbVar13 & 1) == 0;
              sVar1 = (ulong)(*pbVar13 >> 1);
              if (!bVar4) {
                sVar1 = plVar11[3];
              }
              if (__n == 0) {
                while( true ) {
                  plVar8 = plVar11;
                  if (sVar1 != 0) break;
                  plVar11 = (long *)*plVar8;
                  plVar20 = plVar8;
                  if (plVar11 == (long *)0x0) break;
                  sVar1 = (ulong)(*(byte *)(plVar11 + 2) >> 1);
                  if ((*(byte *)(plVar11 + 2) & 1) != 0) {
                    sVar1 = plVar11[3];
                  }
                }
              }
              else if (__n == sVar1) {
                __s1 = (void *)plVar19[4];
                do {
                  plVar8 = plVar11;
                  __s2 = (byte *)plVar8[4];
                  if (bVar4) {
                    __s2 = pbVar13 + 1;
                  }
                  iVar5 = memcmp(__s1,__s2,__n);
                  if (iVar5 != 0) break;
                  plVar11 = (long *)*plVar8;
                  plVar20 = plVar8;
                  if (plVar11 == (long *)0x0) break;
                  pbVar13 = (byte *)(plVar11 + 2);
                  bVar4 = (*pbVar13 & 1) == 0;
                  sVar1 = (ulong)(*pbVar13 >> 1);
                  if (!bVar4) {
                    sVar1 = plVar11[3];
                  }
                } while (__n == sVar1);
              }
            }
          }
          *plVar18 = *plVar20;
          *plVar20 = **(long **)(*param_1 + uVar12 * 8);
          **(undefined8 **)(*param_1 + uVar12 * 8) = plVar19;
        }
      }
    }
  }
  return;
}


