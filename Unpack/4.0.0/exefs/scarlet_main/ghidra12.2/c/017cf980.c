/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017cf980; name: FUN_017cf980
 */


void FUN_017cf980(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
                 byte param_5,byte param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  byte local_24 [4];
  byte local_20 [4];
  undefined1 local_1c [4];
  undefined2 local_18 [2];
  undefined2 local_14 [2];
  
  local_20[0] = param_5 & 1;
  local_24[0] = param_6 & 1;
  local_30 = param_8;
  uStack_2c = param_7;
  local_28 = param_1;
  local_1c[0] = param_4;
  local_18[0] = param_3;
  local_14[0] = param_2;
  FUN_017cf9e0(local_14,local_18,local_1c,local_20,local_24,&local_28,&uStack_2c,&local_30);
  return;
}


