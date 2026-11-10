/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007eaea0; name: FUN_007eaea0
 */


long FUN_007eaea0(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x10);
  if (param_2 < uVar2) {
    if (*(long *)(param_1 + 0x20) == -1) {
      *(ulong *)(param_1 + 0x20) = (ulong)*(uint *)(param_1 + 0x18);
    }
    uVar1 = *(int *)(param_1 + 0x1c) + param_2;
    uVar3 = 0;
    uVar4 = (uint)uVar2;
    if (uVar4 != 0) {
      uVar3 = uVar1 / uVar4;
    }
    if (*(ulong *)(param_1 + 0x20) != (ulong)(uVar1 - uVar3 * uVar4)) {
      param_2 = *(int *)(param_1 + 0x1c) + param_2;
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = param_2 / uVar2;
      }
      return *(long *)(param_1 + 8) + (ulong)(param_2 - uVar1 * uVar2) * 0x650;
    }
  }
  return 0;
}


