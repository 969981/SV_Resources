/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f51150; name: FUN_02f51150
 */


void FUN_02f51150(long param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  long local_440 [128];
  
  uVar12 = (ulong)*(uint *)(param_1 + 0x1c);
  if ((int)*(uint *)(param_1 + 0x1c) < 1) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    memset(local_440,0,uVar12 << 5);
    if (0 < (int)param_3) {
      uVar5 = 0;
      plVar6 = (long *)(param_2 + 0x10);
      do {
        plVar8 = local_440 + 2;
        plVar10 = plVar6;
        uVar11 = uVar12;
        do {
          lVar1 = plVar10[-1];
          uVar11 = uVar11 - 1;
          lVar9 = *plVar10;
          lVar2 = plVar10[1];
          plVar8[-2] = plVar8[-2] + plVar10[-2];
          plVar8[-1] = plVar8[-1] + lVar1;
          *plVar8 = *plVar8 + lVar9;
          plVar8[1] = plVar8[1] + lVar2;
          plVar8 = plVar8 + 4;
          plVar10 = plVar10 + 4;
        } while (uVar11 != 0);
        uVar5 = uVar5 + 1;
        plVar6 = plVar6 + 0x80;
      } while (uVar5 != param_3);
    }
    iVar4 = 0;
    uVar5 = 0;
    plVar6 = local_440 + 2;
    *(undefined4 *)(param_1 + 0x24) = 0;
    do {
      lVar9 = plVar6[1];
      iVar7 = (int)lVar9;
      *(int *)(param_1 + 0xb0 + uVar5 * 4 + -0x88) = iVar7;
      if (iVar7 == 0) {
        uVar14 = 0;
        uVar13 = 0;
      }
      else {
        iVar4 = iVar4 + iVar7;
        *(int *)(param_1 + 0x24) = iVar4;
        uVar14 = NEON_scvtf(CONCAT44(iVar7,iVar7),4);
        fVar15 = (float)((ulong)uVar14 >> 0x20);
        uVar13 = CONCAT44(((float)plVar6[-1] * 0.0078125) / fVar15,
                          ((float)plVar6[-2] * 0.0078125) / (float)uVar14);
        uVar14 = CONCAT44(((float)lVar9 * 0.0078125) / fVar15,
                          ((float)*plVar6 * 0.0078125) / (float)uVar14);
      }
      puVar3 = (undefined8 *)(param_1 + 0xb0 + uVar5 * 0x10);
      puVar3[1] = uVar14;
      *puVar3 = uVar13;
      uVar5 = uVar5 + 1;
      plVar6 = plVar6 + 4;
    } while (uVar12 != uVar5);
  }
  FUN_02f51020(param_1,uVar12);
  return;
}


