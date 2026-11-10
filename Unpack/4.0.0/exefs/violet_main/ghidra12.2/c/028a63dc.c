/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a63dc; name: FUN_028a63dc
 */


void FUN_028a63dc(locale *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  
  if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
    lVar6 = tpidr_el0;
    plVar4 = *(long **)(lVar6 + 0x30);
    if ((*(uint *)(param_1 + 0x18) >> 3 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      uVar7 = *puVar5;
      *puVar3 = &PTR_LAB_045e6460;
      puVar3[1] = uVar7;
      *(undefined4 *)(puVar3 + 2) = param_2;
      goto LAB_028a64bc;
    }
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x30,8);
    lVar6 = *(long *)(param_1 + 0x38);
    ppuVar8 = &PTR_LAB_045e6430;
  }
  else {
    lVar6 = tpidr_el0;
    plVar4 = *(long **)(lVar6 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x30,8);
    lVar6 = *(long *)(param_1 + 0x38);
    ppuVar8 = &PTR_LAB_045e6400;
  }
  uVar7 = *(undefined8 *)(lVar6 + 8);
  *puVar3 = ppuVar8;
  puVar3[1] = uVar7;
  std::locale::locale((locale *)(puVar3 + 2),param_1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(puVar3 + 5) = param_2;
  puVar3[3] = uVar7;
  puVar3[4] = uVar1;
  puVar5 = (undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_028a64bc:
  *puVar5 = puVar3;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  return;
}


