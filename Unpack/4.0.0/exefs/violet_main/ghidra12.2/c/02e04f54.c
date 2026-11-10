/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e04f54; name: FUN_02e04f54
 */


undefined8 FUN_02e04f54(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xa8);
  if (*(ushort *)(param_1 + 0xa8) < 0x1ce) {
    if (((uVar2 != 0xdb) && (uVar2 != 0x132)) && (uVar2 != 0x19b)) {
      return 0;
    }
  }
  else if (0x17 < uVar2 - 0x1ce || (1 << (ulong)(uVar2 - 0x1ce & 0x1f) & 0x804001U) == 0) {
    return 0;
  }
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return 2;
}


