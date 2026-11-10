/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079fda4; name: FUN_0079fda4
 */


void FUN_0079fda4(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_3 != 0) && (*(short *)(param_1 + 0x114e) != 0)) {
    uVar2 = 0;
    do {
      if (((param_3 >> (ulong)((uint)uVar2 & 0x1f) & 1) != 0) &&
         (uVar1 = FUN_00796784(*(long *)(*(long *)(param_1 + 0x88) + uVar2 * 8) + 0x10),
         (uVar1 & 1) != 0)) {
        FUN_0079fc68(param_1,param_2,*(long *)(*(long *)(param_1 + 0x88) + uVar2 * 8) + 0x10);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_1 + 0x114e));
  }
  return;
}


