/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c8f168; name: FUN_01c8f168
 */


void FUN_01c8f168(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_5b0 [712];
  undefined1 auStack_2e8 [712];
  
  puVar1 = PTR_LAB_047d64c0;
  if (DAT_04816c90 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_01c8fa64(auStack_5b0,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_2e8,auStack_5b0,0x2c8);
  FUN_01c8fabc(param_1 + 8,auStack_2e8);
  return;
}


