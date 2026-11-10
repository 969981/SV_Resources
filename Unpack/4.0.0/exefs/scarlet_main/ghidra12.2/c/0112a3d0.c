/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0112a3d0; name: FUN_0112a3d0
 */


bool FUN_0112a3d0(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  uint local_78 [6];
  ulong local_58;
  
  bVar3 = false;
  if (param_1 != 0) {
    uVar4 = FUN_0011f640();
    uVar8 = FUN_001020a0(param_1,uVar4);
    bVar3 = false;
    if (uVar8 != 0) {
      uVar5 = 0;
      lVar10 = 0xf0;
      do {
        puVar11 = (uint *)(uVar8 + lVar10);
        lVar10 = lVar10 + 4;
        uVar5 = *puVar11 | uVar5;
      } while (lVar10 != 0x110);
      if (uVar5 == 0) {
        if ((int)param_3 < 1) {
          uVar5 = 0;
          DAT_047ec9b8 = &LAB_00120080;
        }
        else {
          puVar11 = local_78;
          puVar15 = local_78 + 3;
          uVar9 = (ulong)param_3;
          do {
            *puVar15 = *param_2;
            uVar5 = FUN_0011f990();
            puVar2 = PTR_DAT_047cb838;
            uVar9 = uVar9 - 1;
            *puVar11 = uVar5;
            param_2 = param_2 + 1;
            puVar11 = puVar11 + 1;
            puVar15 = puVar15 + 1;
          } while (uVar9 != 0);
          if (1 < (int)param_3) {
            uVar9 = 1;
            do {
              uVar5 = local_78[uVar9 + 3];
              uVar14 = local_78[uVar9];
              uVar12 = uVar9 & 0xffffffff;
              do {
                iVar7 = (int)uVar12;
                uVar6 = iVar7 - 1;
                if (uVar14 <= local_78[(int)uVar6]) {
                  uVar12 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
                  *(uint *)((long)local_78 + uVar12 + 0xc) = uVar5;
                  puVar11 = (uint *)((long)local_78 + uVar12);
                  goto LAB_0112a4a0;
                }
                uVar1 = local_78[(long)(int)uVar6 + 3];
                uVar13 = -(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2;
                uVar12 = (ulong)uVar6;
                *(uint *)((long)local_78 + uVar13) = local_78[(int)uVar6];
                *(uint *)((long)local_78 + uVar13 + 0xc) = uVar1;
              } while (-1 < iVar7 + -2);
              puVar11 = local_78;
              local_78[3] = uVar5;
LAB_0112a4a0:
              uVar9 = uVar9 + 1;
              *puVar11 = uVar14;
            } while (uVar9 != param_3);
          }
          DAT_047ec9b8 = &LAB_00120080;
          if ((int)param_3 < 1) {
            uVar5 = 0;
          }
          else {
            uVar14 = 0;
            uVar5 = 0;
            puVar11 = local_78 + 3;
            do {
              uVar6 = FUN_00120120(uVar8 + 0x130,1,param_3);
              if ((uVar6 == 0) ||
                 (puVar15 = (uint *)(uVar8 + (ulong)(uVar6 & 0xf) * 4 + 0xf0), *puVar15 != 0))
              goto LAB_0112a5e0;
              local_58 = uVar6 | uVar8;
              while( true ) {
                iVar7 = FUN_0011f9b0(*puVar11,&local_58,8);
                if (iVar7 != 0) break;
                FUN_00120090(*puVar11,0xffffffff,uVar8);
              }
              uVar6 = *puVar11 | 0x300;
              *puVar15 = uVar6;
              uVar5 = uVar6 | uVar5;
              if (*(long *)puVar2 != 0) {
                FUN_00100520();
              }
              uVar14 = uVar14 + 1;
              puVar11 = puVar11 + 1;
            } while (uVar14 != param_3);
            uVar5 = 1;
          }
        }
LAB_0112a5e0:
        bVar3 = uVar5 != 0;
      }
      else {
        FUN_00100520("There is already an async decompression in progress on this HBINK.");
        bVar3 = false;
      }
    }
  }
  return bVar3;
}


