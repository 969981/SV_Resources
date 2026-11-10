/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f3c52c; name: FUN_00f3c52c
 */


void FUN_00f3c52c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  undefined4 uVar6;
  int *piVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  
  if (((*(long *)(param_1 + 0x98) == 0) && (*(long *)(param_1 + 0xa0) == 0)) &&
     (*(long *)(param_1 + 0x50) == 0)) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0)) {
      if (((*(long *)(param_1 + 0x18) != 0) &&
          (((*(byte *)(*(long *)(param_1 + 0x18) + 0x1e8) & 1) != 0 &&
           (*(long *)(param_1 + 0x18) != 0)))) &&
         ((*(byte *)(*(long *)(param_1 + 0x18) + 0x1e8) & 1) != 0)) {
        puVar4 = (uint *)(**(code **)(**(long **)(param_1 + 0x18) + 0x70))();
        lVar3 = (long)puVar4 + (ulong)*puVar4;
        goto LAB_00f3c5cc;
      }
    }
    else {
      lVar3 = FUN_029be138(*(undefined8 *)(param_1 + 0x60));
LAB_00f3c5cc:
      if (lVar3 != 0) goto LAB_00f3c544;
    }
    if ((*(long *)(param_1 + 0x60) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0)) {
      return;
    }
  }
LAB_00f3c544:
  lVar3 = *(long *)(param_1 + 0x170);
  lVar5 = *(long *)(param_1 + 0x98);
  if (lVar5 == 0) {
    if ((*(long *)(param_1 + 0x60) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x60) + 0x1e8) & 1) == 0)) goto LAB_00f3c62c;
    lVar5 = FUN_029dae08(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 8));
  }
  else {
    if ((((*(long *)(lVar5 + 0x88) == 0) || ((*(byte *)(*(long *)(lVar5 + 0x88) + 0x1e8) & 1) == 0))
        || (*(long *)(lVar5 + 0x88) == 0)) ||
       ((*(byte *)(*(long *)(lVar5 + 0x88) + 0x1e8) & 1) == 0)) goto LAB_00f3c62c;
    puVar4 = (uint *)(**(code **)(**(long **)(lVar5 + 0x88) + 0x70))();
    lVar5 = (long)puVar4 + (ulong)*puVar4;
  }
  if (lVar5 != 0) {
    if (*(char *)(lVar3 + 0x5c) == '\0') {
      puVar1 = *(undefined8 **)(lVar3 + 0x20);
      puVar2 = *(undefined8 **)(lVar3 + 0x28);
      fVar9 = *(float *)(param_1 + 0xbc);
      if (*(char *)(param_1 + 0xc9) != '\0') {
        fVar9 = (float)(int)*(float *)(param_1 + 0xbc);
      }
      for (; puVar1 != puVar2; puVar1 = puVar1 + 7) {
        *(undefined4 *)((long)puVar1 + 0x2c) = *(undefined4 *)(puVar1 + 5);
        piVar7 = (int *)*puVar1;
        puVar8 = (ushort *)((long)piVar7 - (long)*piVar7);
        fVar10 = 0.0;
        if (8 < *puVar8) {
          fVar10 = 0.0;
          if ((ulong)puVar8[4] != 0) {
            fVar10 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar7 + (ulong)puVar8[4]));
          }
        }
        if (fVar9 < fVar10) {
          uVar6 = 1;
        }
        else {
          fVar10 = 0.0;
          if (10 < *puVar8) {
            fVar10 = 0.0;
            if ((ulong)puVar8[5] != 0) {
              fVar10 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar7 + (ulong)puVar8[5]));
            }
          }
          uVar6 = 2;
          if (fVar10 <= fVar9) {
            uVar6 = 3;
          }
        }
        *(undefined4 *)(puVar1 + 5) = uVar6;
      }
      if (*(float *)(lVar3 + 0x58) != fVar9) {
        *(float *)(lVar3 + 0x58) = fVar9;
        FUN_00f3c788(lVar3,*(int *)(param_1 + 0xb0) == 1 && *(char *)(param_1 + 200) != '\0');
      }
    }
    else {
      *(undefined1 *)(lVar3 + 0x5c) = 0;
    }
  }
LAB_00f3c62c:
  *(undefined1 *)(lVar3 + 0x5c) = 1;
  return;
}


