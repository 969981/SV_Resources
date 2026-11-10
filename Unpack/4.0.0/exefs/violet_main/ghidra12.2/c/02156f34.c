/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02156f34; name: FUN_02156f34
 */


void FUN_02156f34(undefined4 param_1,long *param_2,long *param_3,long *param_4,long *param_5,
                 undefined4 param_6)

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
  
  puVar5 = PTR_DAT_047d66f8;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *param_2 = (long)(puVar5 + 0x10);
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
  *param_2 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_2[1] = lVar9;
  param_2[4] = (long)(puVar5 + 0x88);
  plVar10 = param_2 + 5;
  *plVar10 = (long)(puVar5 + 0xd8);
  param_2[7] = 0;
  param_2[6] = 0;
  FUN_00d1a3f4(param_2 + 6,plVar10);
  *param_2 = (long)&PTR_FUN_04598580;
  *(undefined1 *)(param_2 + 8) = 0;
  param_2[4] = (long)&PTR_LAB_04598608;
  *plVar10 = (long)&DAT_04598658;
  lVar7 = *param_3;
  param_2[9] = lVar7;
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
  param_2[0xb] = param_4[1];
  param_2[10] = *param_4;
  param_2[0xd] = param_5[1];
  param_2[0xc] = *param_5;
  *(undefined4 *)(param_2 + 0xe) = param_6;
  *(undefined4 *)((long)param_2 + 0x74) = param_1;
  *(undefined4 *)(param_2 + 0xf) = 0;
  return;
}


