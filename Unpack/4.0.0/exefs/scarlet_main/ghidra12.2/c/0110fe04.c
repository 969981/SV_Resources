/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0110fe04; name: FUN_0110fe04
 */


void FUN_0110fe04(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  short *psVar2;
  short sVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar8 = *param_2;
  uVar4 = param_2[1];
  uVar10 = param_2[2];
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = uVar8;
  param_1[1] = uVar4;
  puVar1 = PTR_DAT_047d9c80;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[2] = uVar10;
  param_1[3] = puVar1 + 0x10;
  param_1[4] = 0;
  FUN_01060890(param_1 + 4,param_2 + 4);
  plVar7 = (long *)param_1[6];
  param_1[6] = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) goto LAB_0110ff6c;
  }
  uVar8 = param_2[6];
  param_2[6] = 0;
  param_1[6] = uVar8;
  FUN_00ecc978(param_1 + 7,param_2 + 7);
  FUN_00eccc4c(param_1 + 9,param_2 + 9);
  param_1[0xc] = 0;
  param_1[0xb] = puVar1 + 0x10;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[3] = puVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_01060890(param_1 + 0xc,param_2 + 0xc);
  plVar7 = (long *)param_1[0xe];
  param_1[0xe] = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[6];
    psVar2 = (short *)(lVar9 + 0x1a);
    do {
      sVar3 = *psVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
      if (bVar6) {
        *psVar2 = sVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (sVar3 == 1) {
      *(undefined8 *)(lVar9 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))();
    }
    else if (sVar3 == 0) {
LAB_0110ff6c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  uVar8 = param_2[0xe];
  param_2[0xe] = 0;
  param_1[0xe] = uVar8;
  FUN_00ecc978(param_1 + 0xf,param_2 + 0xf);
  FUN_00eccc4c(param_1 + 0x11,param_2 + 0x11);
  param_1[0xb] = puVar1;
  uVar8 = param_2[0x13];
  param_2[0x13] = 0;
  param_1[0x13] = uVar8;
  uVar8 = param_2[0x14];
  param_2[0x14] = 0;
  param_1[0x14] = uVar8;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  return;
}


