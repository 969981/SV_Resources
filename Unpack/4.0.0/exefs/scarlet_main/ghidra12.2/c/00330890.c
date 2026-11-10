/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00330890; name: FUN_00330890
 */


uint FUN_00330890(undefined8 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong local_30 [4];
  
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[0] = 0;
  local_30[1] = 0;
                    /* try { // try from 003308ac to 003308b7 has its CatchHandler @ 00330908 */
  puVar2 = (undefined8 *)FUN_00330930(DAT_047ef4c0,param_1,local_30 + 3,local_30);
  if (puVar2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
                    /* try { // try from 003308c8 to 003308df has its CatchHandler @ 0033090c */
    uVar1 = (**(code **)*puVar2)(puVar2,local_30[3]);
  }
  FUN_0037bfa0(local_30[3]);
  if ((local_30[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_30[2]);
  }
  return uVar1 & 1;
}


