/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00899b58; name: FUN_00899b58
 */


long FUN_00899b58(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  while( true ) {
    if (lVar2 == param_1 + 0x48) {
      return 0;
    }
    uVar1 = FUN_0088fc10(param_2,lVar2 + -0x28);
    if ((uVar1 & 1) != 0) break;
    lVar2 = *(long *)(lVar2 + 8);
  }
  return lVar2 + -0xd8;
}


