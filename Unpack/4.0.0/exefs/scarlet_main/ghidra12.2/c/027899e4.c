/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027899e4; name: FUN_027899e4
 */


void FUN_027899e4(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = FUN_007bfae0(puVar2);
    if (0xa7 < uVar1) {
      uVar3 = 0;
      puVar4 = puVar2;
      do {
        (**(code **)*puVar4)(puVar4);
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x15;
      } while (uVar3 < uVar1 / 0xa8);
    }
    FUN_007bfaa0(puVar2);
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}


