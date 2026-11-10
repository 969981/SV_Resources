/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01fa804c; name: FUN_01fa804c
 */


void FUN_01fa804c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  pcVar11 = (char *)*param_1;
  if (pcVar11 == (char *)0x0) {
    return;
  }
  pcVar9 = (char *)param_1[1];
  pcVar10 = pcVar11;
  if ((char *)param_1[1] != pcVar11) {
    do {
      if (pcVar9[-0x28] != '\0') {
        pcVar9[-0x28] = '\0';
      }
      plVar6 = *(long **)(pcVar9 + -0x30);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 5;
        do {
          lVar2 = *plVar1;
          iVar5 = (int)lVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        else if ((int)lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      pcVar10 = pcVar9 + -0xa0;
      if (*pcVar10 != '\0') {
        if (*(long **)(pcVar9 + -0x88) != (long *)0x0) {
          (**(code **)(**(long **)(pcVar9 + -0x88) + 0x20))();
        }
        *pcVar10 = '\0';
      }
      pcVar9 = pcVar10;
    } while (pcVar10 != pcVar11);
    pcVar10 = (char *)*param_1;
  }
  param_1[1] = pcVar11;
  lVar2 = param_1[2];
  plVar6 = (long *)param_1[3];
  uVar7 = (**(code **)(*plVar6 + 0xf8))(plVar6);
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00c4e600();
    if (0 < *(int *)(lVar8 + 0x12c8)) {
      FUN_00c48fe8(plVar6,pcVar10,lVar2 - (long)pcVar10,0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01fa814c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x18))(plVar6,pcVar10,lVar2 - (long)pcVar10,0x10);
  return;
}


