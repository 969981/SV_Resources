/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e665d0; name: FUN_01e665d0
 */


void FUN_01e665d0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_30 [16];
  
  FUN_01c1b608(auStack_30,param_2);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01e667fc(param_1,auStack_30);
  FUN_01c1aab8(auStack_30);
  *(undefined1 *)(param_1 + 3) = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x40;
  }
  param_1[2] = lVar1;
  return;
}


