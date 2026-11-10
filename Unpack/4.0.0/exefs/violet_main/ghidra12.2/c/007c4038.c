/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c4038; name: FUN_007c4038
 */


undefined8 FUN_007c4038(void)

{
  long lVar1;
  
  lVar1 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_047d08a0 + 0x88));
  return *(undefined8 *)(lVar1 + 0xa8);
}


