/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ec750; name: FUN_007ec750
 */


void FUN_007ec750(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      lVar1 = FUN_0078fac8(param_1 + 0x10);
      if (lVar1 == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        puVar2 = (undefined8 *)(lVar1 - *(int *)(param_1 + 0x24));
      }
      (**(code **)*puVar2)(puVar2);
      if (puVar2 != (undefined8 *)0x0) {
        FUN_007bfae0(puVar2);
        FUN_007bfaa0(puVar2);
      }
    } while (*(int *)(param_1 + 0x20) != 0);
  }
  return;
}


