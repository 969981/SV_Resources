/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02918e90; name: FUN_02918e90
 */


undefined8 FUN_02918e90(long param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  bVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (((bVar1 < 7) ||
      (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x170))
                         (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0xa4),0x22e),
      (uVar2 & 1) == 0)) ||
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c8))(*(long **)(param_1 + 0x30),0x32),
     (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


