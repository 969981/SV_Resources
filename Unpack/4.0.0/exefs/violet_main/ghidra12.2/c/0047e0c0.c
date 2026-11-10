/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047e0c0; name: FUN_0047e0c0
 */


long FUN_0047e0c0(uint *param_1,long param_2)

{
  uint uVar1;
  long *__dest;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_1;
  if (0 < (int)uVar1) {
    __dest = *(long **)(param_1 + 2);
    lVar3 = 0;
    do {
      if (*__dest == param_2) {
        lVar4 = *__dest;
        uVar2 = (uint)lVar3;
        if (uVar1 - 1 == uVar2) {
          *param_1 = uVar2;
          return lVar4;
        }
        memmove(__dest,__dest + 1,
                -(ulong)(~uVar2 + uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)(~uVar2 + uVar1) << 3
               );
        *param_1 = *param_1 - 1;
        return lVar4;
      }
      lVar3 = lVar3 + 1;
      __dest = __dest + 1;
    } while (lVar3 < (int)uVar1);
  }
  return 0;
}


