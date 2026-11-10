/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0290dda4; name: FUN_0290dda4
 */


int FUN_0290dda4(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x4e);
  if (((uVar3 & 1) == 0) ||
     (((*(short *)(param_1 + 0xb6) != 0x1a && (*(char *)(param_1 + 0xb8) != '\b')) &&
      (*(char *)(param_1 + 0xb9) != '\b')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x46);
    uVar1 = uVar1 & 1;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
  return uVar1 + (uVar2 & 1);
}


