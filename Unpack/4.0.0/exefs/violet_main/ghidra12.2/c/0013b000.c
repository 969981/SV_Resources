/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013b000; name: FUN_0013b000
 */


void FUN_0013b000(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar1;
  if (199 < (uVar1 & 0xfff8)) {
    if ((uVar1 & 0xffff) == 200) {
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"C stack overflow");
    }
    if (0xdb < (uVar1 & 0xffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00126bd0(param_1,5);
    }
  }
  return;
}


