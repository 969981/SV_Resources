/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c145c; name: FUN_014c145c
 */


undefined1  [16] FUN_014c145c(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_00ddf004();
  lVar1 = *(long *)(param_1 + 0x1f8);
  FUN_014c14f0(lVar1 + 0x58,&DAT_00003010 + *(long *)(*(long *)(lVar1 + 0x50) + 0x30),
               *(undefined8 *)(lVar1 + 0x30),0,0,0);
  FUN_014c14d8(lVar1 + 0x58,&LAB_028ba020,lVar1);
  auVar2._8_8_ = auVar2._8_8_ & 0xffffffff;
  return auVar2;
}


