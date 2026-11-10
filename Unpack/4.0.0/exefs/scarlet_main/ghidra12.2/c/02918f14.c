/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02918f14; name: FUN_02918f14
 */


undefined8 FUN_02918f14(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(param_1 + 0xac) == '\v') || (*(char *)(param_1 + 0xad) == '\v')) &&
      ((*(char *)(param_1 + 0xb8) != '\v' ||
       (((*(char *)(param_1 + 0xb9) != '\v' || (*(char *)(param_1 + 0xc4) != '\v')) ||
        (*(char *)(param_1 + 0xc5) != '\v')))))) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
     (uVar1 & 1) != 0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


