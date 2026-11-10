/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007aee48; name: FUN_007aee48
 */


void FUN_007aee48(long param_1,long param_2)

{
  ulong uVar1;
  
  FUN_007983e0();
  memcpy((void *)(param_1 + 0xb8),(void *)(param_2 + 0xb8),0x480);
  *(uint *)(param_1 + 0x28) = (uint)*(ushort *)(param_2 + 0x322);
  uVar1 = FUN_007bfafc(param_2 + 0xc9,0xf);
  *(ulong *)(param_1 + 8) = uVar1 & 0xffffffff;
  *(ulong *)(param_1 + 0x10) = (ulong)*(ushort *)(param_1 + 0xc2);
  *(short *)(param_1 + 0x18) = (short)*(char *)(param_1 + 0x11f);
  *(short *)(param_1 + 0x1a) = (short)*(char *)(param_1 + 0x11e);
  *(bool *)(param_1 + 0x1e) = *(char *)(param_1 + 0x11a) == '\0';
  *(ushort *)(param_1 + 0x1c) = (ushort)*(byte *)(param_2 + 0x33a);
  *(bool *)(param_1 + 0x1f) = *(char *)(param_2 + 0x339) != '\0';
  return;
}


