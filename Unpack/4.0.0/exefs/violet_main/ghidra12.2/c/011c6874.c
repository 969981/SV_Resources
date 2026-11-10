/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c6874; name: FUN_011c6874
 */


undefined1  [16] FUN_011c6874(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00ddf004();
  lVar1 = *(long *)(*(long *)(param_1 + 0x1f0) + 0x30);
  if (lVar1 != 0) {
    FUN_011c68d8(*(long *)(param_1 + 0x1f8) + 0x58,lVar1,&DAT_03bdface,0,0,0);
  }
  auVar2._8_8_ = auVar2._8_8_ & 0xffffffff;
  return auVar2;
}


