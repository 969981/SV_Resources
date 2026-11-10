/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02155314; name: FUN_02155314
 */


void FUN_02155314(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined1 *)(param_1 + 0x231) = 1;
  *(undefined8 *)(param_1 + 0x238) = *param_2;
  *(undefined8 *)(param_1 + 0x240) = param_2[1];
  *(undefined8 *)(param_1 + 0x248) = param_2[2];
  plVar2 = (long *)param_2[3];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  plVar1 = *(long **)(param_1 + 0x250);
  *(long **)(param_1 + 0x250) = plVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x268) = param_3[1];
  *(undefined8 *)(param_1 + 0x260) = *param_3;
  if (**(char **)(param_1 + 0x170) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02155398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 0x88))(*(long **)(param_1 + 200),param_1 + 0x168);
  return;
}


