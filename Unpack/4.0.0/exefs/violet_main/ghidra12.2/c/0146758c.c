/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146758c; name: FUN_0146758c
 */


char * FUN_0146758c(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar12 = *(long *)(param_1 + 0x38);
  pcVar2 = param_2;
  do {
    pcVar9 = pcVar2;
    pcVar2 = (char *)FUN_01467fb4(param_1,pcVar9,param_3);
    if (pcVar2 == pcVar9) {
      uVar11 = *(undefined8 *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x1c);
      pcVar2 = (char *)FUN_01467a54(param_1,pcVar9,param_3);
      if (pcVar2 == pcVar9) break;
      pcVar2 = (char *)FUN_014687e4(param_1,pcVar2,param_3,uVar11,iVar1 + 1,
                                    *(int *)(param_1 + 0x1c) + 1);
    }
  } while (pcVar2 != pcVar9);
  if (pcVar9 == param_2) {
    lVar6 = tpidr_el0;
    plVar5 = *(long **)(lVar6 + 0x30);
    if (plVar5 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar5 = DAT_04859430;
      *(long **)(lVar6 + 0x30) = DAT_04859430;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
    lVar6 = *(long *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)(lVar6 + 8);
    *puVar4 = &PTR_LAB_045e6220;
    puVar4[1] = uVar11;
    *(undefined8 **)(lVar6 + 8) = puVar4;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  if (pcVar9 != param_3) {
    lVar6 = tpidr_el0;
    do {
      if (*pcVar9 != '|') {
        return pcVar9;
      }
      lVar10 = *(long *)(param_1 + 0x38);
      pcVar2 = pcVar9 + 1;
      pcVar3 = pcVar2;
      do {
        pcVar9 = pcVar3;
        pcVar3 = (char *)FUN_01467fb4(param_1,pcVar9,param_3);
        if (pcVar3 == pcVar9) {
          uVar11 = *(undefined8 *)(param_1 + 0x38);
          iVar1 = *(int *)(param_1 + 0x1c);
          pcVar3 = (char *)FUN_01467a54(param_1,pcVar9,param_3);
          if (pcVar3 == pcVar9) break;
          pcVar3 = (char *)FUN_014687e4(param_1,pcVar3,param_3,uVar11,iVar1 + 1,
                                        *(int *)(param_1 + 0x1c) + 1);
        }
      } while (pcVar3 != pcVar9);
      if (pcVar9 == pcVar2) {
        plVar5 = *(long **)(lVar6 + 0x30);
        if (plVar5 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar5 = DAT_04859430;
          *(long **)(lVar6 + 0x30) = DAT_04859430;
        }
        puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
        lVar7 = *(long *)(param_1 + 0x38);
        uVar11 = *(undefined8 *)(lVar7 + 8);
        *puVar4 = &PTR_LAB_045e6220;
        puVar4[1] = uVar11;
        *(undefined8 **)(lVar7 + 8) = puVar4;
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      }
      plVar5 = *(long **)(lVar6 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x18,8);
      uVar11 = *(undefined8 *)(lVar12 + 8);
      uVar8 = *(undefined8 *)(lVar10 + 8);
      *puVar4 = &PTR_FUN_045e65b0;
      puVar4[1] = uVar11;
      puVar4[2] = uVar8;
      *(undefined8 **)(lVar12 + 8) = puVar4;
      *(undefined8 *)(lVar10 + 8) = 0;
      plVar5 = *(long **)(lVar6 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
      *puVar4 = &PTR_LAB_045e6220;
      puVar4[1] = uVar11;
      *(undefined8 **)(lVar10 + 8) = puVar4;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 8) = 0;
      plVar5 = *(long **)(lVar6 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar6 + 0x30) = DAT_04859430;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x10,8);
      uVar11 = *(undefined8 *)(lVar10 + 8);
      *puVar4 = &PTR_LAB_045e65e0;
      puVar4[1] = uVar11;
      *(undefined8 **)(*(long *)(param_1 + 0x38) + 8) = puVar4;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar10 + 8);
    } while (pcVar9 != param_3);
  }
  return param_3;
}


