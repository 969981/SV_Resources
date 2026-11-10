/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03420fe0; name: FUN_03420fe0
 */


void FUN_03420fe0(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_14 [4];
  
  lVar2 = *(long *)(param_2 + 0x40);
  if ((lVar2 != 0) &&
     ((((((0.001 <= ABS(*(float *)(param_3 + 0x78) - *(float *)(lVar2 + 0x78)) ||
          (0.001 <= ABS(*(float *)(param_3 + 0x7c) - *(float *)(lVar2 + 0x7c)))) ||
         (0.001 <= ABS(*(float *)(param_3 + 0x80) - *(float *)(lVar2 + 0x80)))) ||
        ((0.001 <= ABS(*(float *)(param_3 + 0x60) - *(float *)(lVar2 + 0x60)) ||
         (0.001 <= ABS(*(float *)(param_3 + 100) - *(float *)(lVar2 + 100)))))) ||
       ((0.001 <= ABS(*(float *)(param_3 + 0x68) - *(float *)(lVar2 + 0x68)) ||
        ((0.001 <= ABS(*(float *)(param_3 + 0x6c) - *(float *)(lVar2 + 0x6c)) ||
         (0.001 <= ABS(*(float *)(param_3 + 0x70) - *(float *)(lVar2 + 0x70)))))))) ||
      (0.001 <= ABS(*(float *)(param_3 + 0x74) - *(float *)(lVar2 + 0x74)))))) {
    uVar3 = *(undefined8 *)(param_3 + 0x78);
    uVar1 = *(undefined4 *)(param_3 + 0x80);
    fVar4 = *(float *)(param_1 + 0x28);
    fVar5 = *(float *)(param_1 + 0x2c);
    fVar6 = *(float *)(param_1 + 0x18);
    fVar7 = *(float *)(param_1 + 0x1c);
    fVar9 = *(float *)(param_1 + 0x20);
    fVar8 = *(float *)(param_1 + 0x24);
    *(float *)(lVar2 + 100) = fVar4;
    *(float *)(lVar2 + 0x68) = fVar5;
    *(float *)(lVar2 + 0x6c) = fVar6;
    *(float *)(lVar2 + 0x70) = fVar7;
    *(float *)(lVar2 + 0x74) = fVar9;
    *(undefined8 *)(lVar2 + 0x78) = uVar3;
    *(float *)(lVar2 + 0x44) = fVar6 * fVar4 - fVar7 * fVar8;
    *(float *)(lVar2 + 0x60) = fVar8;
    *(undefined4 *)(lVar2 + 0x80) = uVar1;
    *(float *)(lVar2 + 0x50) = fVar9;
    *(float *)(lVar2 + 0x54) = fVar8;
    *(float *)(lVar2 + 0x58) = fVar4;
    *(float *)(lVar2 + 0x5c) = fVar5;
    *(float *)(lVar2 + 0x3c) = fVar7 * fVar5 - fVar9 * fVar4;
    *(float *)(lVar2 + 0x40) = fVar9 * fVar8 - fVar6 * fVar5;
    *(float *)(lVar2 + 0x48) = fVar6;
    *(float *)(lVar2 + 0x4c) = fVar7;
    FUN_03411c9c(PTR_DAT_047e6d80,*(undefined8 *)(*(long *)(lVar2 + 8) + 0x78),auStack_14);
  }
  return;
}


