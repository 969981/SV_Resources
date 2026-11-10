/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01400eec; name: FUN_01400eec
 */


uint FUN_01400eec(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_01400f2c(*(undefined8 *)(param_1 + 0x70));
  uVar2 = (param_2 & 0xff) << 1;
  return (uVar1 & 3 << (ulong)(uVar2 & 0x1f) & 0xffff) >> (ulong)(uVar2 & 0x1f);
}


