/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0186e16c; name: FUN_0186e16c
 */


void FUN_0186e16c(long *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_3;
  if (lVar2 == 0) {
LAB_0186e1d0:
    *param_1 = 0;
  }
  else {
    if (*(long **)(param_2 + 0x60) != (long *)0x0) {
      uVar1 = (**(code **)(**(long **)(param_2 + 0x60) + 0x70))();
      if ((uVar1 & 1) != 0) goto LAB_0186e1d0;
      lVar2 = *param_3;
    }
    FUN_0186e1d8(param_2 + 0x60,lVar2);
    lVar2 = *param_3;
    *param_3 = 0;
    *param_1 = lVar2;
  }
  return;
}


