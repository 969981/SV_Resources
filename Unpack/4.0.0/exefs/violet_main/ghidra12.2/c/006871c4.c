/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006871c4; name: FUN_006871c4
 */


void FUN_006871c4(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == 3) {
    uVar2 = FUN_00688cf8(*(undefined8 *)(param_1 + 0x10));
  }
  else if (iVar3 == 2) {
    uVar2 = FUN_00688474(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if (iVar3 != 1) {
      iVar3 = 0;
      uVar4 = *(ulong *)(param_1 + 8);
      goto joined_r0x00687244;
    }
    uVar2 = FUN_00687be8(*(undefined8 *)(param_1 + 0x10));
  }
  iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
  uVar4 = *(ulong *)(param_1 + 8);
joined_r0x00687244:
  if ((uVar4 & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  bVar1 = *(byte *)((uVar4 & 0xfffffffffffffffe) + 8);
  if ((bVar1 & 1) == 0) {
    uVar2 = (uint)(bVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)((uVar4 & 0xfffffffffffffffe) + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar2 + iVar3;
  return;
}


