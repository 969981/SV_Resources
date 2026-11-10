/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0141be1c; name: FUN_0141be1c
 */


void FUN_0141be1c(long param_1,long *param_2,long *param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar12 = *(ulong *)(param_1 + 0x40);
  lVar9 = *(long *)(param_1 + 8);
  plVar18 = (long *)(lVar9 + (uVar12 >> 6 & 0x3fffffffffffff8));
  if (*(long *)(param_1 + 0x10) == lVar9) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)(*plVar18 + (uVar12 & 0x1ff) * 8);
  }
  if (param_3 == plVar6) {
    uVar19 = 0;
LAB_0141be70:
    plVar16 = plVar18;
    plVar7 = plVar6;
  }
  else {
    uVar11 = ((long)param_3 - *param_2 >> 3) + ((long)param_2 - (long)plVar18) * 0x40;
    uVar19 = uVar11 - ((long)plVar6 - *plVar18 >> 3);
    if (uVar19 == 0) goto LAB_0141be70;
    if ((long)uVar11 < 1) {
      uVar14 = 0x1ff - uVar11;
      uVar11 = 0x3fe - uVar11;
      if (-1 < (long)uVar14) {
        uVar11 = uVar14;
      }
      plVar16 = plVar18 + -((long)uVar11 >> 9);
      plVar7 = (long *)(*plVar16 + ((uVar11 & 0x1ffffffffffffe00) - uVar14) * 8 + 0xff8);
    }
    else {
      plVar16 = (long *)((long)plVar18 + (uVar11 >> 6 & 0x3fffffffffffff8));
      plVar7 = (long *)(*plVar16 + (uVar11 & 0x1ff) * 8);
    }
  }
  auVar21._8_8_ = plVar7;
  auVar21._0_8_ = plVar16;
  lVar15 = (long)plVar7 - *plVar16;
  lVar13 = lVar15 >> 3;
  uVar11 = lVar13 + 1;
  if (*(long *)(param_1 + 0x48) - 1U >> 1 < uVar19) {
    if (lVar15 < -7) {
      uVar19 = 0x1fe - lVar13;
      uVar11 = 0x3fd - lVar13;
      if (-1 < (long)uVar19) {
        uVar11 = uVar19;
      }
      plVar16 = plVar16 + -((long)uVar11 >> 9);
      lVar13 = *plVar16 + ((uVar11 & 0x1ffffffffffffe00) - uVar19) * 8 + 0xff8;
    }
    else {
      plVar16 = (long *)((long)plVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      lVar13 = *plVar16 + (uVar11 & 0x1ff) * 8;
    }
    uVar12 = *(long *)(param_1 + 0x48) + uVar12;
    plVar18 = (long *)(lVar9 + (uVar12 >> 6 & 0x3fffffffffffff8));
    if (*(long *)(param_1 + 0x10) == lVar9) {
      lVar9 = 0;
    }
    else {
      lVar9 = *plVar18 + (uVar12 & 0x1ff) * 8;
    }
    if (lVar13 != lVar9) {
      lVar9 = ((lVar9 - *plVar18 >> 3) + ((long)plVar18 - (long)plVar16) * 0x40) -
              (lVar13 - *plVar16 >> 3);
      while (0 < lVar9) {
        lVar10 = (*plVar16 + 0x1000) - lVar13 >> 3;
        lVar15 = lVar9;
        lVar5 = lVar13 + lVar9 * 8;
        if (lVar10 <= lVar9) {
          lVar15 = lVar10;
          lVar5 = *plVar16 + 0x1000;
        }
        auVar21 = FUN_0141c6b0(lVar13,lVar5,auVar21._0_8_,auVar21._8_8_);
        plVar7 = auVar21._8_8_;
        lVar9 = lVar9 - lVar15;
        if (lVar15 != 0) {
          uVar12 = lVar15 + (lVar13 - *plVar16 >> 3);
          if ((long)uVar12 < 1) {
            uVar11 = 0x1ff - uVar12;
            uVar12 = 0x3fe - uVar12;
            if (-1 < (long)uVar11) {
              uVar12 = uVar11;
            }
            plVar16 = plVar16 + -((long)uVar12 >> 9);
            lVar13 = *plVar16 + ((uVar12 & 0x1ffffffffffffe00) - uVar11) * 8 + 0xff8;
          }
          else {
            plVar16 = (long *)((long)plVar16 + (uVar12 >> 6 & 0x3fffffffffffff8));
            lVar13 = *plVar16 + (uVar12 & 0x1ff) * 8;
          }
        }
      }
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0141c448;
    }
    lVar15 = *(long *)(param_1 + 0x48) + -1;
    *(long *)(param_1 + 0x48) = lVar15;
    lVar13 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
    lVar9 = 0;
    if (lVar13 != 0) {
      lVar9 = lVar13 * 0x40 + -1;
    }
    if (0x3ff < (ulong)(lVar9 - (*(long *)(param_1 + 0x40) + lVar15))) {
      plVar18 = *(long **)(param_1 + 0x50);
      uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x10) + -8);
      uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar12 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,uVar17,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar18,uVar17,0x1000,8);
      }
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
    }
  }
  else {
    if (lVar15 < -7) {
      uVar11 = 0x1fe - lVar13;
      uVar12 = 0x3fd - lVar13;
      if (-1 < (long)uVar11) {
        uVar12 = uVar11;
      }
      plVar8 = plVar16 + -((long)uVar12 >> 9);
      lVar9 = *plVar8 + ((uVar12 & 0x1ffffffffffffe00) - uVar11) * 8 + 0xff8;
    }
    else {
      plVar8 = (long *)((long)plVar16 + (uVar11 >> 6 & 0x3fffffffffffff8));
      lVar9 = *plVar8 + (uVar11 & 0x1ff) * 8;
    }
    auVar20._8_8_ = lVar9;
    auVar20._0_8_ = plVar8;
    if (plVar7 != plVar6) {
      lVar9 = (lVar13 + ((long)plVar16 - (long)plVar18) * 0x40) - ((long)plVar6 - *plVar18 >> 3);
      while (0 < lVar9) {
        plVar18 = (long *)*plVar16;
        if (plVar18 == plVar7) {
          plVar16 = plVar16 + -1;
          plVar18 = (long *)*plVar16;
          plVar7 = plVar18 + 0x200;
        }
        lVar15 = (long)plVar7 - (long)plVar18 >> 3;
        lVar13 = lVar9;
        plVar8 = plVar7 + -lVar9;
        if (lVar15 <= lVar9) {
          lVar13 = lVar15;
          plVar8 = plVar18;
        }
        plVar18 = plVar7 + -1;
        auVar20 = FUN_0141c470(plVar8,plVar7,auVar20._0_8_,auVar20._8_8_);
        lVar9 = lVar9 - lVar13;
        plVar7 = plVar18;
        if (lVar13 + -1 != 0) {
          uVar12 = ((long)plVar18 - *plVar16 >> 3) - (lVar13 + -1);
          if ((long)uVar12 < 1) {
            uVar11 = 0x1ff - uVar12;
            uVar12 = 0x3fe - uVar12;
            if (-1 < (long)uVar11) {
              uVar12 = uVar11;
            }
            plVar16 = plVar16 + -((long)uVar12 >> 9);
            plVar7 = (long *)(*plVar16 + ((uVar12 & 0x1ffffffffffffe00) - uVar11) * 8 + 0xff8);
          }
          else {
            plVar16 = (long *)((long)plVar16 + (uVar12 >> 6 & 0x3fffffffffffff8));
            plVar7 = (long *)(*plVar16 + (uVar12 & 0x1ff) * 8);
          }
        }
      }
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar6 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0141c448:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar12 = *(long *)(param_1 + 0x40) + 1;
    *(ulong *)(param_1 + 0x40) = uVar12;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -1;
    if (0x3ff < uVar12) {
      plVar18 = *(long **)(param_1 + 0x50);
      uVar17 = **(undefined8 **)(param_1 + 8);
      uVar12 = (**(code **)(*plVar18 + 0xf8))(plVar18);
      if (((uVar12 & 1) == 0) || (lVar9 = FUN_00c4e600(), *(int *)(lVar9 + 0x12c8) < 1)) {
        (**(code **)(*plVar18 + 0x18))(plVar18,uVar17,0x1000,8);
      }
      else {
        FUN_00c48fe8(plVar18,uVar17,0x1000,8);
      }
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x200;
    }
  }
  return;
}


