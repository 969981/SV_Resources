/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a1940; name: FUN_003a1940
 */


long FUN_003a1940(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_003b35e0();
  uVar2 = FUN_003e9560(uVar1,0x31,0,0);
  return 0x100 - (uVar2 & 0xffffffff);
}


