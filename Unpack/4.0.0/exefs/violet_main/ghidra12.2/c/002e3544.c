/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e3544; name: FUN_002e3544
 */


void FUN_002e3544(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  FUN_002e35b0();
  puVar1 = (undefined8 *)param_1[2];
  puVar3 = (undefined8 *)param_1[1];
  if ((undefined8 *)param_1[1] != puVar1) {
    do {
      puVar4 = puVar3 + 1;
      operator_delete((void *)*puVar3);
      puVar3 = puVar4;
    } while (puVar1 != puVar4);
    lVar2 = param_1[2] - param_1[1];
    if (lVar2 != 0) {
      param_1[2] = param_1[2] + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if ((void *)*param_1 == (void *)0x0) {
    return;
  }
  operator_delete((void *)*param_1);
  return;
}


