/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029bdfd0; name: FUN_029bdfd0
 */


void FUN_029bdfd0(long param_1,long *param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    return;
  }
  if (((*(long *)(param_1 + 0xe0) != 0) || (*(long *)(param_1 + 0xe8) != 0)) ||
     (*(long *)(param_1 + 0x98) != 0)) goto LAB_029be000;
  if ((*(long *)(param_1 + 0xa8) == 0) || ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x1e8) & 1) == 0))
  {
    if (((*(long *)(param_1 + 0x60) != 0) &&
        (((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) != 0 &&
         (*(long *)(param_1 + 0x60) != 0)))) &&
       ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) != 0)) {
      puVar6 = (uint *)(**(code **)(**(long **)(param_1 + 0x60) + 0x70))();
      lVar5 = (long)puVar6 + (ulong)*puVar6;
      goto LAB_029be108;
    }
  }
  else {
    lVar5 = FUN_029be138(*(undefined8 *)(param_1 + 0xa8));
LAB_029be108:
    if (lVar5 != 0) goto LAB_029be000;
  }
  if ((*(long *)(param_1 + 0xa8) == 0) || ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x1e8) & 1) == 0))
  {
    return;
  }
LAB_029be000:
  plVar4 = (long *)(**(code **)(*param_2 + 0x20))(param_2);
  *(long **)(param_1 + 0x50) = plVar4;
  (**(code **)(*plVar4 + 0x48))
            (plVar4,param_1 + 0x58,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
             *(undefined8 *)(param_3 + 0x20));
  lVar5 = (**(code **)(**(long **)(param_1 + 0x50) + 0x90))();
  fVar9 = *(float *)(lVar5 + 0x10);
  fVar7 = *(float *)(lVar5 + 0x14);
  fVar10 = *(float *)(param_3 + 0x18) * (float)(uint)(int)(fVar7 - fVar9);
  fVar11 = fVar9;
  if (fVar9 <= fVar10) {
    fVar11 = fVar10;
  }
  fVar8 = fVar7;
  if (fVar11 <= fVar7) {
    fVar8 = fVar11;
  }
  bVar1 = false;
  bVar2 = false;
  bVar3 = false;
  if (fVar11 <= fVar7) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar9) && !NAN(fVar10)) {
      bVar1 = fVar9 < fVar10;
      bVar2 = fVar9 == fVar10;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar8 = fVar10;
  }
  *(float *)(lVar5 + 0xc) = fVar8;
  *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_3 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x029be094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x50) + 0x60))();
  return;
}


