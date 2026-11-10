/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00db683c; name: FUN_00db683c
 */


void FUN_00db683c(undefined8 *param_1,long *param_2,long param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *param_1;
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  if (lVar6 != 0) {
    if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar8;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  *param_2 = (long)(PTR_DAT_047e0d78 + 0x10);
  FUN_0270e92c(param_2 + 1,param_3 + 8);
  lVar7 = *(long *)(param_3 + 0x48);
  param_2[9] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_2[10] = *(long *)(param_3 + 0x50);
  param_2[0xb] = *(long *)(param_3 + 0x58);
  param_2[0xc] = *(long *)(param_3 + 0x60);
  param_2[0xd] = *(long *)(param_3 + 0x68);
  lVar7 = *(long *)(param_3 + 0x70);
  *(undefined8 *)(param_3 + 0x70) = 0;
  param_2[0xe] = lVar7;
  param_2[0xf] = *(long *)(param_3 + 0x78);
  param_2[0x10] = *(long *)(param_3 + 0x80);
  param_2[0x11] = *(long *)(param_3 + 0x88);
  lVar7 = *(long *)(param_3 + 0x90);
  *(undefined8 *)(param_3 + 0x90) = 0;
  param_2[0x12] = lVar7;
  param_2[0x13] = *(long *)(param_3 + 0x98);
  param_2[0x14] = *(long *)(param_3 + 0xa0);
  param_2[0x15] = *(long *)(param_3 + 0xa8);
  lVar7 = *(long *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  param_2[0x16] = lVar7;
  uVar2 = *(undefined4 *)(param_3 + 0xb8);
  *(undefined1 *)((long)param_2 + 0xbc) = *(undefined1 *)(param_3 + 0xbc);
  *(undefined4 *)(param_2 + 0x17) = uVar2;
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


