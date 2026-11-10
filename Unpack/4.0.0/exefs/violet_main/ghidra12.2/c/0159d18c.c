/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0159d18c; name: FUN_0159d18c
 */


void FUN_0159d18c(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  
  if (((*(long *)(param_1 + 0x18) != 0) && (**(char **)(*(long *)(param_1 + 0x18) + 0x38) != '\0'))
     && (*(char *)(param_1 + 0x24) != '\0')) {
    if (*(char *)(param_1 + 0x25) != '\0') {
      lVar10 = *(long *)(param_1 + 0x58);
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x38) != 0)) {
        uVar2 = *(undefined4 *)(param_2 + 0xc);
        if (*(int *)(lVar10 + 0x4c) == 0) {
          fVar11 = *(float *)(param_2 + 4);
          uVar3 = *(undefined4 *)(param_2 + 0x14);
          if (((*PTR_DAT_047d8280 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8280), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d89a8,PTR_DAT_047d8288,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8280);
          }
          lVar9 = *(long *)PTR_DAT_047d8288;
          *(long *)PTR_DAT_047d8290 = lVar9;
          plVar8 = *(long **)(*(long *)(lVar9 + 0x200) + 0x60);
          (**(code **)(*plVar8 + 0xe8))
                    (plVar8,1,*(undefined4 *)(lVar10 + 0x38),(int)(fVar11 * 1000.0),uVar3);
          *(undefined4 *)(lVar10 + 0x4c) = 1;
          *(float *)(lVar10 + 0x50) = fVar11;
        }
        else {
          *(undefined4 *)(lVar10 + 0x4c) = 2;
        }
        *(undefined4 *)(lVar10 + 0x54) = uVar2;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 *)(param_1 + 0x25) = 0;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
    uVar4 = *(uint *)(param_2 + 0x18);
    if (uVar4 == 0) {
      uVar4 = *(uint *)(param_1 + 0xc);
    }
    plVar8 = *(long **)(param_1 + 0x58);
    if (plVar8 == (long *)0x0) {
      if ((uVar4 & 0xfffffffd) != 1) {
        return;
      }
    }
    else {
      if (((((char)plVar8[0xb] != '\0') || (*(char *)((long)plVar8 + 0x59) != '\0')) ||
          (*(char *)((long)plVar8 + 0x61) != '\0')) || ((char)plVar8[0xc] != '\0')) {
        if ((uVar4 & 0xfffffffd) == 1) {
          *(undefined1 *)(param_1 + 0x24) = 0;
        }
        if (plVar8[6] == param_1) {
          plVar8[6] = 0;
          plVar8 = *(long **)(param_1 + 0x58);
          *(undefined8 *)(param_1 + 0x58) = 0;
          if (plVar8 == (long *)0x0) {
            return;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x58) = 0;
        }
        plVar1 = plVar8 + 5;
        do {
          lVar10 = *plVar1;
          iVar7 = (int)lVar10 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0159d3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x10))();
          return;
        }
        if ((int)lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
        return;
      }
      if (uVar4 == 4) {
        FUN_0159d42c();
        return;
      }
      if (uVar4 == 1) {
        FUN_0159d450(*(undefined4 *)(param_2 + 0xc));
      }
      else {
        if (uVar4 == 2) {
          FUN_0159d450(*(undefined4 *)(param_2 + 0xc));
          return;
        }
        if (uVar4 != 3) {
          return;
        }
        FUN_0159d42c();
      }
    }
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  return;
}


