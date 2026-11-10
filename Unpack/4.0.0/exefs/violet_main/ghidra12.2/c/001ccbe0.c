/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ccbe0; name: FUN_001ccbe0
 */


undefined8 FUN_001ccbe0(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 local_f0 [128];
  
  lVar1 = FUN_001ce584(param_2,local_f0 + 0x80);
  if (lVar1 != 0) {
    lVar2 = FUN_001e03d4(*param_1,lVar1);
    if (lVar2 != 0) {
      *param_1 = lVar2;
      return 0;
    }
    FUN_001ec308(lVar1);
  }
  return 0x1b;
}


