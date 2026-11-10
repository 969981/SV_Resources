/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a9828; name: FUN_034a9828
 */


undefined8 FUN_034a9828(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  float *pfVar3;
  undefined8 uVar4;
  float *pfVar5;
  byte *pbVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  float local_24;
  
  if ((*(byte *)(param_2 + 0x290) >> 2 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x28c) & 1) == 0) {
      local_60 = *(undefined8 *)(param_2 + 0x10);
      local_58 = *(undefined4 *)(param_2 + 0x34);
      local_48 = 0xff;
      local_40 = 0xff;
      local_38 = 0;
      local_50 = 0;
      pfVar5 = *(float **)(param_1 + 0xb0);
      local_24 = *(float *)(PTR_DAT_047e70a8 + 0xec);
      if (pfVar5 != (float *)0x0) {
        bVar2 = *(byte *)pfVar5;
        uVar1 = (uint)bVar2;
        if (bVar2 < 2) {
          uVar1 = 1;
        }
        uVar8 = (ulong)uVar1;
        pfVar3 = (float *)((long)pfVar5 + ((ulong)(bVar2 + 4) & 0x1fc));
        pfVar7 = pfVar5;
        do {
          pfVar5 = pfVar3;
          pfVar7 = (float *)((long)pfVar7 + 1);
          if (*(byte *)pfVar7 == 0x3b) goto LAB_034a98cc;
          uVar8 = uVar8 - 1;
          pfVar3 = pfVar5 + 1;
        } while (uVar8 != 0);
        pfVar5 = (float *)0x0;
      }
LAB_034a98cc:
      pfVar7 = &local_24;
      if (pfVar5 != (float *)0x0) {
        pfVar7 = pfVar5;
      }
      fVar14 = *pfVar7;
      fVar10 = (float)FUN_034a9a38(param_1,6,&local_60);
      fVar10 = fVar10 + fVar14;
      pbVar6 = *(byte **)(param_1 + 0xe0);
      if (pbVar6 != (byte *)0x0) {
        bVar2 = *pbVar6;
        uVar1 = (uint)bVar2;
        if (bVar2 < 2) {
          uVar1 = 1;
        }
        uVar8 = (ulong)uVar1;
        pfVar5 = (float *)(pbVar6 + ((ulong)(bVar2 + 4) & 0x1fc));
        do {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 == 0x3b) {
            fVar14 = *pfVar5;
            fVar13 = pfVar5[1];
            if (fVar13 - fVar14 == 0.0) {
              fVar13 = 0.0;
            }
            else {
              lVar9 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
              *(long *)PTR_DAT_047e7068 = lVar9;
              fVar13 = (fVar13 - fVar14) * 4.656613e-10 * (float)(uint)((ulong)lVar9 >> 0x21);
              fVar14 = *pfVar5;
            }
            fVar10 = fVar14 + fVar10 + fVar13;
            break;
          }
          pfVar5 = pfVar5 + 2;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      if (0.0 < fVar10) {
        if (*(int *)(param_2 + 0x90) == 0) {
          uVar4 = FUN_034a7788(param_1,param_2);
          if ((int)uVar4 == 1) {
            return 3;
          }
          return uVar4;
        }
        dVar11 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
        dVar12 = 0.5;
        if (dVar11 * (double)fVar10 <= 0.0) {
          dVar12 = -0.5;
        }
        *(int *)(param_2 + 0x84) =
             *(int *)(param_2 + 0x84) + (int)(dVar12 + dVar11 * (double)fVar10);
      }
    }
    else {
      *(byte *)(param_2 + 0x28c) = *(byte *)(param_2 + 0x28c) & 0xfe;
    }
  }
  return 1;
}


