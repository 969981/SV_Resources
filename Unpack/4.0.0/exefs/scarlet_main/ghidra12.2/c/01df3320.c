/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01df3320; name: FUN_01df3320
 */


void FUN_01df3320(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 4) {
    FUN_01dda3e0(*(undefined8 *)(param_1 + 0x30));
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = 2;
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 2) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x2a8);
        uVar4 = *(undefined8 *)(param_1 + 0x40);
        iVar2 = FUN_01dc4ca0();
        FUN_01df33b8(uVar4,iVar1 + -1,iVar2 + -1);
        *(undefined4 *)(param_1 + 0x48) = 4;
      }
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = 0x16;
  }
  FUN_01704cf8(uVar4,uVar3);
  return;
}


