/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c408c0; name: FUN_00c408c0
 */


undefined8 FUN_00c408c0(long param_1,ulong *param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long local_58;
  byte local_50 [16];
  ulong local_40;
  ulong local_38;
  ulong uStack_30;
  ulong local_28;
  
  if (*(int *)(param_1 + 0x28) != 3) {
    std::operator+("Expected integer, got: ",(string *)(param_1 + 0x30));
    FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_38);
    uVar7 = local_28;
    if (((local_38 & 1) != 0) && (local_28 != 0)) {
      local_58 = tpidr_el0;
      plVar12 = *(long **)(local_58 + 0x30);
      if (plVar12 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
LAB_00c40bf0:
        plVar12 = DAT_04859430;
        *(long **)(local_58 + 0x30) = DAT_04859430;
      }
LAB_00c40b18:
      uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
      if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,0,8);
      }
      else {
        FUN_00c48fe8(plVar12,uVar7,0,8);
      }
    }
    return 0;
  }
  pbVar8 = *(byte **)(param_1 + 0x40);
  if (((byte)*(string *)(param_1 + 0x30) & 1) == 0) {
    pbVar8 = (byte *)(param_1 + 0x31);
  }
  bVar1 = *pbVar8;
  if (bVar1 == 0x30) {
    if ((pbVar8[1] | 0x20) == 0x78) {
      pbVar8 = pbVar8 + 2;
      bVar1 = *pbVar8;
      uVar7 = 0x10;
      goto joined_r0x00c40994;
    }
    uVar10 = 0x30;
    uVar7 = 8;
  }
  else {
    uVar7 = 10;
joined_r0x00c40994:
    uVar10 = (uint)bVar1;
    if (bVar1 == 0) {
      uVar9 = 0;
      goto LAB_00c40a18;
    }
  }
  uVar9 = 0;
  do {
    pbVar8 = pbVar8 + 1;
    uVar2 = uVar10 - 0x37;
    if (0x19 < uVar10 - 0x41) {
      uVar2 = 0xffffffff;
    }
    if (uVar10 - 0x61 < 0x1a) {
      uVar2 = uVar10 - 0x57;
    }
    if ((uVar10 - 0x30 & 0xff) < 10) {
      uVar2 = uVar10 - 0x30;
    }
    if (((uint)uVar7 <= uVar2) || (uVar11 = (ulong)uVar2, param_3 < uVar11)) {
LAB_00c40a2c:
      std::operator+("Integer out of range (",(string *)(param_1 + 0x30));
      puVar5 = (ulong *)std::string::append((char *)local_50);
      uStack_30 = puVar5[1];
      local_28 = puVar5[2];
      local_38 = *puVar5;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      FUN_00c340d8(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_38
                  );
      uVar7 = local_28;
      if (((local_38 & 1) != 0) && (local_28 != 0)) {
        lVar6 = tpidr_el0;
        plVar12 = *(long **)(lVar6 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        uVar9 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar9 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,uVar7,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,uVar7,0,8);
        }
      }
      if ((local_50[0] & 1) == 0) {
        return 0;
      }
      if (local_40 == 0) {
        return 0;
      }
      local_58 = tpidr_el0;
      plVar12 = *(long **)(local_58 + 0x30);
      uVar7 = local_40;
      if (plVar12 != (long *)0x0) goto LAB_00c40b18;
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      goto LAB_00c40bf0;
    }
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = (param_3 - uVar11) / uVar7;
    }
    if (uVar3 < uVar9) goto LAB_00c40a2c;
    uVar9 = uVar11 + uVar9 * uVar7;
    uVar10 = (uint)*pbVar8;
  } while (uVar10 != 0);
LAB_00c40a18:
  *param_2 = uVar9;
  FUN_00c2f698(param_1 + 0x28);
  return 1;
}


