/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dd994c; name: FUN_01dd994c
 */


undefined8 FUN_01dd994c(long param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 local_84;
  ulong local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  ulong local_58;
  
  lVar19 = *(long *)(param_1 + 0x1b0);
  uVar10 = FUN_01195974();
  iVar8 = *(int *)(param_1 + 0x108);
  uVar16 = uVar10 >> 0x20;
  local_58 = uVar10;
  if (iVar8 == 0) {
    lVar11 = FUN_01195854();
    uVar17 = (uint)*(byte *)(lVar11 + 0x570);
    iVar9 = 0;
    iVar8 = *(int *)(param_1 + 0x108);
  }
  else {
    iVar9 = 1;
    if (iVar8 != 1) {
      if (iVar8 != 2) {
        uVar17 = 0xffffffff;
        iVar9 = 3;
        goto LAB_01dd999c;
      }
      iVar9 = 2;
    }
    uVar17 = *(uint *)(param_1 + 0x2a4);
  }
LAB_01dd999c:
  if (iVar8 == 0) {
    uVar16 = (ulong)(uint)((int)uVar10 + (int)(uVar10 >> 0x20) * 6);
  }
  else if ((iVar8 != 1) && (iVar8 != 2)) {
    uVar16 = 1;
  }
  iVar8 = *param_2;
  if (iVar8 == 2) {
    uVar10 = FUN_01dd9ec8(*(undefined8 *)(param_1 + 0x1b0));
    if ((uVar10 & 1) == 0) {
      FUN_01dd6918(*(undefined8 *)(param_1 + 0x1b0),0,1,0);
      *param_2 = 1;
      return 0;
    }
    return 0;
  }
  if (iVar8 != 1) {
    if (iVar8 != 0) {
      return 0;
    }
    local_60 = *(long **)(param_1 + 0x30);
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x58))();
    }
    local_80 = 0xdef019c03b77a4b3;
    pcStack_78 = "L_icon_item_01/release_item";
    local_70 = 0x1b;
    local_68 = (long *)0x0;
    uVar10 = FUN_01992df4(&local_60,&local_80);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    if (local_60 != (long *)0x0) {
      (**(code **)(*local_60 + 0x60))();
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    lVar12 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),iVar9,uVar17,uVar16);
    uVar18 = *(undefined8 *)(param_1 + 0x1b0);
    lVar11 = *(long *)(param_1 + 0x1a8) + 0x68bc;
    if (iVar9 != 0) {
      lVar11 = *(long *)(param_1 + 0x1a8) + 0x68b0;
    }
    uVar5 = FUN_00e974e0(*(undefined8 *)(lVar12 + 0x70));
    FUN_01dd6918(uVar18,uVar5,0,*(undefined1 *)(lVar11 + uVar16));
    uVar18 = *(undefined8 *)(param_1 + 0x1a8);
    if ((*(char *)(param_1 + 0x1714) == '\0') ||
       (iVar8 = FUN_014e94fc(param_1,iVar9,uVar17,uVar16), iVar8 != 2)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 2;
    }
    uVar14 = 0;
    if (iVar9 != 0) {
      uVar14 = 3;
    }
    FUN_014e56f4(uVar18,uVar14,uVar16,uVar13,0);
    if ((*(short *)(lVar19 + 0xbf6) != 0) &&
       (((*(int *)(lVar19 + 0xbf0) != iVar9 || (uVar17 != *(byte *)(lVar19 + 0xbf4))) ||
        ((uint)uVar16 != (uint)*(byte *)(lVar19 + 0xbf5))))) {
      lVar11 = FUN_01195854();
      local_84 = 0;
      local_80 = local_80 & 0xffffffff00000000;
      iVar8 = *(int *)(lVar19 + 0xbf0);
      if (iVar8 == 0) {
        bVar2 = *(byte *)(lVar11 + 0x570);
        bVar4 = *(byte *)(lVar19 + 0xbf4);
        uVar17 = (uint)bVar4;
        uVar18 = *(undefined8 *)(param_1 + 0x1a8);
        if ((uint)bVar2 != (uint)bVar4) {
          uVar7 = FUN_019aeb9c(lVar11,0);
          if ((int)uVar7 < 1) {
            uVar10 = 1;
          }
          else {
            iVar8 = 1;
            uVar10 = 1;
            uVar15 = (uint)bVar4;
            do {
              if (uVar17 == bVar2) {
                uVar10 = 0xffffffff;
                break;
              }
              uVar1 = 0;
              if ((int)(uVar15 + 1) < (int)uVar7) {
                uVar1 = uVar15 + 1;
              }
              uVar15 = uVar7;
              if (0 < (int)uVar17) {
                uVar15 = uVar17;
              }
              if ((int)uVar7 <= iVar8) break;
              uVar17 = uVar15 - 1;
              iVar8 = iVar8 + 1;
              uVar15 = uVar1;
            } while (uVar1 != bVar2);
          }
          uVar13 = 0xffffffff;
          iVar8 = 0;
          goto LAB_01dd9c84;
        }
        bVar2 = *(byte *)(lVar19 + 0xbf5);
        iVar8 = 0;
      }
      else {
        uVar18 = *(undefined8 *)(param_1 + 0x1a8);
        bVar2 = *(byte *)(lVar19 + 0xbf5);
      }
      uVar10 = (ulong)bVar2;
      uVar13 = 0;
LAB_01dd9c84:
      FUN_01dc1ce8(uVar18,iVar8,uVar13,uVar10,&local_80,&local_84);
      FUN_01dd9e24((undefined4)local_80,local_84,*(undefined8 *)(param_1 + 0x1b0));
      FUN_01dd6918(*(undefined8 *)(param_1 + 0x1b0),*(undefined2 *)(lVar19 + 0xbf6),1,0);
      *param_2 = 2;
      return 0;
    }
    *param_2 = 1;
  }
  if (((*(int *)(lVar19 + 0xbf0) == iVar9) && (uVar17 == *(byte *)(lVar19 + 0xbf4))) &&
     ((uint)uVar16 == (uint)*(byte *)(lVar19 + 0xbf5))) goto LAB_01dd9bfc;
  lVar11 = FUN_01195854();
  if (*(int *)(lVar19 + 0xbf0) == 1) {
    bVar2 = *(byte *)(lVar19 + 0xbf4);
    if (*(uint *)(param_1 + 0x2a4) != (uint)bVar2) goto LAB_01dd9bfc;
    iVar8 = 3;
    uVar18 = 1;
  }
  else {
    if ((*(int *)(lVar19 + 0xbf0) != 0) ||
       (bVar2 = *(byte *)(lVar19 + 0xbf4), *(byte *)(lVar11 + 0x570) != bVar2)) goto LAB_01dd9bfc;
    uVar18 = 0;
    iVar8 = 0;
  }
  lVar11 = FUN_010f26f8(*(undefined8 *)(param_1 + 0x1a0),uVar18,bVar2,
                        *(undefined1 *)(lVar19 + 0xbf5));
  sVar6 = FUN_00e974e0(*(undefined8 *)(lVar11 + 0x70));
  uVar18 = *(undefined8 *)(param_1 + 0x1a8);
  uVar3 = *(undefined1 *)(lVar19 + 0xbf5);
  if ((*(char *)(param_1 + 0x1714) == '\0') ||
     (iVar9 = FUN_014e94fc(param_1,*(undefined4 *)(lVar19 + 0xbf0),*(undefined1 *)(lVar19 + 0xbf4),
                           uVar3), iVar9 != 2)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 2;
  }
  FUN_014e56f4(uVar18,iVar8,uVar3,uVar13,sVar6 == 0);
  if (iVar8 == 0) {
    lVar11 = 0x68bc;
LAB_01dd9be0:
    lVar11 = *(long *)(param_1 + 0x1a8) + lVar11;
  }
  else {
    if (iVar8 == 3) {
      lVar11 = 0x68b0;
      goto LAB_01dd9be0;
    }
    if (iVar8 == 1) {
      lVar11 = 0x68da;
      goto LAB_01dd9be0;
    }
    lVar11 = 0;
  }
  FUN_01dd6918(*(undefined8 *)(param_1 + 0x1b0),sVar6,0,
               *(undefined1 *)(lVar11 + (ulong)*(byte *)(lVar19 + 0xbf5)));
LAB_01dd9bfc:
  FUN_01dd6918(*(undefined8 *)(param_1 + 0x1b0),0,1,0);
  if (*(char *)(param_1 + 0x19d) != '\0') {
    FUN_014e85a0(param_1,&local_58,0);
  }
  FUN_01dd8a44(*(undefined8 *)(param_1 + 0x1b0),3,0,0,0);
  *(undefined1 *)(param_1 + 0x19c) = 0;
  return 1;
}


