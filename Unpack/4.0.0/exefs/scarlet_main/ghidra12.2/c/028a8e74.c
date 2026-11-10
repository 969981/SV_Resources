/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028a8e74; name: FUN_028a8e74
 */


undefined4 FUN_028a8e74(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  byte local_48 [8];
  ulong local_40;
  char *local_38;
  
  FUN_01f6e9f8(local_48);
  uVar4 = (ulong)(local_48[0] >> 1);
  pcVar1 = (char *)((ulong)local_48 | 1);
  if ((local_48[0] & 1) != 0) {
    uVar4 = local_40;
    pcVar1 = local_38;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),pcVar1,pcVar1 + uVar4);
  pcVar1 = (char *)((ulong)local_48 | 1);
  if ((local_48[0] & 1) != 0) {
    pcVar1 = local_38;
  }
  uVar2 = std::__get_classname(pcVar1,(bool)(param_4 & 1));
  if (((local_48[0] & 1) != 0) && (local_38 != (char *)0x0)) {
    lVar5 = tpidr_el0;
    plVar6 = *(long **)(lVar5 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar4 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,local_38,0,8);
    }
    else {
      FUN_00c48fe8(plVar6,local_38,0,8);
    }
  }
  return uVar2;
}


