/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018ce294; name: FUN_018ce294
 */


ulong FUN_018ce294(undefined8 param_1,long *param_2,uint *param_3)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(*param_2 + 0x230))(param_2);
  uVar2 = *param_3;
  if (uVar2 == 0x32) {
    uVar2 = 6;
    if ((uVar1 & 0xffff) != 0) goto LAB_018ce324;
    uVar1 = (**(code **)(*param_2 + 0x220))(param_2,6);
    uVar2 = 6;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    uVar1 = (ulong)uVar2;
  }
  else if (uVar2 != 0x31) {
    if (uVar2 == 0x33) {
      uVar1 = FUN_018ce3c0(param_2);
      if ((uVar1 & 0xffff) != 0) {
        return uVar1;
      }
    }
    else {
      uVar1 = (**(code **)(*param_2 + 0x220))(param_2);
      if ((uVar1 & 1) != 0) {
        uVar1 = (ulong)*param_3;
        goto LAB_018ce320;
      }
    }
    uVar2 = 0;
    uVar1 = 0;
    goto LAB_018ce324;
  }
LAB_018ce320:
  uVar2 = 0;
LAB_018ce324:
  *param_3 = uVar2;
  return uVar1;
}


