/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01466c8c; name: FUN_01466c8c
 */


uint FUN_01466c8c(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_4c [28];
  
  lVar5 = DAT_04840ac0;
  plVar10 = (long *)*param_1;
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 5;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)lVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((int)lVar9 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  lVar9 = plVar10[0xe];
  bVar4 = *(char *)(lVar9 + 0x19) == '\0';
  if (bVar4) {
    FUN_00e677e8();
    lVar9 = plVar10[0xe];
  }
  iVar2 = *(int *)(lVar5 + 0x40);
  iVar7 = FUN_00dbf838(lVar9);
  if ((iVar2 == iVar7) &&
     (cVar3 = *(char *)(lVar5 + 0x45), cVar6 = FUN_018e79fc(plVar10), cVar3 == cVar6)) {
    FUN_020f8ff0(plVar10,auStack_4c,0xd);
    uVar8 = FUN_0131cbf0(auStack_4c,lVar5 + 0x50);
  }
  else {
    uVar8 = 0;
  }
  if (bVar4 && *(char *)(plVar10[0xe] + 0x19) != '\0') {
    FUN_00e679f0();
  }
  plVar1 = plVar10 + 5;
  do {
    lVar5 = *plVar1;
    iVar2 = (int)lVar5 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 0) {
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  else if ((int)lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
               ,0x58,"Reference counter underflows.");
  }
  return uVar8 & 1;
}


