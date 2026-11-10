/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02c2b220; name: FUN_02c2b220
 */


void FUN_02c2b220(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  undefined8 local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  FUN_019db778(&local_50,*param_1 + 0xe0);
  if (*(long *)(param_1[1] + 0x40) != 0) {
    FUN_0193d1ec(*(long *)(param_1[1] + 0x40),&local_50);
  }
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar1 + 0x30) = DAT_04859430;
  }
  plVar2 = local_48;
  local_40 = *(undefined8 *)(lVar1 + 0x30);
  local_38 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = local_50;
  *(undefined2 *)(lVar1 + 0x38) = 1;
  local_48 = (long *)0x0;
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(lVar1 + 0x30) = local_40;
    *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_38;
  }
  else {
    (**(code **)(*plVar2 + 8))();
    *(undefined8 *)(lVar1 + 0x30) = local_40;
    *(undefined2 *)(lVar1 + 0x38) = (undefined2)local_38;
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 8))(local_48);
    }
  }
  if (*(long *)(param_1[2] + 0x40) != 0) {
    FUN_0193d1ec(*(long *)(param_1[2] + 0x40),param_2);
  }
  return;
}


