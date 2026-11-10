/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fb6548; name: FUN_00fb6548
 */


long * FUN_00fb6548(long *param_1,byte *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint *puVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  long lVar18;
  uint uVar19;
  uint local_f8;
  byte *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  char local_88;
  locale alStack_80 [8];
  undefined8 local_78;
  undefined4 local_70;
  byte *local_68;
  
  if ((char)param_1[0x17] == '\0') {
    std::locale::locale((locale *)&local_e0);
  }
  else {
    std::locale::locale((locale *)&local_e0,(locale *)(param_1 + 0x18));
  }
  plVar7 = (long *)std::locale::use_facet((id *)&local_e0);
  std::locale::~locale((locale *)&local_e0);
  uVar8 = (**(code **)(*plVar7 + 0x38))(plVar7,0x25);
  iVar6 = FUN_00fb6e70(param_2,uVar8 & 0xffffffff,plVar7,(char)param_1[0xb]);
  FUN_00fb732c(param_1,(long)iVar6);
  local_68 = (byte *)0x0;
  lVar9 = std::string::find((char)param_2,uVar8 & 0xffffffff);
  if (lVar9 == -1) {
    uVar19 = 0;
    lVar18 = 0;
    bVar16 = false;
    local_f8 = 0xffffffff;
    bVar17 = true;
  }
  else {
    uVar19 = 0;
    bVar16 = false;
    local_f8 = 0xffffffff;
    lVar18 = 0;
    iVar6 = 0;
    pbVar1 = param_2 + 1;
    bVar5 = true;
    bVar17 = true;
    do {
      plVar10 = param_1 + 8;
      if (!bVar5) {
        plVar10 = (long *)(*param_1 + (long)iVar6 * 0x78 + -0x58);
      }
      bVar4 = *param_2;
      lVar14 = lVar9 + 1;
      pbVar2 = pbVar1;
      if ((bVar4 & 1) != 0) {
        pbVar2 = *(byte **)(param_2 + 0x10);
      }
      if (pbVar2[lVar14] == pbVar2[lVar9]) {
        FUN_00fb6bcc(plVar10,pbVar2 + lVar18,pbVar2 + lVar14);
        lVar18 = lVar9 + 2;
LAB_00fb6718:
      }
      else {
        if (lVar9 != lVar18) {
          FUN_00fb6bcc(plVar10,pbVar2 + lVar18);
          bVar4 = *param_2;
        }
        if ((bVar4 & 1) == 0) {
          local_68 = param_2 + lVar9 + 2;
          uVar11 = (ulong)(bVar4 >> 1);
          local_e0 = pbVar1;
        }
        else {
          local_e0 = *(byte **)(param_2 + 0x10);
          local_68 = local_e0 + lVar14;
          uVar11 = *(ulong *)(param_2 + 8);
        }
        local_e0 = local_e0 + uVar11;
        uVar11 = FUN_00fb78b0(&local_68,&local_e0,*param_1 + (long)iVar6 * 0x78,plVar7,lVar14,
                              (char)param_1[0xb]);
        pbVar2 = pbVar1;
        if ((*param_2 & 1) != 0) {
          pbVar2 = *(byte **)(param_2 + 0x10);
        }
        lVar18 = (long)local_68 - (long)pbVar2;
        if ((uVar11 & 1) != 0) {
          lVar14 = *param_1;
          lVar9 = (long)iVar6;
          puVar12 = (uint *)(lVar14 + lVar9 * 0x78 + 0x70);
          uVar13 = *puVar12;
          if ((uVar13 & 1) != 0) {
            puVar15 = (uint *)(lVar14 + lVar9 * 0x78 + 0x4c);
            uVar3 = *puVar15;
            if ((uVar3 >> 5 & 1) == 0) {
              uVar13 = uVar13 & 0xfffffffd;
              *puVar12 = uVar13;
              *(undefined1 *)(lVar14 + lVar9 * 0x78 + 0x48) = 0x30;
              *puVar15 = uVar3 & 0xffffff4f | 0x10;
            }
            else {
              uVar13 = uVar13 & 0xfffffffe;
              *puVar12 = uVar13;
            }
          }
          if (((uVar13 >> 1 & 1) != 0) && ((*(byte *)(lVar14 + lVar9 * 0x78 + 0x4d) >> 3 & 1) != 0))
          {
            *puVar12 = uVar13 & 0xfffffffd;
          }
          uVar13 = *(uint *)(*param_1 + lVar9 * 0x78);
          if (uVar13 == 0xffffffff) {
            bVar17 = false;
            uVar13 = local_f8;
          }
          else {
            if (uVar13 == 0xfffffffd) goto LAB_00fb6718;
            if (uVar13 == 0xfffffffe) {
              bVar16 = true;
              uVar13 = local_f8;
            }
            else if ((int)uVar13 <= (int)local_f8) {
              uVar13 = local_f8;
            }
          }
          local_f8 = uVar13;
          uVar19 = uVar19 + 1;
          iVar6 = iVar6 + 1;
          goto LAB_00fb6718;
        }
        lVar18 = lVar9;
      }
      lVar9 = std::string::find((char)param_2,uVar8 & 0xffffffff);
      bVar5 = iVar6 == 0;
    } while (lVar9 != -1);
    if (iVar6 != 0) {
      plVar10 = (long *)(*param_1 + (long)iVar6 * 0x78 + -0x58);
      goto LAB_00fb6754;
    }
  }
  plVar10 = param_1 + 8;
LAB_00fb6754:
  uVar8 = (ulong)(*param_2 >> 1);
  pbVar1 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar1 = param_2 + 1;
  }
  else {
    uVar8 = *(ulong *)(param_2 + 8);
  }
  FUN_00fb6bcc(plVar10,pbVar1 + lVar18,pbVar1 + uVar8);
  if (!bVar17) {
    if ((-1 < (int)local_f8) && ((*(byte *)(param_1 + 0xb) & 1) != 0)) {
      local_d8 = (ulong)local_f8;
      local_e0 = &DAT_04546a28;
      local_d0 = 0;
      FUN_00fb9b60(&local_e0);
      std::exception::~exception((exception *)&local_e0);
    }
    if ((int)uVar19 < 1) {
      local_f8 = 0;
    }
    else {
      bVar5 = *(int *)*param_1 == -1;
      if (bVar5) {
        *(int *)*param_1 = 0;
      }
      local_f8 = (uint)bVar5;
      if (uVar19 != 1) {
        if (*(int *)(*param_1 + 0x78) == -1) {
          *(uint *)(*param_1 + 0x78) = local_f8;
          local_f8 = local_f8 + 1;
        }
        if (uVar19 != 2) {
          lVar18 = (ulong)uVar19 - 2;
          lVar9 = 0xf0;
          do {
            if (*(int *)(*param_1 + lVar9) == -1) {
              *(uint *)(*param_1 + lVar9) = local_f8;
              local_f8 = local_f8 + 1;
            }
            lVar18 = lVar18 + -1;
            lVar9 = lVar9 + 0x78;
          } while (lVar18 != 0);
        }
      }
    }
    local_f8 = local_f8 - 1;
  }
  local_98 = (**(code **)(*plVar7 + 0x38))(plVar7,0x20);
  local_e0 = (byte *)CONCAT44(local_e0._4_4_,0xffffffff);
  local_d8 = 0;
  local_d0 = 0;
  local_88 = '\0';
  local_8c = 0;
  local_70 = 0;
  local_a8 = 0;
  uStack_a0 = 6;
  local_94 = 0x1002;
  local_78 = 0x7fffffffffffffff;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  FUN_00fb70bc(param_1,(long)(int)uVar19,&local_e0);
  if (local_88 != '\0') {
    std::locale::~locale(alStack_80);
    local_88 = '\0';
  }
  lVar9 = local_b0;
  if (((local_c0 & 1) != 0) && (local_b0 != 0)) {
    lVar18 = tpidr_el0;
    plVar7 = *(long **)(lVar18 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar9,0,8);
    }
  }
  lVar9 = local_c8;
  if (((local_d8 & 1) != 0) && (local_c8 != 0)) {
    lVar18 = tpidr_el0;
    plVar7 = *(long **)(lVar18 + 0x30);
    if (plVar7 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04859438), iVar6 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar7 = DAT_04859430;
      *(long **)(lVar18 + 0x30) = DAT_04859430;
    }
    uVar8 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar8 & 1) == 0) || (lVar18 = FUN_00c4e600(), *(int *)(lVar18 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar9,0,8);
    }
    else {
      FUN_00c48fe8(plVar7,lVar9,0,8);
    }
  }
  uVar19 = *(uint *)(param_1 + 6);
  if (bVar16) {
    uVar19 = uVar19 | 4;
    *(uint *)(param_1 + 6) = uVar19;
  }
  *(uint *)(param_1 + 7) = local_f8 + 1;
  *(uint *)(param_1 + 6) = uVar19 & 0xfffffffe | (uint)bVar17;
  return param_1;
}


