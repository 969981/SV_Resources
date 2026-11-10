/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ec3aac; name: FUN_00ec3aac
 */


void FUN_00ec3aac(undefined1 *param_1,long *param_2,ulong *param_3,ulong param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *local_78;
  long *local_70;
  undefined4 local_68;
  
  if (param_5 == (long *)0x0) {
    param_5 = (long *)param_2[1];
  }
  uVar11 = *param_3;
  uVar12 = param_3[1];
  uVar10 = param_3[2];
  plVar14 = (long *)param_3[3];
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  *param_1 = 1;
  *(ulong *)(param_1 + 8) = uVar11;
  *(ulong *)(param_1 + 0x10) = uVar12;
  *(ulong *)(param_1 + 0x18) = uVar10;
  *(long **)(param_1 + 0x20) = plVar14;
  uVar10 = param_2[(uVar11 >> 0x37) * 0xd + 10];
  if (uVar10 != 0) {
    uVar12 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar10 - 1 & uVar11;
    }
    else {
      uVar13 = uVar11;
      if (uVar10 <= uVar11) {
        uVar13 = 0;
        if (uVar10 != 0) {
          uVar13 = uVar11 / uVar10;
        }
        uVar13 = uVar11 - uVar13 * uVar10;
      }
    }
    plVar14 = *(long **)(param_2[(uVar11 >> 0x37) * 0xd + 9] + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar11) {
            if (plVar14[2] == uVar11) {
              return;
            }
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar14[1];
          if (uVar12 == uVar11) {
            if (plVar14[2] == uVar11) {
              return;
            }
          }
          else {
            if (uVar10 <= uVar12) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar12 / uVar10;
              }
              uVar12 = uVar12 - uVar5 * uVar10;
            }
            if (uVar12 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = param_5;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
  plVar14 = (long *)(**(code **)(*param_5 + 0x10))(param_5,0x108,8);
  if (plVar14 == (long *)0x0) {
    (**(code **)(*param_5 + 0xe8))(param_5);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("ptr","Create",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/object_factory.h"
               ,0x40);
  }
  FUN_00ed6500(plVar14,param_3);
  *(undefined4 *)(plVar14 + 3) = 0x80108;
  plVar14[1] = (long)param_5;
  plVar14[2] = (long)plVar14;
  *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  plVar1 = plVar14 + 5;
  do {
    lVar7 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar7 == -1) {
LAB_00ec3eb8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  if ((param_4 & 1) != 0) {
    FUN_00ec2ec4(plVar14,param_2 + 8);
  }
  local_78 = param_2;
  plVar8 = (long *)FUN_00ec69e4(param_5,&local_78);
  if (plVar8 != (long *)0x0) {
    plVar9 = plVar8 + 5;
    do {
      lVar7 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *(int *)plVar9 = (int)lVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar7 == -1) goto LAB_00ec3eb8;
  }
  do {
    lVar7 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((int)lVar7 == -1) goto LAB_00ec3eb8;
  plVar9 = (long *)plVar8[0x15];
  plVar8[0x15] = (long)plVar14;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 5;
    do {
      lVar7 = *plVar2;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_00ec3df4;
  }
  *(undefined2 *)(plVar8 + 0x34) = 0x101;
  *(undefined2 *)((long)plVar8 + 0x1a3) = 0x101;
  plVar8[0x1d] = 0;
  uVar11 = *param_3;
  do {
    lVar7 = *plVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_78 = plVar14;
  if ((int)lVar7 == -1) goto LAB_00ec3eb8;
  plVar9 = plVar8 + 5;
  do {
    lVar7 = *plVar9;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = (int)lVar7 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  local_70 = plVar8;
  if ((int)lVar7 == -1) goto LAB_00ec3eb8;
  local_68 = 1;
  FUN_00ed5c78(param_2 + (uVar11 >> 0x37) * 0xd + 9,param_3,&local_78);
  if (local_70 != (long *)0x0) {
    plVar2 = local_70 + 5;
    do {
      lVar7 = *plVar2;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_00ec3df4;
  }
  if (local_78 != (long *)0x0) {
    plVar2 = local_78 + 5;
    do {
      lVar7 = *plVar2;
      iVar6 = (int)lVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
    else if ((int)lVar7 == 0) goto LAB_00ec3df4;
  }
  do {
    lVar7 = *plVar9;
    iVar6 = (int)lVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *(int *)plVar9 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  else if ((int)lVar7 == 0) goto LAB_00ec3df4;
  do {
    lVar7 = *plVar1;
    iVar6 = (int)lVar7 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ec3efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar14 + 0x10))(plVar14);
    return;
  }
  if ((int)lVar7 != 0) {
    return;
  }
LAB_00ec3df4:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
             ,0x58,"Reference counter underflows.");
}


