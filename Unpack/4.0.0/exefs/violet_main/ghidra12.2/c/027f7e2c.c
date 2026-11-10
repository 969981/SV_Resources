/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027f7e2c; name: FUN_027f7e2c
 */


void FUN_027f7e2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined2 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
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
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined2 *)(lVar3 + 0x38) = 1;
  puVar5 = operator_new(0x10);
  *puVar5 = &DAT_045e3758;
  plVar6 = (long *)param_1[1];
  param_1[1] = puVar5;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  local_38 = (undefined2)uVar2;
  *(undefined2 *)(lVar3 + 0x38) = local_38;
  return;
}


