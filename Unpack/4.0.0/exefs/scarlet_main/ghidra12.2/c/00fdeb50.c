/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fdeb50; name: FUN_00fdeb50
 */


void FUN_00fdeb50(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    iVar1 = *(int *)(param_1 + 0xac);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 0xac) = iVar2;
    if (iVar2 == 0 || iVar1 < 1) {
      FUN_00fe078c(param_1);
      *(undefined4 *)(param_1 + 0x40) = 2;
      return;
    }
    return;
  case 2:
    iVar1 = *(int *)(param_1 + 0xac);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 0xac) = iVar2;
    if (iVar2 != 0 && 0 < iVar1) {
      return;
    }
    uVar3 = FUN_00fe0188(param_1);
    if ((uVar3 & 1) != 0) {
      return;
    }
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0xac);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 0xac) = iVar2;
    if (iVar2 != 0 && 0 < iVar1) {
      return;
    }
    break;
  case 4:
    iVar1 = *(int *)(param_1 + 0xac);
    iVar2 = iVar1 + -1;
    *(int *)(param_1 + 0xac) = iVar2;
    if (iVar2 != 0 && 0 < iVar1) {
      return;
    }
    FUN_00fdfc40(param_1);
    break;
  default:
    goto switchD_00fdeb90_default;
  }
  FUN_00fdf020(param_1);
  *(undefined4 *)(param_1 + 0x40) = 0;
switchD_00fdeb90_default:
  return;
}


