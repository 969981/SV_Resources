/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012bd8f8; name: FUN_012bd8f8
 */


void FUN_012bd8f8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_012bd96c();
  uVar2 = FUN_012be464(param_1);
  FUN_012cdde8(&DAT_048638e0,uVar2);
  if (0x3ff < DAT_04865a18) {
                    /* WARNING: Subroutine does not return */
    FUN_01dace90();
  }
  lVar1 = 0;
  if (DAT_048638e0 != 0) {
    lVar1 = DAT_048638e0 + 0x20;
  }
  *(long *)(&DAT_04863a18 + (ulong)DAT_04865a18 * 8) = lVar1;
  DAT_04865a18 = DAT_04865a18 + 1;
  return;
}


