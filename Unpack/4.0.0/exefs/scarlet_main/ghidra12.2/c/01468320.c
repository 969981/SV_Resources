/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01468320; name: FUN_01468320
 */


void FUN_01468320(locale *param_1)

{
  undefined8 uVar1;
  
  std::locale::locale(param_1);
  uVar1 = std::locale::use_facet((id *)param_1);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = std::locale::use_facet((id *)param_1);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}


