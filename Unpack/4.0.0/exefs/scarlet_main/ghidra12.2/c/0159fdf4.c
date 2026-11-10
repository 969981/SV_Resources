/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0159fdf4; name: FUN_0159fdf4
 */


void FUN_0159fdf4(long param_1,long *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = FUN_01689a40(param_1,uVar1);
  uVar3 = FUN_0159fe8c(*(undefined8 *)(param_1 + 8));
  if (uVar2 == (uVar3 & 0xff)) {
    uVar2 = (**(code **)(*param_2 + 0x118))(param_2);
    iVar4 = FUN_0159fedc(param_1);
    FUN_0159fe94(*(undefined8 *)(param_1 + 8),param_2,(int)((uVar2 & 0xff) + 0x1e) <= iVar4);
    return;
  }
  return;
}


