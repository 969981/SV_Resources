/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028fd528; name: FUN_028fd528
 */


void FUN_028fd528(undefined8 *param_1,long *param_2,long param_3)

{
  short *psVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar12 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04865a38), iVar8 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar9 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar9 != 0) {
    if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar12;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  }
  puVar7 = PTR_DAT_047d9c80;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *param_2 = (long)(puVar7 + 0x10);
  param_2[1] = 0;
  FUN_01060890(param_2 + 1,param_3 + 8);
  plVar10 = (long *)param_2[3];
  param_2[3] = 0;
  if (plVar10 != (long *)0x0) {
    lVar11 = plVar10[6];
    psVar1 = (short *)(lVar11 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar6) {
        *psVar1 = sVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar11 + 0x10) = 0;
      (**(code **)(*plVar10 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  lVar11 = *(long *)(param_3 + 0x18);
  *(undefined8 *)(param_3 + 0x18) = 0;
  param_2[3] = lVar11;
  FUN_00ecc978(param_2 + 4,param_3 + 0x20);
  FUN_00eccc4c(param_2 + 6,param_3 + 0x30);
  *param_2 = (long)&PTR_FUN_045ecdb0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[8] = 0;
  lVar11 = *(long *)(param_3 + 0x68);
  lVar3 = *(long *)(param_3 + 0x70);
  lVar4 = *(long *)(param_3 + 0x60);
  param_2[0xb] = *(long *)(param_3 + 0x58);
  param_2[0xc] = lVar4;
  param_2[0xd] = lVar11;
  param_2[0xe] = lVar3;
  param_2[8] = *(long *)(param_3 + 0x40);
  param_2[9] = *(long *)(param_3 + 0x48);
  param_2[10] = *(long *)(param_3 + 0x50);
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x50) = 0;
  *(undefined8 *)(param_3 + 0x40) = 0;
  *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)(param_3 + 0x78);
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  }
  return;
}


