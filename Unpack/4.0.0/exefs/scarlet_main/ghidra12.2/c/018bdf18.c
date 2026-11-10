/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018bdf18; name: FUN_018bdf18
 */


void FUN_018bdf18(void)

{
  short *psVar1;
  long *plVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  uint uVar17;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  ulong uStack_78;
  long *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48 [3];
  undefined8 local_28;
  
  if (((DAT_04840e50 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04840e50), iVar10 != 0)) {
    FUN_00100190(&LAB_02b28708,&DAT_04840e40,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840e50);
  }
  lVar13 = DAT_04840e40;
  DAT_04840e88 = DAT_04840e40;
  FUN_018be5ac();
  lVar12 = *(long *)(lVar13 + 0x88);
  if ((lVar12 != 0) && (*(short *)(lVar12 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar12 + 0x1a);
    sVar15 = *(short *)(lVar12 + 0x1a);
LAB_018bdfd4:
    sVar4 = *psVar1;
    if (sVar4 == sVar15) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_018bdff8;
      bVar6 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_018bdff8:
      bVar6 = false;
    }
    if (!bVar6) goto code_r0x018be000;
    if (*(long *)(lVar12 + 0x10) == 0) {
      return;
    }
    plVar16 = (long *)(*(long *)(lVar12 + 0x10) + -0x28);
    FUN_0174fbdc(local_48);
    if (local_48[0] == (long *)0x0) goto LAB_018be150;
    lVar12 = (**(code **)(*local_48[0] + 0x60))(local_48[0],0);
    if (lVar12 != 0) {
      uVar9 = FUN_01400b7c();
      iVar10 = FUN_0182c820(uVar9);
      if (*(int *)(lVar13 + 0x2c) == iVar10) {
        if (local_48[0] != (long *)0x0) {
          plVar2 = local_48[0] + 5;
          do {
            iVar10 = (int)*plVar2;
            bVar8 = iVar10 + -1 == 0;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar6) {
              *(int *)plVar2 = iVar10 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          goto LAB_018be178;
        }
        goto LAB_018be150;
      }
      lVar12 = *(long *)(lVar13 + 0x78);
      if ((lVar12 == 0) || (*(short *)(lVar12 + 0x1a) == 0)) goto LAB_018be064;
      psVar1 = (short *)(lVar12 + 0x1a);
      sVar15 = *(short *)(lVar12 + 0x1a);
      goto LAB_018be380;
    }
    if (local_48[0] == (long *)0x0) goto LAB_018be150;
    plVar2 = local_48[0] + 5;
    do {
      iVar10 = (int)*plVar2;
      bVar8 = iVar10 + -1 == 0;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar10 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_018be178:
    if (bVar8) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    else if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
LAB_018be150:
    (**(code **)(*plVar16 + 0x60))(plVar16);
  }
  return;
code_r0x018be000:
  sVar15 = sVar4;
  if (sVar4 == 0) {
    return;
  }
  goto LAB_018bdfd4;
LAB_018be380:
  sVar4 = *psVar1;
  if (sVar4 == sVar15) {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar6) {
      *psVar1 = sVar15 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 != '\0') goto LAB_018be3a4;
    bVar6 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_018be3a4:
    bVar6 = false;
  }
  if (!bVar6) goto code_r0x018be3ac;
  lVar12 = *(long *)(lVar12 + 0x10);
  if (lVar12 != 0) {
    local_68 = *(undefined8 **)(lVar13 + 0x48);
    uStack_60 = *(undefined8 *)(lVar13 + 0x50);
    local_58 = *(undefined8 *)(lVar13 + 0x58);
    local_50 = (long *)0x0;
    FUN_0196f180(&local_68);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    FUN_00ef8710(&local_68,0);
    FUN_00ca1ea4((long *)(lVar13 + 0x78),&local_68);
    puVar7 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar15 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar3 = (int *)((long)local_68 + 0x1c);
        do {
          iVar11 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar14 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar14;
          local_80 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar14 + 0x8040,&local_80);
        }
      }
      else if (sVar15 == 0) goto LAB_018be1c8;
    }
    lVar14 = *(long *)(lVar12 + 8);
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar15 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar15 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar15 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*(long *)(lVar12 + -0x28) + 0x50))();
    }
    else if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  goto LAB_018be064;
code_r0x018be3ac:
  sVar15 = sVar4;
  if (sVar4 == 0) {
LAB_018be064:
    local_70 = plVar16;
    (**(code **)(*plVar16 + 0x58))(plVar16);
    local_68 = *(undefined8 **)(lVar13 + 0x48);
    uStack_60 = *(undefined8 *)(lVar13 + 0x50);
    local_58 = *(undefined8 *)(lVar13 + 0x58);
    local_50 = (long *)0x0;
    uVar17 = *(uint *)(lVar13 + 0x28);
    local_80 = (undefined8 *)CONCAT44(uVar17,uVar17);
    uStack_78 = (ulong)uVar17;
    FUN_0190c650(iVar10,&local_70,&local_68,&local_80,1);
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x60))();
    }
    *(int *)(lVar13 + 0x2c) = iVar10;
    (**(code **)(**(long **)(lVar13 + 0x98) + 0x70))(*(long **)(lVar13 + 0x98),0);
    local_88 = FUN_017516e8();
    FUN_0175164c(&local_68,&local_88);
    local_a8 = 0x3ff82c3de12efbb4;
    pcStack_a0 = "BallChange";
    local_98 = 10;
    local_90 = (long *)0x0;
    FUN_01751920(&local_80,&local_68,&local_a8,1,1);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if ((local_80 != (undefined8 *)0x0) &&
       ((local_80[2] == 0 ||
        (FUN_019437fc(local_80[2] + -0x28,*(undefined4 *)(lVar13 + 0x2c)),
        local_80 != (undefined8 *)0x0)))) {
      puVar7 = local_80;
      psVar1 = (short *)(local_80 + 3);
      do {
        sVar15 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar3 = (int *)((long)local_80 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_28 = *puVar7;
          FUN_00c44438(lVar13 + 0x8040,&local_28);
        }
      }
      else if (sVar15 == 0) goto LAB_018be1c8;
    }
    puVar7 = local_68;
    if (local_68 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_68 + 3);
      do {
        sVar15 = *psVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar6) {
          *psVar1 = sVar15 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (sVar15 == 1) {
        piVar3 = (int *)((long)local_68 + 0x1c);
        do {
          iVar10 = *piVar3;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar6) {
            *piVar3 = -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar10 != -1) {
          if (((*PTR_DAT_047d3908 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar13;
          local_80 = (undefined8 *)*puVar7;
          FUN_00c44438(lVar13 + 0x8040,&local_80);
        }
      }
      else if (sVar15 == 0) {
LAB_018be1c8:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x33,"Reference counter underflows.");
      }
    }
    if (local_48[0] != (long *)0x0) {
      plVar2 = local_48[0] + 5;
      do {
        iVar10 = (int)*plVar2;
        bVar8 = iVar10 + -1 == 0;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar10 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_018be178;
    }
    goto LAB_018be150;
  }
  goto LAB_018be380;
}


