/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00ec6074; name: FUN_00ec6074
 */


void FUN_00ec6074(long *param_1,long param_2,long *param_3,long *param_4)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *local_48;
  
  if (param_4 == (long *)0x0) {
    param_4 = *(long **)(param_2 + 8);
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = param_4;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  lVar7 = (**(code **)(*param_4 + 0x10))(param_4,0x470,0x10);
  if (lVar7 == 0) {
    (**(code **)(*param_4 + 0xe8))(param_4);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00ec6df0();
  *(undefined4 *)(lVar7 + 0x18) = 0x100470;
  *(long **)(lVar7 + 8) = param_4;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  piVar1 = (int *)(lVar7 + 0x28);
  *param_1 = lVar7;
  do {
    iVar5 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar5 == -1) goto LAB_00ec6480;
  lVar6 = *param_1;
  uVar8 = (**(code **)(*(long *)(*(long *)(*param_3 + 0x30) + 0x30) + 0x40))();
  if ((uVar8 & 1) == 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x30) + 0x30) + 0x28))(&local_48);
    if (local_48 != (long *)0x0) {
      plVar9 = local_48 + 5;
      do {
        lVar7 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)lVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar7 == -1) goto LAB_00ec6480;
    }
    plVar9 = *(long **)(lVar6 + 0x398);
    *(long **)(lVar6 + 0x398) = local_48;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_00ec6424;
    }
    if (local_48 != (long *)0x0) {
      plVar9 = local_48 + 5;
      do {
        iVar5 = (int)*plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) goto LAB_00ec6310;
LAB_00ec61c0:
      if (iVar5 == 0) goto LAB_00ec6424;
    }
  }
  else {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x30) + 0x30) + 0x40))(&local_48);
    if (local_48 != (long *)0x0) {
      plVar9 = local_48 + 5;
      do {
        lVar7 = *plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = (int)lVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar7 == -1) goto LAB_00ec6480;
    }
    plVar9 = *(long **)(lVar6 + 0x398);
    *(long **)(lVar6 + 0x398) = local_48;
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 5;
      do {
        lVar6 = *plVar2;
        iVar5 = (int)lVar6 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *(int *)plVar2 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      else if ((int)lVar6 == 0) goto LAB_00ec6424;
    }
    if (local_48 != (long *)0x0) {
      plVar9 = local_48 + 5;
      do {
        iVar5 = (int)*plVar9;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar4) {
          *(int *)plVar9 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 != 0) goto LAB_00ec61c0;
LAB_00ec6310:
      (**(code **)(*local_48 + 0x10))();
    }
  }
  lVar6 = *param_1;
  (**(code **)(*(long *)(*(long *)(param_2 + 0x30) + 0x30) + 0x30))(&local_48);
  if (local_48 != (long *)0x0) {
    plVar9 = local_48 + 5;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar7 == -1) {
LAB_00ec6480:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = *(long **)(lVar6 + 0x3a0);
  *(long **)(lVar6 + 0x3a0) = local_48;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar6 = *plVar2;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar6 == 0) goto LAB_00ec6424;
  }
  if (local_48 != (long *)0x0) {
    plVar9 = local_48 + 5;
    do {
      lVar6 = *plVar9;
      iVar5 = (int)lVar6 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    else if ((int)lVar6 == 0) {
LAB_00ec6424:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar6 = *param_1;
  FUN_00ec6488(lVar6,param_3);
  FUN_00ed69e0(lVar6);
  return;
}


