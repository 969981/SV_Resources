/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddc4d0; name: FUN_01ddc4d0
 */


void FUN_01ddc4d0(long param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (5 < param_3) {
    return;
  }
  uVar3 = FUN_01195854();
  iVar1 = param_2 + -1;
  if (*(int *)(param_1 + 0x2a4) == param_2) {
    iVar2 = FUN_01ddc58c(uVar3,iVar1);
    FUN_01dc8488(uVar3,iVar1,param_3);
    if (param_3 < iVar2 - 1U) {
      FUN_01dc43e0(*(undefined8 *)(param_1 + 0x1a8),param_3,5,0xffffffff);
      uVar3 = 0;
      goto LAB_01ddc574;
    }
  }
  else {
    FUN_01dc8488(uVar3,iVar1,param_3);
  }
  uVar3 = 1;
LAB_01ddc574:
  FUN_01dc2574(*(undefined8 *)(param_1 + 0x1a8),uVar3);
  return;
}


