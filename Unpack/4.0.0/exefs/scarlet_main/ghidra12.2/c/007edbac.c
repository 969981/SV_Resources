/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007edbac; name: FUN_007edbac
 */


void FUN_007edbac(long param_1,undefined4 *param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(param_1 + 0x3c8) = param_3;
  *(undefined4 *)(param_1 + 0x3cc) = *param_2;
  *(undefined1 *)(param_1 + 0x6b4) = 0;
  if (*(int *)(param_1 + 0x6b0) != 0) {
    uVar1 = 0;
    puVar2 = (undefined8 *)(param_1 + 0x3d0);
    do {
      FUN_00797134(*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 4;
    } while (uVar1 < *(uint *)(param_1 + 0x6b0));
  }
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  return;
}


