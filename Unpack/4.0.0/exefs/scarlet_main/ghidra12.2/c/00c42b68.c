/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c42b68; name: FUN_00c42b68
 */


ulong FUN_00c42b68(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = FUN_00d4e220(param_1,param_2,param_4);
  if ((uVar2 & 0xff) == 0) {
    uVar2 = FUN_011e86a0(param_1,param_2,param_3,param_4);
  }
  else {
    iVar1 = strcmp(*(char **)(param_3 + 8),"IrradianceVolume");
    if (iVar1 == 0) {
      uVar4 = 0;
      uVar2 = 0;
      goto LAB_00c42c00;
    }
    lVar3 = *(long *)(param_1 + 0x38) + ((long)uVar2 >> 0x20) * 0x1d0;
    *(int *)(lVar3 + 0x1c0) = *(int *)(lVar3 + 0x1c0) + 1;
  }
  uVar4 = uVar2 & 0xffffffffffffff00;
  uVar2 = uVar2 & 0xff;
LAB_00c42c00:
  return uVar2 | uVar4;
}


