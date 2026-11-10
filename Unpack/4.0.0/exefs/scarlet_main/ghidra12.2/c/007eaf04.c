/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eaf04; name: FUN_007eaf04
 */


void FUN_007eaf04(long param_1)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (-1 < *(long *)(param_1 + 0x20)) {
    uVar2 = *(ushort *)(param_1 + 0x10);
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      uVar1 = *(int *)(param_1 + 0x1c) + (uint)uVar5;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      uVar4 = uVar5 + 1;
    } while (uVar1 - uVar3 * uVar2 != *(int *)(param_1 + 0x14));
    *(ushort *)(param_1 + 0x12) = uVar5;
    *(int *)(param_1 + 0x1c) = (int)*(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0xffffffffffffffff;
  }
  return;
}


