/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d17644; name: FUN_00d17644
 */


void FUN_00d17644(undefined1 param_1 [16],long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_2 + 0x228);
  uVar3 = (*(long *)(param_2 + 0x230) - lVar1 >> 5) * -0x5555555555555555;
  if (0 < (int)uVar3) {
    lVar2 = 0;
    while( true ) {
      if (*(int *)(lVar1 + lVar2 + 0x10) == param_3) {
        ((undefined8 *)(lVar1 + lVar2))[1] = param_1._8_8_;
        *(undefined8 *)(lVar1 + lVar2) = param_1._0_8_;
      }
      if ((uVar3 & 0xffffffff) * 0x60 + -0x60 == lVar2) break;
      lVar1 = *(long *)(param_2 + 0x228);
      lVar2 = lVar2 + 0x60;
    }
  }
  return;
}


