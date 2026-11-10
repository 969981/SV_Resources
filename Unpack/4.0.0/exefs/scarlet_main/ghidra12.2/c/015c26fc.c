/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015c26fc; name: FUN_015c26fc
 */


void FUN_015c26fc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_015c2764(*(undefined8 *)(param_1 + 0x10));
  FUN_015c276c(uVar1,param_2,param_5,param_3);
  uVar1 = FUN_015c2764(*(undefined8 *)(param_1 + 0x10));
  FUN_015c276c(uVar1,param_3,param_4,param_2);
  return;
}


