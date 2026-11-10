/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010efca0; name: FUN_010efca0
 */


void FUN_010efca0(undefined8 *param_1,long *param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  plVar7 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x40,8);
  if (plVar7 == (long *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar8 = nn::os::GetTlsValue(DAT_04865a30);
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    puVar5 = PTR_DAT_047d9c80;
    plVar7[7] = 0;
    *plVar7 = (long)(puVar5 + 0x10);
    plVar7[4] = 0;
    plVar7[6] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[5] = 0;
    plVar7[1] = 0;
    FUN_00fba0b8(plVar7 + 1,param_3 + 8);
    lVar11 = *(long *)(param_3 + 0x18);
    if (lVar11 != 0) {
      lVar12 = *(long *)(lVar11 + 0x30);
      if (*(long *)(lVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar12 + 0x1a);
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
        uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
        *(undefined8 *)(lVar12 + 8) = uVar10;
        *(undefined4 *)(lVar12 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar9 = (long *)plVar7[3];
    plVar7[3] = lVar11;
    if (plVar9 != (long *)0x0) {
      lVar11 = plVar9[6];
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
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    FUN_00cef9d0(plVar7 + 4,param_3 + 0x20);
    FUN_00ceffd4(plVar7 + 6,param_3 + 0x30);
    *plVar7 = (long)(PTR_DAT_047e32b8 + 0x10);
    *param_1 = plVar7;
    param_1[1] = param_2;
    param_1[2] = 0x40;
    param_1[3] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


