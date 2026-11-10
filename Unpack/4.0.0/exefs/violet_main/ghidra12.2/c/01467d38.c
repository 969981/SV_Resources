/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01467d38; name: FUN_01467d38
 */


void FUN_01467d38(locale *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x30);
    if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar2 + 0x30) = DAT_04859430;
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x18,8);
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      uVar8 = *puVar7;
      *puVar5 = &PTR_LAB_045e63d0;
      puVar5[1] = uVar8;
      *(char *)(puVar5 + 2) = (char)param_2;
      goto LAB_01467dac;
    }
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar2 + 0x30) = DAT_04859430;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,8);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar5 = &PTR_LAB_045e63a0;
    puVar5[1] = uVar8;
    std::locale::locale((locale *)(puVar5 + 2),param_1);
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(char *)(puVar5 + 5) = (char)param_2;
    puVar5[3] = uVar8;
    puVar5[4] = uVar1;
  }
  else {
    lVar2 = tpidr_el0;
    plVar6 = *(long **)(lVar2 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar2 + 0x30) = DAT_04859430;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x30,8);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar5 = &PTR_LAB_045e6370;
    puVar5[1] = uVar8;
    std::locale::locale((locale *)(puVar5 + 2),param_1);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    puVar5[3] = *(undefined8 *)(param_1 + 8);
    puVar5[4] = uVar8;
    uVar3 = (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),param_2);
    *(undefined1 *)(puVar5 + 5) = uVar3;
  }
  puVar7 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_01467dac:
  *puVar7 = puVar5;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  return;
}


