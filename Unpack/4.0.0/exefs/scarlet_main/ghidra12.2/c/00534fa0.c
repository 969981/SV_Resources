/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00534fa0; name: FUN_00534fa0
 */


ulong FUN_00534fa0(long param_1)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x18);
  if ((int)*(uint *)(param_1 + 0x18) < 1) {
    bVar2 = *(byte *)(param_1 + 8);
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    uVar4 = uVar3;
    do {
      puVar5 = puVar5 + 1;
      bVar2 = *(byte *)*puVar5;
      uVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar1 = *(ulong *)((byte *)*puVar5 + 8);
      }
      uVar4 = uVar4 - 1;
      uVar3 = uVar1 + uVar3 + (ulong)(((uint)LZCOUNT((uint)uVar1 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
    } while (uVar4 != 0);
    bVar2 = *(byte *)(param_1 + 8);
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(param_1 + 0x28) = (int)uVar3;
    return uVar3;
  }
  uVar3 = FUN_0051d510(param_1 + 8,uVar3,param_1 + 0x28);
  return uVar3;
}


