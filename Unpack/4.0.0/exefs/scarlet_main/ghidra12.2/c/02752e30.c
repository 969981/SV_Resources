/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02752e30; name: FUN_02752e30
 */


void FUN_02752e30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = param_1 + 1;
  puVar2 = (undefined8 *)*puVar1;
  if (puVar2 != (undefined8 *)0x0) {
    do {
      puVar3 = (undefined8 *)puVar2[1];
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)puVar2[2];
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2 = puVar3;
      }
      else {
        puVar2[1] = puVar3[2];
        puVar3[2] = puVar2;
        puVar2 = puVar3;
      }
    } while (puVar2 != (undefined8 *)0x0);
    param_1[1] = 0;
    param_1[2] = puVar1;
    param_1[3] = puVar1;
  }
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


