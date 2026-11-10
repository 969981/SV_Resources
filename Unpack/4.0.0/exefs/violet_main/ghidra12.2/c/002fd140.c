/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fd140; name: FUN_002fd140
 */


void FUN_002fd140(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  while( true ) {
    uVar1 = DAT_047ef2f8;
    auVar2 = FUN_0038dd60(1);
    auVar2 = FUN_00371830(uVar1,auVar2._0_8_,auVar2._8_8_,0);
    if (auVar2._0_4_ == 0) {
      return;
    }
    if (auVar2._0_4_ != 2) break;
    FUN_002fbbd0(auVar2._8_8_,auVar2._0_8_ >> 0x20 != 0);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


