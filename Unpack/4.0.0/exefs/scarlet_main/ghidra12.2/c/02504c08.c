/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02504c08; name: FUN_02504c08
 */


void FUN_02504c08(undefined1 *param_1,undefined1 param_2 [16],undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 local_40 [16];
  undefined8 uStack_30;
  
  puVar1 = PTR_FUN_047df270;
  if (DAT_0484f208 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_40 = FUN_02505fb0(param_4,puVar1,0);
  *param_1 = 1;
  uStack_30 = param_3;
  FUN_024cc8b0(param_1 + 8,local_40);
  return;
}


