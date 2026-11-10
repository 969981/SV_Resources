/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028aff48; name: FUN_028aff48
 */


void FUN_028aff48(void)

{
  long lVar1;
  uint uVar2;
  
  if (0 < (int)DAT_04865a18) {
    lVar1 = (ulong)DAT_04865a18 << 3;
    uVar2 = DAT_04865a18;
    do {
      uVar2 = uVar2 - 1;
      if (0x3ff < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_01dace90();
      }
      (**(code **)**(undefined8 **)(&DAT_04863a10 + lVar1))();
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return;
}


