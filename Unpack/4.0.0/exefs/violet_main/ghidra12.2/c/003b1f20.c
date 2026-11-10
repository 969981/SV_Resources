/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b1f20; name: FUN_003b1f20
 */


bool FUN_003b1f20(void)

{
  long lVar1;
  
  lVar1 = FUN_003af6a0();
  if (lVar1 == 0) {
    return true;
  }
  return (DAT_047f1650._4_4_ & *(uint *)(lVar1 + 4)) != 0;
}


