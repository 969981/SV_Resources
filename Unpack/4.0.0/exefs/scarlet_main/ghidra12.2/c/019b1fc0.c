/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b1fc0; name: FUN_019b1fc0
 */


void FUN_019b1fc0(undefined8 param_1,undefined4 param_2)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 *local_20;
  undefined8 uStack_18;
  
  local_40 = DAT_047ec208;
  uStack_38 = DAT_04483010;
  local_30 = DAT_04483008;
  uStack_2c = DAT_047ec200;
  local_28 = DAT_04483018;
  uStack_24 = DAT_0448301c;
  DAT_047ec208 = 0;
  DAT_04483008 = 0xffffffff;
  DAT_04483010 = 0xffffffffffffffff;
  local_20 = &DAT_047ec218;
  uStack_18 = DAT_047ec210;
  DAT_04483018 = 0xffffffff;
  DAT_047ec210 = 0;
  FUN_001007a0(param_1,&local_40,param_2);
  return;
}


