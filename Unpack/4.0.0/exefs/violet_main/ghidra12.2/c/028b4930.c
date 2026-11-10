/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028b4930; name: FUN_028b4930
 */


void FUN_028b4930(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  fVar8 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 8);
  plVar4 = (long *)FUN_00e31554();
  uVar1 = *(long *)(param_1 + 0x80) + 1;
  dVar6 = (double)*(long *)(*plVar4 + 0x130) / 1000000.0;
  *(double *)(param_1 + 0x68) = dVar6;
  dVar6 = *(double *)(param_1 + 0x70) + dVar6;
  lVar5 = uVar1 - ((uVar1 / 5) * 4 + uVar1 / 5);
  *(long *)(param_1 + 0x80) = lVar5;
  *(double *)(param_1 + 0x70) = dVar6;
  puVar3 = PTR_DAT_047d8bc0;
  if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    lVar5 = *(long *)(puVar3 + (long)iVar2 * 8);
    dVar6 = dVar6 / 5.0;
    *(double *)(param_1 + 0x78) = dVar6;
    dVar6 = dVar6 / ((double)lVar5 / 1000000.0);
    if ((double)fVar8 <= dVar6) {
      FUN_028b47f8(param_1,1);
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    else if (dVar6 <= (double)fVar7) {
      if (0x1d < *(ulong *)(param_1 + 0x88)) {
        FUN_028b47f8(param_1,0);
        return;
      }
      *(ulong *)(param_1 + 0x88) = *(ulong *)(param_1 + 0x88) + 1;
    }
  }
  return;
}


