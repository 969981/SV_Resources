/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0148750c; name: FUN_0148750c
 */


void FUN_0148750c(long *param_1,long *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04865a38), iVar6 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar7 = nn::os::GetTlsValue(DAT_04865a30);
  puVar5 = PTR_DAT_047d8c78;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar9 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar9;
  param_1[4] = (long)(puVar5 + 0x88);
  plVar10 = param_1 + 5;
  *plVar10 = (long)(puVar5 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar10);
  *param_1 = (long)&DAT_04599f78;
  param_1[4] = (long)&PTR_LAB_04599ff0;
  *plVar10 = (long)&DAT_0459a040;
  lVar7 = *param_2;
  param_1[8] = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar7 + 0x1a);
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
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar8;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 1;
  nn::os::InitializeLightEvent(param_1 + 10,0,1);
  param_1[0x12] = 0;
  param_1[0x10] = param_1[1];
  param_1[0x11] = 0x7ffffffffffffff;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x16] = param_1[1];
  param_1[0x17] = 0x7ffffffffffffff;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1a] = (long)&DAT_cbf29ce484222645;
  param_1[0x1b] = (long)&DAT_03c886bc;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = (long)&DAT_cbf29ce484222645;
  param_1[0x1f] = (long)&DAT_03c886bc;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  return;
}


