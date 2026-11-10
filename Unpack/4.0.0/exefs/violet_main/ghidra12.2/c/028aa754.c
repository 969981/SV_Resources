/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028aa754; name: FUN_028aa754
 */


char * FUN_028aa754(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  pcVar2 = (char *)FUN_028aa890();
  if ((pcVar2 == param_2) &&
     (pcVar2 = (char *)FUN_028aa914(param_1,param_2,param_3), pcVar2 == param_2)) {
    if ((param_2 == param_3) || (*param_2 != '.')) {
      pcVar2 = (char *)FUN_01469f68(param_1,param_2,param_3);
      return pcVar2;
    }
    lVar5 = tpidr_el0;
    plVar4 = *(long **)(lVar5 + 0x30);
    if (plVar4 == (long *)0x0) {
      if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
        DAT_04859430 = DAT_04859418;
        __cxa_guard_release(&DAT_04859438);
      }
      plVar4 = DAT_04859430;
      *(long **)(lVar5 + 0x30) = DAT_04859430;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar4 + 0x10))(plVar4,0x10,8);
    lVar5 = *(long *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    *puVar3 = &PTR_LAB_045e6610;
    puVar3[1] = uVar6;
    *(undefined8 **)(lVar5 + 8) = puVar3;
    pcVar2 = param_2 + 1;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(*(long *)(param_1 + 0x38) + 8);
  }
  return pcVar2;
}


