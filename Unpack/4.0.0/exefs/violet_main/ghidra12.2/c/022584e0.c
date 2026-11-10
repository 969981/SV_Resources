/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022584e0; name: FUN_022584e0
 */


void FUN_022584e0(float param_1,long param_2)

{
  int *piVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  piVar1 = *(int **)(param_2 + 0x160);
  if (piVar1 != (int *)0x0) {
    if (param_1 <= -1.0) {
      param_1 = -1.0;
    }
    if (1.0 < param_1) {
      param_1 = 1.0;
    }
    puVar2 = (ushort *)((long)piVar1 - (long)*piVar1);
    if (*puVar2 < 7) {
      fVar5 = 1.2;
      fVar4 = 0.8;
    }
    else {
      if ((ulong)puVar2[3] == 0) {
        fVar4 = 0.8;
      }
      else {
        fVar4 = *(float *)((long)piVar1 + (ulong)puVar2[3]);
      }
      if ((*puVar2 < 9) || ((ulong)puVar2[4] == 0)) {
        fVar5 = 1.2;
      }
      else {
        fVar5 = *(float *)((long)piVar1 + (ulong)puVar2[4]);
      }
    }
    fVar3 = (float)(**(code **)PTR_PTR_047d9248)(param_1 * 0.5 + 0.5);
    *(float *)(param_2 + 0x200) = fVar4 + (fVar5 - fVar4) * fVar3;
  }
  return;
}


