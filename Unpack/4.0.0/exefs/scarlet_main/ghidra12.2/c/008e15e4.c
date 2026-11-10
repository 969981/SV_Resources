/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e15e4; name: FUN_008e15e4
 */


void FUN_008e15e4(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d2630;
  (**(code **)**(undefined8 **)PTR_DAT_047d2630)();
  (**(code **)(*param_1 + 0x18))(param_1,*(undefined8 *)puVar1);
  *(undefined8 *)puVar1 = 0;
  return;
}


