/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007aedc8; name: FUN_007aedc8
 */


void FUN_007aedc8(long param_1,void *param_2)

{
  ulong uVar1;
  
  memcpy((void *)(param_1 + 0xb8),param_2,0x480);
  *(uint *)(param_1 + 0x28) = (uint)*(ushort *)((long)param_2 + 0x26a);
  uVar1 = FUN_007bfafc((long)param_2 + 0x11,0xf);
  *(ulong *)(param_1 + 8) = uVar1 & 0xffffffff;
  *(ulong *)(param_1 + 0x10) = (ulong)*(ushort *)(param_1 + 0xc2);
  *(short *)(param_1 + 0x18) = (short)*(char *)(param_1 + 0x11f);
  *(short *)(param_1 + 0x1a) = (short)*(char *)(param_1 + 0x11e);
  *(bool *)(param_1 + 0x1e) = *(char *)(param_1 + 0x11a) == '\0';
  *(ushort *)(param_1 + 0x1c) = (ushort)*(byte *)((long)param_2 + 0x282);
  *(bool *)(param_1 + 0x1f) = *(char *)((long)param_2 + 0x281) != '\0';
  return;
}


