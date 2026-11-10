/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00285df0; name: FUN_00285df0
 */


void FUN_00285df0(void)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,8);
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = &PTR_FUN_0448d3b0;
  }
                    /* try { // try from 00285e1c to 00285e23 has its CatchHandler @ 00285e5c */
  FUN_0032e5bc(&local_18);
  puVar1 = local_18;
  local_18 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0049e790(PTR_LAB_047cba48,puVar1);
  }
  return;
}


