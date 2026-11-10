/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049e3f0; name: FUN_0049e3f0
 */


undefined8 FUN_0049e3f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  lVar1 = nnosGetSystemTick();
  lVar2 = nnosGetSystemTickFrequency();
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar1 / lVar2;
  }
  *param_1 = lVar3;
  lVar3 = nnosConvertTickToNanoSeconds(lVar1);
  param_1[1] = (lVar3 / 1000) % 1000000;
  return 0;
}


