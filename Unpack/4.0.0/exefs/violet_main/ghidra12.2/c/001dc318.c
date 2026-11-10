/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001dc318; name: FUN_001dc318
 */


undefined8 FUN_001dc318(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_001ec308(*param_1);
  *param_1 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_001ec328(param_2);
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    else {
      uVar2 = 0;
      *param_1 = lVar1;
    }
  }
  return uVar2;
}


