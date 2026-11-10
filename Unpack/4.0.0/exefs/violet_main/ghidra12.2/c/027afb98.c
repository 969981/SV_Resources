/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027afb98; name: FUN_027afb98
 */


void FUN_027afb98(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  undefined2 local_38;
  
  uVar5 = (**(code **)(*(long *)*param_1 + 0x70))();
  if ((((uVar5 & 1) != 0) || (lVar8 = *(long *)(*param_2 + 0x40), lVar8 == 0)) ||
     (*(int *)(lVar8 + 0x48) != 0)) {
    return;
  }
  if (*(char *)(lVar8 + 0xd0) == '\0') {
    *(undefined8 *)(lVar8 + 0xd8) = 0;
    *(undefined1 *)(lVar8 + 0xd0) = 1;
  }
  else {
    *(undefined8 *)(lVar8 + 0xd8) = 0;
  }
  uVar7 = *(undefined8 *)(lVar8 + 0xe0);
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
  *(undefined2 *)(lVar3 + 0x38) = 1;
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  plVar6 = *(long **)(lVar8 + 0xe8);
  *(undefined8 *)(lVar8 + 0xe8) = 0;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  local_38 = (undefined2)uVar2;
  *(undefined2 *)(lVar3 + 0x38) = local_38;
  *(undefined4 *)(lVar8 + 0x48) = 1;
  FUN_0174a3b8(lVar8);
  return;
}


