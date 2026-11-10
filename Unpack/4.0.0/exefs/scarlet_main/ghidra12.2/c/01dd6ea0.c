/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd6ea0; name: FUN_01dd6ea0
 */


undefined8 FUN_01dd6ea0(long param_1)

{
  long *plVar1;
  char *pcVar2;
  undefined1 uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_28;
  
  FUN_01dc2fb8(*(undefined8 *)(param_1 + 0x1a8));
  uVar11 = FUN_01dc28a8(*(undefined8 *)(param_1 + 0x1a8));
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  uVar12 = FUN_01195974(param_1);
  iVar10 = *(int *)(param_1 + 0x108);
  local_28 = uVar12;
  if (iVar10 != 0) {
    if ((iVar10 == 1) || (iVar10 == 2)) {
      FUN_0174fbdc(&local_58);
      uVar14 = FUN_014c0588(CONCAT44(uStack_54,local_58));
      plVar7 = (long *)CONCAT44(uStack_54,local_58);
      if (plVar7 != (long *)0x0) {
        plVar1 = plVar7 + 5;
        do {
          lVar13 = *plVar1;
          iVar9 = (int)lVar13 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *(int *)plVar1 = iVar9;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        else if ((int)lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint32_t>::max()","DecrementReferenceInternal",
                     "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/reference_object.h"
                     ,0x58,"Reference counter underflows.");
        }
      }
      if (uVar14 <= (uint)((ulong)uVar12 >> 0x20)) {
        FUN_01dc2a18(*(undefined8 *)(param_1 + 0x1a8),0);
      }
    }
    else {
      iVar10 = 3;
    }
  }
  uVar11 = FUN_01dc5cb4(*(undefined8 *)(param_1 + 0x1a8));
  if ((uVar11 & 1) != 0) {
    return 0;
  }
  sVar4 = *(short *)(param_1 + 0x1e4);
  if (sVar4 != -1) {
    if (sVar4 == -2) {
      local_5c = 0;
      local_58 = 0;
      FUN_014e2aa0(0,0,&local_58,&local_5c);
      uVar12 = *(undefined8 *)(param_1 + 0x1a8);
      lVar13 = FUN_01195854();
      uVar14 = (uint)*(byte *)(lVar13 + 0x570);
      iVar10 = 0;
    }
    else {
      local_5c = 0;
      local_58 = 0;
      FUN_014e2aa0(iVar10,sVar4,&local_58,&local_5c);
      uVar12 = *(undefined8 *)(param_1 + 0x1a8);
      if (*(int *)(param_1 + 0x108) == 0) {
        lVar13 = FUN_01195854();
        uVar14 = (uint)*(byte *)(lVar13 + 0x570);
      }
      else if (*(int *)(param_1 + 0x108) - 1U < 2) {
        uVar14 = *(uint *)(param_1 + 0x2a4);
      }
      else {
        uVar14 = 0xffffffff;
      }
    }
    FUN_01dd7598(uVar12,iVar10,uVar14,local_58,local_5c);
  }
  FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),0,0);
  FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),1,0);
  FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),3,0);
  FUN_014a3de8(*(undefined8 *)(param_1 + 0x1a8),4,0);
  if (*(int *)(param_1 + 0x298) != 2) goto LAB_01dd71b4;
  lVar13 = FUN_01195854();
  uVar3 = *(undefined1 *)(lVar13 + 0x570);
  iVar10 = 0;
  pcVar2 = (char *)(param_1 + 0x1714);
  do {
    lVar13 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),0,uVar3,iVar10);
    if (lVar13 != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x1a8);
      if ((*pcVar2 == '\0') || (iVar9 = FUN_014e94fc(param_1,0,uVar3,iVar10), iVar9 != 2)) {
        uVar15 = 0;
      }
      else {
        uVar15 = 2;
      }
      FUN_014e56f4(uVar12,0,iVar10,uVar15,0);
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0x1e);
  uVar8 = *(undefined4 *)(param_1 + 0x2a4);
  lVar13 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,0);
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*pcVar2 == '\0') || (iVar10 = FUN_014e94fc(param_1,1,uVar8,0), iVar10 != 2)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 2;
    }
    FUN_014e56f4(uVar12,3,0,uVar15,0);
  }
  lVar13 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,1);
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*pcVar2 == '\0') || (iVar10 = FUN_014e94fc(param_1,1,uVar8,1), iVar10 != 2)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 2;
    }
    FUN_014e56f4(uVar12,3,1,uVar15,0);
  }
  lVar13 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,2);
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x1a8);
    if (*pcVar2 == '\0') {
LAB_01dd70e4:
      uVar15 = 0;
    }
    else {
      uVar15 = 2;
      iVar10 = FUN_014e94fc(param_1,1,uVar8,2);
      if (iVar10 != 2) goto LAB_01dd70e4;
    }
    FUN_014e56f4(uVar12,3,2,uVar15,0);
  }
  lVar13 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,3);
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*pcVar2 == '\0') || (iVar10 = FUN_014e94fc(param_1,1,uVar8,3), iVar10 != 2)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 2;
    }
    FUN_014e56f4(uVar12,3,3,uVar15,0);
  }
  lVar13 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,4);
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*pcVar2 == '\0') || (iVar10 = FUN_014e94fc(param_1,1,uVar8,4), iVar10 != 2)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 2;
    }
    FUN_014e56f4(uVar12,3,4,uVar15,0);
  }
  lVar13 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,5);
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*pcVar2 == '\0') || (iVar10 = FUN_014e94fc(param_1,1,uVar8,5), iVar10 != 2)) {
      uVar15 = 0;
    }
    else {
      uVar15 = 2;
    }
    FUN_014e56f4(uVar12,3,5,uVar15,0);
  }
LAB_01dd71b4:
  lVar13 = FUN_01195854();
  uVar3 = *(undefined1 *)(lVar13 + 0x570);
  iVar10 = 0;
  do {
    lVar13 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),0,uVar3,iVar10);
    if (lVar13 != 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x1a8);
      uVar8 = FUN_014e5f50(param_1,0,uVar3,iVar10);
      FUN_014e6ddc(uVar12,0,iVar10,uVar8);
      if (*(int *)(param_1 + 0x298) == 2) {
        uVar12 = FUN_01195854();
        uVar11 = FUN_014e61a4(uVar12,uVar3,iVar10,*(int *)(param_1 + 0x2a4) + -1);
        uVar8 = 0x3f800000;
        if ((uVar11 & 1) == 0) {
          uVar8 = 0;
        }
        FUN_014e6294(uVar8,*(undefined8 *)(param_1 + 0x1a8),iVar10);
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 0x1e);
  uVar8 = *(undefined4 *)(param_1 + 0x2a4);
  uVar12 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,0);
  FUN_014e36f0(param_1,uVar12,0);
  FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),3,0,0);
  uVar12 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,1);
  FUN_014e36f0(param_1,uVar12,1);
  FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),3,1,0);
  uVar12 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,2);
  FUN_014e36f0(param_1,uVar12,2);
  FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),3,2,0);
  uVar12 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,3);
  FUN_014e36f0(param_1,uVar12,3);
  FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),3,3,0);
  uVar12 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,4);
  FUN_014e36f0(param_1,uVar12,4);
  FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),3,4,0);
  uVar12 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),1,uVar8,5);
  FUN_014e36f0(param_1,uVar12,5);
  FUN_014e6ddc(*(undefined8 *)(param_1 + 0x1a8),3,5,0);
  if (*(char *)(param_1 + 0x19d) != '\0') {
    FUN_014e85a0(param_1,&local_28,0);
  }
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return 1;
}


