/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c89a1c; name: FUN_00c89a1c
 */


void FUN_00c89a1c(long param_1,long *param_2,long param_3,long *param_4,long param_5,int param_6,
                 int param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  byte bVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  
  plVar10 = *(long **)(param_1 + 0x178);
  if (*param_2 == 0) {
    if (plVar10 != (long *)0x0) {
      *(undefined8 *)(param_1 + 0x178) = 0;
      FUN_00fa4e5c(param_1 + 0x180,plVar10);
      *(undefined1 *)(param_1 + 0x19a) = 1;
    }
  }
  else {
    if (plVar10 == (long *)0x0) {
      plVar5 = *(long **)(param_1 + 8);
      plVar10 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x28,8);
      if (plVar10 == (long *)0x0) {
        plVar5 = (long *)0x0;
        uVar11 = 0;
        uVar8 = 0;
      }
      else {
        if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar7 = nn::os::GetTlsValue(DAT_04865a30);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = plVar5;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[4] = 1;
        *plVar10 = 0;
        plVar10[1] = 0;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        uVar8 = 8;
        uVar11 = 0x28;
      }
      lVar7 = *(long *)(param_1 + 0x178);
      *(long **)(param_1 + 0x178) = plVar10;
      if (lVar7 != 0) {
        FUN_00fa4e5c(param_1 + 0x180);
        plVar10 = *(long **)(param_1 + 0x178);
      }
      *(undefined8 *)(param_1 + 400) = uVar8;
      bVar6 = 1;
      *(long **)(param_1 + 0x180) = plVar5;
      *(undefined8 *)(param_1 + 0x188) = uVar11;
    }
    else {
      bVar6 = *(byte *)(param_1 + 0x19a) | *plVar10 != *param_2;
      *(byte *)(param_1 + 0x19a) = bVar6;
      bVar6 = bVar6 | plVar10[1] != param_3;
      *(byte *)(param_1 + 0x19a) = bVar6;
      bVar6 = bVar6 | *(int *)((long)plVar10 + 0x24) != param_7;
      *(byte *)(param_1 + 0x19a) = bVar6;
      bVar6 = bVar6 | (int)plVar10[4] != param_6;
      *(byte *)(param_1 + 0x19a) = bVar6;
      bVar6 = bVar6 | plVar10[2] != *param_4;
      *(byte *)(param_1 + 0x19a) = bVar6;
      bVar6 = bVar6 | plVar10[3] != param_5;
    }
    *(byte *)(param_1 + 0x19a) = bVar6;
    lVar7 = *param_2;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == -1) goto LAB_00c89d38;
    }
    plVar5 = (long *)*plVar10;
    *plVar10 = lVar7;
    if (plVar5 != (long *)0x0) {
      plVar10 = plVar5 + 5;
      do {
        lVar7 = *plVar10;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *(int *)plVar10 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      else if ((int)lVar7 == 0) goto LAB_00c89d10;
    }
    *(long *)(*(long *)(param_1 + 0x178) + 8) = param_3;
    lVar7 = *(long *)(param_1 + 0x178);
    lVar9 = *param_4;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == -1) {
LAB_00c89d38:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    plVar10 = *(long **)(lVar7 + 0x10);
    *(long *)(lVar7 + 0x10) = lVar9;
    if (plVar10 != (long *)0x0) {
      plVar5 = plVar10 + 5;
      do {
        lVar7 = *plVar5;
        iVar4 = (int)lVar7 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
      else if ((int)lVar7 == 0) {
LAB_00c89d10:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    *(long *)(*(long *)(param_1 + 0x178) + 0x18) = param_5;
    *(int *)(*(long *)(param_1 + 0x178) + 0x20) = param_6;
    *(int *)(*(long *)(param_1 + 0x178) + 0x24) = param_7;
  }
  return;
}


