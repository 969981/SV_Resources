/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c4138; name: FUN_024c4138
 */


undefined4 FUN_024c4138(long param_1,ulong param_2)

{
  long lVar1;
  
  if ((param_2 < *(ulong *)(param_1 + 0x290)) &&
     (((*(ulong *)(param_1 + 0x228) <= param_2 ||
       ((*(ulong *)(*(long *)(param_1 + 0x220) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
         (param_2 & 0x3f) & 1) == 0)) &&
      (lVar1 = *(long *)(param_1 + 0x1e8) + param_2 * 0x20, *(char *)(lVar1 + 0x10) == '\0')))) {
    return *(undefined4 *)(lVar1 + 0x14);
  }
  return 0;
}


