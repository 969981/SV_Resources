/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00451b60; name: FUN_00451b60
 */


void FUN_00451b60(long *param_1,code *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (param_1 != (long *)0x0) {
    uVar2 = *(uint *)(param_1 + 3);
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      puVar3 = *(undefined8 **)(*param_1 + (ulong)uVar2 * 8);
      while (puVar3 != (undefined8 *)0x0) {
        uVar1 = *puVar3;
        puVar3 = (undefined8 *)puVar3[1];
        (*param_2)(uVar1);
      }
    }
  }
  return;
}


