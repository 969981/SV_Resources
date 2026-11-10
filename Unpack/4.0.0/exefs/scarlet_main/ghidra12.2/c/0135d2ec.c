/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0135d2ec; name: FUN_0135d2ec
 */


void FUN_0135d2ec(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = tpidr_el0;
  uVar2 = *param_1;
  *(undefined2 *)(lVar1 + 0x38) = *(undefined2 *)(param_1 + 1);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  return;
}


