/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e97ebc; name: FUN_00e97ebc
 */


undefined8 FUN_00e97ebc(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_2 & 0xff) < 6) {
    uVar1 = FUN_00d1eb6c(*(undefined8 *)(param_1 + 0x70));
    if (((uVar1 & 0xff) >> (ulong)(param_2 & 0x1f) & 1) != 0) {
      return 0x1f;
    }
  }
  uVar2 = FUN_00e97f14(param_1,param_2);
  return uVar2;
}


