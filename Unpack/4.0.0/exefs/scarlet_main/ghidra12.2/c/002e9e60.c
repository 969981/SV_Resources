/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e9e60; name: FUN_002e9e60
 */


void FUN_002e9e60(undefined8 *param_1,undefined8 param_2)

{
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  char local_30;
  undefined4 local_2c;
  undefined8 *local_28;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_30 = '\0';
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_68 = PTR_DAT_047cc950 + 0x10;
  local_2c = 100000;
  uStack_58 = 0;
  local_60 = 0;
                    /* try { // try from 002e9eac to 002e9ed7 has its CatchHandler @ 002e9ef0 */
  local_28 = param_1;
  FUN_002e3740(&local_68,param_2,6,0);
  if (local_30 != '\0') {
    FUN_0021d540(param_1," [truncated]",0xc);
  }
  FUN_002df038(&local_68);
  return;
}


