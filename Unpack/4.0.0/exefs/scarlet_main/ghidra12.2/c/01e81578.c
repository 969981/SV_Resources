/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e81578; name: FUN_01e81578
 */


undefined8 * FUN_01e81578(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined2 local_38;
  
  uVar6 = *param_1;
  lVar3 = tpidr_el0;
  if (*(long *)(lVar3 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(undefined8 *)(lVar3 + 0x30) = DAT_04859430;
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x30);
  uVar2 = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  *(undefined2 *)(lVar3 + 0x38) = 1;
  plVar5 = (long *)param_1[1];
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar6;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  local_38 = (undefined2)uVar2;
  *(undefined2 *)(lVar3 + 0x38) = local_38;
  return param_1;
}


