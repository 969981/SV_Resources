/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02482118; name: FUN_02482118
 */


void FUN_02482118(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  
  uVar1 = 0x70;
  if (DAT_0484c270 == '\0') {
    uVar1 = 0;
  }
  local_30 = FUN_02482aa8(param_2,uVar1,DAT_0484c278);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


