/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0143da0c; name: FUN_0143da0c
 */


void FUN_0143da0c(undefined8 *param_1,long *param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047dd4d8;
  if (lVar7 == 0) {
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    *param_2 = (long)(puVar5 + 0x10);
    param_2[1] = 0;
    FUN_00f2ebbc(param_2 + 1,param_3 + 8);
    plVar8 = (long *)param_2[3];
    param_2[3] = 0;
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_0143db18;
    }
    lVar7 = *(long *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x18) = 0;
    param_2[3] = lVar7;
    FUN_00ecc978(param_2 + 4,param_3 + 0x20);
    FUN_00eccc4c(param_2 + 6,param_3 + 0x30);
    *param_2 = (long)(PTR_DAT_047dd330 + 0x10);
  }
  else {
    if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar10;
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
    puVar5 = PTR_DAT_047dd4d8;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *param_2 = (long)(puVar5 + 0x10);
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[1] = 0;
    FUN_00f2ebbc(param_2 + 1,param_3 + 8);
    plVar8 = (long *)param_2[3];
    param_2[3] = 0;
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[6];
      psVar1 = (short *)(lVar9 + 0x1a);
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
        *(undefined8 *)(lVar9 + 0x10) = 0;
        (**(code **)(*plVar8 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_0143db18:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    lVar9 = *(long *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x18) = 0;
    param_2[3] = lVar9;
    FUN_00ecc978(param_2 + 4,param_3 + 0x20);
    FUN_00eccc4c(param_2 + 6,param_3 + 0x30);
    *param_2 = (long)(PTR_DAT_047dd330 + 0x10);
    *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
  }
  return;
}


