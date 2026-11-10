/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e83db8; name: FUN_01e83db8
 */


void FUN_01e83db8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined2 local_38;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xd0) != '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
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
  plVar5 = *(long **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  local_38 = (undefined2)uVar2;
  *(undefined2 *)(lVar3 + 0x38) = local_38;
  *(undefined4 *)(param_1 + 0x48) = 3;
  FUN_0174a3b8(param_1);
  return;
}


