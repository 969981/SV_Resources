/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b9500; name: FUN_011b9500
 */


void FUN_011b9500(long param_1,undefined4 param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  long *plVar17;
  undefined1 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
  if (param_3 == 0) {
    return;
  }
  if (((*(byte *)(*(long *)(*(long *)(param_3 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) &&
     (sVar7 = FUN_00cf44f4(), sVar7 == 0)) {
    return;
  }
  plVar17 = *(long **)(*(long *)PTR_DAT_047d3f70 + 0x148);
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar17;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x128,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar17 + 0xe8))(plVar17);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/object_factory.h"
               ,0x40);
  }
  FUN_00ea4724(plVar10,0x20,0x800,plVar17);
  *(undefined4 *)(plVar10 + 3) = 0x80128;
  plVar10[1] = (long)plVar17;
  plVar10[2] = (long)plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  lVar9 = plVar10[6];
  if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("m_object != nullptr","AddReference",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
               ,0x3d);
  }
  psVar1 = (short *)(lVar9 + 0x1a);
  do {
    sVar7 = *psVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
    if (bVar5) {
      *psVar1 = sVar7 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (sVar7 == 0) {
    uVar11 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
    *(undefined8 *)(lVar9 + 8) = uVar11;
    *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
  }
  else if (sVar7 == -1) {
    pcVar13 = "count != 0";
    pcVar14 = "AddReference";
    pcVar15 = 
    "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
    ;
    pcVar16 = "Reference counter overflows.";
    goto LAB_011b99c8;
  }
  FUN_014c0fb4(plVar10,0,param_3);
  FUN_018e7748(plVar10,1,param_3);
  if (((*PTR_DAT_047d8ac0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d8ac0), iVar8 != 0))
  {
    FUN_00100190(PTR_LAB_047d8ea0,PTR_DAT_047d8ac8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8ac0);
  }
  uVar11 = *(undefined8 *)PTR_DAT_047d8ac8;
  local_58 = 0xc;
  local_50 = (long *)0x0;
  *(undefined8 *)PTR_DAT_047d8ad0 = uVar11;
  local_68 = &DAT_a3120086b51f55ca;
  pcStack_60 = "another_name";
  FUN_01286898(&local_48,uVar11,&local_68,0);
  if (local_50 != (long *)0x0) {
    (**(code **)(*local_50 + 0x20))();
  }
  plVar17 = *(long **)(param_1 + 0xe8);
  if (local_48 != (long *)0x0) {
    FUN_00e388b8(local_48,0x6e,plVar17);
    plVar17 = *(long **)(param_1 + 0xe8);
  }
  if (plVar17 != (long *)0x0) {
    plVar12 = plVar17 + 5;
    do {
      lVar9 = *plVar12;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = (int)lVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((int)lVar9 == -1) goto LAB_011b9908;
  }
  lVar9 = plVar10[0x23];
  *(undefined4 *)((long)plVar10 + 0xcc) = 0;
  *(undefined2 *)(plVar10 + 0x1a) = 0;
  *(undefined4 *)((long)plVar10 + 0xd4) = 0;
  *(undefined4 *)((long)plVar10 + 0xdc) = 0;
  FUN_0109c76c(plVar10,plVar17);
  if (*(char *)(lVar9 + 0x54) != '\0') {
    **(undefined2 **)(lVar9 + 0x30) = 0;
    *(undefined2 *)(lVar9 + 0x52) = 0;
  }
  FUN_0109c334(plVar10,lVar9,plVar17,0,0);
  lVar9 = plVar10[0x23];
  if (lVar9 != 0) {
    piVar2 = (int *)(lVar9 + 0x28);
    do {
      iVar8 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == -1) {
LAB_011b9908:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar12 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (plVar12 == (long *)0x0) {
LAB_011b9764:
    plVar12 = plVar17 + 5;
    *(long *)(param_1 + 0xf0) = lVar9;
    do {
      lVar9 = *plVar12;
      iVar8 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
    else if ((int)lVar9 == 0) goto LAB_011b9930;
    if (local_48 == (long *)0x0) {
LAB_011b97a8:
      lVar9 = plVar10[6];
      psVar1 = (short *)(lVar9 + 0x1a);
      do {
        sVar7 = *psVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar7 == 1) {
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar10 + 0x50))(plVar10);
      }
      else if (sVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
      FUN_019c9d88(param_1,param_2,*(undefined8 *)(param_1 + 0xf0),0,0);
      return;
    }
    plVar17 = local_48 + 5;
    do {
      lVar9 = *plVar17;
      iVar8 = (int)lVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_48 + 0x10))();
      goto LAB_011b97a8;
    }
    if ((int)lVar9 != 0) goto LAB_011b97a8;
  }
  else {
    plVar3 = plVar12 + 5;
    do {
      lVar6 = *plVar3;
      iVar8 = (int)lVar6 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar12 + 0x10))();
      goto LAB_011b9764;
    }
    if ((int)lVar6 != 0) goto LAB_011b9764;
  }
LAB_011b9930:
  pcVar13 = "count != std::numeric_limits<uint32_t>::max()";
  pcVar14 = "DecrementReferenceInternal";
  pcVar15 = 
  "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
  ;
  pcVar16 = "Reference counter underflows.";
LAB_011b99c8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl(pcVar13,pcVar14,pcVar15,0x58,pcVar16);
}


