/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011c61c0; name: FUN_011c61c0
 */


undefined8 FUN_011c61c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined8 *local_90 [13];
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined8 local_8;
  
  local_28[0] = 1;
  local_90[0] = &local_8;
  local_8 = 0;
  local_b0 = &LAB_02e631c0;
  local_a8 = FUN_02e631d4;
  local_a0 = &LAB_02e631d8;
  puStack_98 = &LAB_02e631e4;
  local_24 = param_3;
  FUN_011c625c(param_1,local_28,param_2,&local_b0,param_4,0);
  pcVar1 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = (undefined1 *)0x0;
    puStack_98 = (undefined1 *)0x0;
    local_b0 = (undefined1 *)0x0;
    local_a8 = (code *)0x0;
    (*pcVar1)(local_90);
  }
  return local_8;
}


