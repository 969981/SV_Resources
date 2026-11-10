/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013afc0; name: FUN_0013afc0
 */


void FUN_0013afc0(long param_1)

{
  if (*(ushort *)(param_1 + 0xb0) == 200) {
                    /* WARNING: Subroutine does not return */
    FUN_00125b90(param_1,"C stack overflow");
  }
  if (0xdb < *(ushort *)(param_1 + 0xb0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00126bd0(param_1,5);
  }
  return;
}


