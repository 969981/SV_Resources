/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0146c0c4; name: FUN_0146c0c4
 */


char * FUN_0146c0c4(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_2 != param_3) {
    if (*param_2 != '^') goto LAB_0146c150;
    pcVar6 = (char *)tpidr_el0;
    plVar3 = *(long **)(pcVar6 + 0x30);
    if (plVar3 == (long *)0x0) {
      if ((DAT_04859438 & 1) == 0) goto LAB_0146c270;
      goto LAB_0146c21c;
    }
    while( true ) {
      puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x10,8);
      lVar4 = *(long *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(lVar4 + 8);
      *puVar2 = &PTR_LAB_045e6280;
      puVar2[1] = uVar5;
      *(undefined8 **)(lVar4 + 8) = puVar2;
      param_2 = param_2 + 1;
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
LAB_0146c150:
      if (param_2 == param_3) {
        return param_3;
      }
      do {
        pcVar6 = param_2;
        param_2 = (char *)FUN_028a5a5c(param_1,pcVar6,param_3);
      } while (param_2 != pcVar6);
      if (pcVar6 == param_3) {
        return param_3;
      }
      if ((pcVar6 + 1 == param_3) && (*pcVar6 == '$')) break;
      FUN_028a5af0();
LAB_0146c270:
      iVar1 = __cxa_guard_acquire(&DAT_04859438);
      if (iVar1 != 0) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
LAB_0146c21c:
      plVar3 = DAT_04859430;
      *(long **)(pcVar6 + 0x30) = DAT_04859430;
    }
    lVar4 = tpidr_el0;
    plVar3 = *(long **)(lVar4 + 0x30);
    if (plVar3 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar3 = DAT_04859430;
      *(long **)(lVar4 + 0x30) = DAT_04859430;
    }
    puVar2 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x10,8);
    lVar4 = *(long *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(lVar4 + 8);
    *puVar2 = &PTR_LAB_045e62b0;
    puVar2[1] = uVar5;
    *(undefined8 **)(lVar4 + 8) = puVar2;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
    param_2 = param_3;
  }
  return param_2;
}


