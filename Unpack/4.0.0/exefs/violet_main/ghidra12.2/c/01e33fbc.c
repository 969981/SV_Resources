/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e33fbc; name: FUN_01e33fbc
 */


void FUN_01e33fbc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  
  pcVar9 = (code *)param_1[1];
  if (pcVar9 != (code *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar9)(param_1 + 4);
  }
  uVar3 = param_2[1];
  param_1[4] = *param_2;
  param_1[5] = uVar3;
  lVar10 = param_2[2];
  param_1[6] = lVar10;
  if (lVar10 != 0) {
    piVar1 = (int *)(lVar10 + 0x28);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  puVar8 = PTR_LAB_047d9830;
  puVar7 = PTR_LAB_047d9828;
  puVar6 = PTR_LAB_047d9820;
  *param_1 = PTR_LAB_047d9818;
  param_1[1] = puVar6;
  param_1[2] = puVar7;
  param_1[3] = puVar8;
  return;
}


