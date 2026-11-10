/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cc733c; name: FUN_00cc733c
 */


void FUN_00cc733c(long *param_1)

{
  long *plVar1;
  
  FUN_00da3348(param_1,*(undefined8 *)PTR_DAT_047d8d98);
  plVar1 = (long *)param_1[0x36];
  *param_1 = (long)&DAT_045d39e0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0;
  param_1[4] = (long)&PTR_LAB_045d3a90;
  param_1[5] = (long)&DAT_045d3ae0;
  if ((plVar1 != (long *)0x0) && (plVar1 != param_1)) {
    (**(code **)(*plVar1 + 0x88))(plVar1,0);
  }
  plVar1 = (long *)param_1[0x35];
  if ((plVar1 == (long *)0x0) || (plVar1 == param_1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cc73d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x88))(plVar1,0);
  return;
}


