/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02251c38; name: FUN_02251c38
 */


undefined1 FUN_02251c38(long param_1,short param_2)

{
  ushort uVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  if (*(char *)(param_1 + 0x54) != '\0') {
    uVar1 = *(ushort *)(param_1 + 0x52);
    if (uVar1 + 1 < (uint)*(ushort *)(param_1 + 0x50)) {
      *(ushort *)(param_1 + 0x52) = uVar1 + 1;
      *(short *)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 2) = param_2;
      *(undefined2 *)(*(long *)(param_1 + 0x30) + (ulong)*(ushort *)(param_1 + 0x52) * 2) = 0;
    }
    else {
      if (param_2 != 0) {
        return 0;
      }
      if (uVar1 + 1 != (uint)*(ushort *)(param_1 + 0x50)) {
        return 0;
      }
      *(ushort *)(param_1 + 0x52) = uVar1 + 1;
      *(undefined2 *)(*(long *)(param_1 + 0x30) + (ulong)uVar1 * 2) = 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}


