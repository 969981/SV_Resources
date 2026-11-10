/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db5420; name: FUN_00db5420
 */


void FUN_00db5420(undefined8 *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04865a38), iVar4 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar5 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar5 == 0) {
    lVar5 = *param_3;
    *param_2 = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x28);
      do {
        iVar4 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar4 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == -1) goto LAB_00db56b0;
    }
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    plVar6 = (long *)param_3[4];
    param_2[4] = (long)plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    *(undefined1 *)(param_2 + 5) = 0;
    if ((char)param_3[5] != '\0') {
      param_2[6] = param_3[6];
      param_2[7] = param_3[7];
      param_2[8] = param_3[8];
      plVar6 = (long *)param_3[9];
      param_2[9] = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *(undefined1 *)(param_2 + 5) = 1;
    }
    *(undefined1 *)(param_2 + 10) = 0;
    if ((char)param_3[10] != '\0') {
      param_2[0xb] = param_3[0xb];
      param_2[0xc] = param_3[0xc];
      param_2[0xd] = param_3[0xd];
      plVar6 = (long *)param_3[0xe];
      param_2[0xe] = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *(undefined1 *)(param_2 + 10) = 1;
    }
  }
  else {
    if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar8;
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
    lVar7 = *param_3;
    *param_2 = lVar7;
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
      if (iVar4 == -1) {
LAB_00db56b0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    plVar6 = (long *)param_3[4];
    param_2[4] = (long)plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))();
    }
    *(undefined1 *)(param_2 + 5) = 0;
    if ((char)param_3[5] != '\0') {
      param_2[6] = param_3[6];
      param_2[7] = param_3[7];
      param_2[8] = param_3[8];
      plVar6 = (long *)param_3[9];
      param_2[9] = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *(undefined1 *)(param_2 + 5) = 1;
    }
    *(undefined1 *)(param_2 + 10) = 0;
    if ((char)param_3[10] != '\0') {
      param_2[0xb] = param_3[0xb];
      param_2[0xc] = param_3[0xc];
      param_2[0xd] = param_3[0xd];
      plVar6 = (long *)param_3[0xe];
      param_2[0xe] = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))();
      }
      *(undefined1 *)(param_2 + 10) = 1;
    }
    *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  }
  return;
}


