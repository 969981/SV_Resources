/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a35a94; name: FUN_00a35a94
 */


uint FUN_00a35a94(undefined8 param_1,ulong param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  
  uVar7 = 0;
  if (param_3 == 0) goto LAB_00a35b80;
  plVar10 = *(long **)(param_3 + 0x138);
  if (plVar10 == (long *)0x0) {
    uVar7 = 0;
    goto LAB_00a35b80;
  }
  plVar1 = plVar10 + 5;
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((int)lVar5 == -1) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != 0","IncrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x53,"Reference counter overflows.");
  }
  if (((*(byte *)(*(long *)(plVar10[0xe] + 0x10) + 4) >> 2 & 1) == 0) &&
     (sVar6 = FUN_00cf44f4(), sVar6 == 0)) {
LAB_00a35b64:
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_0113b7d0(plVar10);
    uVar8 = FUN_01155170(plVar10);
    uVar11 = (uint)(param_2 >> 0x10);
    if ((((uVar11 & 0xff) != 0x12) &&
        (((uVar7 & 0xff) != (uVar11 & 0xff) && ((uVar8 & 0xff) != (uVar11 & 0xff))))) ||
       (uVar9 = FUN_00a35c0c(param_2 >> 0x18 & 0xffffff,param_3), (uVar9 & 1) == 0))
    goto LAB_00a35b64;
    uVar7 = FUN_00a35f08(param_1,param_2 >> 0x28 & 0xff);
  }
  do {
    lVar5 = *plVar1;
    iVar4 = (int)lVar5 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
LAB_00a35b80:
  return uVar7 & 1;
}


