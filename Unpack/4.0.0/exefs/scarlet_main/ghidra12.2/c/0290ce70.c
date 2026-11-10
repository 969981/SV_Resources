/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290ce70; name: FUN_0290ce70
 */


uint FUN_0290ce70(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),0);
  uVar1 = 0;
  if ((uVar3 & 1) != 0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    uVar1 = uVar1 & 1;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3f8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xb0),1);
  if ((uVar3 & 1) != 0) {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    uVar1 = uVar1 + (uVar2 & 1);
  }
  return uVar1;
}


