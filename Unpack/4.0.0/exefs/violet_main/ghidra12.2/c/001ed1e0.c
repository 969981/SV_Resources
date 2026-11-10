/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ed1e0; name: FUN_001ed1e0
 */


void FUN_001ed1e0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = nnosGetSystemTick();
  lVar3 = nnosGetSystemTickFrequency();
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar2 / lVar3;
  }
  if (param_1 != (long *)0x0) {
    *param_1 = lVar1;
  }
  return;
}


