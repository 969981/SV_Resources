/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0274c974; name: FUN_0274c974
 */


void FUN_0274c974(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_1 + 0x98);
  puVar1 = (undefined8 *)*puVar4;
  while (puVar4 != puVar1) {
    puVar2 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  puVar2 = (undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 **)(param_1 + 0x98) = puVar4;
  *(undefined8 **)(param_1 + 0xa0) = puVar4;
  puVar1 = (undefined8 *)*puVar2;
  while (puVar2 != puVar1) {
    puVar3 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar3;
  }
  *(undefined8 **)(param_1 + 0xb0) = puVar2;
  *(undefined8 **)(param_1 + 0xb8) = puVar2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_02752e30(param_1 + 0xc0);
  FUN_02752e84(param_1 + 0xc0);
  puVar1 = *(undefined8 **)(param_1 + 0xb0);
  while (puVar2 != puVar1) {
    puVar3 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar3;
  }
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x98);
  while (puVar4 != puVar1) {
    puVar2 = (undefined8 *)*puVar1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar2;
  }
  *puVar4 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_01688374(param_1 + 0x18);
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 8));
  return;
}


