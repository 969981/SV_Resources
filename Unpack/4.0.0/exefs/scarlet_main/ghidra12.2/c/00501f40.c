/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00501f40; name: FUN_00501f40
 */


void FUN_00501f40(undefined8 param_1,undefined8 param_2)

{
  ushort local_28 [8];
  undefined8 local_18;
  
  local_28[0] = 0;
                    /* try { // try from 00501f50 to 00501f57 has its CatchHandler @ 00501f7c */
  FUN_005065ec(param_1,local_28,param_2);
  if ((local_28[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_18);
  }
  return;
}


