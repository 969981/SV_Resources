/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00894bb8; name: FUN_00894bb8
 */


long FUN_00894bb8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  while( true ) {
    if (lVar2 == param_1) {
      return 0;
    }
    uVar1 = FUN_00894c20(*(undefined8 *)(lVar2 + 0x20),param_2);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2 + -8;
}


