/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f1ef8; name: FUN_007f1ef8
 */


bool FUN_007f1ef8(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = (ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
  if (uVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x40);
    do {
      if (*plVar3 != 0) {
        if (param_2 == 0) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
          if (*(ushort *)(param_1 + 0x70) != 0) {
            uVar1 = (param_2 - 1U) / (uint)*(ushort *)(param_1 + 0x70);
          }
          uVar1 = uVar1 + 1;
        }
        return uVar1 <= (uint)*(ushort *)(param_1 + 0x28) - (uint)*(ushort *)(param_1 + 0x32);
      }
      uVar2 = uVar2 - 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != 0);
  }
  return false;
}


