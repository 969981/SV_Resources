/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008bba3c; name: FUN_008bba3c
 */


void FUN_008bba3c(long param_1)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  plVar7 = *(long **)(param_1 + 0x28);
  plVar1 = (long *)(param_1 + 0x20);
  if (plVar7 == plVar1) {
    fVar12 = 0.0;
    lVar10 = 0;
  }
  else {
    fVar13 = *(float *)(param_1 + 0x54) * -0.5;
    fVar12 = 0.0;
    bVar8 = false;
    lVar10 = 0;
    plVar9 = plVar1;
    do {
      local_78 = 0;
      local_70 = 0.0;
      local_68 = 0;
      uVar5 = FUN_008bb2c0(*plVar9 + -8,&local_78);
      if ((uVar5 & 1) != 0) {
        if ((*(char *)(param_1 + 0xdc) != '\0') &&
           (plVar6 = *(long **)(param_1 + 0x28), plVar6 != plVar1)) {
          iVar2 = *(int *)(param_1 + 0xd4);
          if (iVar2 == 2) {
LAB_008bbb58:
            if (plVar6 != (long *)*plVar9) goto LAB_008bba9c;
          }
          else {
            if (iVar2 != 1) {
              if (iVar2 != 0) goto LAB_008bba9c;
LAB_008bbb54:
              plVar6 = (long *)*plVar1;
              goto LAB_008bbb58;
            }
            if (plVar6 != (long *)*plVar9) goto LAB_008bbb54;
          }
          local_78 = local_78 & 0xffffffff00000000;
          local_70 = 0.0;
        }
LAB_008bba9c:
        fVar11 = fVar13 + local_78._4_4_;
        if (!bVar8) {
          fVar11 = fVar13;
        }
        lVar10 = *plVar9;
        if (!bVar8) {
          fVar12 = fVar12 - local_78._4_4_;
        }
        *(byte *)(lVar10 + 0x50) = *(byte *)(lVar10 + 0x50) | 0x10;
        fVar12 = fVar12 + local_78._4_4_ + (float)local_78;
        fVar13 = (float)local_78 + fVar11;
        *(float *)(lVar10 + 0x2c) = (fVar11 + (float)local_78 * 0.5) - local_70;
        lVar10 = local_68;
        bVar8 = true;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar7 != plVar9);
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    fVar12 = *(float *)(param_1 + 0x54) - fVar12;
    bVar4 = *(byte *)(lVar10 + 0x5b) >> 2 & 3;
    bVar3 = *(byte *)(lVar10 + 0x58) | 0x10;
    *(byte *)(lVar10 + 0x58) = bVar3;
    *(float *)(lVar10 + 0x54) = fVar12;
    if (bVar4 != 1) {
      if (bVar4 != 0) {
        return;
      }
      fVar12 = fVar12 * 0.5;
    }
    *(float *)(lVar10 + 0x34) = fVar12 + *(float *)(lVar10 + 0x34);
    *(byte *)(lVar10 + 0x58) = bVar3;
  }
  return;
}


