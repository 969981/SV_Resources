/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00328c28; name: FUN_00328c28
 */


void FUN_00328c28(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar5;
  undefined8 *puVar4;
  
  FUN_00328ce4();
  puVar3 = PTR_LAB_047cba48;
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  if (puVar4 != puVar1) {
    do {
      puVar5 = puVar4 + 1;
      FUN_0049e790(puVar3,*puVar4);
      puVar4 = puVar5;
    } while (puVar1 != puVar5);
    lVar2 = param_1[2] - param_1[1];
    if (lVar2 != 0) {
      param_1[2] = param_1[2] + (lVar2 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48);
  return;
}


