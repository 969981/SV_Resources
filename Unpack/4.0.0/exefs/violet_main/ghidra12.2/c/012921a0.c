/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012921a0; name: FUN_012921a0
 */


void FUN_012921a0(long param_1)

{
  bool bVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong local_28;
  
  plVar6 = *(long **)(param_1 + 0x40);
  lVar7 = *plVar6;
  lVar10 = plVar6[1];
  if (lVar10 != lVar7) {
    uVar8 = 0;
    uVar9 = 1;
    do {
      if ((ulong)((lVar10 - lVar7 >> 4) * -0xf0f0f0f0f0f0f0f) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      local_28 = *(ulong *)(lVar7 + uVar8 * 0x110);
      if ((local_28 & 0xff) != 0) {
        FUN_01292394(*(undefined8 *)(param_1 + 0x30),&local_28);
        plVar6 = *(long **)(param_1 + 0x40);
      }
      lVar7 = *plVar6;
      lVar10 = plVar6[1];
      bVar1 = uVar9 < (ulong)((lVar10 - lVar7 >> 4) * -0xf0f0f0f0f0f0f0f);
      uVar8 = uVar9;
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (bVar1);
  }
  lVar7 = *(long *)(param_1 + 0xb0);
  lVar10 = *(long *)(param_1 + 0xb8);
  do {
    if (lVar10 == lVar7) {
      plVar6 = *(long **)(param_1 + 0x60);
      *(long *)(param_1 + 0xb8) = lVar7;
      lVar7 = *plVar6;
      lVar10 = plVar6[1];
      if (((lVar10 != lVar7) && (FUN_011e675c(lVar10 + -0x110), lVar10 + -0x110 != lVar7)) &&
         (FUN_011e675c(lVar10 + -0x220), lVar10 + -0x220 != lVar7)) {
        do {
          FUN_011e675c(lVar10 + -0x330);
          lVar10 = lVar10 + -0x110;
        } while (lVar7 + 0x220 != lVar10);
      }
      plVar6[1] = lVar7;
      plVar6 = *(long **)(param_1 + 0x40);
      lVar7 = *plVar6;
      lVar10 = plVar6[1];
      if (((lVar10 != lVar7) && (FUN_011e675c(lVar10 + -0x110), lVar10 + -0x110 != lVar7)) &&
         (FUN_011e675c(lVar10 + -0x220), lVar10 + -0x220 != lVar7)) {
        do {
          FUN_011e675c(lVar10 + -0x330);
          lVar10 = lVar10 + -0x110;
        } while (lVar7 + 0x220 != lVar10);
      }
      plVar6[1] = lVar7;
      return;
    }
    plVar6 = *(long **)(lVar10 + -8);
    if (plVar6 != (long *)0x0) {
      plVar2 = plVar6 + 5;
      do {
        lVar5 = *plVar2;
        iVar4 = (int)lVar5 + -1;
        cVar3 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar1) {
          *(int *)plVar2 = iVar4;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
      else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    plVar6 = (long *)(lVar10 + -0x10);
    lVar10 = lVar10 + -0x30;
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 0x20))();
    }
  } while( true );
}


