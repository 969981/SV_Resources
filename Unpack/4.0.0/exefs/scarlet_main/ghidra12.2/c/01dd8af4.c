/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd8af4; name: FUN_01dd8af4
 */


undefined8 FUN_01dd8af4(long param_1)

{
  byte bVar1;
  uint5 uVar2;
  short sVar3;
  undefined2 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  long *local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long *local_68;
  long *local_48;
  
  uVar5 = FUN_01195974();
  iVar9 = *(int *)(param_1 + 0x108);
  uVar11 = uVar5 >> 0x20;
  if (iVar9 == 0) {
    lVar6 = FUN_01195854();
    uVar13 = (uint)*(byte *)(lVar6 + 0x570);
    iVar12 = 0;
    iVar9 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar12 = 1;
    if (iVar9 != 1) {
      if (iVar9 != 2) {
        uVar13 = 0xffffffff;
        iVar12 = 3;
        goto LAB_01dd8b3c;
      }
      iVar12 = 2;
    }
    uVar13 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dd8b3c:
  if (iVar9 == 0) {
    uVar11 = (ulong)(uint)((int)uVar5 + (int)(uVar5 >> 0x20) * 6);
  }
  else if ((iVar9 != 1) && (iVar9 != 2)) {
    uVar11 = 1;
  }
  if (iVar12 != 3) {
    uVar5 = FUN_01dd8e30(param_1);
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x1b0);
      if (((*(int *)(lVar6 + 0xbf0) != iVar12) || (uVar13 != *(byte *)(lVar6 + 0xbf4))) ||
         ((uint)uVar11 != (uint)*(byte *)(lVar6 + 0xbf5))) {
        lVar7 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar12,uVar13,uVar11);
        if (lVar7 == 0) {
          return 0;
        }
        lVar8 = *(long *)(lVar7 + 0x70);
        if ((*(byte *)(*(long *)(lVar8 + 0x10) + 4) >> 2 & 1) == 0) {
          sVar3 = FUN_00cf44f4();
          if (sVar3 == 0) {
            return 0;
          }
          lVar8 = *(long *)(lVar7 + 0x70);
        }
        uVar4 = FUN_00e974e0(lVar8);
        uVar2 = *(uint5 *)(lVar6 + 0xbf0);
        bVar1 = *(byte *)(lVar6 + 0xbf5);
        uVar5 = FUN_01dc7a44(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(lVar6 + 0xbf0),
                             *(undefined1 *)(lVar6 + 0xbf4),bVar1,uVar4);
        if ((uVar5 & 1) != 0) {
          local_80 = (ulong)uVar2;
          local_78 = (char *)CONCAT44(local_78._4_4_,(uint)bVar1);
          FUN_01dd9688(param_1,&local_80);
        }
        uVar5 = FUN_01dc7a44(*(undefined8 *)(param_1 + 0x1a0),iVar12,uVar13,uVar11,
                             *(undefined2 *)(lVar6 + 0xbf6));
        if ((uVar5 & 1) != 0) {
          local_80 = CONCAT44(uVar13,iVar12);
          local_78 = (char *)CONCAT44(local_78._4_4_,(uint)uVar11);
          FUN_01dd9688(param_1,&local_80);
        }
        FUN_01dd8a44(*(undefined8 *)(param_1 + 0x1b0),*(undefined4 *)(lVar6 + 0xbf0),
                     *(undefined1 *)(lVar6 + 0xbf4),*(undefined1 *)(lVar6 + 0xbf5),uVar4);
      }
      local_48 = *(long **)(param_1 + 0x30);
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x58))();
      }
      local_80 = 0xd74bebc3a9958d8b;
      local_78 = "L_icon_item_01/lift_item";
      local_70 = 0x18;
      local_68 = (long *)0x0;
      FUN_01dcc560(&local_48,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x60))();
      }
      local_88 = *(long **)(param_1 + 0x30);
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x58))();
      }
      local_80 = 0x449313d95ebfa1dd;
      local_78 = "L_icon_item_01/lifting_item";
      local_70 = 0x1b;
      local_68 = (long *)0x0;
      FUN_01dcc560(&local_88,&local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x60))();
      }
      plVar10 = *(long **)(param_1 + 0x30);
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x58))(plVar10);
      }
      local_80 = 0xdef019c03b77a4b3;
      local_78 = "L_icon_item_01/release_item";
      local_70 = 0x1b;
      local_68 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
        lVar6 = FUN_00e895f4(plVar10[0x2e],&local_80);
        if (lVar6 != 0) {
          FUN_00dfcea4();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x20))();
        }
        (**(code **)(*plVar10 + 0x60))(plVar10);
      }
      return 1;
    }
    FUN_01dd8eec(param_1);
  }
  return 0;
}


