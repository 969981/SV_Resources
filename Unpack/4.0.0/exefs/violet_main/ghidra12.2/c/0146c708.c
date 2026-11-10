/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146c708; name: FUN_0146c708
 */


char * FUN_0146c708(long param_1,char *param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0x38);
  lVar1 = tpidr_el0;
  if (param_2 != param_3) {
    pcVar8 = param_2;
    do {
      if (*pcVar8 == '\n') goto LAB_0146c768;
      pcVar8 = pcVar8 + 1;
    } while (param_3 != pcVar8);
    pcVar8 = param_3;
LAB_0146c768:
    if (pcVar8 != param_2) {
      FUN_0146bc68(param_1,param_2,pcVar8);
      param_2 = pcVar8;
      goto LAB_0146c7d0;
    }
  }
  plVar4 = *(long **)(lVar1 + 0x30);
  if (plVar4 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar4 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
  uVar5 = *(undefined8 *)(lVar9 + 8);
  *puVar3 = &PTR_LAB_045e6220;
  puVar3[1] = uVar5;
  *(undefined8 **)(lVar9 + 8) = puVar3;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_0146c7d0:
  if (param_2 != param_3) {
    param_2 = param_2 + 1;
  }
  do {
    if (param_2 == param_3) {
      return param_3;
    }
    pcVar8 = param_2;
    do {
      if (*pcVar8 == '\n') goto LAB_0146c814;
      pcVar8 = pcVar8 + 1;
    } while (param_3 != pcVar8);
    pcVar8 = param_3;
LAB_0146c814:
    lVar7 = *(long *)(param_1 + 0x38);
    if (pcVar8 == param_2) {
      plVar4 = *(long **)(lVar1 + 0x30);
      if (plVar4 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar4 = DAT_04859430;
        *(long **)(lVar1 + 0x30) = DAT_04859430;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
      uVar5 = *(undefined8 *)(lVar7 + 8);
      *puVar3 = &PTR_LAB_045e6220;
      puVar3[1] = uVar5;
      *(undefined8 **)(lVar7 + 8) = puVar3;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    }
    else {
      FUN_0146bc68(param_1,param_2,pcVar8);
    }
    plVar4 = *(long **)(lVar1 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x18,8);
    uVar5 = *(undefined8 *)(lVar9 + 8);
    uVar6 = *(undefined8 *)(lVar7 + 8);
    *puVar3 = &PTR_FUN_045e65b0;
    puVar3[1] = uVar5;
    puVar3[2] = uVar6;
    *(undefined8 **)(lVar9 + 8) = puVar3;
    *(undefined8 *)(lVar7 + 8) = 0;
    plVar4 = *(long **)(lVar1 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    *puVar3 = &PTR_LAB_045e6220;
    puVar3[1] = uVar5;
    *(undefined8 **)(lVar7 + 8) = puVar3;
    *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
    plVar4 = *(long **)(lVar1 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar1 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
    uVar5 = *(undefined8 *)(lVar7 + 8);
    *puVar3 = &PTR_LAB_045e65e0;
    puVar3[1] = uVar5;
    *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar3;
    if (pcVar8 != param_3) {
      pcVar8 = pcVar8 + 1;
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar7 + 8);
    param_2 = pcVar8;
  } while( true );
}


