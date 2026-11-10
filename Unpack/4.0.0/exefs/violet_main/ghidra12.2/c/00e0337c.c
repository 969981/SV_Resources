/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e0337c; name: FUN_00e0337c
 */


void FUN_00e0337c(undefined1 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  
  plVar10 = *(long **)(*(long *)(*param_4 + (ulong)*(uint *)(param_2 + 8)) + 0x58);
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    if (*(long *)(lVar11 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
      *(undefined8 *)(lVar11 + 8) = uVar6;
      *(undefined4 *)(lVar11 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  iVar5 = FUN_00e03574(plVar10,*param_4 + (ulong)*(uint *)(param_2 + 0x120));
  if (-1 < iVar5) {
    uVar8 = (ulong)iVar5;
    uVar9 = *(long *)(param_2 + 0xf0) - *(long *)(param_2 + 0xe8) >> 3;
    if (uVar8 < uVar9 - *(byte *)(*param_4 + (ulong)*(uint *)(param_2 + 0x124))) {
      if (uVar9 <= uVar8) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar7 = *(long **)(*(long *)(param_2 + 0xe8) + uVar8 * 8);
      if ((plVar7 != (long *)0x0) && ((char)plVar7[0x1c] == '\0')) {
        (**(code **)(*plVar7 + 0x40))(param_1,plVar7,param_3,param_4);
        uVar8 = FUN_029f46e0(param_1);
        if ((uVar8 & 1) == 0) goto LAB_00e03438;
      }
    }
  }
  *param_1 = *PTR_DAT_047db188;
LAB_00e03438:
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00e034b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x50))(plVar10);
      return;
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


