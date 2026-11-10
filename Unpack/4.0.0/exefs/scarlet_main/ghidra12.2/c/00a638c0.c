/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a638c0; name: FUN_00a638c0
 */


void FUN_00a638c0(ushort *param_1,undefined8 param_2,long *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  uint local_9c;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  uint local_74;
  uint local_68;
  uint uStack_64;
  
  puVar10 = PTR_DAT_047d4c98;
  if (*param_3 == 0) {
    return;
  }
  if (((*PTR_DAT_047d4c98 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar17 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  puVar12 = PTR_DAT_047d4ca8;
  puVar11 = PTR_DAT_047d4ca0;
  lVar19 = *(long *)PTR_DAT_047d4ca0;
  *(long *)PTR_DAT_047d4ca8 = lVar19;
  plVar4 = *(long **)(lVar19 + 0x1c8);
  plVar9 = *(long **)(lVar19 + 0x1c0);
  do {
    if (plVar9 == plVar4) {
      return;
    }
    lVar19 = *plVar9;
    uVar18 = FUN_00a669dc(lVar19 + 0x28);
    plVar9 = plVar9 + 1;
  } while ((uVar18 & 1) == 0);
  uVar6 = *param_1;
  if (((*puVar10 & 1) == 0) && (iVar17 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar17 != 0)) {
    FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d4c98);
  }
  lVar20 = *(long *)puVar11;
  *(long *)puVar12 = lVar20;
  plVar4 = *(long **)(lVar20 + 0x1c8);
  plVar9 = *(long **)(lVar20 + 0x1c0);
  do {
    if (plVar9 == plVar4) goto LAB_00a63990;
    lVar20 = *plVar9;
    uVar18 = FUN_00a669dc(lVar20 + 0x28);
    plVar9 = plVar9 + 1;
  } while ((uVar18 & 1) == 0);
  if (uVar6 < 0x402) {
    lVar20 = lVar20 + 0x28 + (ulong)uVar6 * 0x20;
    uStack_64 = *(uint *)(lVar20 + 0x18);
    uVar23 = *(uint *)(lVar20 + 0x1c);
    local_68 = *(uint *)(lVar20 + 0x20);
    local_88 = CONCAT44(*(undefined4 *)(lVar20 + 0x24),(uint)*(ushort *)(lVar20 + 0x28));
    local_90 = (ulong)CONCAT14(*(undefined1 *)(lVar20 + 0x2a),*(undefined4 *)(lVar20 + 0x2c));
    local_98 = (ulong)CONCAT14(*(undefined1 *)(lVar20 + 0x2b),*(undefined4 *)(lVar20 + 0x30));
    local_9c = *(uint *)(lVar20 + 0x34);
  }
  else {
LAB_00a63990:
    local_68 = 0;
    uStack_64 = 0;
    uVar23 = 0;
    local_98 = 0;
    local_9c = 0;
    local_90 = 0;
    local_88 = 0;
  }
  uVar6 = *param_1;
  uVar13 = FUN_00cf41a8(*(undefined8 *)(*param_3 + 0x70));
  uVar1 = 0;
  if ((uVar6 & 0xfffe) != 0x298 && uVar6 != 0x2e8) {
    uVar1 = uVar13 & 0xffff;
  }
  uVar13 = FUN_00cec030(*(undefined8 *)(*param_3 + 0x70));
  if (((*PTR_DAT_047d89f8 & 1) == 0) &&
     (iVar17 = __cxa_guard_acquire(PTR_DAT_047d89f8), iVar17 != 0)) {
    FUN_00100190(PTR_LAB_047d8ed8,PTR_DAT_047d8a00,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d89f8);
  }
  lVar20 = *(long *)PTR_DAT_047d8a00;
  *(long *)PTR_DAT_047d8a08 = lVar20;
  uVar18 = (ulong)*(byte *)(lVar20 + 0x2c);
  if (uVar18 < 0xb) {
    local_74 = *(uint *)(&DAT_03d2ffb0 + uVar18 * 4);
  }
  else {
    local_74 = 0;
  }
  lVar22 = *(long *)(*param_3 + 0x70);
  plVar4 = (long *)(lVar22 + 0x20);
  lVar20 = nn::os::GetCurrentThread();
  do {
    if (*plVar4 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar22 + 0x28));
        while (*plVar4 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar8) {
            *plVar4 = lVar20;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00a63a54;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar8) {
      *plVar4 = lVar20;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00a63a54:
  uVar14 = FUN_0100bd94(lVar22);
  *(undefined8 *)(lVar22 + 0x20) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar22 + 0x28));
  if ((uVar14 & 0xff) < 0xb) {
    uVar14 = *(uint *)(&DAT_03d2ffb0 + (ulong)(uVar14 & 0xff) * 4);
  }
  else {
    uVar14 = 0;
  }
  lVar20 = *param_3;
  uVar15 = FUN_00dbf838(*(undefined8 *)(lVar20 + 0x70));
  uVar16 = FUN_00dbfb7c(*(undefined8 *)(lVar20 + 0x70));
  uVar15 = uVar15 & 0xfff0 ^ uVar15 >> 0x10 ^ uVar16 >> 0x10 ^ uVar16 & 0xfff0;
  if (0x1f < (uVar1 & 0xff)) {
    return;
  }
  if (param_4 == 0) {
    uVar16 = 1 << (ulong)(uVar1 & 0x1f);
    uStack_64 = uVar16 | uStack_64;
LAB_00a63b68:
    uVar23 = uVar16 | uVar23;
  }
  else {
    if (param_4 != 2) {
      if (param_4 != 1) {
        return;
      }
      uVar16 = 1 << (ulong)(uVar1 & 0x1f);
      goto LAB_00a63b68;
    }
    uVar16 = 1 << (ulong)(uVar1 & 0x1f);
  }
  uVar16 = uVar16 | local_68;
  uVar6 = *param_1;
  if (uVar6 < 0x36b) {
    if (uVar6 == 0x306) {
      switch(uVar1 + (uVar1 / 7 + (uVar1 - uVar1 / 7 >> 1) >> 2) * -7) {
      case 0:
        if (param_4 != 2) {
          if (param_4 != 1) {
            if (param_4 != 0) goto switchD_00a63d80_default;
            uStack_64 = uStack_64 | 0x81;
          }
          uVar23 = uVar23 | 0x81;
        }
        uVar21 = 0x81;
        break;
      case 1:
        if (param_4 != 2) {
          if (param_4 != 1) {
            if (param_4 != 0) goto switchD_00a63d80_default;
            uStack_64 = uStack_64 | 0x102;
          }
          uVar23 = uVar23 | 0x102;
        }
        uVar21 = 0x102;
        break;
      case 2:
        if (param_4 != 2) {
          if (param_4 != 1) {
            if (param_4 != 0) goto switchD_00a63d80_default;
            uStack_64 = uStack_64 | 0x204;
          }
          uVar23 = uVar23 | 0x204;
        }
        uVar21 = 0x204;
        break;
      case 3:
        if (param_4 != 2) {
          if (param_4 != 1) {
            if (param_4 != 0) goto switchD_00a63d80_default;
            uStack_64 = uStack_64 | 0x408;
          }
          uVar23 = uVar23 | 0x408;
        }
        uVar21 = 0x408;
        break;
      case 4:
        if (param_4 != 2) {
          if (param_4 != 1) {
            if (param_4 != 0) goto switchD_00a63d80_default;
            uStack_64 = uStack_64 | 0x810;
          }
          uVar23 = uVar23 | 0x810;
        }
        uVar21 = 0x810;
        break;
      case 5:
        if (param_4 != 2) {
          if (param_4 != 1) {
            if (param_4 != 0) goto switchD_00a63d80_default;
            uStack_64 = uStack_64 | 0x1020;
          }
          uVar23 = uVar23 | 0x1020;
        }
        uVar21 = 0x1020;
        break;
      case 6:
        if (param_4 != 2) {
          if (param_4 != 1) {
            if (param_4 != 0) goto switchD_00a63d80_default;
            uStack_64 = uStack_64 | 0x2040;
          }
          uVar23 = uVar23 | 0x2040;
        }
        uVar21 = 0x2040;
        break;
      default:
        goto switchD_00a63d80_default;
      }
      uVar16 = uVar16 | uVar21;
      goto switchD_00a63d80_default;
    }
    if (uVar6 != 0x30a) {
      if (uVar6 == 0x34d) {
        if (param_4 != 2) {
          if (param_4 != 1) {
            if (param_4 != 0) goto switchD_00a63d80_default;
            uStack_64 = uStack_64 | 7;
          }
          uVar23 = uVar23 | 7;
        }
        uVar16 = uVar16 | 7;
      }
      goto switchD_00a63d80_default;
    }
  }
  else if (uVar6 < 0x3a6) {
    if ((uVar6 != 0x36b) && (uVar6 != 0x36d)) goto switchD_00a63d80_default;
  }
  else if (uVar6 != 0x3a6) {
    if (uVar6 == 0x3fd) {
      if (param_4 != 2) {
        if (param_4 != 1) {
          if (param_4 != 0) goto switchD_00a63d80_default;
          uStack_64 = uStack_64 | 6;
        }
        uVar23 = uVar23 | 6;
      }
      uVar16 = uVar16 | 6;
    }
    goto switchD_00a63d80_default;
  }
  if (param_4 != 2) {
    if (param_4 != 1) {
      if (param_4 != 0) goto switchD_00a63d80_default;
      uStack_64 = uStack_64 | 3;
    }
    uVar23 = uVar23 | 3;
  }
  uVar16 = uVar16 | 3;
switchD_00a63d80_default:
  if (uVar6 == 0x365) {
    iVar17 = FUN_00e997c4(*param_3);
    uVar6 = *param_1;
    uVar21 = iVar17 << 0x18;
  }
  else {
    uVar21 = 0;
  }
  if (uVar6 < 0x402) {
    lVar19 = lVar19 + (ulong)uVar6 * 0x20;
    uVar5 = *(uint *)(param_1 + 6);
    uVar2 = *(uint *)(param_1 + 8);
    uVar3 = *(uint *)(param_1 + 10);
    *(uint *)(lVar19 + 0x40) = uStack_64;
    *(uint *)(lVar19 + 0x44) = uVar23;
    *(ushort *)(lVar19 + 0x50) =
         (ushort)local_88 | (ushort)(1 << (ulong)(local_74 & 0x1f)) |
         (ushort)(1 << (ulong)(uVar14 & 0x1f));
    *(byte *)(lVar19 + 0x52) = (byte)(local_90 >> 0x20) | (byte)(1 << (ulong)(uVar13 & 0x1f));
    uVar23 = 1 << (ulong)(uVar1 & 0x1f);
    *(uint *)(lVar19 + 0x48) = uVar16;
    *(undefined4 *)(lVar19 + 0x4c) = local_88._4_4_;
    uVar21 = uVar1 & 0xff | (uVar13 & 0xff) << 8 | (uint)(uVar15 < 0x10) << 0x10 | uVar21;
    if ((uVar3 & uVar23) != 0) {
      local_9c = uVar21;
    }
    uVar1 = (uint)local_98;
    if ((uVar2 & uVar23) != 0) {
      uVar1 = uVar21;
    }
    if ((uVar5 & uVar23) != 0) {
      local_90._0_4_ = uVar21;
    }
    *(byte *)(lVar19 + 0x53) = (byte)(1 << (uVar15 < 0x10)) | (byte)(local_98 >> 0x20);
    *(uint *)(lVar19 + 0x5c) = local_9c;
    *(uint *)(lVar19 + 0x54) = (uint)local_90;
    *(uint *)(lVar19 + 0x58) = uVar1;
  }
  return;
}


