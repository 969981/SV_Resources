/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001da6d0; name: FUN_001da6d0
 */


ulong FUN_001da6d0(long *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_c0 [12];
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [12];
  undefined1 auStack_9c [10];
  undefined1 auStack_92 [10];
  undefined1 auStack_88 [10];
  undefined1 auStack_7e [10];
  undefined1 auStack_74 [10];
  undefined1 auStack_6a [10];
  
  lVar12 = *param_1;
  iVar3 = *(int *)(lVar12 + 0x10f8);
  lVar15 = *(long *)(lVar12 + 0xf90);
  lVar17 = *(long *)(lVar12 + 0xf98);
  auVar18 = FUN_001e0dfc();
  lVar9 = auVar18._0_8_;
  iVar4 = FUN_001e0e84(lVar9,auVar18._8_8_,*(undefined8 *)(lVar12 + 0xff8),
                       *(undefined8 *)(lVar12 + 0x1000));
  lVar8 = (long)iVar4;
  lVar1 = lVar8 / 1000000;
  *(long *)(lVar12 + 0xfb0) = lVar8;
  iVar5 = 999;
  if (0x20c49ba5e353f6 < lVar15) {
    iVar5 = 999999;
  }
  lVar11 = lVar15 * 1000;
  lVar2 = lVar8 / 1000;
  if (0x20c49ba5e353f6 < lVar15) {
    lVar11 = lVar15;
    lVar2 = lVar1;
  }
  if (iVar4 <= iVar5) {
    lVar2 = 1;
  }
  lVar15 = 0;
  if (lVar2 != 0) {
    lVar15 = lVar11 / lVar2;
  }
  *(long *)(lVar12 + 0xfb8) = lVar15;
  lVar15 = lVar17 * 1000;
  lVar8 = lVar8 / 1000;
  iVar5 = 999;
  if (0x20c49ba5e353f6 < lVar17) {
    lVar15 = lVar17;
    lVar8 = lVar1;
    iVar5 = 999999;
  }
  if (iVar4 <= iVar5) {
    lVar8 = 1;
  }
  lVar17 = 0;
  if (lVar8 != 0) {
    lVar17 = lVar15 / lVar8;
  }
  *(long *)(lVar12 + 0xfc0) = lVar17;
  if (*(long *)(lVar12 + 0xf78) == lVar9) {
    bVar7 = false;
  }
  else {
    iVar3 = iVar3 % 6;
    lVar8 = lVar12 + 0xf78;
    *(long *)(lVar12 + 0xf78) = lVar9;
    plVar16 = (long *)(lVar8 + (long)iVar3 * 8 + 0xf0);
    *plVar16 = *(long *)(lVar12 + 0xf98) + *(long *)(lVar12 + 0xf90);
    *(undefined1 (*) [16])(lVar8 + (long)iVar3 * 0x10 + 0x120) = auVar18;
    iVar5 = *(int *)(lVar12 + 0x10f8);
    *(int *)(lVar12 + 0x10f8) = iVar5 + 1;
    if (iVar5 == 0) {
      lVar9 = *(long *)(lVar12 + 0xfb8) + *(long *)(lVar12 + 0xfc0);
    }
    else {
      uVar10 = (iVar5 + 1) % 6;
      if (iVar5 < 5) {
        uVar10 = 0;
      }
      lVar15 = lVar8 + (ulong)uVar10 * 0x10;
      iVar5 = FUN_001e0e28(lVar9,auVar18._8_8_,*(undefined8 *)(lVar15 + 0x120),
                           *(undefined8 *)(lVar15 + 0x128));
      if (iVar5 == 0) {
        iVar5 = 1;
      }
      lVar8 = *plVar16 - *(long *)(lVar8 + (ulong)uVar10 * 8 + 0xf0);
      if (lVar8 < 0x418938) {
        lVar9 = 0;
        if ((long)iVar5 != 0) {
          lVar9 = (lVar8 * 1000) / (long)iVar5;
        }
      }
      else {
        lVar9 = (long)((double)lVar8 / ((double)iVar5 / DAT_03cb5508));
      }
    }
    *(long *)(lVar12 + 4000) = lVar9;
    bVar7 = true;
  }
  uVar10 = *(uint *)(lVar12 + 0xfac);
  if ((uVar10 >> 4 & 1) == 0) {
    if (*(long *)(lVar12 + 0x730) == 0) {
      if (*(long *)(lVar12 + 0x728) != 0) {
        FUN_001d14e0(lVar12,1);
        uVar6 = (**(code **)(lVar12 + 0x728))
                          ((double)*(long *)(lVar12 + 0xf80),(double)*(long *)(lVar12 + 0xf90),
                           (double)*(long *)(lVar12 + 0xf88),(double)*(long *)(lVar12 + 0xf98),
                           *(undefined8 *)(lVar12 + 0x798));
        goto LAB_001da944;
      }
      if (bVar7) {
        if ((uVar10 >> 7 & 1) == 0) {
          if (*(long *)(lVar12 + 0x14f8) != 0) {
            FUN_001ce618(*(undefined8 *)(lVar12 + 0x668),
                         "** Resuming transfer from byte position %ld\n");
          }
          FUN_001ce618(*(undefined8 *)(lVar12 + 0x668),
                       "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                      );
          uVar10 = *(uint *)(lVar12 + 0xfac) | 0x80;
          *(uint *)(lVar12 + 0xfac) = uVar10;
        }
        if (((uVar10 >> 5 & 1) == 0) || (lVar9 = *(long *)(lVar12 + 0xfc0), lVar9 < 1)) {
          lVar9 = 0;
          lVar8 = 0;
        }
        else {
          uVar6 = *(ulong *)(lVar12 + 0xf88);
          lVar8 = 0;
          if (lVar9 != 0) {
            lVar8 = (long)uVar6 / lVar9;
          }
          if ((long)uVar6 < 0x2711) {
            if ((long)uVar6 < 1) {
              lVar9 = 0;
              goto LAB_001daa50;
            }
            lVar15 = *(long *)(lVar12 + 0xf98) * 100;
          }
          else {
            lVar15 = *(long *)(lVar12 + 0xf98);
            uVar6 = uVar6 / 100;
          }
          lVar9 = 0;
          if (uVar6 != 0) {
            lVar9 = lVar15 / (long)uVar6;
          }
        }
LAB_001daa50:
        if (((uVar10 >> 6 & 1) == 0) || (lVar15 = *(long *)(lVar12 + 0xfb8), lVar15 < 1)) {
          lVar15 = 0;
          lVar17 = 0;
        }
        else {
          uVar6 = *(ulong *)(lVar12 + 0xf80);
          lVar17 = 0;
          if (lVar15 != 0) {
            lVar17 = (long)uVar6 / lVar15;
          }
          if ((long)uVar6 < 0x2711) {
            if ((long)uVar6 < 1) {
              lVar15 = 0;
              goto LAB_001daac4;
            }
            lVar11 = *(long *)(lVar12 + 0xf90) * 100;
          }
          else {
            lVar11 = *(long *)(lVar12 + 0xf90);
            uVar6 = uVar6 / 100;
          }
          lVar15 = 0;
          if (uVar6 != 0) {
            lVar15 = lVar11 / (long)uVar6;
          }
        }
LAB_001daac4:
        if (lVar8 <= lVar17) {
          lVar8 = lVar17;
        }
        lVar17 = lVar8 - lVar1;
        if (lVar8 < 1) {
          lVar17 = 0;
        }
        FUN_001daf3c(auStack_a8,lVar17);
        FUN_001daf3c(auStack_b4,lVar8);
        FUN_001daf3c(auStack_c0,lVar1);
        lVar1 = 0xf98;
        if ((*(uint *)(lVar12 + 0xfac) & 0x20) != 0) {
          lVar1 = 0xf88;
        }
        lVar8 = 0xf90;
        if ((*(uint *)(lVar12 + 0xfac) & 0x40) != 0) {
          lVar8 = 0xf80;
        }
        uVar6 = *(long *)(lVar12 + lVar8) + *(long *)(lVar12 + lVar1);
        lVar1 = *(long *)(lVar12 + 0xf98) + *(long *)(lVar12 + 0xf90);
        if ((long)uVar6 < 0x2711) {
          if ((long)uVar6 < 1) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            if (uVar6 != 0) {
              uVar13 = (lVar1 * 100) / (long)uVar6;
            }
          }
        }
        else {
          uVar13 = 0;
          if (uVar6 / 100 != 0) {
            uVar13 = lVar1 / (long)(uVar6 / 100);
          }
        }
        uVar14 = *(undefined8 *)(lVar12 + 0x668);
        FUN_001db030(uVar6,auStack_88);
        FUN_001db030(*(undefined8 *)(lVar12 + 0xf90),auStack_9c);
        FUN_001db030(*(undefined8 *)(lVar12 + 0xf98),auStack_92);
        FUN_001db030(*(undefined8 *)(lVar12 + 0xfb8),auStack_7e);
        FUN_001db030(*(undefined8 *)(lVar12 + 0xfc0),auStack_74);
        FUN_001db030(*(undefined8 *)(lVar12 + 4000),auStack_6a);
        FUN_001ce618(uVar14,"\r%3ld %s  %3ld %s  %3ld %s  %s  %s %s %s %s %s",uVar13,auStack_88,
                     lVar15,auStack_9c,lVar9,auStack_92,auStack_7e,auStack_74,auStack_b4,auStack_c0,
                     auStack_a8,auStack_6a);
        FUN_001ed320(*(undefined8 *)(lVar12 + 0x668));
        bVar7 = true;
      }
      else {
        uVar13 = 0;
      }
    }
    else {
      FUN_001d14e0(lVar12,1);
      uVar6 = (**(code **)(lVar12 + 0x730))
                        (*(undefined8 *)(lVar12 + 0x798),*(undefined8 *)(lVar12 + 0xf80),
                         *(undefined8 *)(lVar12 + 0xf90),*(undefined8 *)(lVar12 + 0xf88),
                         *(undefined8 *)(lVar12 + 0xf98));
LAB_001da944:
      uVar13 = uVar6 & 0xffffffff;
      FUN_001d14e0(lVar12,0);
      if ((int)uVar6 != 0) {
        FUN_001db9c8(lVar12,"Callback aborted");
      }
      bVar7 = false;
    }
    if (!bVar7) goto LAB_001da974;
  }
  uVar13 = 0;
LAB_001da974:
  return uVar13 & 0xffffffff;
}


