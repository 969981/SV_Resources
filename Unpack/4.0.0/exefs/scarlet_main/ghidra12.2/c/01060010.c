/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01060010; name: FUN_01060010
 */


void FUN_01060010(undefined8 *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  short *psVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
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
    puVar1 = PTR_DAT_047d9c80 + 0x10;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar7[5] = 0;
    plVar7[6] = 0;
    plVar7[7] = 0;
    *plVar7 = (long)puVar1;
    plVar7[1] = 0;
    FUN_01060890(plVar7 + 1,param_3 + 8);
    plVar9 = (long *)plVar7[3];
    plVar7[3] = 0;
    if (plVar9 != (long *)0x0) {
      lVar10 = plVar9[6];
      psVar2 = (short *)(lVar10 + 0x1a);
      do {
        sVar3 = *psVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar2,0x10);
        if (bVar5) {
          *psVar2 = sVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar3 == 1) {
        *(undefined8 *)(lVar10 + 0x10) = 0;
        (**(code **)(*plVar9 + 0x50))();
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar10 = *(long *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x18) = 0;
    plVar7[3] = lVar10;
    FUN_00ecc978(plVar7 + 4,param_3 + 0x20);
    FUN_00eccc4c(plVar7 + 6,param_3 + 0x30);
    *plVar7 = (long)(PTR_DAT_047e32b8 + 0x10);
    *param_1 = plVar7;
    param_1[1] = param_2;
    param_1[2] = 0x40;
    param_1[3] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


