/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ca7834; name: FUN_00ca7834
 */


void FUN_00ca7834(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar7 == 0) {
    lVar7 = param_3[3];
    lVar9 = param_3[4];
    lVar8 = param_3[5];
    lVar2 = param_3[6];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[5] = lVar8;
    param_2[6] = lVar2;
    param_2[3] = lVar7;
    param_2[4] = lVar9;
    if (param_3[1] - *param_3 != 0) {
      FUN_00ca98ac(param_2,param_3[1] - *param_3 >> 3);
      lVar7 = *param_3;
      lVar9 = param_3[1];
      lVar8 = param_2[1];
      if (lVar7 != lVar9) {
        do {
          FUN_00ca97d0(param_2 + 3,lVar8,lVar7);
          lVar7 = lVar7 + 8;
          lVar8 = lVar8 + 8;
        } while (lVar9 != lVar7);
      }
      param_2[1] = lVar8;
    }
    lVar7 = param_3[7];
    param_2[7] = lVar7;
    if (lVar7 != 0) {
      piVar1 = (int *)(lVar7 + 0x28);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) goto LAB_00ca7a18;
    }
    param_2[8] = param_3[8];
  }
  else {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    lVar8 = param_3[3];
    lVar2 = param_3[4];
    lVar9 = param_3[5];
    lVar3 = param_3[6];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[5] = lVar9;
    param_2[6] = lVar3;
    param_2[3] = lVar8;
    param_2[4] = lVar2;
    if (param_3[1] - *param_3 != 0) {
      FUN_00ca98ac(param_2,param_3[1] - *param_3 >> 3);
      lVar8 = *param_3;
      lVar2 = param_3[1];
      lVar9 = param_2[1];
      if (lVar8 != lVar2) {
        do {
          FUN_00ca97d0(param_2 + 3,lVar9,lVar8);
          lVar8 = lVar8 + 8;
          lVar9 = lVar9 + 8;
        } while (lVar2 != lVar8);
      }
      param_2[1] = lVar9;
    }
    lVar8 = param_3[7];
    param_2[7] = lVar8;
    if (lVar8 != 0) {
      piVar1 = (int *)(lVar8 + 0x28);
      do {
        iVar6 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar6 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == -1) {
LAB_00ca7a18:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
    }
    param_2[8] = param_3[8];
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


