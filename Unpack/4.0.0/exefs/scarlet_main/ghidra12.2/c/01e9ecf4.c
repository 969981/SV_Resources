/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9ecf4; name: FUN_01e9ecf4
 */


void FUN_01e9ecf4(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(undefined **)(param_1 + 8) = PTR_DAT_047cff40 + 0x10;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_01cfa5b0(param_1 + 0x20,param_2 + 0x18);
  FUN_01cfa5b0(param_1 + 0x40,param_2 + 0x38);
  *param_1 = 1;
  return;
}


