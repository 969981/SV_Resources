/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea74f4; name: FUN_01ea74f4
 */


undefined * FUN_01ea74f4(long param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(long **)(param_1 + 0x1b8) != *(long **)(param_1 + 0x1c0)) {
    plVar4 = *(long **)(param_1 + 0x1b8);
    do {
      plVar3 = plVar4 + 4;
      plVar4 = (long *)*plVar4;
      if (*plVar4 == *param_2) {
        if (plVar4 != (long *)0x0) {
          if ((ulong)(long)param_3 < (ulong)(plVar4[5] - plVar4[4] >> 5)) {
            return *(undefined **)(plVar4[4] + (long)param_3 * 0x20);
          }
        }
        break;
      }
      plVar4 = plVar3;
    } while (*(long **)(param_1 + 0x1c0) != plVar3);
  }
  if (((*PTR_DAT_047d3e28 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3e28), puVar2 = PTR_DAT_047d3e30, iVar1 != 0)) {
    FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3e28);
  }
  else {
    puVar2 = PTR_DAT_047d3e30;
  }
  return puVar2;
}


