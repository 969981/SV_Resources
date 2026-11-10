/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002a60f8; name: FUN_002a60f8
 */


undefined8 FUN_002a60f8(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (1 < uVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar5 = param_1 + 0x18;
      if ((uVar2 & 1) != 0) {
        lVar5 = *(long *)(param_1 + 0x18);
      }
      uVar1 = rand();
      if (uVar1 % 1000000 < *(uint *)(lVar5 + lVar3 + 0x18)) {
        *param_2 = lVar5 + lVar3;
        return 1;
      }
      uVar2 = *(ulong *)(param_1 + 0x10);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar4 < uVar2 >> 1);
  }
  return 0;
}


