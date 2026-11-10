/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e7b1ac; name: FUN_01e7b1ac
 */


undefined8 FUN_01e7b1ac(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 local_8;
  
  if (*(int *)(param_1 + 0x200) == 2) {
    uVar2 = 1;
  }
  else {
    if ((*(int *)(param_1 + 0x200) == 1) &&
       (uVar1 = (**(code **)(**(long **)(param_1 + 0x210) + 0x70))(), (uVar1 & 1) == 0)) {
      local_8 = *(undefined8 *)(param_1 + 0x210);
      *(undefined8 *)(param_1 + 0x210) = 0;
      FUN_0186e214(&local_8);
      *(undefined4 *)(param_1 + 0x200) = 2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


