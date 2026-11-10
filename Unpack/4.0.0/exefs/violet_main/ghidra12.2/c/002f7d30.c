/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f7d30; name: FUN_002f7d30
 */


void FUN_002f7d30(void)

{
  long *plVar1;
  long *local_28;
  long *local_18;
  
  local_18 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (local_18 != (long *)0x0) {
    *local_18 = (long)&PTR_LAB_04494140;
  }
                    /* try { // try from 002f7d60 to 002f7d6f has its CatchHandler @ 002f7e44 */
  FUN_0034c12c(0,0,&local_18);
  plVar1 = local_18;
  local_18 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  local_28 = (long *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (local_28 != (long *)0x0) {
    *local_28 = (long)&PTR_LAB_04494168;
  }
                    /* try { // try from 002f7dc0 to 002f7dcf has its CatchHandler @ 002f7e0c */
  FUN_0034c12c(0,1,&local_28);
  plVar1 = local_28;
  local_28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1);
    FUN_0049e790(PTR_LAB_047cba48,plVar1);
  }
  return;
}


