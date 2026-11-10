/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 023d8ec8; name: FUN_023d8ec8
 */


void FUN_023d8ec8(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 local_50 [16];
  undefined8 uStack_40;
  undefined8 local_30;
  
  puVar1 = &LAB_023dbccc;
  if (DAT_048491d8 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  local_50 = FUN_023dbcd4(param_5,puVar1,0);
  *param_1 = 1;
  uStack_40 = param_3;
  local_30 = param_4;
  FUN_0236f6c0(param_1 + 8,local_50);
  return;
}


