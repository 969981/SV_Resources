/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017e4ff0; name: FUN_017e4ff0
 */


void FUN_017e4ff0(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  switch(param_2) {
  case 0:
    return;
  case 1:
    FUN_017e5e8c(param_1);
    return;
  case 2:
    uVar1 = FUN_017e55f0(param_1);
    if ((uVar1 & 1) == 0) {
      FUN_02118030(param_1);
      return;
    }
    FUN_02117f6c(param_1);
    return;
  case 3:
    FUN_017e61f0(param_1);
    return;
  case 4:
    FUN_017e5cac(param_1);
    return;
  default:
    FUN_01982e24(param_1);
    return;
  case 6:
    FUN_017e5ad0(param_1);
    return;
  case 7:
    uVar1 = FUN_017e56a0(param_1);
    if ((uVar1 & 1) != 0) {
      return;
    }
    FUN_017e5120(param_1);
    FUN_017e4fe4(param_1);
    FUN_00f7d4c8();
    uVar2 = 7;
    break;
  case 8:
    uVar2 = 8;
    break;
  case 9:
    uVar2 = FUN_01497d84(param_1);
    FUN_00f7d570(uVar2,6,3,0);
    FUN_017e4fe4(param_1);
    FUN_00f7d4c8();
    uVar2 = 9;
  }
  FUN_017e5180(param_1,uVar2);
  return;
}


