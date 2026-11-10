/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02acd950; name: FUN_02acd950
 */


undefined8 FUN_02acd950(ulong *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  
  if (((DAT_04840580 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04840580), iVar6 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  lVar8 = DAT_04840570;
  DAT_04840568 = DAT_04840570;
  uVar10 = *(ulong *)(DAT_04840570 + 0x68);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar9 = *param_1;
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar17 = uVar10 - 1 & uVar9;
    }
    else {
      uVar17 = uVar9;
      if (uVar10 <= uVar9) {
        uVar17 = 0;
        if (uVar10 != 0) {
          uVar17 = uVar9 / uVar10;
        }
        uVar17 = uVar9 - uVar17 * uVar10;
      }
    }
    lVar14 = *(long *)(DAT_04840570 + 0x60);
    puVar12 = *(undefined8 **)(lVar14 + uVar17 * 8);
    if ((puVar12 != (undefined8 *)0x0) && (plVar18 = (long *)*puVar12, plVar18 != (long *)0x0)) {
      uVar13 = uVar10 - 1;
      if (uVar11 < 2) {
        do {
          if (plVar18[1] == uVar9) {
            if (plVar18[2] == uVar9) goto LAB_02acda84;
          }
          else if ((plVar18[1] & uVar13) != uVar17) {
            return 0;
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar18[1];
          if (uVar15 == uVar9) {
            if (plVar18[2] == uVar9) goto LAB_02acda84;
          }
          else {
            if (uVar10 <= uVar15) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar15 / uVar10;
              }
              uVar15 = uVar15 - uVar5 * uVar10;
            }
            if (uVar15 != uVar17) {
              return 0;
            }
          }
          plVar18 = (long *)*plVar18;
        } while (plVar18 != (long *)0x0);
      }
    }
  }
  return 0;
LAB_02acda84:
  if (uVar11 < 2) {
    uVar9 = uVar13 & uVar9;
  }
  else if (uVar10 <= uVar9) {
    uVar17 = 0;
    if (uVar10 != 0) {
      uVar17 = uVar9 / uVar10;
    }
    uVar9 = uVar9 - uVar17 * uVar10;
  }
  plVar7 = *(long **)(lVar14 + uVar9 * 8);
  do {
    plVar16 = plVar7;
    plVar7 = (long *)*plVar16;
  } while ((long *)*plVar16 != plVar18);
  if (plVar16 != (long *)(DAT_04840570 + 0x90)) {
    uVar17 = plVar16[1];
    if (uVar11 < 2) {
      uVar17 = uVar17 & uVar13;
    }
    else if (uVar10 <= uVar17) {
      uVar15 = 0;
      if (uVar10 != 0) {
        uVar15 = uVar17 / uVar10;
      }
      uVar17 = uVar17 - uVar15 * uVar10;
    }
    if (uVar17 == uVar9) goto LAB_02acdb28;
  }
  if (*plVar18 != 0) {
    uVar17 = *(ulong *)(*plVar18 + 8);
    if (uVar11 < 2) {
      uVar17 = uVar17 & uVar13;
    }
    else if (uVar10 <= uVar17) {
      uVar15 = 0;
      if (uVar10 != 0) {
        uVar15 = uVar17 / uVar10;
      }
      uVar17 = uVar17 - uVar15 * uVar10;
    }
    if (uVar17 == uVar9) goto LAB_02acdb28;
  }
  *(undefined8 *)(lVar14 + uVar9 * 8) = 0;
LAB_02acdb28:
  lVar14 = *plVar18;
  if (lVar14 != 0) {
    uVar17 = *(ulong *)(lVar14 + 8);
    if (uVar11 < 2) {
      uVar17 = uVar17 & uVar13;
    }
    else if (uVar10 <= uVar17) {
      uVar11 = 0;
      if (uVar10 != 0) {
        uVar11 = uVar17 / uVar10;
      }
      uVar17 = uVar17 - uVar11 * uVar10;
    }
    if (uVar17 != uVar9) {
      *(long **)(*(long *)(lVar8 + 0x60) + uVar17 * 8) = plVar16;
      lVar14 = *plVar18;
    }
  }
  *plVar16 = lVar14;
  *plVar18 = 0;
  *(long *)(lVar8 + 0xb8) = *(long *)(lVar8 + 0xb8) + -1;
  plVar7 = (long *)plVar18[3];
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
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  plVar7 = *(long **)(lVar8 + 0x98);
  uVar10 = (**(code **)(*plVar7 + 0xf8))(plVar7);
  if (((uVar10 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
    (**(code **)(*plVar7 + 0x18))(plVar7,plVar18,0x20,8);
  }
  else {
    FUN_00c48fe8(plVar7,plVar18,0x20,8);
  }
  return 1;
}


