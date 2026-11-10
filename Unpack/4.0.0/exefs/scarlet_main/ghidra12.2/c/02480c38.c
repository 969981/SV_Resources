/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02480c38; name: FUN_02480c38
 */


void FUN_02480c38(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [16];
  
  uVar1 = 0x70;
  if (DAT_0484c228 == '\0') {
    uVar1 = 0;
  }
  local_30 = FUN_024818e4(param_2,uVar1,DAT_0484c230);
  *param_1 = 1;
  FUN_00d200a4(param_1 + 8,local_30);
  return;
}


