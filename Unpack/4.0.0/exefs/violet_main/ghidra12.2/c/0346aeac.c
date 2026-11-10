/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346aeac; name: FUN_0346aeac
 */


void FUN_0346aeac(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar2;
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x100);
    do {
      puVar2 = puVar1 + 1;
      (**(code **)(*(long *)*puVar1 + 0xb8))((long *)*puVar1,param_2,param_3,param_4);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x100) + (ulong)*(uint *)(param_1 + 0x108) * 8));
  }
  return;
}


