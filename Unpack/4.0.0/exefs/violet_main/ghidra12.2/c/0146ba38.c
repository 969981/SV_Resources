/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146ba38; name: FUN_0146ba38
 */


void FUN_0146ba38(undefined8 param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  byte local_48 [8];
  ulong local_40;
  ulong local_38;
  
  FUN_028a9258(local_48);
  uVar3 = (ulong)(local_48[0] >> 1);
  uVar1 = (ulong)local_48 | 1;
  if ((local_48[0] & 1) != 0) {
    uVar3 = local_40;
    uVar1 = local_38;
  }
  (**(code **)(**(long **)(param_2 + 0x10) + 0x20))
            (param_1,*(long **)(param_2 + 0x10),uVar1,uVar1 + uVar3);
  if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
    lVar4 = tpidr_el0;
    plVar5 = *(long **)(lVar4 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar5 + 0x18))(plVar5,local_38,0,8);
    }
    else {
      FUN_00c48fe8(plVar5,local_38,0,8);
    }
  }
  return;
}


