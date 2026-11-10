/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00801bb0; name: FUN_00801bb0
 */


float FUN_00801bb0(float param_1)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = FUN_007fcb70();
  puVar1 = PTR_DAT_047d0dd8;
  if ((lVar2 == 0) || (fVar3 = *(float *)(lVar2 + 0xc), fVar3 < 0.0)) {
    fVar3 = (float)FUN_00807e20(*(undefined8 *)PTR_DAT_047d0dd8,5);
    fVar4 = (float)FUN_00807e20(*(undefined8 *)puVar1,1);
    fVar3 = fVar3 / (fVar4 / 500.0);
  }
  lVar2 = FUN_007fcb70();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 8) < 1)) {
    fVar5 = (float)FUN_00807e20(*(undefined8 *)puVar1,4);
    fVar4 = (float)FUN_00807e20(*(undefined8 *)puVar1,5);
    fVar5 = fVar5 + fVar4;
  }
  else {
    fVar5 = (float)*(int *)(lVar2 + 8);
  }
  if (fVar3 + param_1 <= fVar5) {
    return fVar3 + param_1;
  }
  lVar2 = FUN_007fcb70();
  if ((lVar2 == 0) || (*(int *)(lVar2 + 8) < 1)) {
    fVar3 = (float)FUN_00807e20(*(undefined8 *)puVar1,4);
    fVar4 = (float)FUN_00807e20(*(undefined8 *)puVar1,5);
    return fVar3 + fVar4;
  }
  return (float)*(int *)(lVar2 + 8);
}


