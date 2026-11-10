/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007a7e70; name: FUN_007a7e70
 */


void FUN_007a7e70(long *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)param_1[6];
  *param_1 = (long)(PTR_DAT_047d0bb0 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = FUN_007bfae0(puVar2);
    uVar1 = uVar1 >> 5;
    if (uVar1 != 0) {
      puVar3 = puVar2;
      do {
        (**(code **)*puVar3)(puVar3);
        uVar1 = uVar1 - 1;
        puVar3 = puVar3 + 4;
      } while (uVar1 != 0);
    }
    FUN_007bfaa0(puVar2);
    param_1[6] = 0;
  }
  *(undefined2 *)(param_1 + 7) = 0;
  return;
}


