/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02483428; name: FUN_02483428
 */


void FUN_02483428(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  
  uVar1 = 0x88;
  if (DAT_0484c2b0 == '\0') {
    uVar1 = 0;
  }
  local_30 = FUN_02484234(param_2,uVar1,DAT_0484c2b8);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


