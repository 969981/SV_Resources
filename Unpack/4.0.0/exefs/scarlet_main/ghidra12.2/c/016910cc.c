/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016910cc; name: FUN_016910cc
 */


void FUN_016910cc(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_021f6a9c(*(undefined8 *)(param_1 + 0x70));
  iVar1 = 0;
  if (param_2 <= (uVar2 & 0xff)) {
    iVar1 = (uVar2 & 0xff) - param_2;
  }
  FUN_020e66a0(param_1,iVar1);
  return;
}


