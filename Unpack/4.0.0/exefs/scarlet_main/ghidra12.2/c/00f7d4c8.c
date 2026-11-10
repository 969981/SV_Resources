/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f7d4c8; name: FUN_00f7d4c8
 */


void FUN_00f7d4c8(long param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  
  uVar2 = FUN_0176882c(*(undefined8 *)(param_1 + 0x30));
  *(undefined2 *)(param_1 + 0x20a) = uVar2;
  uVar1 = FUN_00f7d508(*(undefined8 *)(param_1 + 0x30));
  *(undefined1 *)(param_1 + 0x20c) = uVar1;
  *(ushort *)(param_1 + 0x208) = (ushort)*(byte *)(*(long *)(param_1 + 0x30) + 0x95);
  return;
}


