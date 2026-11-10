/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03435054; name: FUN_03435054
 */


uint FUN_03435054(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  
  uVar2 = 0x811c9dc5;
  if (*(uint *)(param_1 + 0x40) != 0) {
    lVar3 = (ulong)*(uint *)(param_1 + 0x40) << 5;
    plVar4 = (long *)(*(long *)(param_1 + 0x38) + 0x18);
    do {
      lVar6 = *plVar4;
      if (lVar6 == 0) {
        lVar6 = plVar4[-1];
      }
      uVar5 = (uint)lVar6;
      uVar1 = (uint)((ulong)lVar6 >> 0x20);
      uVar2 = (((((((uVar5 & 0xff ^ uVar2 * 0x1000193) * 0x1000193 ^ uVar5 >> 8 & 0xff) * 0x1000193
                  ^ uVar5 >> 0x10 & 0xff) * 0x1000193 ^ uVar5 >> 0x18) * 0x1000193 ^ uVar1 & 0xff) *
                0x1000193 ^ uVar1 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)lVar6 >> 0x30) & 0xff)
              * 0x1000193 ^ (uint)(byte)((ulong)lVar6 >> 0x38);
      lVar3 = lVar3 + -0x20;
      plVar4 = plVar4 + 4;
    } while (lVar3 != 0);
  }
  return uVar2;
}


