/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c581f4; name: FUN_01c581f4
 */


void FUN_01c581f4(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_140 [144];
  undefined1 auStack_b0 [144];
  
  uVar1 = 0x68;
  if (DAT_04815c28 == '\0') {
    uVar1 = 0;
  }
  FUN_01c58a20(auStack_140,param_2,uVar1,DAT_04815c30);
  *param_1 = 1;
  memcpy(auStack_b0,auStack_140,0x8c);
  FUN_01c58a9c(param_1 + 8,auStack_b0);
  return;
}


