/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028aa4e4; name: FUN_028aa4e4
 */


char * FUN_028aa4e4(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *unaff_x24;
  
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  iVar1 = *(int *)(param_1 + 0x1c);
  pcVar4 = (char *)FUN_028aa754();
  if ((pcVar4 != param_2) || (pcVar4 == param_3)) {
LAB_028aa5e0:
    if (pcVar4 == param_2) {
      return param_2;
    }
    goto LAB_028aa5e8;
  }
  cVar2 = *param_2;
  if (cVar2 == '$') {
    lVar8 = tpidr_el0;
    plVar6 = *(long **)(lVar8 + 0x30);
    if (plVar6 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar6 = DAT_04859430;
      *(long **)(lVar8 + 0x30) = DAT_04859430;
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
    ppuVar7 = &PTR_LAB_045e62b0;
  }
  else {
    if (cVar2 == '(') {
      FUN_01469e70(param_1);
      uVar11 = (ulong)*(uint *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      pcVar4 = (char *)FUN_0146bc68(param_1,param_2 + 1,param_3);
      if ((pcVar4 != param_3) && (unaff_x24 = pcVar4, *pcVar4 == ')')) {
        FUN_01469d80(param_1,uVar11);
        pcVar4 = pcVar4 + 1;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
        goto LAB_028aa5e0;
      }
      FUN_028a5c70();
LAB_028aa6f8:
      iVar3 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar3 != 0) {
        *(long **)(unaff_x24 + 0x430) = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_028aa6a8:
      plVar6 = *(long **)(unaff_x24 + 0x430);
      *(long **)(uVar11 + 0x30) = plVar6;
    }
    else {
      if (cVar2 != '^') {
        return param_2;
      }
      uVar11 = tpidr_el0;
      plVar6 = *(long **)(uVar11 + 0x30);
      if (plVar6 == (long *)0x0) {
        unaff_x24 = (char *)&DAT_04859000;
        if ((DAT_04859438 & 1) == 0) goto LAB_028aa6f8;
        goto LAB_028aa6a8;
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x10,8);
    ppuVar7 = &PTR_LAB_045e6280;
  }
  lVar8 = *(long *)(param_1 + 0x38);
  pcVar4 = param_2 + 1;
  uVar9 = *(undefined8 *)(lVar8 + 8);
  *puVar5 = ppuVar7;
  puVar5[1] = uVar9;
  *(undefined8 **)(lVar8 + 8) = puVar5;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_028aa5e8:
  pcVar4 = (char *)FUN_014687e4(param_1,pcVar4,param_3,uVar10,iVar1 + 1,*(int *)(param_1 + 0x1c) + 1
                               );
  return pcVar4;
}


