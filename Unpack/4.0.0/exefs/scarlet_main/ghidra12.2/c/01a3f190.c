/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a3f190; name: FUN_01a3f190
 */


undefined8 FUN_01a3f190(long param_1,int *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x450))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                     *(undefined4 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0x90));
  if (bVar1 < 9 && 1 < (byte)(bVar1 - 7)) {
    if ((bVar1 == 0) ||
       (uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x470))
                          (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),
                           *(undefined4 *)(param_1 + 0xb0)), (uVar2 & 1) != 0)) {
      return 1;
    }
    uVar2 = (**(code **)(**(long **)(param_1 + 0x30) + 0x4c0))(*(long **)(param_1 + 0x30),0x32);
    if ((uVar2 & 1) != 0) {
      *param_2 = *param_2 + -1;
      return 0;
    }
  }
  return 0;
}


