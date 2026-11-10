/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c2a9e4; name: FUN_01c2a9e4
 */


void FUN_01c2a9e4(undefined1 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined1 local_30 [16];
  undefined1 local_4 [4];
  
  puVar1 = PTR_LAB_047d5d80;
  if (DAT_04812598 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  local_4[0] = param_3;
  local_30 = FUN_01c2c044(param_2,puVar1,0,local_4);
  *param_1 = 1;
  FUN_01c2c0b0(param_1 + 8,local_30);
  return;
}


