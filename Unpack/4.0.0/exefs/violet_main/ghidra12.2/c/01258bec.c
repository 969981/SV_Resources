/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01258bec; name: FUN_01258bec
 */


void FUN_01258bec(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  byte local_88 [16];
  ulong local_78;
  ulong local_70;
  byte local_68 [16];
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar5 = *(undefined8 *)(param_4 + 8);
  lVar1 = tpidr_el0;
  local_38 = param_3;
  if (*(long *)(lVar1 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  local_48 = *(undefined8 *)(lVar1 + 0x30);
  local_40 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  std::to_string(param_2 % 10);
  local_50 = (ulong)local_68 | 1;
  if ((local_68[0] & 1) != 0) {
    local_50 = local_58;
  }
  std::to_string(param_2 / 10);
  local_70 = (ulong)local_88 | 1;
  if ((local_88[0] & 1) != 0) {
    local_70 = local_78;
  }
  FUN_01258f38(param_1,&local_50,&local_70,&local_38);
  if (((local_88[0] & 1) != 0) && (local_78 != 0)) {
    plVar6 = *(long **)(lVar1 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar6,local_78,0,8);
        goto LAB_01258cdc;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_78,0,8);
  }
LAB_01258cdc:
  if (((local_68[0] & 1) != 0) && (local_58 != 0)) {
    plVar6 = *(long **)(lVar1 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_00c4e600();
      if (0 < *(int *)(lVar4 + 0x12c8)) {
        FUN_00c48fe8(plVar6,local_58,0,8);
        goto LAB_01258ce4;
      }
    }
    (**(code **)(*plVar6 + 0x18))(plVar6,local_58,0,8);
  }
LAB_01258ce4:
  *(undefined8 *)(lVar1 + 0x30) = local_48;
  *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_40;
  return;
}


