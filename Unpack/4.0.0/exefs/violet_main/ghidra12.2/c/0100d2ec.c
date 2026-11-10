/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0100d2ec; name: FUN_0100d2ec
 */


void FUN_0100d2ec(undefined8 param_1,long *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  bool bVar17;
  short sVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 *local_60;
  long *local_58;
  
  puVar5 = PTR_DAT_047d3908;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar12 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar12;
  FUN_00c44204(&local_60,uVar12,param_1);
  puVar8 = PTR_DAT_047d3978;
  if ((local_60 != (undefined8 *)0x0) &&
     (puVar20 = (undefined8 *)local_60[1], puVar20 != (undefined8 *)0x0)) {
    if (((*PTR_DAT_047d3970 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3970), puVar9 = PTR_DAT_047d3988, iVar11 != 0)) {
      if (((*PTR_DAT_047d3980 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar11 != 0)) {
        uVar12 = FUN_01adab84();
        *(undefined8 *)puVar9 = uVar12;
        __cxa_guard_release(PTR_DAT_047d3980);
      }
      *(undefined **)puVar8 = puVar9;
      __cxa_guard_release(PTR_DAT_047d3970);
    }
LAB_0100d370:
    puVar10 = local_70;
    if (puVar20 != (undefined8 *)puVar8) goto code_r0x0100d378;
    local_70 = (undefined8 *)0x0;
    if (puVar10 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar10 + 3);
      do {
        sVar18 = *psVar1;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar17) {
          *psVar1 = sVar18 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar18 == 1) {
        piVar2 = (int *)((long)puVar10 + 0x1c);
        do {
          iVar11 = *piVar2;
          cVar4 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar17) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar11 != -1) {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar15 = *(long *)puVar6;
          *(long *)puVar7 = lVar15;
          local_58 = (long *)*puVar10;
          FUN_00c44438(lVar15 + 0x8040,&local_58);
        }
      }
      else if (sVar18 == 0) goto LAB_0100d570;
    }
    local_70 = local_60;
    local_60 = (undefined8 *)0x0;
    local_68 = param_1;
    goto LAB_0100d3d0;
  }
LAB_0100d380:
  FUN_018565f8(&local_70);
LAB_0100d3d0:
  puVar20 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar18 = *psVar1;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar17) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)puVar6;
        *(long *)puVar7 = lVar15;
        local_58 = (long *)*puVar20;
        FUN_00c44438(lVar15 + 0x8040,&local_58);
      }
    }
    else if (sVar18 == 0) goto LAB_0100d570;
  }
  if (local_70 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_70 + 0x1a) != 0) {
    if (local_70 == (undefined8 *)0x0) {
      return;
    }
    if (*(short *)((long)local_70 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_70 + 0x1a);
      sVar18 = *(short *)((long)local_70 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar18) {
          cVar4 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar17) {
            *psVar1 = sVar18 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_0100d4f8;
          bVar17 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0100d4f8:
          bVar17 = false;
        }
        if (bVar17) {
          lVar15 = local_70[2];
          if (lVar15 != 0) {
            lVar14 = *(long *)(lVar15 + 0xf8);
            plVar19 = (long *)(lVar15 + -0x28);
            if ((lVar14 == 0) || (*(short *)(lVar14 + 0x1a) == 0)) goto LAB_0100d520;
            psVar1 = (short *)(lVar14 + 0x1a);
            sVar18 = *(short *)(lVar14 + 0x1a);
            goto LAB_0100d6f8;
          }
          break;
        }
        sVar18 = sVar3;
      } while (sVar3 != 0);
    }
  }
  goto LAB_0100d548;
code_r0x0100d378:
  puVar20 = (undefined8 *)*puVar20;
  if (puVar20 == (undefined8 *)0x0) goto LAB_0100d380;
  goto LAB_0100d370;
  while (sVar18 = sVar3, sVar3 != 0) {
LAB_0100d6f8:
    sVar3 = *psVar1;
    if (sVar3 == sVar18) {
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_0100d71c;
      bVar17 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_0100d71c:
      bVar17 = false;
    }
    if (bVar17) {
      plVar16 = (long *)(*(long *)(lVar14 + 0x10) + -0x28);
      local_58 = (long *)0x0;
      if (*(long *)(lVar14 + 0x10) != 0) {
        local_58 = plVar16;
        if ((plVar16 == param_2) && (uVar13 = FUN_00e640d8(&local_58), (uVar13 & 1) == 0)) {
          FUN_020fa2b4(plVar19,&local_58,*(undefined1 *)(lVar15 + 0x160));
          *(undefined1 *)(lVar15 + 0x160) = 0;
        }
        (**(code **)(*plVar16 + 0x60))(plVar16);
      }
      goto LAB_0100d524;
    }
  }
LAB_0100d520:
  local_58 = (long *)0x0;
LAB_0100d524:
  lVar15 = *(long *)(lVar15 + 0x70);
  psVar1 = (short *)(lVar15 + 0x1a);
  do {
    sVar18 = *psVar1;
    cVar4 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar17) {
      *psVar1 = sVar18 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar18 == 1) {
    *(undefined8 *)(lVar15 + 0x10) = 0;
    (**(code **)(*plVar19 + 0x50))(plVar19);
  }
  else if (sVar18 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_0100d548:
  puVar20 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_70 + 3);
    do {
      sVar18 = *psVar1;
      cVar4 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar17) {
        *psVar1 = sVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar18 == 1) {
      piVar2 = (int *)((long)local_70 + 0x1c);
      do {
        iVar11 = *piVar2;
        cVar4 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar17) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar11 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar11 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar15 = *(long *)puVar6;
        *(long *)puVar7 = lVar15;
        local_58 = (long *)*puVar20;
        FUN_00c44438(lVar15 + 0x8040,&local_58);
      }
    }
    else if (sVar18 == 0) {
LAB_0100d570:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


