/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0149bc14; name: FUN_0149bc14
 */


void FUN_0149bc14(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  char *pcVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  undefined8 uVar18;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined1 auStack_68 [8];
  undefined8 local_48;
  
  if (((*PTR_DAT_047d4c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar17 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar17;
  puVar8 = PTR_DAT_047d4890;
  puVar7 = PTR_DAT_047d4888;
  plVar4 = *(long **)(lVar17 + 0x1c8);
  for (plVar11 = *(long **)(lVar17 + 0x1c0); plVar11 != plVar4; plVar11 = plVar11 + 1) {
    lVar17 = *plVar11;
    plVar10 = (long *)(*(code *)**(undefined8 **)(lVar17 + 0x28))((undefined8 *)(lVar17 + 0x28));
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
      uVar18 = FUN_01b3fb0c();
      *(undefined8 *)puVar8 = uVar18;
      __cxa_guard_release(puVar7);
    }
    for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
      if (plVar10 == (long *)puVar8) goto LAB_0149bcd0;
    }
  }
  lVar17 = 0;
LAB_0149bcd0:
  iVar9 = FUN_0149c05c(lVar17);
  if (iVar9 == 0x20) {
    FUN_01dc0660(lVar17,0);
  }
  FUN_0149c0d0(&local_48,*(undefined8 *)(param_2 + 8),param_4);
  plVar11 = *(long **)(param_2 + 0x140);
  *(undefined8 *)(param_2 + 0x140) = 0;
  if (plVar11 != (long *)0x0) {
    plVar4 = plVar11 + 5;
    do {
      lVar17 = *plVar4;
      iVar9 = (int)lVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar6) {
        *(int *)plVar4 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))();
      goto LAB_0149bd08;
    }
    if ((int)lVar17 != 0) goto LAB_0149bd08;
LAB_0149bea8:
    pcVar12 = "count != std::numeric_limits<uint32_t>::max()";
    pcVar14 = "DecrementReferenceInternal";
    pcVar15 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
    ;
    pcVar16 = "Reference counter underflows.";
LAB_0149bec8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl(pcVar12,pcVar14,pcVar15,0x58,pcVar16);
  }
LAB_0149bd08:
  *(undefined8 *)(param_2 + 0x140) = local_48;
  FUN_0149c40c(auStack_68,param_2);
  FUN_0149c064(local_48,auStack_68);
  FUN_0149c1c0(auStack_68);
  uVar18 = *(undefined8 *)(param_2 + 0x140);
  local_70 = (long *)FUN_0149c530(*(undefined8 *)(param_2 + 8));
  if (local_70 != (long *)0x0) {
    plVar11 = local_70 + 5;
    do {
      lVar17 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)lVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar17 == -1) goto LAB_0149bff0;
  }
  FUN_0149c070(uVar18,&local_70);
  if (local_70 != (long *)0x0) {
    plVar11 = local_70 + 5;
    do {
      lVar17 = *plVar11;
      iVar9 = (int)lVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar17 == 0) goto LAB_0149bea8;
  }
  uVar18 = *(undefined8 *)(param_2 + 0x140);
  local_78 = (long *)*param_3;
  if (local_78 != (long *)0x0) {
    lVar17 = local_78[6];
    if (*(long *)(lVar17 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
      *(undefined8 *)(lVar17 + 8) = uVar13;
      *(undefined4 *)(lVar17 + 0x1c) = 0xfffffffe;
    }
    else if (sVar3 == -1) {
      pcVar12 = "count != 0";
      pcVar14 = "AddReference";
      pcVar15 = 
      "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
      ;
      pcVar16 = "Reference counter overflows.";
      goto LAB_0149bec8;
    }
  }
  FUN_0149dbec(uVar18,&local_78);
  if (local_78 != (long *)0x0) {
    lVar17 = local_78[6];
    psVar1 = (short *)(lVar17 + 0x1a);
    do {
      sVar3 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar17 + 0x10) = 0;
      (**(code **)(*local_78 + 0x50))();
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  uVar18 = *(undefined8 *)(param_2 + 0x140);
  local_80 = (long *)FUN_0149c778(*(undefined8 *)(param_2 + 8));
  if (local_80 != (long *)0x0) {
    plVar11 = local_80 + 5;
    do {
      lVar17 = *plVar11;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = (int)lVar17 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar17 == -1) goto LAB_0149bff0;
  }
  FUN_0149c07c(uVar18,&local_80);
  if (local_80 != (long *)0x0) {
    plVar11 = local_80 + 5;
    do {
      lVar17 = *plVar11;
      iVar9 = (int)lVar17 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *(int *)plVar11 = iVar9;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
    else if ((int)lVar17 == 0) goto LAB_0149bea8;
  }
  lVar17 = *(long *)(param_2 + 0x140);
  *param_1 = lVar17;
  if (lVar17 != 0) {
    piVar2 = (int *)(lVar17 + 0x28);
    do {
      iVar9 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar9 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar9 == -1) {
LAB_0149bff0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  return;
}


