/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b3b818; name: FUN_02b3b818
 */


void FUN_02b3b818(long *param_1,undefined4 param_2)

{
  long *plVar1;
  
  *(undefined4 *)(param_1 + 0x6e) = param_2;
  plVar1 = param_1;
  if ((long *)param_1[0x36] != (long *)0x0) {
    plVar1 = (long *)param_1[0x36];
  }
  if (plVar1 != param_1) {
    (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  }
  plVar1 = param_1;
  if ((long *)param_1[0x35] != (long *)0x0) {
    plVar1 = (long *)param_1[0x35];
  }
  if (plVar1 == param_1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b3b88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x88))(plVar1,param_2);
  return;
}


