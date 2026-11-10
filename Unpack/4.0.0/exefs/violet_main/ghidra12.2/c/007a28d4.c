/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a28d4; name: FUN_007a28d4
 */


long FUN_007a28d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bf9f0(0x80,uVar1);
  if (lVar2 != 0) {
    FUN_007a7d64(lVar2,param_1,param_2);
  }
  return lVar2;
}


