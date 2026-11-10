/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01228988; name: FUN_01228988
 */


void FUN_01228988(long param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
  uVar11 = *(ulong *)(param_1 + 0xb8);
  lVar5 = *(long *)(param_1 + 0x80);
  plVar22 = (long *)(lVar5 + (uVar11 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x88) == lVar5) {
    plVar20 = (long *)0x0;
    plVar9 = (long *)0x0;
  }
  else {
    uVar13 = *(long *)(param_1 + 0xc0) + uVar11;
    plVar20 = (long *)(*plVar22 + (uVar11 & 0x1ff) * 8);
    plVar9 = (long *)(*(long *)(lVar5 + (uVar13 >> 6 & 0x3fffffffffffff8)) + (uVar13 & 0x1ff) * 8);
  }
  while ((plVar9 != plVar20 && (lVar5 = FUN_00cf8198(*plVar20), lVar5 != param_2))) {
    plVar20 = plVar20 + 1;
    if ((long)plVar20 - *plVar22 == 0x1000) {
      plVar22 = plVar22 + 1;
      plVar20 = (long *)*plVar22;
    }
  }
  if (*(long *)(param_1 + 0x88) == *(long *)(param_1 + 0x80)) {
    plVar9 = (long *)0x0;
  }
  else {
    uVar11 = *(long *)(param_1 + 0xb8) + *(long *)(param_1 + 0xc0);
    plVar9 = (long *)(*(long *)(*(long *)(param_1 + 0x80) + (uVar11 >> 6 & 0x3fffffffffffff8)) +
                     (uVar11 & 0x1ff) * 8);
  }
  if (plVar9 == plVar20) goto LAB_01228b84;
  uVar11 = *(ulong *)(param_1 + 0x48);
  if (uVar11 == 0) {
    FUN_0122c734(param_1 + 8);
    uVar11 = *(ulong *)(param_1 + 0x48);
  }
  plVar9 = (long *)(*(long *)(param_1 + 0x10) + (uVar11 >> 6 & 0x3fffffffffffff8));
  lVar15 = *plVar9;
  lVar5 = 0;
  if (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x10)) {
    lVar5 = lVar15 + (uVar11 & 0x1ff) * 8;
  }
  if (lVar5 == lVar15) {
    lVar5 = plVar9[-1] + 0x1000;
  }
  FUN_012331e0(param_1 + 0x58,lVar5 + -8,plVar20);
  uVar11 = *(ulong *)(param_1 + 0xb8);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  lVar5 = *(long *)(param_1 + 0x80);
  plVar9 = (long *)(lVar5 + (uVar11 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x88) == lVar5) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)(*plVar9 + (uVar11 & 0x1ff) * 8);
  }
  if (plVar20 == plVar6) {
    uVar16 = 0;
LAB_01228af0:
    plVar20 = plVar9;
    plVar22 = plVar6;
  }
  else {
    uVar13 = ((long)plVar20 - *plVar22 >> 3) + ((long)plVar22 - (long)plVar9) * 0x40;
    uVar16 = uVar13 - ((long)plVar6 - *plVar9 >> 3);
    if (uVar16 == 0) goto LAB_01228af0;
    if ((long)uVar13 < 1) {
      uVar17 = 0x1ff - uVar13;
      uVar13 = 0x3fe - uVar13;
      if (-1 < (long)uVar17) {
        uVar13 = uVar17;
      }
      plVar20 = plVar9 + -((long)uVar13 >> 9);
      plVar22 = (long *)(*plVar20 + ((uVar13 & 0x1ffffffffffffe00) - uVar17) * 8 + 0xff8);
    }
    else {
      plVar20 = (long *)((long)plVar9 + (uVar13 >> 6 & 0x3fffffffffffff8));
      plVar22 = (long *)(*plVar20 + (uVar13 & 0x1ff) * 8);
    }
  }
  lVar18 = (long)plVar22 - *plVar20;
  lVar15 = lVar18 >> 3;
  uVar13 = lVar15 + 1;
  if (*(long *)(param_1 + 0xc0) - 1U >> 1 < uVar16) {
    if (lVar18 < -7) {
      uVar16 = 0x1fe - lVar15;
      uVar13 = 0x3fd - lVar15;
      if (-1 < (long)uVar16) {
        uVar13 = uVar16;
      }
      plVar6 = plVar20 + -((long)uVar13 >> 9);
      plVar9 = (long *)(*plVar6 + ((uVar13 & 0x1ffffffffffffe00) - uVar16) * 8 + 0xff8);
    }
    else {
      plVar6 = (long *)((long)plVar20 + (uVar13 >> 6 & 0x3fffffffffffff8));
      plVar9 = (long *)(*plVar6 + (uVar13 & 0x1ff) * 8);
    }
    uVar11 = *(long *)(param_1 + 0xc0) + uVar11;
    plVar23 = (long *)(lVar5 + (uVar11 >> 6 & 0x3fffffffffffff8));
    if (*(long *)(param_1 + 0x88) == lVar5) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(*plVar23 + (uVar11 & 0x1ff) * 8);
    }
    if (plVar9 != plVar10) {
      lVar5 = (((long)plVar10 - *plVar23 >> 3) + ((long)plVar23 - (long)plVar6) * 0x40) -
              ((long)plVar9 - *plVar6 >> 3);
      while (0 < lVar5) {
        lVar18 = (*plVar6 + 0x1000) - (long)plVar9 >> 3;
        lVar15 = lVar5;
        plVar23 = plVar9 + lVar5;
        if (lVar18 <= lVar5) {
          lVar15 = lVar18;
          plVar23 = (long *)(*plVar6 + 0x1000);
        }
        if (plVar23 != plVar9) {
          plVar10 = plVar9;
          do {
            lVar14 = (long)plVar23 - (long)plVar10 >> 3;
            lVar12 = (*plVar20 - (long)plVar22) + 0x1000;
            lVar18 = lVar12 >> 3;
            plVar7 = (long *)((long)plVar10 + lVar12);
            if (lVar14 <= lVar18) {
              lVar18 = lVar14;
              plVar7 = plVar23;
            }
            if (plVar10 != plVar7) {
              plVar19 = plVar22;
              do {
                plVar8 = (long *)*plVar19;
                *plVar19 = 0;
                if (plVar8 != (long *)0x0) {
                  lVar12 = plVar8[6];
                  psVar1 = (short *)(lVar12 + 0x1a);
                  do {
                    sVar2 = *psVar1;
                    cVar3 = '\x01';
                    bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                    if (bVar4) {
                      *psVar1 = sVar2 + -1;
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                  if (sVar2 == 1) {
                    *(undefined8 *)(lVar12 + 0x10) = 0;
                    (**(code **)(*plVar8 + 0x50))();
                  }
                  else if (sVar2 == 0) goto LAB_012292ec;
                }
                lVar12 = *plVar10;
                plVar8 = plVar10 + 1;
                *plVar10 = 0;
                *plVar19 = lVar12;
                plVar19 = plVar19 + 1;
                plVar10 = plVar8;
              } while (plVar8 != plVar7);
            }
            if (lVar18 != 0) {
              uVar11 = lVar18 + ((long)plVar22 - *plVar20 >> 3);
              if ((long)uVar11 < 1) {
                uVar13 = 0x1ff - uVar11;
                uVar11 = 0x3fe - uVar11;
                if (-1 < (long)uVar13) {
                  uVar11 = uVar13;
                }
                plVar20 = plVar20 + -((long)uVar11 >> 9);
                plVar22 = (long *)(*plVar20 + ((uVar11 & 0x1ffffffffffffe00) - uVar13) * 8 + 0xff8);
              }
              else {
                plVar20 = (long *)((long)plVar20 + (uVar11 >> 6 & 0x3fffffffffffff8));
                plVar22 = (long *)(*plVar20 + (uVar11 & 0x1ff) * 8);
              }
            }
            plVar10 = plVar7;
          } while (plVar7 != plVar23);
        }
        lVar5 = lVar5 - lVar15;
        if (lVar15 != 0) {
          uVar11 = lVar15 + ((long)plVar9 - *plVar6 >> 3);
          if ((long)uVar11 < 1) {
            uVar13 = 0x1ff - uVar11;
            uVar11 = 0x3fe - uVar11;
            if (-1 < (long)uVar13) {
              uVar11 = uVar13;
            }
            plVar6 = plVar6 + -((long)uVar11 >> 9);
            plVar9 = (long *)(*plVar6 + ((uVar11 & 0x1ffffffffffffe00) - uVar13) * 8 + 0xff8);
          }
          else {
            plVar6 = (long *)((long)plVar6 + (uVar11 >> 6 & 0x3fffffffffffff8));
            plVar9 = (long *)(*plVar6 + (uVar11 & 0x1ff) * 8);
          }
        }
      }
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) {
      lVar5 = plVar22[6];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*plVar22 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_012292ec;
    }
    lVar18 = *(long *)(param_1 + 0xc0) + -1;
    *(long *)(param_1 + 0xc0) = lVar18;
    lVar15 = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80);
    lVar5 = 0;
    if (lVar15 != 0) {
      lVar5 = lVar15 * 0x40 + -1;
    }
    if (0x3ff < (ulong)(lVar5 - (*(long *)(param_1 + 0xb8) + lVar18))) {
      plVar22 = *(long **)(param_1 + 200);
      uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x88) + -8);
      uVar11 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar11 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,uVar21,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar22,uVar21,0x1000,8);
      }
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -8;
    }
  }
  else {
    if (lVar18 < -7) {
      uVar13 = 0x1fe - lVar15;
      uVar11 = 0x3fd - lVar15;
      if (-1 < (long)uVar13) {
        uVar11 = uVar13;
      }
      plVar23 = plVar20 + -((long)uVar11 >> 9);
      lVar5 = *plVar23 + ((uVar11 & 0x1ffffffffffffe00) - uVar13) * 8 + 0xff8;
    }
    else {
      plVar23 = (long *)((long)plVar20 + (uVar13 >> 6 & 0x3fffffffffffff8));
      lVar5 = *plVar23 + (uVar13 & 0x1ff) * 8;
    }
    if (plVar22 != plVar6) {
      lVar15 = (lVar15 + ((long)plVar20 - (long)plVar9) * 0x40) - ((long)plVar6 - *plVar9 >> 3);
      while (0 < lVar15) {
        plVar9 = (long *)*plVar20;
        if (plVar9 == plVar22) {
          plVar20 = plVar20 + -1;
          plVar9 = (long *)*plVar20;
          plVar22 = plVar9 + 0x200;
        }
        lVar12 = (long)plVar22 - (long)plVar9 >> 3;
        lVar18 = lVar15;
        plVar10 = plVar22 + -lVar15;
        if (lVar12 <= lVar15) {
          lVar18 = lVar12;
          plVar10 = plVar9;
        }
        if (plVar22 != plVar10) {
          plVar9 = plVar22;
          do {
            lVar12 = lVar5 - *plVar23 >> 3;
            if (lVar5 - *plVar23 < 9) {
              uVar13 = 0x200 - lVar12;
              uVar11 = 0x3ff - lVar12;
              if (-1 < (long)uVar13) {
                uVar11 = uVar13;
              }
              plVar7 = plVar23 + -((long)uVar11 >> 9);
              lVar12 = *plVar7 + ((uVar11 & 0x1ffffffffffffe00) - uVar13) * 8 + 0xff8;
            }
            else {
              plVar7 = (long *)((long)plVar23 + (lVar12 - 1U >> 6 & 0x3fffffffffffff8));
              lVar12 = *plVar7 + (lVar12 - 1U & 0x1ff) * 8;
            }
            plVar19 = (long *)(lVar12 + 8);
            lVar14 = (long)plVar9 - (long)plVar10 >> 3;
            lVar12 = (long)plVar19 - *plVar7 >> 3;
            plVar8 = plVar9;
            plVar9 = (long *)((long)plVar9 - ((long)plVar19 - *plVar7));
            if (lVar14 <= lVar12) {
              lVar12 = lVar14;
              plVar9 = plVar10;
            }
            while (plVar8 != plVar9) {
              plVar19 = plVar19 + -1;
              plVar7 = (long *)*plVar19;
              *plVar19 = 0;
              if (plVar7 != (long *)0x0) {
                lVar14 = plVar7[6];
                psVar1 = (short *)(lVar14 + 0x1a);
                do {
                  sVar2 = *psVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
                  if (bVar4) {
                    *psVar1 = sVar2 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (sVar2 == 1) {
                  *(undefined8 *)(lVar14 + 0x10) = 0;
                  (**(code **)(*plVar7 + 0x50))();
                }
                else if (sVar2 == 0) goto LAB_012292ec;
              }
              plVar8 = plVar8 + -1;
              lVar14 = *plVar8;
              *plVar8 = 0;
              *plVar19 = lVar14;
            }
            if (lVar12 != 0) {
              uVar11 = (lVar5 - *plVar23 >> 3) - lVar12;
              if ((long)uVar11 < 1) {
                uVar13 = 0x1ff - uVar11;
                uVar11 = 0x3fe - uVar11;
                if (-1 < (long)uVar13) {
                  uVar11 = uVar13;
                }
                plVar23 = plVar23 + -((long)uVar11 >> 9);
                lVar5 = *plVar23 + ((uVar11 & 0x1ffffffffffffe00) - uVar13) * 8 + 0xff8;
              }
              else {
                plVar23 = (long *)((long)plVar23 + (uVar11 >> 6 & 0x3fffffffffffff8));
                lVar5 = *plVar23 + (uVar11 & 0x1ff) * 8;
              }
            }
          } while (plVar9 != plVar10);
        }
        plVar22 = plVar22 + -1;
        lVar15 = lVar15 - lVar18;
        if (lVar18 + -1 != 0) {
          uVar11 = ((long)plVar22 - *plVar20 >> 3) - (lVar18 + -1);
          if ((long)uVar11 < 1) {
            uVar13 = 0x1ff - uVar11;
            uVar11 = 0x3fe - uVar11;
            if (-1 < (long)uVar13) {
              uVar11 = uVar13;
            }
            plVar20 = plVar20 + -((long)uVar11 >> 9);
            plVar22 = (long *)(*plVar20 + ((uVar11 & 0x1ffffffffffffe00) - uVar13) * 8 + 0xff8);
          }
          else {
            plVar20 = (long *)((long)plVar20 + (uVar11 >> 6 & 0x3fffffffffffff8));
            plVar22 = (long *)(*plVar20 + (uVar11 & 0x1ff) * 8);
          }
        }
      }
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      lVar5 = plVar6[6];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_012292ec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar11 = *(long *)(param_1 + 0xb8) + 1;
    *(ulong *)(param_1 + 0xb8) = uVar11;
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + -1;
    if (0x3ff < uVar11) {
      plVar22 = *(long **)(param_1 + 200);
      uVar21 = **(undefined8 **)(param_1 + 0x80);
      uVar11 = (**(code **)(*plVar22 + 0xf8))(plVar22);
      if (((uVar11 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar22 + 0x18))(plVar22,uVar21,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar22,uVar21,0x1000,8);
      }
      *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 8;
      *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -0x200;
    }
  }
LAB_01228b84:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
  return;
}


