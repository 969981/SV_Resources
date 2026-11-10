/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d2218; name: FUN_001d2218
 */


undefined8 FUN_001d2218(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = FUN_001ec338(1,0x2a0);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_001cb820(lVar1 + 0x28,*param_1);
    *(long *)(lVar3 + 0x1e8) = lVar1;
    if (param_1[0x98] + param_1[0x9c] == 0) {
      FUN_001d7660(param_1);
    }
    FUN_001d7628(lVar3);
    uVar2 = 0;
  }
  return uVar2;
}


