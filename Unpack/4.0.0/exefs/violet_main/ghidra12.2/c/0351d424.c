/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351d424; name: FUN_0351d424
 */


undefined8 FUN_0351d424(float param_1,long param_2,int param_3,int *param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    param_4[8] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[0] = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(param_2 + 0x18) + 0x78);
    uVar1 = *(uint *)PTR_DAT_047e6fa0;
    dVar6 = (double)uVar1;
    dVar8 = 1.0 / dVar6;
    dVar9 = (double)*(int *)(*(long *)(lVar2 + 0x130) + 4) * 1000.0 * dVar8;
    dVar10 = 0.5;
    if (dVar9 <= 0.0) {
      dVar10 = -0.5;
    }
    param_4[1] = (int)(dVar10 + dVar9);
    dVar9 = (double)(*(int *)(*(long *)(lVar2 + 0x130) + (ulong)*(uint *)(lVar2 + 0x138) * 0x10 +
                             -0xc) - *(int *)(*(long *)(lVar2 + 0x130) + 4)) * 1000.0 * dVar8;
    dVar10 = 0.5;
    if (dVar9 <= 0.0) {
      dVar10 = -0.5;
    }
    param_4[2] = (int)(dVar10 + dVar9);
    dVar9 = (double)(*(int *)(lVar2 + 0x140) -
                    *(int *)(*(long *)(lVar2 + 0x130) + (ulong)*(uint *)(lVar2 + 0x138) * 0x10 +
                            -0xc)) * 1000.0 * dVar8;
    dVar10 = 0.5;
    if (dVar9 <= 0.0) {
      dVar10 = -0.5;
    }
    param_4[3] = (int)(dVar10 + dVar9);
    dVar8 = (double)param_3 * 1000.0 * dVar8;
    dVar9 = 0.5;
    if (dVar8 <= 0.0) {
      dVar9 = -0.5;
    }
    *param_4 = (int)(dVar9 + dVar8);
    param_3 = *(int *)(*(long *)(param_2 + 0x18) + 0x90) - param_3;
    if (param_3 < 1) {
      iVar3 = 0;
    }
    else {
      dVar6 = ((double)param_3 * 1000.0) / dVar6;
      dVar8 = 0.5;
      if (dVar6 <= 0.0) {
        dVar8 = -0.5;
      }
      iVar3 = (int)(dVar8 + dVar6);
    }
    param_4[4] = iVar3;
    if ((*(byte *)(lVar2 + 0x124) >> 2 & 1) == 0) {
      do {
        lVar4 = *(long *)(lVar2 + 0x98);
        if (lVar4 == 0) break;
        lVar2 = lVar4;
      } while ((*(byte *)(lVar4 + 0x124) >> 2 & 1) == 0);
    }
    fVar5 = 1.0 / ((float)uVar1 * param_1);
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x118));
    param_4[6] = (int)(fVar5 * fVar7);
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x114));
    param_4[5] = (int)(fVar5 * fVar7);
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x11c));
    param_4[7] = (int)(fVar5 * fVar7);
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 0x120));
    param_4[8] = (int)(fVar5 * fVar7);
  }
  return 1;
}


