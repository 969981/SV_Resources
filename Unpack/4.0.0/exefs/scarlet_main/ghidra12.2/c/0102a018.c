/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0102a018; name: FUN_0102a018
 */


void FUN_0102a018(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  param_1[2] = 0;
  puVar4 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar6 = nn::os::GetTlsValue(DAT_04865a30);
  puVar4 = PTR_DAT_047d8c78;
  if (lVar6 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar8 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[1] = lVar8;
  param_1[4] = (long)(puVar4 + 0x88);
  plVar7 = param_1 + 5;
  *plVar7 = (long)(puVar4 + 0xd8);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar7);
  *param_1 = (long)&PTR_FUN_045de8c8;
  param_1[4] = (long)&PTR_LAB_045de940;
  *plVar7 = (long)&DAT_045de990;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[8] = (long)&DAT_cbf29ce484222645;
  param_1[9] = (long)&DAT_03c886bc;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar6 = *param_2;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0xd] = lVar6;
  param_1[0xe] = 0;
  *(undefined1 *)((long)param_1 + 0x81) = *(undefined1 *)((long)param_2 + 9);
  *(undefined1 *)((long)param_1 + 0x82) = *(undefined1 *)((long)param_2 + 10);
  *(undefined8 *)((long)param_1 + 0x84) = 0xffffffffffffffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  if ((code *)param_2[4] != (code *)0x0) {
    (*(code *)param_2[4])(param_2 + 6,param_1 + 0x18);
    lVar6 = param_2[5];
    param_1[0x15] = param_2[3];
    param_1[0x17] = lVar6;
    lVar6 = param_2[2];
    param_1[0x16] = param_2[4];
    param_1[0x14] = lVar6;
  }
  param_1[0x24] = param_2[0x12];
  lVar6 = param_2[0x13];
  param_1[0x25] = lVar6;
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x28);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  param_1[0x26] = param_2[0x14];
  param_1[0x27] = param_2[0x15];
  param_1[0x28] = param_2[0x16];
  plVar7 = (long *)param_2[0x17];
  param_1[0x29] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(char *)(param_1 + 0x10) = (char)param_2[1];
  return;
}


