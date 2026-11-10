/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dc506c; name: FUN_00dc506c
 */


void FUN_00dc506c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_00dc4b38();
  if (((uVar1 & 0xff) == 0) && (uVar1 = FUN_00dc50dc(param_1), (uVar1 & 0xff) == 0)) {
    return;
  }
  FUN_00dc4e58(*param_3,param_1 + (uVar1 >> 0x20) * 0x78 + 0x38,param_2);
  return;
}


