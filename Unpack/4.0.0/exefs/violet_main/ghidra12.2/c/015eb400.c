/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015eb400; name: FUN_015eb400
 */


void FUN_015eb400(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  
  lVar9 = *(long *)(param_1 + 0x58);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x38) != 0)) {
    fVar10 = *(float *)(param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 0x14);
    if (*(char *)(param_1 + 0x12) == '\0' && *(char *)(param_1 + 0x10) == '\0') {
      uVar3 = *(undefined4 *)(param_2 + 0xc);
      if (*(int *)(lVar9 + 0x4c) == 0) {
        if ((*PTR_DAT_047d8280 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(PTR_DAT_047d8280);
          if (iVar6 != 0) {
            FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8280);
          }
        }
        lVar8 = *(long *)PTR_DAT_047d8288;
        *(long *)PTR_DAT_047d8290 = lVar8;
        plVar7 = *(long **)(*(long *)(lVar8 + 0x200) + 0x60);
        (**(code **)(*plVar7 + 0xe8))
                  (plVar7,1,*(undefined4 *)(lVar9 + 0x38),(int)(fVar10 * 1000.0),uVar2);
        *(undefined4 *)(lVar9 + 0x4c) = 1;
        *(float *)(lVar9 + 0x50) = fVar10;
      }
      else {
        *(undefined4 *)(lVar9 + 0x4c) = 2;
      }
      *(undefined4 *)(lVar9 + 0x54) = uVar3;
    }
    else {
      FUN_00d9dd8c(fVar10,lVar9,uVar2);
      plVar7 = *(long **)(param_1 + 0x58);
      if (plVar7 != (long *)0x0) {
        if (plVar7[6] == param_1) {
          plVar7[6] = 0;
          plVar7 = *(long **)(param_1 + 0x58);
          *(undefined8 *)(param_1 + 0x58) = 0;
          if (plVar7 == (long *)0x0) goto LAB_015eb4c0;
        }
        else {
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
        plVar1 = plVar7 + 5;
        do {
          lVar9 = *plVar1;
          iVar6 = (int)lVar9 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *(int *)plVar1 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
    }
  }
LAB_015eb4c0:
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined2 *)(param_1 + 0x24) = 0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      FUN_015eb600(param_1);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 4;
  }
  return;
}


