/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346fd6c; name: FUN_0346fd6c
 */


void FUN_0346fd6c(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  long *plVar6;
  uint uVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  int *piVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 local_88;
  
  puVar8 = PTR_DAT_047e6cb8;
  plVar16 = *(long **)(*(long *)(param_1 + 0x10) + 0x30);
  if ((plVar16 == (long *)0x0) && (plVar16 = *(long **)PTR_DAT_047e6cb8, plVar16 == (long *)0x0)) {
    plVar16 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
    if (plVar16 == (long *)0x0) {
      *(undefined8 *)puVar8 = 0;
    }
    else {
      *plVar16 = (long)(PTR_DAT_047e6e40 + 0x10);
      plVar16[1] = 0;
      puVar1 = PTR_DAT_047e6958;
      lVar14 = *(long *)(PTR_DAT_047e6958 + 8);
      plVar16[2] = 0;
      plVar16[3] = lVar14;
      plVar17 = (long *)(puVar1 + 0x10);
      if (*(long *)(puVar1 + 0x10) != 0) {
        plVar17 = (long *)(lVar14 + 0x10);
      }
      *plVar17 = (long)plVar16;
      *(long **)(puVar1 + 8) = plVar16;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      puVar1 = PTR_DAT_047e6e48 + 0x10;
      plVar16[8] = 0;
      plVar16[9] = 0;
      *plVar16 = (long)puVar1;
      plVar16[0xc] = 0;
      plVar16[0xd] = 0;
      plVar16[0x12] = 0;
      plVar16[0x13] = 0;
      plVar16[0x16] = 0;
      plVar16[0x17] = 0;
      plVar16[0x1a] = 0;
      plVar16[0x1b] = 0;
      *(long **)puVar8 = plVar16;
      *(undefined2 *)(plVar16 + 0x1c) = 0x101;
    }
  }
  puVar1 = PTR_DAT_047e6cb8;
  puVar8 = PTR_DAT_047e6958;
  if ((*(byte *)(param_1 + 0xee) & 1) == 0) {
    uVar24 = 0;
    uVar25 = 0;
    fVar23 = 0.0;
  }
  else {
    if (-37.0 <= *(float *)(param_1 + 0x88) * 0.05) {
      uVar11 = (uint)(*(float *)(param_1 + 0x88) * 1393317.6 + 1.0653532e+09);
      fVar23 = (float)(uVar11 & 0x7fffff | 0x3f800000);
      fVar21 = (fVar23 * (fVar23 * 0.32518977 + 0.020805772) + 0.65304345) *
               (float)(uVar11 & 0xff800000);
      fVar23 = 4.0;
      if (fVar21 < 4.0) {
        fVar23 = fVar21;
      }
    }
    else {
      fVar23 = 0.0;
    }
    uVar25 = *(undefined4 *)(param_1 + 0xbc);
    uVar24 = *(undefined4 *)(param_1 + 0xc0);
    plVar17 = plVar16;
    if (*(char *)((long)plVar16 + 0xe1) == '\0') {
      puVar2 = PTR_DAT_047e6e40 + 0x10;
      plVar17 = *(long **)PTR_DAT_047e6cb8;
      puVar3 = PTR_DAT_047e6e48 + 0x10;
      do {
        if (plVar17 == (long *)0x0) {
          plVar17 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
          *plVar17 = (long)puVar2;
          plVar17[1] = 0;
          lVar14 = *(long *)(puVar8 + 8);
          plVar17[2] = 0;
          plVar17[3] = lVar14;
          plVar9 = (long *)(puVar8 + 0x10);
          if (*(long *)(puVar8 + 0x10) != 0) {
            plVar9 = (long *)(lVar14 + 0x10);
          }
          *plVar9 = (long)plVar17;
          *(long **)(puVar8 + 8) = plVar17;
          *(int *)puVar8 = *(int *)puVar8 + 1;
          *plVar17 = (long)puVar3;
          plVar17[8] = 0;
          plVar17[9] = 0;
          plVar17[0xc] = 0;
          plVar17[0xd] = 0;
          plVar17[0x12] = 0;
          plVar17[0x13] = 0;
          plVar17[0x16] = 0;
          plVar17[0x17] = 0;
          plVar17[0x1a] = 0;
          plVar17[0x1b] = 0;
          *(long **)puVar1 = plVar17;
          *(undefined2 *)(plVar17 + 0x1c) = 0x101;
        }
      } while (*(char *)((long)plVar17 + 0xe1) == '\0');
    }
    puVar1 = PTR_DAT_047e6cb8;
    puVar8 = PTR_DAT_047e6958;
    plVar9 = plVar16;
    if ((char)plVar16[0x1c] == '\0') {
      puVar2 = PTR_DAT_047e6e40 + 0x10;
      plVar9 = *(long **)PTR_DAT_047e6cb8;
      puVar3 = PTR_DAT_047e6e48 + 0x10;
      do {
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
          *plVar9 = (long)puVar2;
          plVar9[1] = 0;
          lVar14 = *(long *)(puVar8 + 8);
          plVar9[2] = 0;
          plVar9[3] = lVar14;
          plVar6 = (long *)(puVar8 + 0x10);
          if (*(long *)(puVar8 + 0x10) != 0) {
            plVar6 = (long *)(lVar14 + 0x10);
          }
          *plVar6 = (long)plVar9;
          *(long **)(puVar8 + 8) = plVar9;
          *(int *)puVar8 = *(int *)puVar8 + 1;
          *plVar9 = (long)puVar3;
          plVar9[8] = 0;
          plVar9[9] = 0;
          plVar9[0xc] = 0;
          plVar9[0xd] = 0;
          plVar9[0x12] = 0;
          plVar9[0x13] = 0;
          plVar9[0x16] = 0;
          plVar9[0x17] = 0;
          plVar9[0x1a] = 0;
          plVar9[0x1b] = 0;
          *(long **)puVar1 = plVar9;
          *(undefined2 *)(plVar9 + 0x1c) = 0x101;
        }
      } while ((char)plVar9[0x1c] == '\0');
    }
    FUN_03476bdc(fVar23,uVar25,uVar24,plVar17 + 0xe,param_2,plVar9 + 10);
  }
  puVar1 = PTR_DAT_047e6cb8;
  puVar8 = PTR_DAT_047e6958;
  local_88 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x78);
  if ((*(byte *)(param_1 + 0x110) >> 3 & 1) == 0) {
    uVar11 = 1;
    puVar13 = &local_88;
  }
  else {
    if ((char)plVar16[0x1c] == '\0') {
      puVar2 = PTR_DAT_047e6e40 + 0x10;
      plVar16 = *(long **)PTR_DAT_047e6cb8;
      puVar3 = PTR_DAT_047e6e48 + 0x10;
      do {
        if (plVar16 == (long *)0x0) {
          plVar16 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
          *plVar16 = (long)puVar2;
          plVar16[1] = 0;
          lVar14 = *(long *)(puVar8 + 8);
          plVar16[2] = 0;
          plVar16[3] = lVar14;
          plVar17 = (long *)(puVar8 + 0x10);
          if (*(long *)(puVar8 + 0x10) != 0) {
            plVar17 = (long *)(lVar14 + 0x10);
          }
          *plVar17 = (long)plVar16;
          *(long **)(puVar8 + 8) = plVar16;
          *(int *)puVar8 = *(int *)puVar8 + 1;
          *plVar16 = (long)puVar3;
          plVar16[8] = 0;
          plVar16[9] = 0;
          plVar16[0xc] = 0;
          plVar16[0xd] = 0;
          plVar16[0x12] = 0;
          plVar16[0x13] = 0;
          plVar16[0x16] = 0;
          plVar16[0x17] = 0;
          plVar16[0x1a] = 0;
          plVar16[0x1b] = 0;
          *(long **)puVar1 = plVar16;
          *(undefined2 *)(plVar16 + 0x1c) = 0x101;
        }
      } while ((char)plVar16[0x1c] == '\0');
    }
    uVar11 = *(uint *)(plVar16 + 0xd);
    if (uVar11 == 0) goto LAB_03470320;
    puVar13 = (undefined8 *)plVar16[0xc];
  }
  puVar8 = PTR_DAT_047e7100;
  lVar18 = 0;
  lVar14 = param_1 + 0x60;
  do {
    piVar19 = (int *)(param_1 + lVar18 * 4 + 0xcc);
    if (*piVar19 != 0) {
      puVar15 = puVar13;
      uVar20 = (ulong)uVar11;
      do {
        if (*(float *)puVar8 < *(float *)(lVar14 + (lVar18 + 6) * 4)) {
          uVar7 = *(uint *)(param_2 + 1);
          uVar12 = *(uint *)((long)param_2 + 0xc);
          if (uVar12 <= uVar7) {
            iVar4 = uVar12 + (uVar12 >> 1);
            if (uVar12 == 0) {
              iVar4 = 1;
            }
            uVar12 = iVar4 + uVar12;
            lVar10 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*param_2,(ulong)uVar12 << 5);
            if (lVar10 == 0) goto LAB_03470304;
            *param_2 = lVar10;
            *(uint *)((long)param_2 + 0xc) = uVar12;
          }
          if (uVar7 < uVar12) {
            uVar12 = *(uint *)(param_2 + 1);
            *(uint *)(param_2 + 1) = uVar12 + 1;
            if (*param_2 != 0) {
              puVar5 = (undefined8 *)(*param_2 + (ulong)uVar12 * 0x20);
              *puVar5 = *puVar15;
              *(int *)(puVar5 + 1) = *piVar19;
              fVar22 = *(float *)(lVar14 + (lVar18 + 6) * 4);
              fVar21 = 0.0;
              if (-37.0 <= fVar22 * 0.05) {
                uVar12 = (uint)(fVar22 * 1393317.6 + 1.0653532e+09);
                fVar21 = (float)(uVar12 & 0x7fffff | 0x3f800000);
                fVar22 = (fVar21 * (fVar21 * 0.32518977 + 0.020805772) + 0.65304345) *
                         (float)(uVar12 & 0xff800000);
                fVar21 = 4.0;
                if (fVar22 < 4.0) {
                  fVar21 = fVar22;
                }
              }
              *(float *)((long)puVar5 + 0xc) = fVar21;
              *(undefined4 *)((long)puVar5 + 0x14) = *(undefined4 *)(lVar14 + (lVar18 + 0xf) * 4);
              *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(lVar14 + (lVar18 + 0x13) * 4);
              *(undefined4 *)(puVar5 + 2) = 2;
            }
          }
        }
LAB_03470304:
        uVar20 = uVar20 - 1;
        puVar15 = puVar15 + 1;
      } while (uVar20 != 0);
    }
    lVar18 = lVar18 + 1;
  } while (lVar18 != 4);
LAB_03470320:
  plVar16 = *(long **)(param_1 + 0x178);
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x28))(fVar23,uVar25,uVar24,plVar16,param_2);
  }
  return;
}


