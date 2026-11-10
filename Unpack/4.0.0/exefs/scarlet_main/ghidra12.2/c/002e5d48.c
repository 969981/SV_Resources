/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e5d48; name: FUN_002e5d48
 */


undefined4 FUN_002e5d48(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined8 local_1c;
  
  local_20 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  local_58 = PTR_DAT_047cc930 + 0x10;
  local_1c = DAT_03cb5478;
                    /* try { // try from 002e5d80 to 002e5d8f has its CatchHandler @ 002e5dac */
  FUN_002e3740(&local_58,param_1,0,1);
  uVar1 = local_1c._4_4_;
  FUN_002df038(&local_58);
  return uVar1;
}


