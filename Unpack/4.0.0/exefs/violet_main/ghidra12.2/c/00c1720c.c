/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c1720c; name: FUN_00c1720c
 */


void FUN_00c1720c(long param_1)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  string *psVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  byte *pbVar15;
  long extraout_x1;
  long extraout_x1_00;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  long *plVar23;
  string *local_a0;
  int local_98;
  uint local_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  long *local_88;
  long local_80;
  ulong local_78;
  long local_70;
  long *local_68;
  
  plVar9 = (long *)(**(code **)(**(long **)(param_1 + 0x50) + 0xb0))();
  lVar10 = (**(code **)(**(long **)(param_1 + 0x50) + 0xb8))();
  local_90 = 0x79656b06;
  uStack_8c = 0;
  iVar7 = FUN_00b7cb3c(*(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x98),lVar10,&local_90,2);
  if (iVar7 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = extraout_x1;
    if (*(char *)(extraout_x1 + 0x44) != '\0') {
      lVar10 = 0;
    }
  }
  lVar11 = (**(code **)(**(long **)(param_1 + 0x50) + 0xb8))();
  local_90 = 0x6c61760a;
  uStack_8c = 0x75;
  uStack_8b = 0x65;
  iVar7 = FUN_00b7cb3c(*(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x98),lVar11,&local_90,2);
  if (iVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = extraout_x1_00;
    if (*(char *)(extraout_x1_00 + 0x44) != '\0') {
      lVar11 = 0;
    }
  }
  cVar1 = *(char *)(param_1 + 0x44);
  if (cVar1 == '\0') {
    local_80 = *(long *)(param_1 + 0x48);
    local_78 = *(ulong *)(local_80 + 0x18);
    uVar14 = *(ulong *)(local_80 + 8);
    if (local_78 < uVar14) {
      do {
        local_88 = *(long **)(*(long *)(local_80 + 0x20) + local_78 * 8);
        if (local_88 != (long *)0x0) {
          if (local_88 == *(long **)(*(long *)(local_80 + 0x20) + (local_78 ^ 1) * 8)) {
            local_70 = *local_88;
            local_88 = *(long **)(local_70 + 0x20);
          }
          else {
            local_70 = 0;
          }
          goto LAB_00c17384;
        }
        local_78 = local_78 + 1;
      } while (uVar14 != local_78);
      local_70 = 0;
      local_88 = (long *)0x0;
      local_78 = uVar14;
    }
    else {
      local_70 = 0;
      local_88 = (long *)0x0;
    }
LAB_00c17384:
    uVar20 = 2;
    local_90 = 2;
    local_68 = (long *)0x0;
  }
  else {
    uVar20 = 1;
    local_68 = *(long **)(*(long *)(param_1 + 0x48) + 0x18);
    local_90 = 1;
    local_88 = (long *)0x0;
    local_70 = 0;
  }
  while( true ) {
    plVar23 = local_68;
    uVar22 = 1;
    if (cVar1 == '\0') {
      uVar22 = 2;
    }
    if ((uVar20 == uVar22) &&
       (((plVar13 = local_68, uVar20 != 1 && (plVar13 = local_88, uVar20 == 0)) ||
        (plVar13 == (long *)0x0)))) break;
    plVar13 = local_68 + 4;
    if (uVar20 != 1) {
      plVar13 = local_88 + 2;
    }
    FUN_00c12a00(*plVar13 + 0x10);
    if (uVar20 == 1) {
      local_68 = (long *)*plVar23;
    }
    else {
      FUN_00c1a764(&local_88);
      uVar20 = local_90;
    }
    cVar1 = *(char *)(param_1 + 0x44);
  }
  FUN_00c12cbc(param_1 + 0x38);
  puVar3 = PTR_DAT_047dad58;
  if (*(int *)(*(long *)(param_1 + 0x10) + 8) != 0) {
    lVar17 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    lVar2 = tpidr_el0;
    puVar21 = (undefined8 *)0x0;
    if (lVar17 != 0) {
      puVar21 = (undefined8 *)(lVar17 + 8);
    }
    do {
      local_98 = 0;
      switch(*(undefined4 *)(puVar3 + (ulong)*(uint *)(lVar10 + 0x3c) * 4)) {
      case 1:
        uVar8 = (**(code **)(*plVar9 + 0x88))(plVar9,*puVar21,lVar10);
        local_98 = 1;
        goto LAB_00c1760c;
      case 2:
        local_a0 = (string *)(**(code **)(*plVar9 + 0x90))(plVar9,*puVar21,lVar10);
        local_98 = 2;
        break;
      case 3:
        uVar8 = (**(code **)(*plVar9 + 0x98))(plVar9,*puVar21,lVar10);
        local_98 = 3;
LAB_00c1760c:
        local_a0 = (string *)CONCAT44(local_a0._4_4_,uVar8);
        break;
      case 4:
        local_a0 = (string *)(**(code **)(*plVar9 + 0xa0))(plVar9,*puVar21,lVar10);
        local_98 = 4;
        break;
      case 5:
      case 6:
      case 8:
      case 10:
        local_90 = 3;
        local_88 = (long *)0x3c77b5b;
        local_80 = CONCAT44(local_80._4_4_,0x187);
        local_70 = 0;
        local_68 = (long *)0x0;
        local_78 = 0;
        std::string::append((char *)&local_78);
        FUN_00bb0e90(&local_90);
        FUN_00bb0d74(&local_90);
        break;
      case 7:
        uVar5 = (**(code **)(*plVar9 + 0xb8))(plVar9,*puVar21,lVar10);
        local_98 = 7;
        local_a0 = (string *)(CONCAT71(local_a0._1_7_,uVar5) & 0xffffffffffffff01);
        break;
      case 9:
        (**(code **)(*plVar9 + 0xc0))(&local_90,plVar9,*puVar21,lVar10);
        local_98 = 9;
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        local_a0 = (string *)(**(code **)(*plVar23 + 0x10))(plVar23,0x18,8);
        *(undefined8 *)local_a0 = 0;
        *(undefined8 *)(local_a0 + 8) = 0;
        *(undefined8 *)(local_a0 + 0x10) = 0;
        std::string::operator=(local_a0,(string *)&local_90);
        lVar17 = local_80;
        if (((local_90 & 1) != 0) && (local_80 != 0)) {
          plVar23 = *(long **)(lVar2 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar2 + 0x30) = DAT_04859430;
          }
          uVar14 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar14 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,lVar17,0,8);
          }
        }
      }
      puVar12 = (undefined8 *)FUN_00c133d4(param_1 + 0x38,&local_a0);
      *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar3 + (ulong)*(uint *)(lVar11 + 0x3c) * 4);
      switch(*(undefined4 *)(puVar3 + (ulong)*(uint *)(lVar11 + 0x3c) * 4)) {
      case 1:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,4,8);
        uVar16 = *puVar21;
        pcVar18 = *(code **)(*plVar9 + 0x88);
        goto LAB_00c1786c;
      case 2:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,8,8);
        uVar16 = *puVar21;
        pcVar18 = *(code **)(*plVar9 + 0x90);
        goto LAB_00c178c4;
      case 3:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,4,8);
        uVar16 = *puVar21;
        pcVar18 = *(code **)(*plVar9 + 0x98);
        goto LAB_00c1786c;
      case 4:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,8,8);
        uVar16 = *puVar21;
        pcVar18 = *(code **)(*plVar9 + 0xa0);
LAB_00c178c4:
        uVar16 = (*pcVar18)(plVar9,uVar16,lVar11);
        *(undefined8 *)pbVar15 = uVar16;
        break;
      case 5:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,8,8);
        uVar16 = (**(code **)(*plVar9 + 0xb0))(plVar9,*puVar21,lVar11);
        *(undefined8 *)pbVar15 = uVar16;
        break;
      case 6:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,4,8);
        uVar8 = (**(code **)(*plVar9 + 0xa8))(plVar9,*puVar21,lVar11);
        *(undefined4 *)pbVar15 = uVar8;
        break;
      case 7:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,1,8);
        bVar6 = (**(code **)(*plVar9 + 0xb8))(plVar9,*puVar21,lVar11);
        *pbVar15 = bVar6 & 1;
        break;
      case 8:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,4,8);
        uVar16 = *puVar21;
        pcVar18 = *(code **)(*plVar9 + 0xd0);
LAB_00c1786c:
        uVar8 = (*pcVar18)(plVar9,uVar16,lVar11);
        *(undefined4 *)pbVar15 = uVar8;
        break;
      case 9:
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        pbVar15 = (byte *)(**(code **)(*plVar23 + 0x10))(plVar23,0x18,8);
        pbVar15[0] = 0;
        pbVar15[1] = 0;
        pbVar15[2] = 0;
        pbVar15[3] = 0;
        pbVar15[4] = 0;
        pbVar15[5] = 0;
        pbVar15[6] = 0;
        pbVar15[7] = 0;
        pbVar15[8] = 0;
        pbVar15[9] = 0;
        pbVar15[10] = 0;
        pbVar15[0xb] = 0;
        pbVar15[0xc] = 0;
        pbVar15[0xd] = 0;
        pbVar15[0xe] = 0;
        pbVar15[0xf] = 0;
        pbVar15[0x10] = 0;
        pbVar15[0x11] = 0;
        pbVar15[0x12] = 0;
        pbVar15[0x13] = 0;
        pbVar15[0x14] = 0;
        pbVar15[0x15] = 0;
        pbVar15[0x16] = 0;
        pbVar15[0x17] = 0;
        (**(code **)(*plVar9 + 0xc0))(&local_90,plVar9,*puVar21,lVar11);
        if (((*pbVar15 & 1) != 0) && (lVar17 = *(long *)(pbVar15 + 0x10), lVar17 != 0)) {
          plVar23 = *(long **)(lVar2 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar2 + 0x30) = DAT_04859430;
          }
          uVar14 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar14 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,lVar17,0,8);
          }
        }
        *(long **)(pbVar15 + 8) = local_88;
        *(long *)(pbVar15 + 0x10) = local_80;
        *(ulong *)pbVar15 = CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT14(uStack_8c,local_90)));
        *puVar12 = pbVar15;
        goto switchD_00c176a8_default;
      case 10:
        plVar23 = (long *)(**(code **)(*plVar9 + 0xd8))(plVar9,*puVar21,lVar11,0);
        plVar13 = (long *)(**(code **)(*plVar23 + 0x18))();
        (**(code **)(*plVar13 + 0x88))(plVar13,plVar23);
        *puVar12 = plVar13;
      default:
        goto switchD_00c176a8_default;
      }
      *puVar12 = pbVar15;
switchD_00c176a8_default:
      psVar4 = local_a0;
      if ((local_98 == 9) && (local_a0 != (string *)0x0)) {
        if ((((byte)*local_a0 & 1) != 0) && (lVar17 = *(long *)(local_a0 + 0x10), lVar17 != 0)) {
          plVar23 = *(long **)(lVar2 + 0x30);
          if (plVar23 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar23 = DAT_04859430;
            *(long **)(lVar2 + 0x30) = DAT_04859430;
          }
          uVar14 = (**(code **)(*plVar23 + 0xf8))(plVar23);
          if (((uVar14 & 1) == 0) || (lVar19 = FUN_00c4e600(), *(int *)(lVar19 + 0x12c8) < 1)) {
            (**(code **)(*plVar23 + 0x18))(plVar23,lVar17,0,8);
          }
          else {
            FUN_00c48fe8(plVar23,lVar17,0,8);
          }
        }
        plVar23 = *(long **)(lVar2 + 0x30);
        if (plVar23 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar23 = DAT_04859430;
          *(long **)(lVar2 + 0x30) = DAT_04859430;
        }
        uVar14 = (**(code **)(*plVar23 + 0xf8))(plVar23);
        if (((uVar14 & 1) == 0) || (lVar17 = FUN_00c4e600(), *(int *)(lVar17 + 0x12c8) < 1)) {
          (**(code **)(*plVar23 + 0x18))(plVar23,psVar4,0,8);
        }
        else {
          FUN_00c48fe8(plVar23,psVar4,0,8);
        }
      }
      puVar21 = puVar21 + 1;
      lVar19 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
      lVar17 = 0;
      if (lVar19 != 0) {
        lVar17 = lVar19 + 8;
      }
    } while (puVar21 != (undefined8 *)(lVar17 + (long)*(int *)(*(long *)(param_1 + 0x10) + 8) * 8));
  }
  return;
}


