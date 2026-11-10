/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270e78c; name: FUN_0270e78c
 */


void FUN_0270e78c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
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
  uVar8 = *param_3;
  *param_3 = 0;
  *param_2 = uVar8;
  uVar8 = param_3[1];
  param_3[1] = 0;
  param_2[1] = uVar8;
  uVar8 = param_3[2];
  param_3[2] = 0;
  param_2[2] = uVar8;
  FUN_011ea0a0(param_2 + 4,param_3 + 4);
  puVar4 = PTR_DAT_047e0d78;
  uVar8 = param_3[0x3c];
  param_3[0x3c] = 0;
  param_2[0x3c] = uVar8;
  uVar8 = param_3[0x3d];
  param_3[0x3d] = 0;
  param_2[0x3d] = uVar8;
  param_2[0x3e] = puVar4 + 0x10;
  FUN_0270e92c(param_2 + 0x3f,param_3 + 0x3f);
  lVar7 = param_3[0x47];
  param_2[0x47] = lVar7;
  if (lVar7 != 0) {
    piVar1 = (int *)(lVar7 + 0x28);
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
  param_2[0x48] = param_3[0x48];
  uVar8 = param_3[0x49];
  param_3[0x49] = 0;
  param_2[0x49] = uVar8;
  FUN_0270eabc(param_2 + 0x4a,param_3 + 0x4a);
  if (lVar6 != 0) {
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
  }
  return;
}


