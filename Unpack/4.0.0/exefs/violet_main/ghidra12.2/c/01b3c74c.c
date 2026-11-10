/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b3c74c; name: FUN_01b3c74c
 */


undefined1  [16] FUN_01b3c74c(undefined4 param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  FUN_01fb1e70();
  lVar1 = FUN_01fb1f0c();
  if (lVar1 == 0) {
    return ZEXT816(0xbff0000000000000);
  }
  auVar2 = FUN_01fb2594((int)lVar1,param_1);
  return auVar2;
}


