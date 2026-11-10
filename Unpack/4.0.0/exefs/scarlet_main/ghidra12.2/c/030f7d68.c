/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f7d68; name: FUN_030f7d68
 */


void FUN_030f7d68(long param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint uVar18;
  int *piVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  int *local_70;
  undefined8 local_68;
  
  uVar18 = *(uint *)(param_1 + 0x98);
  if (0 < (int)uVar18) {
    iVar21 = 0;
    lVar20 = 0;
    lVar9 = 0;
    do {
      if (*(int *)(*(long *)(param_1 + 0x90) + lVar20) == *param_2) {
        local_70 = (int *)0x0;
        lVar22 = *(long *)(param_1 + 0x30);
        lVar9 = lVar9 >> 0x20;
        local_68 = -0x8000000000000000;
        FUN_0087011c(param_1 + 0x40,lVar22 + lVar9 * 0x50,&local_70);
        puVar8 = PTR_DAT_047e4f38;
        lVar11 = tpidr_el0;
        if ((int)local_68 != 0) {
          piVar2 = local_70 + (int)local_68;
          piVar19 = local_70;
          do {
            uVar18 = *(uint *)(param_1 + 0x88);
            if (0 < (int)uVar18) {
              lVar12 = *(long *)(param_1 + 0x80);
              lVar15 = 0;
              lVar10 = 0;
              piVar16 = (int *)(lVar12 + 4);
              do {
                if ((piVar16[-1] == *piVar19) && (*piVar16 + iVar21 == 0)) {
                  if ((int)lVar15 != 1) {
                    *(uint *)(param_1 + 0x88) = uVar18 - 1;
                    if (uVar18 + (int)lVar15 != 1) {
                      *(undefined8 *)(lVar12 + (lVar10 >> 0x1d)) =
                           *(undefined8 *)(lVar12 + (long)(int)(uVar18 - 1) * 8);
                    }
                    FUN_030fcff8(param_1,-lVar15);
                  }
                  break;
                }
                lVar15 = lVar15 + -1;
                lVar10 = lVar10 + 0x100000000;
                piVar16 = piVar16 + 2;
              } while ((ulong)uVar18 + lVar15 != 0);
            }
            iVar14 = *(int *)puVar8;
            lVar10 = *(long *)(lVar11 + 0x1000b8);
            if (lVar10 == 0) {
              lVar10 = FUN_00e5d3b4();
              *(long *)(lVar11 + 0x1000b8) = lVar10;
            }
            if (*(long *)(lVar10 + (long)iVar14 * 8 + 1000) != 0) {
              FUN_03231bdc();
            }
            piVar19 = piVar19 + 1;
          } while (piVar19 != piVar2);
        }
        lVar10 = local_68;
        uVar13 = (ulong)local_68._4_4_;
        local_68 = (ulong)local_68._4_4_ << 0x20;
        if ((-1 < lVar10) && (local_70 != (int *)0x0)) {
          (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
                    (PTR_PTR_047d1a50 + 0x20,local_70,uVar13 << 2);
        }
        FUN_0086fc44(param_1 + 0x60,*(undefined4 *)(lVar22 + lVar9 * 0x50 + 0x44));
        iVar14 = *(int *)(param_1 + 0x38);
        iVar6 = iVar14 + -1;
        *(int *)(param_1 + 0x38) = iVar6;
        if (iVar14 + iVar21 != 1) {
          memcpy((void *)(*(long *)(param_1 + 0x30) + lVar9 * 0x50),
                 (void *)(*(long *)(param_1 + 0x30) + (long)iVar6 * 0x50),0x50);
        }
        iVar14 = *(int *)PTR_DAT_047e4f38;
        lVar22 = *(long *)(lVar11 + 0x1000b8);
        if (lVar22 == 0) {
          lVar22 = FUN_00e5d3b4();
          *(long *)(lVar11 + 0x1000b8) = lVar22;
        }
        if (*(long *)(lVar22 + (long)iVar14 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        uVar18 = -iVar21;
        if (*(int *)(param_1 + 0x38) + iVar21 != 0) {
          FUN_0086f828(param_1 + 0x60,
                       *(undefined4 *)(*(long *)(param_1 + 0x30) + lVar9 * 0x50 + 0x44),uVar18);
          iVar14 = *(int *)(param_1 + 0x88);
          if (0 < iVar14) {
            lVar22 = 0;
            lVar11 = 0;
            lVar9 = 0;
            do {
              lVar10 = *(long *)(param_1 + 0x80) + lVar22;
              if (*(int *)(lVar10 + 4) == *(int *)(param_1 + 0x38)) {
                *(uint *)(lVar10 + 4) = uVar18;
                puVar3 = (undefined4 *)(*(long *)(param_1 + 0x80) + lVar22);
                uVar4 = puVar3[1];
                *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar11) = *puVar3;
                *(undefined4 *)(*(long *)(param_1 + 0xb0) + lVar11 + 4) = uVar4;
                iVar14 = *(int *)(param_1 + 0x88);
              }
              lVar9 = lVar9 + 1;
              lVar11 = lVar11 + 0x60;
              lVar22 = lVar22 + 8;
            } while (lVar9 < iVar14);
          }
        }
        FUN_030fd1ac(*(long *)(param_1 + 0x90) + lVar20);
        iVar14 = *(int *)(param_1 + 0x98);
        iVar6 = iVar14 + -1;
        *(int *)(param_1 + 0x98) = iVar6;
        if (iVar14 + iVar21 != 1) {
          puVar17 = (undefined4 *)(*(long *)(param_1 + 0x90) + (long)iVar6 * 0xd0);
          puVar3 = (undefined4 *)(*(long *)(param_1 + 0x90) + lVar20);
          *puVar3 = *puVar17;
          *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(puVar17 + 2);
          *(undefined8 *)(puVar17 + 2) = 0;
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar17 + 4);
          *(undefined8 *)(puVar17 + 4) = 0;
          memcpy(puVar3 + 8,puVar17 + 8,0x60);
          *(undefined8 *)(puVar3 + 0x22) = *(undefined8 *)(puVar17 + 0x22);
          *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(puVar17 + 0x20);
          *(undefined8 *)(puVar3 + 0x26) = *(undefined8 *)(puVar17 + 0x26);
          *(undefined8 *)(puVar3 + 0x24) = *(undefined8 *)(puVar17 + 0x24);
          uVar4 = puVar17[0x28];
          *(undefined8 *)(puVar3 + 0x2a) = 0;
          *(undefined8 *)(puVar3 + 0x2c) = 0x8000000000000000;
          puVar3[0x28] = uVar4;
          puVar8 = PTR_PTR_047d1a50;
          FUN_030fe14c(puVar17 + 0x2a,PTR_PTR_047d1a50);
          *(undefined8 *)(puVar3 + 0x2a) = *(undefined8 *)(puVar17 + 0x2a);
          puVar3[0x2c] = puVar17[0x2c];
          puVar3[0x2d] = puVar17[0x2d];
          *(undefined8 *)(puVar17 + 0x2a) = 0;
          *(undefined8 *)(puVar17 + 0x2c) = 0;
          *(undefined8 *)(puVar3 + 0x2e) = 0;
          *(undefined8 *)(puVar3 + 0x30) = 0x8000000000000000;
          FUN_030fe264(puVar17 + 0x2e,puVar8);
          *(undefined8 *)(puVar3 + 0x2e) = *(undefined8 *)(puVar17 + 0x2e);
          puVar3[0x30] = puVar17[0x30];
          puVar3[0x31] = puVar17[0x31];
          uVar5 = *(undefined2 *)(puVar17 + 0x32);
          *(undefined8 *)(puVar17 + 0x2e) = 0;
          *(undefined8 *)(puVar17 + 0x30) = 0;
          *(undefined1 *)((long)puVar3 + 0xca) = *(undefined1 *)((long)puVar17 + 0xca);
          *(undefined2 *)(puVar3 + 0x32) = uVar5;
          FUN_030fd1ac(puVar17);
          uVar18 = *(uint *)(param_1 + 0x98);
        }
        break;
      }
      lVar20 = lVar20 + 0xd0;
      lVar9 = lVar9 + 0x100000000;
      iVar21 = iVar21 + -1;
    } while ((ulong)uVar18 * 0xd0 != lVar20);
  }
  fVar23 = *(float *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (uVar18 == 0) {
    fVar26 = 0.0;
  }
  else {
    uVar13 = (long)(int)uVar18 * 0xd0 - 0xd0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar13;
    lVar20 = *(long *)(param_1 + 0x90);
    if ((SUB164(auVar7 * ZEXT816(0x4ec4ec4ec4ec4ec5),8) >> 6 & 1) == 0) {
      fVar26 = *(float *)(*(long *)(lVar20 + 8) + 0xb0);
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      *(float *)(param_1 + 0x180) = fVar26;
      lVar9 = lVar20 + 0xd0;
    }
    else {
      fVar26 = 0.0;
      lVar9 = lVar20;
    }
    if (0xcf < uVar13) {
      do {
        fVar29 = *(float *)(*(long *)(lVar9 + 8) + 0xb0);
        if (fVar26 <= fVar29) {
          fVar26 = fVar29;
        }
        *(float *)(param_1 + 0x180) = fVar26;
        plVar1 = (long *)(lVar9 + 0xd8);
        lVar9 = lVar9 + 0x1a0;
        fVar29 = *(float *)(*plVar1 + 0xb0);
        if (fVar26 <= fVar29) {
          fVar26 = fVar29;
        }
        *(float *)(param_1 + 0x180) = fVar26;
      } while (lVar20 + (long)(int)uVar18 * 0xd0 != lVar9);
    }
  }
  if (fVar26 != fVar23) {
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar11 = 0;
      lVar20 = 0;
      lVar9 = 0;
      do {
        lVar22 = *(long *)(param_1 + 0xa0) + lVar20;
        lVar20 = lVar20 + 0x60;
        uVar25 = *(undefined8 *)(lVar22 + 0x18);
        uVar24 = *(undefined8 *)(lVar22 + 0x10);
        uVar28 = *(undefined8 *)(lVar22 + 0x28);
        uVar27 = *(undefined8 *)(lVar22 + 0x20);
        fVar23 = (float)*(undefined8 *)(lVar22 + 0x40);
        fVar26 = (float)((ulong)*(undefined8 *)(lVar22 + 0x40) >> 0x20);
        fVar29 = (float)*(undefined8 *)(lVar22 + 0x48);
        fVar30 = (float)((ulong)*(undefined8 *)(lVar22 + 0x48) >> 0x20);
        lVar10 = *(long *)(param_1 + 0x20) + lVar11;
        *(undefined1 *)(lVar10 + 0x40) = 1;
        lVar9 = lVar9 + 1;
        *(ulong *)(lVar10 + 0x28) =
             CONCAT44((float)((ulong)uVar25 >> 0x20) + fVar30,(float)uVar25 + fVar29);
        *(ulong *)(lVar10 + 0x20) =
             CONCAT44((float)((ulong)uVar24 >> 0x20) + fVar26,(float)uVar24 + fVar23);
        *(ulong *)(lVar10 + 0x38) =
             CONCAT44((float)((ulong)uVar28 >> 0x20) + fVar30,(float)uVar28 + fVar29);
        *(ulong *)(lVar10 + 0x30) =
             CONCAT44((float)((ulong)uVar27 >> 0x20) + fVar26,(float)uVar27 + fVar23);
        *(undefined1 *)(lVar22 + 0x52) = 1;
        lVar11 = lVar11 + 0x50;
      } while (lVar9 < *(int *)(param_1 + 0xa8));
    }
    *(undefined1 *)(param_1 + 0xc4) = 1;
  }
  return;
}


