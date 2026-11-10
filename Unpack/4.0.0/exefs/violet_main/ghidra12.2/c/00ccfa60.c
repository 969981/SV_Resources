/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccfa60; name: FUN_00ccfa60
 */


void FUN_00ccfa60(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  long lVar7;
  long lVar8;
  
  param_1[2] = 0;
  puVar5 = PTR_DAT_047d66f8;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar5 + 0x10);
  puVar6 = (undefined4 *)FUN_01053840();
  lVar7 = nn::os::GetTlsValue(*puVar6);
  lVar8 = 0;
  if ((lVar7 != 0) && (lVar8 = 0, *(long *)(lVar7 + 0x80) != 0)) {
    lVar8 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = (long)&PTR_LAB_045d19f8;
  param_1[1] = lVar8;
  param_1[4] = (long)&PTR_LAB_045d1a30;
  lVar8 = *param_2;
  param_1[6] = lVar8;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  return;
}


