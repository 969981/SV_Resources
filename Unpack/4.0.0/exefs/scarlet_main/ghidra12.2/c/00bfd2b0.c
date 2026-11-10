/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bfd2b0; name: FUN_00bfd2b0
 */


void FUN_00bfd2b0(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  plVar3 = (long *)(**(code **)(*param_1 + 0xb0))();
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  (**(code **)(*plVar3 + 0x80))(plVar3,param_1,&local_48);
  if (local_40 != local_48) {
    uVar5 = 0;
    do {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_1,*(undefined8 *)(local_48 + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulong)(local_40 - local_48 >> 3));
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,param_1);
  if (*plVar3 != 0) {
    FUN_00bfee44();
  }
  lVar1 = local_48;
  if (local_48 != 0) {
    local_40 = local_48;
    lVar4 = tpidr_el0;
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar3 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    uVar5 = (**(code **)(*plVar3 + 0xf8))(plVar3);
    if (((uVar5 & 1) != 0) && (lVar4 = FUN_00c4e600(), 0 < *(int *)(lVar4 + 0x12c8))) {
      FUN_00c48fe8(plVar3,lVar1,0,8);
      return;
    }
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar1,0,8);
  }
  return;
}


