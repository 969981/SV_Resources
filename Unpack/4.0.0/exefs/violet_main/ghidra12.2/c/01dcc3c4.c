/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01dcc3c4; name: FUN_01dcc3c4
 */


void FUN_01dcc3c4(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_00c8c7b4(*(undefined8 *)(param_1 + 0x170)), lVar1 != 0)) {
    *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe | param_3 & 1;
  }
  return;
}


