/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307717c; name: FUN_0307717c
 */


/* WARNING: Removing unreachable block (ram,0x030771d8) */
/* WARNING: Removing unreachable block (ram,0x03077260) */

void FUN_0307717c(long param_1,int *param_2,uint param_3,int *param_4,uint param_5,long *param_6)

{
  float *pfVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float *pfVar6;
  ushort *puVar7;
  ulong uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (0 < (int)param_3) {
    uVar8 = (ulong)param_3;
    pfVar6 = (float *)(*param_6 + 4);
    puVar7 = (ushort *)(*(long *)(param_1 + 0x50) + (long)*param_2 * 2);
    do {
      fVar13 = *(float *)(param_1 + 0x1c);
      pfVar1 = pfVar6 + -1;
      fVar12 = *pfVar6;
      pfVar6 = pfVar6 + 2;
      iVar9 = (int)((fVar12 - fVar13) * *(float *)(param_1 + 0x24));
      fVar10 = *pfVar1 * 253.0 + 0.5;
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (iVar9 == 0) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar12) && !NAN(fVar13)) {
          bVar3 = fVar12 < fVar13;
          bVar4 = fVar12 == fVar13;
          bVar5 = false;
        }
      }
      uVar2 = 0x100;
      if (bVar4 || bVar3 != bVar5) {
        uVar2 = (ushort)(iVar9 << 8);
      }
      uVar8 = uVar8 - 1;
      *puVar7 = uVar2 | (ushort)(int)fVar11;
      puVar7 = puVar7 + 1;
    } while (uVar8 != 0);
  }
  if (0 < (int)param_5) {
    uVar8 = (ulong)param_5;
    pfVar6 = (float *)(*param_6 + (long)(int)param_3 * 8 + 4);
    puVar7 = (ushort *)(*(long *)(param_1 + 0x50) + (long)*param_4 * 2);
    do {
      fVar13 = *(float *)(param_1 + 0x1c);
      pfVar1 = pfVar6 + -1;
      fVar12 = *pfVar6;
      pfVar6 = pfVar6 + 2;
      iVar9 = (int)((fVar12 - fVar13) * *(float *)(param_1 + 0x24));
      fVar10 = *pfVar1 * 253.0 + 0.5;
      fVar11 = 0.0;
      if (0.0 <= fVar10) {
        fVar11 = fVar10;
      }
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (iVar9 == 0) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar12) && !NAN(fVar13)) {
          bVar3 = fVar12 < fVar13;
          bVar4 = fVar12 == fVar13;
          bVar5 = false;
        }
      }
      uVar2 = 0x100;
      if (bVar4 || bVar3 != bVar5) {
        uVar2 = (ushort)(iVar9 << 8);
      }
      uVar8 = uVar8 - 1;
      *puVar7 = uVar2 | (ushort)(int)fVar11;
      puVar7 = puVar7 + 1;
    } while (uVar8 != 0);
  }
  return;
}


