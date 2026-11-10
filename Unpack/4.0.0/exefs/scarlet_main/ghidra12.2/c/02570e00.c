/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02570e00; name: FUN_02570e00
 */


void FUN_02570e00(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [48];
  
  puVar1 = &LAB_02b9fbc0;
  if (DAT_04851ef0 == '\0') {
    puVar1 = (undefined1 *)0x0;
  }
  FUN_02571df0(auStack_80,param_2,puVar1,0);
  *param_1 = 1;
  memcpy(auStack_50,auStack_80,0x30);
  FUN_00defd6c(param_1 + 8,auStack_50);
  return;
}


