/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eacf7c; name: FUN_01eacf7c
 */


void FUN_01eacf7c(undefined8 *param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &DAT_04554390;
  param_1[4] = &PTR_LAB_045543e0;
  param_1[5] = &PTR_LAB_04554400;
  param_1[6] = &PTR_LAB_04554420;
  param_1[7] = &PTR_LAB_04554438;
  FUN_01eab3c0();
  if ((long *)param_1[0x2e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2e] + 0x60))();
  }
  FUN_00d42924(param_1 + 0x27);
  FUN_01ead124(param_1 + 0x20);
  FUN_01ead1f4(param_1 + 0x19);
  FUN_01ead2f0(param_1 + 0x12);
  lVar7 = param_1[0xb];
  if (lVar7 != 0) {
    lVar8 = param_1[0xc];
    if (param_1[0xc] == lVar7) {
      lVar8 = lVar7;
    }
    else {
      do {
        if (*(char *)(lVar8 + -0x160) != '\0') {
          *(char *)(lVar8 + -0x160) = '\0';
        }
        lVar9 = lVar8 + -0x188;
        if (*(char *)(lVar8 + -0x178) != '\0') {
          *(char *)(lVar8 + -0x178) = '\0';
        }
        lVar8 = lVar9;
      } while (lVar7 != lVar9);
      lVar8 = param_1[0xb];
    }
    param_1[0xc] = lVar7;
    lVar7 = param_1[0xd];
    plVar6 = (long *)param_1[0xe];
    uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar5 & 1) != 0) {
      lVar9 = FUN_00c4e600();
      if (0 < *(int *)(lVar9 + 0x12c8)) {
        FUN_00c48fe8(plVar6,lVar8,lVar7 - lVar8,8);
        goto LAB_01ead064;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,lVar8,lVar7 - lVar8,8);
  }
LAB_01ead064:
  plVar6 = (long *)param_1[10];
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01ead120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x50))();
      return;
    }
    if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


