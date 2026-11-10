/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e7128; name: FUN_007e7128
 */


undefined8 FUN_007e7128(long param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(ushort *)(param_1 + 0x32) != 0) {
    uVar3 = 0;
    do {
      uVar1 = *(int *)(param_1 + 0x2c) + uVar3;
      uVar2 = 0;
      if (*(ushort *)(param_1 + 0x28) <= uVar1) {
        uVar2 = (uint)*(ushort *)(param_1 + 0x28);
      }
      if (-1 < (short)(param_2 -
                      *(short *)(*(long *)(param_1 + 0x20) + (ulong)(uVar1 - uVar2) * 0x5d0 + 0x24))
         ) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x32));
  }
  return 1;
}


