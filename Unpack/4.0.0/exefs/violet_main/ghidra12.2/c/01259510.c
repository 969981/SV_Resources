/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01259510; name: FUN_01259510
 */


void FUN_01259510(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1] - *param_1;
  lVar2 = lVar1 >> 3;
  if ((ulong)(lVar2 * 0x6db6db6db6db6db7) < 8) {
    FUN_01259904(param_1,lVar2 * -0x6db6db6db6db6db7 + 8);
    return;
  }
  if (lVar1 == 0x1c0) {
    return;
  }
  FUN_012597e0(param_1,*param_1 + 0x1c0);
  return;
}


