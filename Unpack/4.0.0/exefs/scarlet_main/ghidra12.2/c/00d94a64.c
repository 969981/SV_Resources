/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d94a64; name: FUN_00d94a64
 */


void FUN_00d94a64(undefined8 param_1,undefined8 param_2,long *param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  short sVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70 [2];
  undefined8 *local_48;
  
  puVar6 = PTR_DAT_047d3908;
  local_80 = (undefined8 *)0x0;
  local_78 = 0;
  if (((*PTR_DAT_047d3908 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  plVar16 = (long *)PTR_DAT_047d3918;
  plVar17 = (long *)PTR_DAT_047d3910;
  uVar11 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar11;
  FUN_00c44204(&local_48,uVar11,param_1);
  if ((local_48 != (undefined8 *)0x0) &&
     (puVar18 = (undefined8 *)local_48[1], puVar18 != (undefined8 *)0x0)) {
    puVar12 = (undefined8 *)PTR_DAT_047d5420;
    if ((*PTR_DAT_047d5418 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_047d5418);
      puVar7 = PTR_DAT_047d3988;
      puVar12 = (undefined8 *)PTR_DAT_047d5420;
      if (iVar10 != 0) {
        if (((*PTR_DAT_047d3980 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3980), iVar10 != 0)) {
          uVar11 = FUN_01adab84();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(PTR_DAT_047d3980);
        }
        puVar12 = (undefined8 *)PTR_DAT_047d5420;
        *(undefined **)PTR_DAT_047d5420 = puVar7;
        __cxa_guard_release(PTR_DAT_047d5418);
      }
    }
LAB_00d94af0:
    puVar9 = local_80;
    if (puVar18 != puVar12) goto code_r0x00d94af8;
    local_80 = (undefined8 *)0x0;
    if (puVar9 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar9 + 3);
      do {
        sVar15 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar15 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar15 == 1) {
        piVar2 = (int *)((long)puVar9 + 0x1c);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 != -1) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0))
          {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *plVar17;
          *plVar16 = lVar13;
          local_70[0] = (undefined8 *)*puVar9;
          FUN_00c44438(lVar13 + 0x8040,local_70);
        }
      }
      else if (sVar15 == 0) goto LAB_00d94dcc;
    }
    local_80 = local_48;
    local_48 = (undefined8 *)0x0;
    local_78 = param_1;
    goto LAB_00d94b50;
  }
LAB_00d94b00:
  FUN_01f973fc(&local_80);
LAB_00d94b50:
  puVar18 = local_48;
  if (local_48 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_48 + 3);
    do {
      sVar15 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_48 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *plVar17;
        *plVar16 = lVar13;
        local_70[0] = (undefined8 *)*puVar18;
        FUN_00c44438(lVar13 + 0x8040,local_70);
      }
    }
    else if (sVar15 == 0) goto LAB_00d94dcc;
  }
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  if (local_80 == (undefined8 *)0x0) {
    return;
  }
  if (*(short *)((long)local_80 + 0x1a) != 0) {
    if (local_80 == (undefined8 *)0x0) {
      return;
    }
    if (*(short *)((long)local_80 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_80 + 0x1a);
      sVar15 = *(short *)((long)local_80 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar15) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 != '\0') goto LAB_00d94c90;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_00d94c90:
          bVar5 = false;
        }
        if (bVar5) {
          lVar13 = local_80[2];
          plVar17 = (long *)PTR_DAT_047d3910;
          plVar16 = (long *)PTR_DAT_047d3918;
          if (lVar13 != 0) {
            plVar17 = (long *)(lVar13 + -0x28);
            FUN_00cbb48c(local_70,plVar17);
            puVar18 = local_70[0];
            if (local_70[0] == (undefined8 *)0x0) goto LAB_00d94d6c;
            if (*(short *)((long)local_70[0] + 0x1a) == 0) goto LAB_00d94f4c;
            psVar1 = (short *)((long)local_70[0] + 0x1a);
            sVar15 = *(short *)((long)local_70[0] + 0x1a);
            goto LAB_00d94f18;
          }
          break;
        }
        plVar17 = (long *)puVar7;
        plVar16 = (long *)puVar8;
        sVar15 = sVar3;
      } while (sVar3 != 0);
    }
  }
  goto LAB_00d94da4;
code_r0x00d94af8:
  puVar18 = (undefined8 *)*puVar18;
  if (puVar18 == (undefined8 *)0x0) goto LAB_00d94b00;
  goto LAB_00d94af0;
  while (sVar15 = sVar3, sVar3 != 0) {
LAB_00d94f18:
    sVar3 = *psVar1;
    if (sVar3 == sVar15) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_00d94f3c;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_00d94f3c:
      bVar5 = false;
    }
    if (bVar5) {
      plVar16 = (long *)0x0;
      if (local_70[0][2] != 0) {
        plVar16 = (long *)(local_70[0][2] + -0x28);
      }
      goto LAB_00d94f64;
    }
  }
LAB_00d94f4c:
  plVar16 = (long *)0x0;
LAB_00d94f64:
  psVar1 = (short *)(local_70[0] + 3);
  do {
    sVar15 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar15 == 1) {
    piVar2 = (int *)((long)local_70[0] + 0x1c);
    do {
      iVar10 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 != -1) {
      if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
        FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3908);
      }
      lVar14 = *(long *)PTR_DAT_047d3910;
      *(long *)PTR_DAT_047d3918 = lVar14;
      local_48 = (undefined8 *)*puVar18;
      FUN_00c44438(lVar14 + 0x8040,&local_48);
    }
  }
  else if (sVar15 == 0) goto LAB_00d94dcc;
  if (plVar16 != (long *)0x0) {
    if ((plVar16 == param_3) && ((*(byte *)(lVar13 + 0x108) & 0x7f) == 0)) {
      (**(code **)(*plVar17 + 0x140))(plVar17,param_2);
    }
    (**(code **)(*plVar16 + 0x60))(plVar16);
  }
LAB_00d94d6c:
  lVar13 = *(long *)(lVar13 + 0x70);
  psVar1 = (short *)(lVar13 + 0x1a);
  do {
    sVar15 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar15 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar15 == 1) {
    *(undefined8 *)(lVar13 + 0x10) = 0;
    (**(code **)(*plVar17 + 0x50))(plVar17);
    plVar17 = (long *)PTR_DAT_047d3910;
    plVar16 = (long *)PTR_DAT_047d3918;
  }
  else {
    plVar17 = (long *)PTR_DAT_047d3910;
    plVar16 = (long *)PTR_DAT_047d3918;
    if (sVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
LAB_00d94da4:
  puVar18 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_80 + 3);
    do {
      sVar15 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar15 == 1) {
      piVar2 = (int *)((long)local_80 + 0x1c);
      do {
        iVar10 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar10 != -1) {
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *plVar17;
        *plVar16 = lVar13;
        local_70[0] = (undefined8 *)*puVar18;
        FUN_00c44438(lVar13 + 0x8040,local_70);
      }
    }
    else if (sVar15 == 0) {
LAB_00d94dcc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


