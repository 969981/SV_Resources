/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dff050; name: FUN_00dff050
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dff050(long *param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  undefined1 auStack_90 [8];
  long *local_88;
  long *local_80;
  long *local_78;
  long *local_70;
  long *plStack_68;
  
  puVar4 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar10 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&DAT_045d2888;
  param_1[1] = lVar10;
  param_1[4] = (long)&PTR_LAB_045d28c0;
  lVar7 = *param_2;
  param_1[6] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == -1) {
LAB_00dff60c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
    lVar10 = param_1[1];
  }
  param_1[7] = (long)&DAT_cbf29ce484222645;
  param_1[8] = (long)&DAT_03c886bc;
  plVar9 = param_1 + 0xb;
  *plVar9 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xe] = lVar10;
  param_1[0xf] = 0x1fffffffffffffff;
  param_1[0x12] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x15] = lVar10;
  param_1[0x16] = 0x1fffffffffffffff;
  lVar10 = _UNK_03cabf48;
  lVar7 = _DAT_03cabf40;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  plVar15 = param_1 + 0x19;
  *plVar15 = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = lVar10;
  param_1[0x1c] = lVar7;
  FUN_00daf940(param_1 + 0x1f,param_3);
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 7;
  param_1[0x22] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = param_1[1];
  param_1[0x26] = 0x7ffffffffffffff;
  *(undefined1 *)(param_1 + 0x29) = 1;
  lVar10 = *(long *)(DAT_04859f58 + 0x38) - *(long *)(DAT_04859f58 + 0x30);
  lVar7 = lVar10 >> 4;
  uVar16 = lVar7 * -0x5555555555555555;
  uVar11 = param_1[0xc] - *plVar9 >> 3;
  if (uVar11 < uVar16) {
    FUN_00dffc58(plVar9,uVar16 - uVar11);
  }
  else if (uVar16 < uVar11) {
    FUN_00e5257c(plVar9,*plVar9 + lVar7 * 0x5555555555555558);
  }
  lVar8 = param_1[0x23];
  uVar11 = lVar8 - param_1[0x22] >> 5;
  if (uVar11 < uVar16) {
    FUN_00d24494(param_1 + 0x22,uVar16 - uVar11);
  }
  else if (uVar16 < uVar11) {
    lVar12 = param_1[0x22] + lVar7 * 0x5555555555555560;
    while (lVar12 != lVar8) {
      plVar9 = (long *)(lVar8 + -8);
      lVar8 = lVar8 + -0x20;
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 0x20))();
      }
    }
    param_1[0x23] = lVar12;
  }
  lVar8 = FUN_00dffb0c(&local_88,*(undefined8 *)(*(long *)(*param_2 + 0x30) + 8));
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  plVar9 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar9 != (long *)0x0) {
    plVar13 = plVar9 + 5;
    do {
      lVar12 = *plVar13;
      iVar6 = (int)lVar12 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *(int *)plVar13 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    else if ((int)lVar12 == 0) {
LAB_00dff470:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  param_1[0x19] = lVar8;
  param_1[0x1a] = 0xffffffff;
  lVar8 = param_1[0x12];
  if ((ulong)(param_1[0x14] - lVar8 >> 3) < uVar16) {
    plVar9 = param_1 + 0x15;
    lVar12 = param_1[0x13];
    local_70 = (long *)0x0;
    plStack_68 = plVar9;
    local_88 = (long *)(**(code **)(*(long *)param_1[0x15] + 0x10))
                                 ((long *)param_1[0x15],lVar7 * 0x5555555555555558,8);
    if (local_88 == (long *)0x0) {
      (**(code **)(*(long *)*plVar9 + 0xe8))();
    }
    local_80 = local_88 + (lVar12 - lVar8 >> 3);
    local_70 = local_88 + lVar7 * 0xaaaaaaaaaaaaaab;
    plVar13 = (long *)param_1[0x12];
    plVar14 = (long *)param_1[0x13];
    local_78 = local_80;
    if (plVar14 == plVar13) {
      plVar9 = plVar13;
    }
    else {
      do {
        plVar5 = local_80;
        lVar7 = *plVar9;
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar8 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar8 == 0) {
          lVar7 = plVar14[-1];
          plVar14[-1] = 0;
          plVar5[-1] = lVar7;
        }
        else {
          if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_00dff634;
          *(long *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = lVar7;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
          lVar7 = plVar14[-1];
          plVar14[-1] = 0;
          plVar5[-1] = lVar7;
          *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        }
        plVar14 = plVar14 + -1;
        local_80 = local_80 + -1;
      } while (plVar13 != plVar14);
      plVar13 = (long *)param_1[0x12];
      plVar9 = (long *)param_1[0x13];
    }
    param_1[0x12] = (long)local_80;
    param_1[0x13] = (long)local_78;
    plVar14 = (long *)param_1[0x14];
    param_1[0x14] = (long)local_70;
    local_88 = plVar13;
    local_80 = plVar13;
    local_78 = plVar9;
    local_70 = plVar14;
    FUN_00dff9e8(&local_88);
  }
  puVar4 = PTR_LAB_047d3900;
  if (lVar10 != 0) {
    uVar11 = 0;
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    do {
      local_88 = (long *)FUN_00dff6d4(auStack_90,param_1[1],plVar15);
      if (local_88 != (long *)0x0) {
        plVar9 = local_88 + 5;
        do {
          lVar7 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((int)lVar7 == -1) goto LAB_00dff60c;
      }
      plVar9 = (long *)param_1[0x13];
      if (plVar9 < (long *)param_1[0x14]) {
        lVar7 = param_1[0x15];
        if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(puVar4,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar10 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar10 == 0) {
          *plVar9 = (long)local_88;
        }
        else {
          if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00dff634:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar7;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          *plVar9 = (long)local_88;
          *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
        }
        local_88 = (long *)0x0;
        param_1[0x13] = (long)(plVar9 + 1);
      }
      else {
        FUN_00e0223c(param_1 + 0x12,&local_88);
        if (local_88 != (long *)0x0) {
          plVar9 = local_88 + 5;
          do {
            lVar7 = *plVar9;
            iVar6 = (int)lVar7 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar3) {
              *(int *)plVar9 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 == 0) {
            (**(code **)(*local_88 + 0x10))();
          }
          else if ((int)lVar7 == 0) goto LAB_00dff470;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar16);
  }
  return;
}


