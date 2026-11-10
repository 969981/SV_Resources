/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029501a0; name: FUN_029501a0
 */


void FUN_029501a0(long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_02950200();
  if ((uVar2 & 1) != 0) {
    FUN_015c78d0(param_1,param_2);
    uVar1 = FUN_015c7890();
    FUN_02950260(param_1,param_2,uVar1 & 1,1);
    *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x48) = 1;
  }
  return;
}


