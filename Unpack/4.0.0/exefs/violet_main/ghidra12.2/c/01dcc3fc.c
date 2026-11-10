/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcc3fc; name: FUN_01dcc3fc
 */


float FUN_01dcc3fc(long param_1)

{
  long lVar1;
  float fVar2;
  
  if (param_1 == 0) {
    fVar2 = 0.0;
  }
  else {
    lVar1 = FUN_00c8c7b4(*(undefined8 *)(param_1 + 0x170));
    fVar2 = *(float *)(lVar1 + 0x30);
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x18)) {
      fVar2 = fVar2 + *(float *)(lVar1 + 0x30);
    }
  }
  return fVar2;
}


