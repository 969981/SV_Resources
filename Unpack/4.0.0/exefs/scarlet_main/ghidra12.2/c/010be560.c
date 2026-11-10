/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010be560; name: FUN_010be560
 */


void FUN_010be560(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  long *local_28;
  
  lVar9 = *param_2;
  if (*(long *)(lVar9 + 0x1d8) != *(long *)(lVar9 + 0x1d0)) {
    plVar10 = *(long **)(lVar9 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010bebc4;
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x1d0,8);
    if (plVar7 == (long *)0x0) goto LAB_010bebf8;
    FUN_010bf5e8(plVar7,lVar9);
    *(undefined4 *)(plVar7 + 3) = 0x801d0;
    plVar7[1] = (long)plVar10;
    plVar7[2] = (long)plVar7;
    plVar10 = plVar7 + 5;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) goto LAB_010beb9c;
    (**(code **)(*plVar7 + 0x28))(plVar7,lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x88) != *(long *)(lVar9 + 0x90)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,*(long *)(lVar9 + 0x90) + -8);
    }
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_28 = plVar7;
    if ((int)lVar6 == -1) goto LAB_010beb9c;
    FUN_010bec04((long *)(lVar9 + 0x88),&local_28);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar9 = *plVar1;
        iVar5 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_010be780;
    }
    do {
      lVar9 = *plVar10;
      iVar5 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar9 == 0) goto LAB_010be780;
  }
  lVar9 = *param_2;
  *(uint *)(lVar9 + 0x158) = *(uint *)(lVar9 + 0x158) | 0x20;
  if (*(long *)(lVar9 + 0x210) != *(long *)(lVar9 + 0x208)) {
    lVar9 = *param_2;
    plVar10 = *(long **)(lVar9 + 8);
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_010bebc4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x168,8);
    if (plVar7 == (long *)0x0) {
LAB_010bebf8:
      lVar9 = *plVar10;
LAB_010bebd0:
      (**(code **)(lVar9 + 0xe8))(plVar10);
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("ptr","Create",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/object_factory.h"
                 ,0x40);
    }
    FUN_010c0100(plVar7,lVar9);
    *(undefined4 *)(plVar7 + 3) = 0x80168;
    plVar7[1] = (long)plVar10;
    plVar7[2] = (long)plVar7;
    plVar10 = plVar7 + 5;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((int)lVar6 == -1) {
LAB_010beb9c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x88) != *(long *)(lVar9 + 0x90)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,*(long *)(lVar9 + 0x90) + -8);
    }
    do {
      lVar6 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = (int)lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_28 = plVar7;
    if ((int)lVar6 == -1) goto LAB_010beb9c;
    FUN_010bec04((long *)(lVar9 + 0x88),&local_28);
    if (local_28 != (long *)0x0) {
      plVar1 = local_28 + 5;
      do {
        lVar9 = *plVar1;
        iVar5 = (int)lVar9 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = iVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      else if ((int)lVar9 == 0) goto LAB_010be780;
    }
    do {
      lVar9 = *plVar10;
      iVar5 = (int)lVar9 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar5;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
    else if ((int)lVar9 == 0) {
LAB_010be780:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_env_build_s2/env_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  lVar9 = *param_2;
  *(uint *)(lVar9 + 0x158) = *(uint *)(lVar9 + 0x158) | 3;
  puVar8 = *(undefined8 **)(lVar9 + 0x108);
  do {
    if (puVar8 == *(undefined8 **)(lVar9 + 0x110)) {
      return;
    }
    piVar4 = (int *)*puVar8;
    while (piVar4 != (int *)puVar8[1]) {
      iVar5 = *piVar4;
      piVar4 = piVar4 + 2;
      if (iVar5 == 0x22) {
        lVar9 = *param_2;
        *(uint *)(lVar9 + 0x158) = *(uint *)(lVar9 + 0x158) | 3;
        puVar8 = *(undefined8 **)(lVar9 + 0x108);
        goto LAB_010be600;
      }
    }
    puVar8 = puVar8 + 9;
  } while( true );
LAB_010be600:
  if (puVar8 == *(undefined8 **)(lVar9 + 0x110)) {
    return;
  }
  piVar4 = (int *)*puVar8;
  while (piVar4 != (int *)puVar8[1]) {
    iVar5 = *piVar4;
    piVar4 = piVar4 + 2;
    if (iVar5 == 0x23) {
      lVar9 = *param_2;
      plVar10 = *(long **)(lVar9 + 8);
      if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar6 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_010bebc4;
      *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0xa0,8);
      if (plVar7 != (long *)0x0) {
        FUN_010bf058();
        *(undefined4 *)(plVar7 + 3) = 0x800a0;
        plVar7[1] = (long)plVar10;
        plVar7[2] = (long)plVar7;
        plVar10 = plVar7 + 5;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        do {
          lVar6 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)lVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar6 == -1) goto LAB_010beb9c;
        (**(code **)(*plVar7 + 0x28))(plVar7,lVar9 + 0x30);
        if (*(long *)(lVar9 + 0x88) != *(long *)(lVar9 + 0x90)) {
          (**(code **)(*plVar7 + 0x30))(plVar7,*(long *)(lVar9 + 0x90) + -8);
        }
        do {
          lVar6 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = (int)lVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        local_28 = plVar7;
        if ((int)lVar6 == -1) goto LAB_010beb9c;
        FUN_010bec04((long *)(lVar9 + 0x88),&local_28);
        if (local_28 != (long *)0x0) {
          plVar1 = local_28 + 5;
          do {
            lVar9 = *plVar1;
            iVar5 = (int)lVar9 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar5;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar5 == 0) {
            (**(code **)(*local_28 + 0x10))();
          }
          else if ((int)lVar9 == 0) goto LAB_010be780;
        }
        do {
          lVar9 = *plVar10;
          iVar5 = (int)lVar9 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = iVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x010bea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x10))(plVar7);
          return;
        }
        if ((int)lVar9 != 0) {
          return;
        }
        goto LAB_010be780;
      }
      lVar9 = *plVar10;
      goto LAB_010bebd0;
    }
  }
  puVar8 = puVar8 + 9;
  goto LAB_010be600;
}


