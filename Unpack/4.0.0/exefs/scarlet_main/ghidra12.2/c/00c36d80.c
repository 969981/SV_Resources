/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c36d80; name: FUN_00c36d80
 */


void FUN_00c36d80(long param_1,undefined8 param_2,long *param_3,ulong param_4,undefined4 param_5,
                 long param_6)

{
  string sVar1;
  string sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  string *psVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  string local_a8 [8];
  ulong local_a0;
  ulong local_98;
  undefined6 uStack_90;
  undefined2 local_8a;
  undefined6 uStack_88;
  string local_80;
  string sStack_7f;
  undefined6 uStack_7e;
  undefined2 local_78;
  undefined6 uStack_76;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  plVar14 = (long *)(param_1 + 0x28);
  plVar15 = (long *)*plVar14;
  plVar16 = *(long **)(param_1 + 0x18);
  if (plVar15 != (long *)0x0) {
    plVar13 = plVar14;
    do {
      if ((ulong)plVar15[4] >= param_4) {
        plVar13 = plVar15;
      }
      plVar15 = (long *)plVar15[(ulong)plVar15[4] < param_4];
    } while (plVar15 != (long *)0x0);
    if ((plVar13 != plVar14) && ((ulong)plVar13[4] <= param_4)) {
      plVar16 = (long *)plVar13[5];
    }
  }
  switch(*(undefined4 *)(PTR_DAT_047dad58 + (ulong)*(uint *)(param_4 + 0x3c) * 4)) {
  case 1:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar3 = (**(code **)(*param_3 + 0x150))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar3 = (**(code **)(*param_3 + 0x88))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar16 + 0x18))(&local_68,plVar16,uVar3);
    uVar10 = local_68 >> 1 & 0x7f;
    uVar11 = (ulong)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar10 = local_60;
      uVar11 = local_58;
    }
    if (uVar10 == 0) {
LAB_00c374d0:
      lVar12 = 0;
    }
    else {
      uVar9 = 0;
      lVar12 = 0;
      do {
        if (*(char *)(uVar11 + uVar9) == '\n') {
          FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
          *(undefined1 *)(param_6 + 0x14) = 1;
          lVar12 = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
    }
    break;
  case 2:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar6 = (**(code **)(*param_3 + 0x158))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0x90))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar16 + 0x28))(&local_68,plVar16,uVar6);
    uVar10 = local_68 >> 1 & 0x7f;
    uVar11 = (ulong)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar10 = local_60;
      uVar11 = local_58;
    }
    if (uVar10 == 0) goto LAB_00c374d0;
    uVar9 = 0;
    lVar12 = 0;
    do {
      if (*(char *)(uVar11 + uVar9) == '\n') {
        FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
        *(undefined1 *)(param_6 + 0x14) = 1;
        lVar12 = uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
    break;
  case 3:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar3 = (**(code **)(*param_3 + 0x160))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar3 = (**(code **)(*param_3 + 0x98))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar16 + 0x20))(&local_68,plVar16,uVar3);
    uVar10 = local_68 >> 1 & 0x7f;
    uVar11 = (ulong)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar10 = local_60;
      uVar11 = local_58;
    }
    if (uVar10 == 0) goto LAB_00c374d0;
    uVar9 = 0;
    lVar12 = 0;
    do {
      if (*(char *)(uVar11 + uVar9) == '\n') {
        FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
        *(undefined1 *)(param_6 + 0x14) = 1;
        lVar12 = uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
    break;
  case 4:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar6 = (**(code **)(*param_3 + 0x168))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0xa0))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar16 + 0x30))(&local_68,plVar16,uVar6);
    uVar10 = local_68 >> 1 & 0x7f;
    uVar11 = (ulong)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar10 = local_60;
      uVar11 = local_58;
    }
    if (uVar10 == 0) goto LAB_00c374d0;
    uVar9 = 0;
    lVar12 = 0;
    do {
      if (*(char *)(uVar11 + uVar9) == '\n') {
        FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
        *(undefined1 *)(param_6 + 0x14) = 1;
        lVar12 = uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
    break;
  case 5:
    if (*(int *)(param_4 + 0x40) == 3) {
      (**(code **)(*param_3 + 0x178))(param_3,param_2,param_4,param_5);
    }
    else {
      (**(code **)(*param_3 + 0xb0))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar16 + 0x40))(&local_68,plVar16);
    uVar10 = local_68 >> 1 & 0x7f;
    uVar11 = (ulong)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar10 = local_60;
      uVar11 = local_58;
    }
    if (uVar10 == 0) goto LAB_00c374d0;
    uVar9 = 0;
    lVar12 = 0;
    do {
      if (*(char *)(uVar11 + uVar9) == '\n') {
        FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
        *(undefined1 *)(param_6 + 0x14) = 1;
        lVar12 = uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
    break;
  case 6:
    if (*(int *)(param_4 + 0x40) == 3) {
      (**(code **)(*param_3 + 0x170))(param_3,param_2,param_4,param_5);
    }
    else {
      (**(code **)(*param_3 + 0xa8))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar16 + 0x38))(&local_68,plVar16);
    uVar10 = local_68 >> 1 & 0x7f;
    uVar11 = (ulong)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar10 = local_60;
      uVar11 = local_58;
    }
    if (uVar10 == 0) goto LAB_00c374d0;
    uVar9 = 0;
    lVar12 = 0;
    do {
      if (*(char *)(uVar11 + uVar9) == '\n') {
        FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
        *(undefined1 *)(param_6 + 0x14) = 1;
        lVar12 = uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
    break;
  case 7:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar4 = (**(code **)(*param_3 + 0x180))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar4 = (**(code **)(*param_3 + 0xb8))(param_3,param_2,param_4);
    }
    (**(code **)(*plVar16 + 0x10))(&local_68,plVar16,uVar4 & 1);
    uVar10 = local_68 >> 1 & 0x7f;
    uVar11 = (ulong)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar10 = local_60;
      uVar11 = local_58;
    }
    if (uVar10 == 0) goto LAB_00c374d0;
    uVar9 = 0;
    lVar12 = 0;
    do {
      if (*(char *)(uVar11 + uVar9) == '\n') {
        FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
        *(undefined1 *)(param_6 + 0x14) = 1;
        lVar12 = uVar9 + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar10);
    break;
  case 8:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar3 = (**(code **)(*param_3 + 0x198))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar3 = (**(code **)(*param_3 + 0xd0))(param_3,param_2,param_4);
    }
    puVar8 = (undefined8 *)FUN_00b7ccec(*(undefined8 *)(param_4 + 0x70),uVar3);
    if (puVar8 != (undefined8 *)0x0) {
      (**(code **)(*plVar16 + 0x58))(&local_68,plVar16,uVar3,*puVar8);
      uVar10 = local_68 >> 1 & 0x7f;
      uVar11 = (ulong)&local_68 | 1;
      if ((local_68 & 1) != 0) {
        uVar10 = local_60;
        uVar11 = local_58;
      }
      if (uVar10 == 0) goto LAB_00c374d0;
      uVar9 = 0;
      lVar12 = 0;
      do {
        if (*(char *)(uVar11 + uVar9) == '\n') {
          FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
          *(undefined1 *)(param_6 + 0x14) = 1;
          lVar12 = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
      break;
    }
    FUN_00c0e030(&local_80,&DAT_03bd1d93,uVar3);
    (**(code **)(*plVar16 + 0x58))(&local_68,plVar16,uVar3,&local_80);
    uVar10 = local_68 >> 1 & 0x7f;
    uVar11 = (ulong)&local_68 | 1;
    if ((local_68 & 1) != 0) {
      uVar10 = local_60;
      uVar11 = local_58;
    }
    if (uVar10 == 0) {
      lVar12 = 0;
    }
    else {
      uVar9 = 0;
      lVar12 = 0;
      do {
        if (*(char *)(uVar11 + uVar9) == '\n') {
          FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
          *(undefined1 *)(param_6 + 0x14) = 1;
          lVar12 = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
    }
    FUN_02a007d0(param_6,uVar11 + lVar12,uVar10 - lVar12);
    uVar10 = local_58;
    if (((local_68 & 1) != 0) && (local_58 != 0)) {
      lVar12 = tpidr_el0;
      plVar14 = *(long **)(lVar12 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar10,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,uVar10,0,8);
      }
    }
    if (((byte)local_80 & 1) == 0) {
      return;
    }
    uVar10 = local_70;
    if (local_70 == 0) {
      return;
    }
    goto LAB_00c377c4;
  case 9:
    local_60 = 0;
    local_58 = 0;
    local_68 = 0;
    if (*(int *)(param_4 + 0x40) == 3) {
      psVar7 = (string *)(**(code **)(*param_3 + 0x1a8))(param_3,param_2,param_4,param_5,&local_68);
    }
    else {
      psVar7 = (string *)(**(code **)(*param_3 + 0xe0))(param_3,param_2,param_4,&local_68);
    }
    local_78 = 0;
    uStack_76 = 0;
    local_70 = 0;
    local_80 = (string)0x0;
    sStack_7f = (string)0x0;
    uStack_7e = 0;
    uVar10 = *(ulong *)(param_1 + 0x10);
    if (0 < (long)uVar10) {
      if (((byte)*psVar7 & 1) == 0) {
        uVar11 = (ulong)((byte)*psVar7 >> 1);
      }
      else {
        uVar11 = *(ulong *)(psVar7 + 8);
      }
      if (uVar10 < uVar11) {
        std::string::string(local_a8,psVar7,0,uVar10,(allocator *)psVar7);
        psVar7 = (string *)std::string::append((char *)local_a8);
        uVar11 = local_70;
        uVar10 = *(ulong *)(psVar7 + 0x10);
        sVar1 = *psVar7;
        sVar2 = psVar7[1];
        uStack_88 = (undefined6)((ulong)*(undefined8 *)(psVar7 + 8) >> 0x10);
        uStack_90 = (undefined6)*(undefined8 *)(psVar7 + 2);
        local_8a = (undefined2)((ulong)*(undefined8 *)(psVar7 + 2) >> 0x30);
        *(undefined8 *)psVar7 = 0;
        *(undefined8 *)(psVar7 + 8) = 0;
        *(undefined8 *)(psVar7 + 0x10) = 0;
        if ((((byte)local_80 & 1) != 0) && (local_70 != 0)) {
          lVar12 = tpidr_el0;
          plVar14 = *(long **)(lVar12 + 0x30);
          if (plVar14 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar14 = DAT_04859430;
            *(long **)(lVar12 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar9 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,uVar11,0,8);
          }
          else {
            FUN_00c48fe8(plVar14,uVar11,0,8);
          }
        }
        uVar11 = local_98;
        uStack_7e = uStack_90;
        local_78 = local_8a;
        uStack_76 = uStack_88;
        local_80 = sVar1;
        sStack_7f = sVar2;
        local_70 = uVar10;
        if ((((byte)local_a8[0] & 1) != 0) && (local_98 != 0)) {
          lVar12 = tpidr_el0;
          plVar14 = *(long **)(lVar12 + 0x30);
          if (plVar14 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar14 = DAT_04859430;
            *(long **)(lVar12 + 0x30) = DAT_04859430;
          }
          uVar10 = (**(code **)(*plVar14 + 0xf8))(plVar14);
          if (((uVar10 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
            (**(code **)(*plVar14 + 0x18))(plVar14,uVar11,0,8);
          }
          else {
            FUN_00c48fe8(plVar14,uVar11,0,8);
          }
        }
        psVar7 = &local_80;
      }
    }
    if (*(int *)(param_4 + 0x3c) == 9) {
      (**(code **)(*plVar16 + 0x48))(local_a8,plVar16);
      uVar10 = (ulong)((byte)local_a8[0] >> 1);
      uVar11 = (ulong)local_a8 | 1;
      if (((byte)local_a8[0] & 1) != 0) {
        uVar10 = local_a0;
        uVar11 = local_98;
      }
      if (uVar10 == 0) {
        lVar12 = 0;
      }
      else {
        uVar9 = 0;
        lVar12 = 0;
        do {
          if (*(char *)(uVar11 + uVar9) == '\n') {
            FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
            *(undefined1 *)(param_6 + 0x14) = 1;
            lVar12 = uVar9 + 1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
      FUN_02a007d0(param_6,uVar11 + lVar12,uVar10 - lVar12);
      if ((((byte)local_a8[0] & 1) != 0) && (local_98 != 0)) {
        lVar12 = tpidr_el0;
        plVar14 = *(long **)(lVar12 + 0x30);
        uVar10 = local_98;
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          goto LAB_00c37bc4;
        }
        goto LAB_00c37940;
      }
    }
    else {
      (**(code **)(*plVar16 + 0x50))(local_a8,plVar16,psVar7);
      uVar10 = (ulong)((byte)local_a8[0] >> 1);
      uVar11 = (ulong)local_a8 | 1;
      if (((byte)local_a8[0] & 1) != 0) {
        uVar10 = local_a0;
        uVar11 = local_98;
      }
      if (uVar10 == 0) {
        lVar12 = 0;
      }
      else {
        uVar9 = 0;
        lVar12 = 0;
        do {
          if (*(char *)(uVar11 + uVar9) == '\n') {
            FUN_02a007d0(param_6,uVar11 + lVar12,(uVar9 + 1) - lVar12);
            *(undefined1 *)(param_6 + 0x14) = 1;
            lVar12 = uVar9 + 1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
      FUN_02a007d0(param_6,uVar11 + lVar12,uVar10 - lVar12);
      if ((((byte)local_a8[0] & 1) != 0) && (local_98 != 0)) {
        lVar12 = tpidr_el0;
        plVar14 = *(long **)(lVar12 + 0x30);
        uVar10 = local_98;
        if (plVar14 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
LAB_00c37bc4:
          plVar14 = DAT_04859430;
          *(long **)(lVar12 + 0x30) = DAT_04859430;
          uVar10 = local_98;
        }
LAB_00c37940:
        uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
        if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
          (**(code **)(*plVar14 + 0x18))(plVar14,uVar10,0,8);
        }
        else {
          FUN_00c48fe8(plVar14,uVar10,0,8);
        }
      }
    }
    uVar10 = local_70;
    if ((((byte)local_80 & 1) != 0) && (local_70 != 0)) {
      lVar12 = tpidr_el0;
      plVar14 = *(long **)(lVar12 + 0x30);
      if (plVar14 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar14 = DAT_04859430;
        *(long **)(lVar12 + 0x30) = DAT_04859430;
      }
      uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar14 + 0x18))(plVar14,uVar10,0,8);
      }
      else {
        FUN_00c48fe8(plVar14,uVar10,0,8);
      }
    }
    goto LAB_00c374e4;
  case 10:
    if (*(int *)(param_4 + 0x40) == 3) {
      uVar6 = (**(code **)(*param_3 + 0x1a0))(param_3,param_2,param_4,param_5);
    }
    else {
      uVar6 = (**(code **)(*param_3 + 0xd8))(param_3,param_2,param_4,0);
    }
    FUN_00c346cc(param_1,uVar6,param_6);
    return;
  default:
    goto switchD_00c36e20_default;
  }
  FUN_02a007d0(param_6,uVar11 + lVar12,uVar10 - lVar12);
LAB_00c374e4:
  if (((local_68 & 1) != 0) && (uVar10 = local_58, local_58 != 0)) {
LAB_00c377c4:
    lVar12 = tpidr_el0;
    plVar14 = *(long **)(lVar12 + 0x30);
    if (plVar14 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04859438), iVar5 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar14 = DAT_04859430;
      *(long **)(lVar12 + 0x30) = DAT_04859430;
    }
    uVar11 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
      (**(code **)(*plVar14 + 0x18))(plVar14,uVar10,0,8);
    }
    else {
      FUN_00c48fe8(plVar14,uVar10,0,8);
    }
  }
switchD_00c36e20_default:
  return;
}


