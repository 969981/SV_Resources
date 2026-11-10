/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0157d3f0; name: FUN_0157d3f0
 */


undefined8 FUN_0157d3f0(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar2 = *(long *)(param_1 + 0x1e0);
    break;
  case 1:
    lVar2 = *(long *)(param_1 + 0x1f8);
    if (lVar2 == 0) {
      return 0;
    }
    goto LAB_0157d41c;
  case 2:
    lVar2 = *(long *)(param_1 + 0x1f0);
    break;
  case 3:
    lVar2 = *(long *)(param_1 + 0x1d8);
    break;
  case 4:
    lVar2 = *(long *)(param_1 + 0x1e8);
    break;
  default:
    goto switchD_0157d410_default;
  }
  if (lVar2 != 0) {
LAB_0157d41c:
    uVar1 = FUN_02e05e70(lVar2,param_3);
    return uVar1;
  }
switchD_0157d410_default:
  return 0;
}


