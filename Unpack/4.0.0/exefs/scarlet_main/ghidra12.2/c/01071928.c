/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01071928; name: FUN_01071928
 */


void FUN_01071928(long param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  long alStack_20 [2];
  
  alStack_20[1] = 0x5c307d44ea569b63;
  alStack_20[0] = *(long *)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = alStack_20[0] + 1;
  local_30 = 0x60;
  local_28 = param_2;
  FUN_01071c38(*(undefined8 *)(param_1 + 8),alStack_20,&local_28,&local_30);
  return;
}


