/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fa810; name: FUN_003fa810
 */


void FUN_003fa810(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  undefined1 local_1;
  
  local_18 = 0;
  local_4 = (undefined1)(param_4 >> 0x15);
  local_3 = (undefined1)(param_4 >> 0xd);
  local_2 = (undefined1)(param_4 >> 5);
  local_1 = (undefined1)(param_4 << 3);
  local_20 = &local_4;
  local_30 = &local_28;
  local_28 = 0x400000004;
  local_40 = param_2;
  uStack_38 = param_3;
  FUN_003e3920(&local_40,param_1,&DAT_044a2ba8);
  return;
}


