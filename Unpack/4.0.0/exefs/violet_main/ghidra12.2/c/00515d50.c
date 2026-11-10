/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00515d50; name: FUN_00515d50
 */


void FUN_00515d50(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = param_2 / 1000000000;
  uVar2 = param_2 % 1000000000;
  iVar3 = (int)uVar2;
  if ((param_2 < -999999999) && (0 < (long)uVar2)) {
    lVar4 = lVar4 + 1;
    iVar3 = iVar3 + -1000000000;
  }
  else {
    lVar1 = lVar4;
    if ((uVar2 & 0x8000000000000000) != 0) {
      lVar1 = lVar4 + -1;
      uVar2 = uVar2 + 1000000000;
    }
    if (999999999 < param_2) {
      iVar3 = (int)uVar2;
      lVar4 = lVar1;
    }
  }
  FUN_004eb008(param_1,0);
  *(long *)(param_1 + 0x10) = lVar4;
  *(int *)(param_1 + 0x18) = iVar3;
  return;
}


