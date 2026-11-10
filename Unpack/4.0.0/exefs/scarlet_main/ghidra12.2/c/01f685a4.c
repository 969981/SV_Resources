/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f685a4; name: FUN_01f685a4
 */


void FUN_01f685a4(long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ushort uVar12;
  long *local_1c0;
  undefined4 local_1b8 [86];
  long *local_60 [4];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  
  if (*(long *)(param_1 + 0x90) != param_4) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","OnInputData",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/p2p/trade/box_trade_client.cpp"
               ,0x1ff);
  }
  FUN_01267a34(local_60,param_2,param_3);
  local_24 = 0;
  if (local_60[0] == (long *)0x0) goto switchD_01f68648_caseD_0;
  FUN_01f6893c(local_1b8,&local_24);
  if (local_60[0] == (long *)0x0) {
    uVar12 = 0;
    bVar5 = true;
  }
  else {
    lVar10 = *local_60[0];
    lVar9 = local_60[0][2];
    lVar1 = lVar9 + 1;
    bVar3 = *(byte *)(lVar10 + lVar9);
    uVar12 = (ushort)bVar3;
    local_60[0][2] = lVar1;
    if (bVar3 < 0x82) {
      if (bVar3 == 0x80) {
        uVar12 = (ushort)*(byte *)(lVar10 + lVar1);
        lVar9 = lVar9 + 2;
      }
      else {
        if (bVar3 != 0x81) {
          bVar5 = false;
          goto LAB_01f68628;
        }
        uVar12 = *(ushort *)(lVar10 + lVar1);
        lVar9 = lVar9 + 3;
      }
      bVar5 = false;
      local_60[0][2] = lVar9;
    }
    else {
      bVar5 = false;
      uVar12 = 0;
    }
  }
LAB_01f68628:
  switch(local_24) {
  case 0:
switchD_01f68648_caseD_0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","OnInputData",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/p2p/trade/box_trade_client.cpp"
               ,0x212);
  case 1:
    if (!bVar5) {
      cVar4 = *(char *)(*local_60[0] + local_60[0][2]);
      local_60[0][2] = local_60[0][2] + 1;
      if (cVar4 == -0x47) {
        FUN_01f6898c(local_1b8,param_1 + 0xae0,local_60[0]);
      }
      else {
        local_1b8[0] = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
    break;
  case 2:
    memset(local_1b8,0,0x158);
    if (!bVar5) {
      FUN_01eb949c(&local_1c0,local_1b8,local_60[0]);
    }
    local_1c0 = (long *)FUN_00fee8fc(auStack_28,*(undefined8 *)(param_1 + 8));
    if (local_1c0 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = local_1c0 + 5;
      do {
        lVar1 = *plVar11;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar5) {
          *(int *)plVar11 = (int)lVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((int)lVar1 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","IncrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x53,"Reference counter overflows.");
      }
      plVar11 = local_1c0;
    }
    FUN_00f13ad8(plVar11,local_1b8);
    FUN_01f684fc(param_1,&local_1c0);
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 5;
      do {
        lVar1 = *plVar2;
        iVar6 = (int)lVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      else if ((int)lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                   ,0x58,"Reference counter underflows.");
      }
    }
    break;
  case 3:
    if (*(ushort *)(param_1 + 0xe2) <= uVar12) {
      FUN_01f68a7c(param_1);
    }
    break;
  case 4:
    local_1c0 = (long *)CONCAT44(local_1c0._4_4_,1);
    if (bVar5) {
LAB_01f68684:
      uVar7 = 2;
    }
    else {
      bVar3 = *(byte *)(*local_60[0] + local_60[0][2]);
      local_60[0][2] = local_60[0][2] + 1;
      if ((((bVar3 != 0x86) && ((bVar3 & 0xfe) != 0x84)) && ((char)bVar3 < '\0')) && (bVar3 < 0xc0))
      goto LAB_01f68684;
      FUN_01e62368(local_1b8,bVar3,&local_1c0,local_60[0]);
      uVar7 = (uint)((int)local_1c0 == 2);
      if ((int)local_1c0 == 1) goto LAB_01f68684;
    }
    *(short *)(param_1 + 0xe0) = *(short *)(param_1 + 0xe0) + 1;
    *(uint *)(param_1 + 0x14dc) = uVar7;
    *(ushort *)(param_1 + 0xe2) = uVar12;
    if (*(char *)(param_1 + 200) != '\0') {
      *(undefined1 *)(param_1 + 200) = 0;
    }
    *(undefined4 *)(param_1 + 0xc4) = 2;
    if (*(int *)(param_1 + 0xc0) - 4U < 2) {
      if (uVar7 != 0) goto LAB_01f686c0;
      uVar8 = 3;
    }
    else {
      if ((*(int *)(param_1 + 0xc0) != 3) || (uVar7 == 0)) break;
LAB_01f686c0:
      uVar8 = 2;
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar8;
    break;
  case 5:
    if ((*(ushort *)(param_1 + 0xe2) <= uVar12) && ((*(uint *)(param_1 + 0xc0) & 0xfffffffe) == 4))
    {
      *(undefined4 *)(param_1 + 0xc4) = 5;
    }
  }
  FUN_01267b4c(local_60);
  return;
}


