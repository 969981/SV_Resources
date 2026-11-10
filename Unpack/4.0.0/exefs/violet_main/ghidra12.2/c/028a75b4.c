/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a75b4; name: FUN_028a75b4
 */


void FUN_028a75b4(string *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  byte local_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  ulong uStack_58;
  undefined8 local_50;
  string local_48 [8];
  ulong local_40;
  char *local_38;
  
  FUN_028a8014(local_48);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  if (((byte)local_48[0] & 1) == 0) {
    if ((byte)local_48[0] < 2) goto LAB_028a75f0;
    pcVar5 = (char *)((ulong)local_48 | 1);
  }
  else {
    if (local_40 == 0) goto LAB_028a75f0;
    pcVar5 = local_38;
  }
  std::__get_collation_name(pcVar5);
  bVar3 = local_60;
  *(ulong *)param_1 = CONCAT62(uStack_5e,CONCAT11(uStack_5f,local_60));
  *(ulong *)(param_1 + 8) = uStack_58;
  *(undefined8 *)(param_1 + 0x10) = local_50;
  uVar6 = ((ulong)CONCAT11(uStack_5f,local_60) & 0xff) >> 1;
  if ((local_60 & 1) != 0) {
    uVar6 = uStack_58;
  }
  uStack_5f = 0;
  if (uVar6 == 0) {
    if (((byte)local_48[0] & 1) == 0) {
      if (5 < (byte)local_48[0]) goto LAB_028a75f0;
      local_40 = (ulong)((byte)local_48[0] >> 1);
      pcVar5 = (char *)((ulong)local_48 | 1);
    }
    else {
      if (2 < local_40) goto LAB_028a75f0;
      pcVar5 = local_38;
    }
    (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
              (&local_60,*(long **)(param_2 + 0x10),pcVar5,pcVar5 + local_40);
    if (((bVar3 & 1) != 0) && (lVar8 = *(long *)(param_1 + 0x10), lVar8 != 0)) {
      lVar7 = tpidr_el0;
      plVar9 = *(long **)(lVar7 + 0x30);
      if (plVar9 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar9 = DAT_04859430;
        *(long **)(lVar7 + 0x30) = DAT_04859430;
      }
      uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar6 & 1) == 0) || (lVar7 = FUN_00c4e600(), *(int *)(lVar7 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,lVar8,0,8);
      }
      else {
        FUN_00c48fe8(plVar9,lVar8,0,8);
      }
    }
    uVar2 = CONCAT62(uStack_5e,CONCAT11(uStack_5f,local_60));
    *(undefined8 *)param_1 = uVar2;
    uVar1 = (uint)uVar2;
    uStack_5f = 0;
    *(ulong *)(param_1 + 8) = uStack_58;
    *(undefined8 *)(param_1 + 0x10) = local_50;
    if ((local_60 & 1) == 0) {
      if ((0x19 < (uVar1 & 0xff)) || ((1 << (ulong)(uVar1 & 0x1f) & 0x300000cU) == 0)) {
        *(undefined2 *)param_1 = 0;
        goto LAB_028a75f0;
      }
    }
    else if ((*(long *)(param_1 + 8) != 0xc) && (*(long *)(param_1 + 8) != 1)) {
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      goto LAB_028a75f0;
    }
    std::string::operator=(param_1,local_48);
  }
LAB_028a75f0:
  if ((((byte)local_48[0] & 1) != 0) && (local_38 != (char *)0x0)) {
    lVar8 = tpidr_el0;
    plVar9 = *(long **)(lVar8 + 0x30);
    if (plVar9 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar9 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    uVar6 = (**(code **)(*plVar9 + 0xf8))(plVar9);
    if (((uVar6 & 1) != 0) && (lVar8 = FUN_00c4e600(), 0 < *(int *)(lVar8 + 0x12c8))) {
      FUN_00c48fe8(plVar9,local_38,0,8);
      return;
    }
    (**(code **)(*plVar9 + 0x18))(plVar9,local_38,0,8);
  }
  return;
}


