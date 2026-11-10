/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0350c830; name: FUN_0350c830
 */


void FUN_0350c830(long param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x118) + 0x18);
  plVar8 = (long *)(lVar10 + 0x18);
  if ((*(ushort *)(lVar10 + 0x1b0) & 1) == 0) {
    (**(code **)(*plVar8 + 0x58))(plVar8,0);
  }
  else if ((*(ushort *)(lVar10 + 0x1b0) >> 4 & 1) != 0) {
    (**(code **)(*plVar8 + 0x60))();
  }
  if ((*(byte *)(lVar10 + 0x1b1) & 3) == 0) {
    lVar10 = *(long *)(param_1 + 8);
    if (-37.0 <= *(float *)(lVar10 + 0x60) * 0.05) {
      uVar7 = (uint)(*(float *)(lVar10 + 0x60) * 1393317.6 + 1.0653532e+09);
      fVar11 = (float)(uVar7 & 0x7fffff | 0x3f800000);
      fVar11 = (fVar11 * (fVar11 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar7 & 0xff800000);
    }
    else {
      fVar11 = 0.0;
    }
    *(float *)(param_1 + 0x10) = *(float *)(lVar10 + 200) * fVar11;
    if (((*(byte *)(lVar10 + 0x110) >> 3 & 1) != 0) && (iVar3 = FUN_0346ed14(lVar10), iVar3 != 0)) {
      FUN_03447470(lVar10,lVar10 + 0x148);
    }
    FUN_034fe974(param_1);
    return;
  }
  puVar1 = (uint *)(lVar10 + 699);
  uVar7 = *puVar1;
  if ((uVar7 >> 7 & 1) == 0) {
    uVar7 = uVar7 | 0x80;
    *puVar1 = uVar7;
    plVar4 = *(long **)(lVar10 + 0x188);
    plVar8 = plVar4;
    if ((*(byte *)((long)plVar4 + 0xdb) >> 4 & 1) == 0) {
      do {
        plVar9 = (long *)plVar8[0x13];
        if (plVar9 == (long *)0x0) break;
        plVar8 = plVar9;
      } while ((*(byte *)((long)plVar9 + 0xdb) >> 4 & 1) == 0);
    }
    bVar2 = *(byte *)(plVar8 + 0x1e);
    uVar6 = *(byte *)((long)plVar8 + 0xf1) & 0xf;
    if (uVar6 == 3) {
      uVar5 = (**(code **)(*plVar4 + 0x230))(plVar4,*(undefined8 *)(lVar10 + 0x240));
      uVar6 = 1;
      if ((uVar5 & 1) != 0) {
        uVar6 = 2;
      }
      uVar7 = *puVar1;
    }
    *puVar1 = uVar7 & 0xffffff80 | bVar2 >> 3 & 7 | uVar6 << 3;
  }
  else {
    uVar6 = uVar7 >> 3 & 0xf;
  }
  if ((uVar6 == 0) || (*(int *)(param_1 + 0x14c) == 0)) {
    *(undefined8 *)(param_1 + 0x148) = 0x200000001;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(lVar10 + 0x168) = 0;
  FUN_034a5938(lVar10);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


