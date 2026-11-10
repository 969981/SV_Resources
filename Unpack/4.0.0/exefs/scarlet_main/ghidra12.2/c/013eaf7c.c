/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 013eaf7c; name: FUN_013eaf7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013eaf7c(long *param_1,long *param_2,undefined2 *param_3)

{
  short *psVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  FUN_00d1a240(param_1,0x80048280);
  *param_1 = (long)&PTR_FUN_04544cb0;
  param_1[4] = (long)&PTR_LAB_04544df0;
  param_1[5] = (long)&PTR_LAB_04544f18;
  param_1[6] = (long)&PTR_LAB_04544f70;
  plVar10 = param_1 + 7;
  *plVar10 = (long)&PTR_LAB_04544f98;
  *(undefined4 *)(param_1 + 0x24) = 0;
  lVar9 = *param_2;
  param_1[0x25] = lVar9;
  if (lVar9 != 0) {
    lVar9 = *(long *)(lVar9 + 0x30);
    if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("m_object != nullptr","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x3d);
    }
    psVar1 = (short *)(lVar9 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      *(undefined8 *)(lVar9 + 8) = uVar8;
      *(undefined4 *)(lVar9 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  *(undefined2 *)(param_1 + 0x26) = *param_3;
  *(undefined2 *)((long)param_1 + 0x132) = param_3[1];
  *(undefined1 *)((long)param_1 + 0x134) = *(undefined1 *)(param_3 + 2);
  *(undefined1 *)((long)param_1 + 0x135) = *(undefined1 *)((long)param_3 + 5);
  *(undefined1 *)((long)param_1 + 0x136) = *(undefined1 *)(param_3 + 3);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((long)param_1 + 0x13c) = *(undefined4 *)(param_3 + 6);
  lVar6 = _UNK_03caa988;
  lVar9 = _DAT_03caa980;
  uVar3 = *(undefined4 *)(param_3 + 8);
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x29] = 0;
  param_1[0x2d] = lVar6;
  param_1[0x2c] = lVar9;
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  if (((char)param_1[0xb] != -0x7e) || (*(char *)((long)param_1 + 0x59) != -0x7e)) {
    lVar9 = param_1[0xb];
    *(undefined2 *)(param_1 + 0xb) = 0x8282;
    if (param_1[9] != 0) {
      FUN_00c6a584(param_1[9],plVar10);
    }
    (**(code **)(*plVar10 + 0x20))(plVar10,(short)lVar9);
  }
  (**(code **)(*param_1 + 0x70))(param_1,0);
  uVar7 = FUN_00de1730(param_1[0x25]);
  if ((uVar7 & 1) == 0) {
    FUN_0132b848(param_1[0x25]);
    return;
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  return;
}


