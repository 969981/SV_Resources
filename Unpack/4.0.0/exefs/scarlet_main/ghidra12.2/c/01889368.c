/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01889368; name: FUN_01889368
 */


undefined8 FUN_01889368(long param_1)

{
  short sVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  uVar3 = FUN_01195974();
  iVar2 = *(int *)(param_1 + 0x108);
  uVar8 = uVar3 >> 0x20;
  if (iVar2 == 0) {
    lVar4 = FUN_01195854();
    uVar11 = (uint)*(byte *)(lVar4 + 0x570);
    iVar10 = 0;
    iVar2 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar10 = 1;
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        uVar11 = 0xffffffff;
        iVar10 = 3;
        goto LAB_018893a8;
      }
      iVar10 = 2;
    }
    uVar11 = *(uint *)(param_1 + 0x2a4);
  }
LAB_018893a8:
  if (iVar2 == 0) {
    uVar8 = (ulong)(uint)((int)uVar3 + (int)(uVar3 >> 0x20) * 6);
  }
  else if ((iVar2 != 1) && (iVar2 != 2)) {
    uVar8 = 1;
  }
  if (iVar10 != 3) {
    if (*(int *)(param_1 + 0x29c) == 0) {
      uVar12 = *(undefined8 *)(param_1 + 0x1a8);
      if ((*(char *)(param_1 + 0x1714) == '\0') ||
         (iVar2 = FUN_014e94fc(param_1,iVar10,uVar11,uVar8), iVar2 != 2)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 2;
      }
      uVar7 = 0;
      if (iVar10 != 0) {
        uVar7 = 3;
      }
      FUN_014e56f4(uVar12,uVar7,uVar8,uVar5,0);
    }
    lVar4 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar10,uVar11,uVar8);
    sVar1 = FUN_00e974e0(*(undefined8 *)(lVar4 + 0x70));
    if (sVar1 != 0) {
      FUN_01dd6918(*(undefined8 *)(param_1 + 0x1b0),sVar1,1,0);
      FUN_01dd8a44(*(undefined8 *)(param_1 + 0x1b0),iVar10,uVar11,uVar8,sVar1);
      lVar4 = *(long *)(param_1 + 0x1a8) + 0x68bc;
      if (iVar10 != 0) {
        lVar4 = *(long *)(param_1 + 0x1a8) + 0x68b0;
      }
      FUN_01dd8a5c(*(undefined8 *)(param_1 + 0x1b0),lVar4 + uVar8,1);
      plVar9 = *(long **)(param_1 + 0x30);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x58))(plVar9);
      }
      local_60 = 0xd74bebc3a9958d8b;
      pcStack_58 = "L_icon_item_01/lift_item";
      local_50 = 0x18;
      local_48 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        lVar4 = FUN_00e895f4(plVar9[0x2e],&local_60);
        if (lVar4 != 0) {
          FUN_00dfcea4();
        }
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        (**(code **)(*plVar9 + 0x60))(plVar9);
      }
      iVar10 = *(int *)(param_1 + 0x1d8);
      iVar6 = *(int *)(param_1 + 0x108);
      iVar2 = 0;
      if (*(int *)(param_1 + 0x1dc) != 0) {
        iVar2 = *(int *)(param_1 + 0x1dc) + -1;
      }
      if (iVar6 == 0) {
        lVar4 = FUN_01195854();
        uVar11 = (uint)*(byte *)(lVar4 + 0x570);
        iVar6 = *(int *)(param_1 + 0x108);
      }
      else if (iVar6 - 1U < 2) {
        uVar11 = *(uint *)(param_1 + 0x2a4);
      }
      else {
        uVar11 = 0xffffffff;
      }
      if (iVar6 == 0) {
        iVar2 = iVar10 + iVar2 * 6;
      }
      else if ((iVar6 != 1) && (iVar6 != 2)) {
        iVar2 = 1;
      }
      FUN_014e89c0(param_1,0,uVar11,iVar2);
      return 1;
    }
  }
  return 0;
}


