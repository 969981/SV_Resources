/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02983370; name: FUN_02983370
 */


void FUN_02983370(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_2 + 0x2a8))(param_2);
  uVar2 = FUN_019d69c4(*(undefined8 *)(param_1 + 8),uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0129aff0(uVar3,0x9b,uVar1,uVar2 & 1);
  return;
}


