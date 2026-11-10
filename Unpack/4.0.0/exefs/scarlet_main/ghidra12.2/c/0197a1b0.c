/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0197a1b0; name: FUN_0197a1b0
 */


void FUN_0197a1b0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  undefined8 local_28;
  byte local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20[0] = param_5 & 1;
  local_28 = 0x36933bdffaa1e9fb;
  local_1c = param_4;
  local_18 = param_3;
  uStack_14 = param_2;
  FUN_0197a204(param_1,&local_28,&uStack_14,&local_18,&local_1c,local_20);
  return;
}


