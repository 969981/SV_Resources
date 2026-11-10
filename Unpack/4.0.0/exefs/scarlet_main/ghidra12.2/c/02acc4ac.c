/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02acc4ac; name: FUN_02acc4ac
 */


void FUN_02acc4ac(void)

{
  long *plVar1;
  byte bVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  short sVar14;
  int iVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  int *piVar23;
  long *plVar24;
  uint uVar25;
  long *local_70;
  long *local_68;
  
  puVar9 = PTR_DAT_047d4c98;
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar15 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar13 = PTR_DAT_047d4ca8;
  puVar10 = PTR_DAT_047d4ca0;
  lVar18 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar18;
  puVar12 = PTR_DAT_047d4ce8;
  puVar11 = PTR_DAT_047d4ce0;
  plVar24 = *(long **)(lVar18 + 0x1c0);
  plVar1 = *(long **)(lVar18 + 0x1c8);
  do {
    if (plVar24 == plVar1) {
      return;
    }
    lVar18 = *plVar24;
    plVar16 = (long *)(*(code *)**(undefined8 **)(lVar18 + 0x28))((undefined8 *)(lVar18 + 0x28));
    if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
      uVar17 = FUN_01b3fb0c();
      *(undefined8 *)puVar12 = uVar17;
      __cxa_guard_release(puVar11);
    }
    for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      if (plVar16 == (long *)puVar12) {
        if (*(char *)(lVar18 + 0xa3) != '\0') {
          return;
        }
        if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar15 != 0)) {
          FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d4c98);
        }
        lVar19 = *(long *)puVar10;
        *(long *)puVar13 = lVar19;
        puVar12 = PTR_DAT_047d8f00;
        puVar11 = PTR_DAT_047d8ef8;
        plVar24 = *(long **)(lVar19 + 0x1c0);
        plVar1 = *(long **)(lVar19 + 0x1c8);
        goto joined_r0x02acc594;
      }
    }
    plVar24 = plVar24 + 1;
  } while( true );
joined_r0x02acc594:
  if (plVar24 == plVar1) {
    lVar19 = 0;
LAB_02acc610:
    if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar20 = *(long *)puVar10;
    *(long *)puVar13 = lVar20;
    puVar12 = PTR_DAT_047d4c00;
    puVar11 = PTR_DAT_047d4bf8;
    plVar1 = *(long **)(lVar20 + 0x1c8);
    for (plVar24 = *(long **)(lVar20 + 0x1c0); plVar24 != plVar1; plVar24 = plVar24 + 1) {
      lVar20 = *plVar24;
      plVar16 = (long *)(*(code *)**(undefined8 **)(lVar20 + 0x28))((undefined8 *)(lVar20 + 0x28));
      if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
        uVar17 = FUN_01b3fb0c();
        *(undefined8 *)puVar12 = uVar17;
        __cxa_guard_release(puVar11);
      }
      for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        if (plVar16 == (long *)puVar12) goto LAB_02acc6b0;
      }
    }
    lVar20 = 0;
LAB_02acc6b0:
    if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar15 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    lVar21 = *(long *)puVar10;
    *(long *)puVar13 = lVar21;
    puVar10 = PTR_DAT_047d4bd0;
    puVar9 = PTR_DAT_047d4bc8;
    plVar24 = *(long **)(lVar21 + 0x1c0);
    plVar1 = *(long **)(lVar21 + 0x1c8);
    do {
      if (plVar24 == plVar1) {
        return;
      }
      plVar16 = (long *)(*(code *)**(undefined8 **)(*plVar24 + 0x28))();
      if (((*puVar9 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar9), iVar15 != 0)) {
        uVar17 = FUN_01b3fb0c();
        *(undefined8 *)puVar10 = uVar17;
        __cxa_guard_release(puVar9);
      }
      for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        if (plVar16 == (long *)puVar10) {
          if (lVar19 == 0) {
            return;
          }
          if (lVar20 == 0) {
            return;
          }
          if (((*PTR_DAT_047d8550 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_047d8550), iVar15 != 0)) {
            FUN_00100190(PTR_LAB_047d8568,PTR_DAT_047d8558,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8550);
          }
          *(undefined8 *)PTR_DAT_047d8560 = *(undefined8 *)PTR_DAT_047d8558;
          FUN_01dc0384(&local_68);
          bVar8 = false;
          bVar7 = false;
          uVar25 = 0;
          goto LAB_02acc780;
        }
      }
      plVar24 = plVar24 + 1;
    } while( true );
  }
  lVar19 = *plVar24;
  plVar16 = (long *)(*(code *)**(undefined8 **)(lVar19 + 0x28))((undefined8 *)(lVar19 + 0x28));
  if (((*puVar11 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar11), iVar15 != 0)) {
    uVar17 = FUN_01b3fb0c();
    *(undefined8 *)puVar12 = uVar17;
    __cxa_guard_release(puVar11);
  }
  for (; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
    if (plVar16 == (long *)puVar12) goto LAB_02acc610;
  }
  plVar24 = plVar24 + 1;
  goto joined_r0x02acc594;
LAB_02acc780:
  do {
    iVar15 = 0;
    do {
      plVar24 = local_68;
      if ((!(bool)(bVar8 ^ 1U)) && (bVar7)) break;
      local_70 = local_68;
      if (local_68 == (long *)0x0) {
        FUN_00f139bc(lVar19,&local_70,uVar25,iVar15);
      }
      else {
        plVar1 = local_68 + 5;
        do {
          lVar21 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = (int)lVar21 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((int)lVar21 == -1) goto LAB_02accc68;
        FUN_00f139bc(lVar19,&local_70,uVar25,iVar15);
        if (plVar24 != (long *)0x0) {
          plVar1 = plVar24 + 5;
          do {
            lVar21 = *plVar1;
            iVar6 = (int)lVar21 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
          else if ((int)lVar21 == 0) goto LAB_02accc90;
        }
      }
      plVar24 = local_68;
      lVar21 = *(long *)(local_68[0xe] + 0x10);
      uVar3 = *(ushort *)(lVar21 + 4);
      if ((uVar3 >> 2 & 1) == 0) {
        sVar14 = FUN_00cf44f4();
        if (sVar14 != 0) {
          lVar21 = *(long *)(plVar24[0xe] + 0x10);
          uVar3 = *(ushort *)(lVar21 + 4);
          if ((uVar3 >> 2 & 1) != 0) goto LAB_02acc820;
        }
      }
      else {
LAB_02acc820:
        *(ushort *)(lVar21 + 4) = uVar3 & 0xfffb;
        sVar14 = FUN_00cf44f4(plVar24[0xe]);
        *(ushort *)(*(long *)(plVar24[0xe] + 0x10) + 4) =
             *(ushort *)(*(long *)(plVar24[0xe] + 0x10) + 4) | 4;
        if ((bool)(sVar14 == 0x3d4 & (bVar8 ^ 1U))) {
          bVar8 = true;
        }
        else {
          bVar7 = (bool)(bVar7 | sVar14 == 0x3db);
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != 0x1e);
  } while ((uVar25 < 0x1f) && (uVar25 = uVar25 + 1, !(bool)(bVar7 & bVar8)));
  if (local_68 != (long *)0x0) {
    plVar24 = local_68 + 5;
    do {
      lVar19 = *plVar24;
      iVar15 = (int)lVar19 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
    else if ((int)lVar19 == 0) goto LAB_02accc90;
  }
  if (((DAT_04840580 & 1) == 0) && (iVar15 = __cxa_guard_acquire(&DAT_04840580), iVar15 != 0)) {
    FUN_00100190(&LAB_02ace3a0,&DAT_04840570,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840580);
  }
  DAT_04840568 = DAT_04840570;
  plVar24 = *(long **)(DAT_04840570 + 0x28);
  if (plVar24 != (long *)0x0) {
    plVar1 = plVar24 + 5;
    do {
      lVar19 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar19 == -1) {
LAB_02accc68:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    bVar2 = *(byte *)(plVar24 + 0x12);
    if (bVar2 != 0) {
      uVar25 = 0;
      do {
        if ((!(bool)(bVar8 ^ 1U)) && (bVar7)) break;
        lVar19 = (**(code **)(*plVar24 + 0x60))(plVar24,uVar25);
        if (lVar19 != 0) {
          lVar21 = *(long *)(*(long *)(lVar19 + 0x70) + 0x10);
          uVar3 = *(ushort *)(lVar21 + 4);
          if ((uVar3 >> 2 & 1) == 0) {
            sVar14 = FUN_00cf44f4();
            if (sVar14 != 0) {
              lVar21 = *(long *)(*(long *)(lVar19 + 0x70) + 0x10);
              uVar3 = *(ushort *)(lVar21 + 4);
              if ((uVar3 >> 2 & 1) != 0) goto LAB_02acc984;
            }
          }
          else {
LAB_02acc984:
            *(ushort *)(lVar21 + 4) = uVar3 & 0xfffb;
            sVar14 = FUN_00cf44f4(*(undefined8 *)(lVar19 + 0x70));
            lVar19 = *(long *)(*(long *)(lVar19 + 0x70) + 0x10);
            *(ushort *)(lVar19 + 4) = *(ushort *)(lVar19 + 4) | 4;
            if ((bool)(sVar14 == 0x3d4 & (bVar8 ^ 1U))) {
              bVar8 = true;
            }
            else {
              bVar7 = (bool)(bVar7 | sVar14 == 0x3db);
            }
          }
        }
        uVar25 = uVar25 + 1;
      } while (bVar2 != uVar25);
    }
    do {
      lVar19 = *plVar1;
      iVar15 = (int)lVar19 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
    }
    else if ((int)lVar19 == 0) {
LAB_02accc90:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  if (bVar8) {
    piVar23 = (int *)(lVar20 + 0x25f0);
    uVar22 = 1;
    do {
      if (piVar23[-2] == 0x7894e0d1) {
        uVar22 = uVar22 - 1;
LAB_02acca3c:
        *(undefined1 *)(lVar20 + (uVar22 & 0xffffffff) * 8 + 0x25ec) = 0;
        break;
      }
      if (*piVar23 == 0x7894e0d1) goto LAB_02acca3c;
      uVar22 = uVar22 + 2;
      piVar23 = piVar23 + 4;
    } while (uVar22 != 0xbb9);
  }
  if (bVar7) {
    piVar23 = (int *)(lVar20 + 0x25f0);
    uVar22 = 1;
    do {
      if (piVar23[-2] == 0x7894e0d2) {
        uVar22 = uVar22 - 1;
LAB_02acca94:
        *(undefined1 *)(lVar20 + (uVar22 & 0xffffffff) * 8 + 0x25ec) = 0;
        break;
      }
      if (*piVar23 == 0x7894e0d2) goto LAB_02acca94;
      uVar22 = uVar22 + 2;
      piVar23 = piVar23 + 4;
    } while (uVar22 != 0xbb9);
  }
  *(undefined1 *)(lVar18 + 0xa3) = 1;
  return;
}


