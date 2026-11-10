/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ec5f20; name: FUN_01ec5f20
 */


long * FUN_01ec5f20(long *param_1,long *param_2,byte *param_3)

{
  long lVar1;
  
  if (param_1 != param_2) {
    do {
      if ((*param_1 != 0) && (*(short *)(*param_1 + 0x1a) != 0)) {
        lVar1 = 0;
        if (*(long *)(*param_1 + 0x10) != 0) {
          lVar1 = *(long *)(*param_1 + 0x10) + -0x28;
        }
        if ((uint)*param_3 == (*(uint *)(lVar1 + 0x48) & 0xff) &&
            (uint)*(ushort *)(param_3 + 2) == *(uint *)(lVar1 + 0x48) >> 0x10) {
          return param_1;
        }
      }
      param_1 = param_1 + 2;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


