/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02272bfc; name: FUN_02272bfc
 */


void FUN_02272bfc(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long local_38;
  undefined8 local_18;
  
  FUN_00d1a22c(param_1,0);
  *param_1 = &PTR_FUN_045aef98;
  param_1[4] = &PTR_LAB_045af0e0;
  param_1[5] = &DAT_045af208;
  param_1[6] = &PTR_LAB_045af260;
  param_1[7] = &PTR_LAB_045af288;
  param_1[0x2c] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = &DAT_cbf29ce484222645;
  param_1[0x26] = &DAT_03c886bc;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = &DAT_cbf29ce484222645;
  param_1[0x2a] = &DAT_03c886bc;
  param_1[0x2b] = 0;
  lVar5 = FUN_02274c44(param_1[1]);
  local_38 = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x28);
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
  local_18 = param_1[0x24];
  param_1[0x24] = 0;
  FUN_02274d6c(&local_18);
  local_38 = 0;
  param_1[0x24] = lVar5;
  FUN_02274d6c(&local_38);
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


