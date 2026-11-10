/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01469cd0; name: FUN_01469cd0
 */


byte * FUN_01469cd0(undefined8 param_1,byte *param_2,byte *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  
  if ((param_2 != param_3) &&
     (((bVar1 = *param_2, (bVar1 & 0xf8) == 0x30 || ((bVar1 & 0xfe) == 0x38)) &&
      (iVar2 = bVar1 - 0x30, iVar2 != -1)))) {
    *param_4 = iVar2;
    while (param_2 = param_2 + 1, param_2 != param_3) {
      bVar1 = *param_2;
      if (((bVar1 & 0xf8) != 0x30) && ((bVar1 & 0xfe) != 0x38)) {
        return param_2;
      }
      if (bVar1 - 0x30 == -1) {
        return param_2;
      }
      if (0xccccccb < iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_028a5c90();
      }
      iVar2 = (bVar1 - 0x30) + iVar2 * 10;
      *param_4 = iVar2;
    }
    param_2 = param_3;
  }
  return param_2;
}


