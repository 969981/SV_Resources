/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0295dbe0; name: FUN_0295dbe0
 */


undefined4 FUN_0295dbe0(long *param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x108))();
  uVar1 = (**(code **)(*param_1 + 0x110))(param_1);
  uVar3 = FUN_018286d0(uVar1,2);
  uVar4 = 1;
  if ((uVar2 & 0xffff) <= uVar3) {
    uVar4 = 2;
  }
  return uVar4;
}


