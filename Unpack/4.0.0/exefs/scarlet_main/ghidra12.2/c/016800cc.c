/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016800cc; name: FUN_016800cc
 */


void FUN_016800cc(long param_1,long *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0292dc68(*(undefined8 *)(param_1 + 0x38));
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0167a95c(uVar3,uVar1);
  return;
}


