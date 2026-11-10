/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014e94fc; name: FUN_014e94fc
 */


undefined4 FUN_014e94fc(long param_1,int param_2,uint param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 uVar12;
  int iVar13;
  
  if (*(char *)(param_1 + 0x1714) == '\0') {
    return 0;
  }
  plVar8 = (long *)FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0));
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar11 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)lVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if ((int)lVar11 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","IncrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x53,"Reference counter overflows.");
    }
  }
  iVar7 = FUN_01ddf5e4(param_1,plVar8);
  uVar12 = 0;
  if (iVar7 == 0) goto LAB_014e9574;
  uVar3 = *(uint *)(param_1 + 0x1710);
  if (uVar3 < 6) {
    if (param_2 == 2) {
      lVar11 = FUN_01195854();
      if (lVar11 != 0) {
        param_3 = param_3 - 1;
        if ((int)param_3 < 0) goto LAB_014e96d0;
        if ((param_3 < 6) || (param_4 < 6)) {
          uVar3 = 0;
          if (param_3 < 6) {
            uVar3 = param_3;
          }
          uVar2 = 0;
          if (param_4 < 6) {
            uVar2 = param_4;
          }
          uVar4 = *(ushort *)(lVar11 + (ulong)uVar3 * 0xc + (ulong)uVar2 * 2 + 0x526);
          param_3 = (uint)(uVar4 >> 8);
          iVar13 = 0;
          if ((param_3 < 0x21) && ((uVar4 & 0xfe) < 0x1e)) {
            uVar3 = *(uint *)(param_1 + 0x1710);
            param_4 = uVar4 & 0xff;
            uVar9 = FUN_01195854();
            goto LAB_014e9600;
          }
          goto LAB_014e9564;
        }
      }
      goto LAB_014e9560;
    }
    if (param_2 == 1) {
LAB_014e96d0:
      iVar13 = 2;
    }
    else {
      if (param_2 != 0) goto LAB_014e9560;
      uVar9 = FUN_01195854();
LAB_014e9600:
      uVar10 = FUN_014e61a4(uVar9,param_3,param_4,uVar3);
      iVar13 = 1;
      if ((uVar10 & 1) == 0) {
        iVar13 = 2;
      }
    }
  }
  else {
LAB_014e9560:
    iVar13 = 0;
  }
LAB_014e9564:
  uVar12 = 1;
  if (iVar13 == 2 || iVar7 == 2) {
    uVar12 = 2;
  }
LAB_014e9574:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 5;
    do {
      lVar11 = *plVar1;
      iVar7 = (int)lVar11 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
    else if ((int)lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                 ,0x58,"Reference counter underflows.");
    }
  }
  return uVar12;
}


