/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001246d0; name: FUN_001246d0
 */


void FUN_001246d0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  param_1[2] = param_1[2] + param_2;
  FUN_00122720(uVar1,*param_1);
  if ((undefined8 *)*param_1 != param_1 + 4) {
    FUN_00121bc0(uVar1,0xfffffffe);
  }
  FUN_00c5dcd0(uVar1,0xfffffffe,0xffffffff);
  FUN_00c5db00(uVar1,0xfffffffe);
  return;
}


