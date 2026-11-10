/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021d9cec; name: FUN_021d9cec
 */


void FUN_021d9cec(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)(param_1 + 8);
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
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    *(undefined8 **)(param_1 + 0x18) = puVar1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *puVar1 = 0;
  return;
}


