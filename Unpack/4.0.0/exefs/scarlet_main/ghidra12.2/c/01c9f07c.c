/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c9f07c; name: FUN_01c9f07c
 */


void FUN_01c9f07c(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  undefined4 local_4;
  
  uVar1 = 0xb8;
  if (DAT_0481b860 == '\0') {
    uVar1 = 0;
  }
  local_4 = param_3;
  FUN_01c9f57c(auStack_80,param_2,uVar1,DAT_0481b868,&local_4);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x2c);
  FUN_01c9f5f0(param_1 + 8,auStack_50);
  return;
}


