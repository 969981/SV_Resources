/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0029a200; name: FUN_0029a200
 */


void FUN_0029a200(void)

{
  long *plVar1;
  long *local_18;
  
  local_18 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (local_18 != (long *)0x0) {
    *local_18 = (long)&PTR_LAB_0448dea8;
  }
                    /* try { // try from 0029a22c to 0029a233 has its CatchHandler @ 0029a26c */
  FUN_003306d8(&local_18);
  plVar1 = local_18;
  local_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  return;
}


