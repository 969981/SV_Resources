/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0202eda4; name: FUN_0202eda4
 */


void FUN_0202eda4(float param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(float *)(param_2 + 0x170) = param_1;
  *(float *)(param_2 + 0x174) = param_1 * param_1;
  puVar1 = (undefined8 *)(param_2 + 0x154);
  if (*(char *)(param_2 + 0x13b) != '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x168);
  }
  *(float *)(param_2 + 0x178) = ABS(*(float *)(param_2 + 0x16c) - param_1 * param_1);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(puVar1 + 2);
  *(undefined8 *)(param_2 + 0x140) = uVar2;
  *(undefined8 *)(param_2 + 0x148) = uVar3;
  return;
}


