/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002767dc; name: FUN_002767dc
 */


void FUN_002767dc(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  uVar3 = param_1[4];
  *param_1 = &PTR_LAB_0448c950;
  uVar1 = uVar3 & 1;
  if ((uVar3 & 1) == 0) {
    puVar2 = param_1 + 5;
  }
  else {
    puVar2 = (undefined8 *)param_1[5];
  }
  if ((uVar3 >> 1 != 0) && (uVar3 = uVar3 >> 1, puVar2 != (undefined8 *)0x0)) {
    puVar2 = puVar2 + uVar3 * 5;
    do {
      puVar2 = puVar2 + -5;
      uVar3 = uVar3 - 1;
      (**(code **)*puVar2)(puVar2);
    } while (uVar3 != 0);
    uVar1 = param_1[4] & 1;
  }
  if (uVar1 == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,param_1[5]);
  return;
}


