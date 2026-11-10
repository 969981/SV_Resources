/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f959f4; name: FUN_00f959f4
 */


undefined1 * FUN_00f959f4(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x1f8) + 0x58);
  if (lVar1 == 0) {
    return &DAT_03c886bc;
  }
  return (undefined1 *)
         (*(long *)(*(long *)(*(long *)(lVar1 + 0x28) + (long)param_2 * 8) + 0x60) + 2);
}


