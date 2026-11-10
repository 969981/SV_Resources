/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0229e3b8; name: FUN_0229e3b8
 */


void FUN_0229e3b8(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_e0 [96];
  undefined1 auStack_80 [96];
  
  puVar1 = PTR_LAB_047dde10;
  if (DAT_04843bd8 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  FUN_0229ed6c(auStack_e0,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_80,auStack_e0,0x60);
  FUN_0229edd8(param_1 + 8,auStack_80);
  return;
}


