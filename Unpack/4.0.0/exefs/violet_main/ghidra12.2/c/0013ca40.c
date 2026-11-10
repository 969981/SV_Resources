/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013ca40; name: FUN_0013ca40
 */


void FUN_0013ca40(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_0012d6c0(param_1,*(undefined8 *)(param_2 + 0x18),
                 (long)(1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f)) * 0x18);
  }
  uVar2 = *(uint *)(param_2 + 0xc);
  if ((*(char *)(param_2 + 10) < '\0') &&
     (uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555),
     uVar1 = (uVar1 & 0x33333333) + (uVar1 >> 2 & 0x33333333),
     1 < (uVar1 + (uVar1 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)) {
    uVar2 = uVar2 | uVar2 >> 1;
    uVar2 = uVar2 | uVar2 >> 2;
    uVar2 = uVar2 | uVar2 >> 4;
    uVar2 = uVar2 | uVar2 >> 8;
    uVar2 = (uVar2 | uVar2 >> 0x10) + 1;
  }
  FUN_0012d6c0(param_1,*(undefined8 *)(param_2 + 0x10),(ulong)uVar2 << 4);
  FUN_0012d6c0(param_1,param_2,0x38);
  return;
}


