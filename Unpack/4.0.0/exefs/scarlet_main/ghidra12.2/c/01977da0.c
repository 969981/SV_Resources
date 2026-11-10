/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01977da0; name: FUN_01977da0
 */


void FUN_01977da0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar1 != 0) {
    FUN_01c6896c(param_1 + 0x98);
  }
  FUN_01977f2c(param_1 + 0x70);
  FUN_01977e28(0);
  FUN_01977e28(1);
  FUN_01977e28(2);
  FUN_01977e28(3);
  *(undefined4 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x107) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x137) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x167) = 0;
  return;
}


