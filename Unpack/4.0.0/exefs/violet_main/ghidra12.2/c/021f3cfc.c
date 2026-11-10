/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021f3cfc; name: FUN_021f3cfc
 */


undefined1 FUN_021f3cfc(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e97b78(*(undefined8 *)(param_1 + 0x70));
  return (&UNK_03d62f7c)[(param_2 & 0xff) + (uVar1 & 0xffffffff) * 4 + (uVar1 & 0xffffffff)];
}


