/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ecc73c; name: FUN_00ecc73c
 */


void FUN_00ecc73c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 == 0) {
    *param_2 = &PTR_FUN_045d22e0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[1] = 0;
    FUN_00ecd8c8(param_2 + 1,param_3 + 8);
    plVar7 = (long *)param_2[3];
    param_2[3] = 0;
    if (plVar7 != (long *)0x0) {
      lVar6 = plVar7[6];
      psVar1 = (short *)(lVar6 + 0x1a);
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
        *(undefined8 *)(lVar6 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) goto LAB_00ecc840;
    }
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x18) = 0;
    param_2[3] = uVar9;
    FUN_00ecc978(param_2 + 4,param_3 + 0x20);
    FUN_00eccc4c(param_2 + 6,param_3 + 0x30);
    *param_2 = &PTR_FUN_045d22c0;
  }
  else {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar9;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = &PTR_FUN_045d22e0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[1] = 0;
    FUN_00ecd8c8(param_2 + 1,param_3 + 8);
    plVar7 = (long *)param_2[3];
    param_2[3] = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[6];
      psVar1 = (short *)(lVar8 + 0x1a);
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
        *(undefined8 *)(lVar8 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))();
      }
      else if (sVar2 == 0) {
LAB_00ecc840:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
    uVar9 = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_3 + 0x18) = 0;
    param_2[3] = uVar9;
    FUN_00ecc978(param_2 + 4,param_3 + 0x20);
    FUN_00eccc4c(param_2 + 6,param_3 + 0x30);
    *param_2 = &PTR_FUN_045d22c0;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


