/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d6e84; name: FUN_001d6e84
 */


undefined8 FUN_001d6e84(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_001d6308();
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_001db9c8(*param_1,
                 "Unrecognized content encoding type. libcurl understands %s content encodings.",
                 lVar1);
    FUN_001ec308(lVar1);
    uVar2 = 0x3d;
  }
  return uVar2;
}


