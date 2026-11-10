/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01aad480; name: FUN_01aad480
 */


void FUN_01aad480(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar8 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar8 != 0) {
    if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = uVar11;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  }
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  param_2[2] = param_3[2];
  uVar11 = param_3[3];
  param_3[3] = 0;
  param_2[3] = uVar11;
  uVar11 = param_3[4];
  uVar3 = *(undefined4 *)(param_3 + 5);
  param_2[7] = 0;
  puVar6 = PTR_DAT_047d9c80;
  *(undefined4 *)(param_2 + 5) = uVar3;
  param_2[4] = uVar11;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[6] = puVar6 + 0x10;
  param_2[10] = 0;
  param_2[0xb] = 0;
  FUN_01060890(param_2 + 7,param_3 + 7);
  plVar9 = (long *)param_2[9];
  param_2[9] = 0;
  if (plVar9 != (long *)0x0) {
    lVar10 = plVar9[6];
    psVar1 = (short *)(lVar10 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar10 + 0x10) = 0;
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
  uVar11 = param_3[9];
  param_3[9] = 0;
  param_2[9] = uVar11;
  FUN_00ecc978(param_2 + 10,param_3 + 10);
  FUN_00eccc4c(param_2 + 0xc,param_3 + 0xc);
  param_2[6] = PTR_DAT_047e2ff8 + 0x10;
  if (lVar8 != 0) {
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
  }
  return;
}


