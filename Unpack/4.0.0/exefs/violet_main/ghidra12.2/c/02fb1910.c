/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb1910; name: FUN_02fb1910
 */


void FUN_02fb1910(long *param_1,long param_2,long param_3,long *param_4)

{
  undefined2 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int *piVar16;
  ulong uVar17;
  long *plVar18;
  int iVar19;
  
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  puVar4 = PTR_DAT_047e34d8;
  iVar13 = (int)param_4[1];
  if (0 < iVar13) {
    lVar10 = 0;
    do {
      piVar16 = (int *)(*param_4 + lVar10 * 0xc);
      iVar12 = *piVar16;
      iVar19 = piVar16[1];
      if (iVar12 < iVar19) {
        lVar14 = (long)iVar19 - (long)iVar12;
        lVar15 = (long)iVar12 * 0xc;
        do {
          puVar1 = (undefined2 *)(*param_1 + lVar15);
          uVar5 = (ulong)*(uint *)(puVar1 + 2);
          if ((((*(byte *)(param_3 + uVar5 * 0x68 + 0x42) >> 2 & 1) == 0) ||
              ((~*(uint *)(param_3 + uVar5 * 0x68 + 8) & 0xffffff) != 0)) ||
             ((~*(uint *)(param_3 + uVar5 * 0x68 + 0x18) & 0xffffff) != 0)) {
            uVar17 = *(ulong *)(param_3 + uVar5 * 0x68 + 8) & 0xffffff;
            if (uVar17 == 0xffffff) {
              bVar8 = 0;
            }
            else {
              bVar8 = *(byte *)(*(long *)(param_2 + 0x38) + uVar17 * 0xc0 + 0x54) >> 3 & 1;
            }
            uVar5 = *(ulong *)(param_3 + uVar5 * 0x68 + 0x18) & 0xffffff;
            if (uVar5 == 0xffffff) {
              bVar9 = 0;
            }
            else {
              bVar9 = *(byte *)(*(long *)(param_2 + 0x38) + uVar5 * 0xc0 + 0x54) >> 3 & 1;
            }
            if ((bVar8 | bVar9) == 1) {
              if (uVar17 == 0xffffff) {
                uVar17 = 0;
              }
              else {
                uVar17 = (ulong)(*(byte *)(*(long *)(param_2 + 0xf8) + uVar17) + 1) & 0xff;
              }
              if (uVar5 == 0xffffff) {
                lVar6 = 0;
              }
              else {
                bVar8 = *(char *)(*(long *)(param_2 + 0xf8) + uVar5) + 1;
                lVar6 = (ulong)bVar8 * 0x20 + (ulong)bVar8;
              }
              puVar1[1] = *(undefined2 *)(*(long *)puVar4 + (lVar6 + uVar17) * 2 + 0x18);
              *puVar1 = 0xffff;
              *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + 1;
            }
          }
          lVar14 = lVar14 + -1;
          lVar15 = lVar15 + 0xc;
        } while (lVar14 != 0);
        iVar13 = (int)param_4[1];
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar13);
  }
  lVar10 = tpidr_el0;
  lVar15 = *(long *)(lVar10 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar15;
  }
  plVar18 = *(long **)(lVar15 + 0x3e0);
  if (plVar18 != (long *)0x0) {
    lVar15 = *plVar18;
    if (*(code **)(lVar15 + 0x18) != (code *)0x0) {
      (**(code **)(lVar15 + 0x18))(&DAT_03bf1308,4,*(undefined8 *)(lVar15 + 0x28));
    }
    puVar2 = (undefined8 *)plVar18[2];
    uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar18[3]) && (plVar18[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03bf1306;
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (((*(byte *)(lVar15 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar2 = (undefined8 *)plVar18[2];
      uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar18[3]) && (plVar18[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
  }
  FUN_02fb15b0(*param_1 + (long)(int)param_1[2] * 0xc,(int)param_1[1] - (int)param_1[2]);
  lVar15 = *(long *)(lVar10 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar10 + 0x1000b8) = lVar15;
  }
  plVar18 = *(long **)(lVar15 + 0x3e0);
  if (plVar18 != (long *)0x0) {
    lVar10 = *plVar18;
    if (((*(byte *)(lVar10 + 0x38) & 1) != 0) && (plVar18[6] != 0)) {
      puVar2 = (undefined8 *)plVar18[2];
      uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
      if ((uVar5 <= (ulong)plVar18[3]) && (plVar18[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
        *puVar2 = &DAT_03c4e575;
        puVar2[1] = *(undefined8 *)(plVar18[6] + 8);
      }
    }
    puVar2 = (undefined8 *)plVar18[2];
    uVar5 = (long)puVar2 + 0x17U & 0xfffffffffffffff8;
    if ((uVar5 <= (ulong)plVar18[3]) && (plVar18[2] = uVar5, puVar2 != (undefined8 *)0x0)) {
      *puVar2 = &DAT_03c2d363;
      uVar7 = nn::os::GetSystemTick();
      puVar2[1] = uVar7;
    }
    if (*(code **)(lVar10 + 0x20) != (code *)0x0) {
      (**(code **)(lVar10 + 0x20))(*(undefined8 *)(lVar10 + 0x28));
    }
  }
  *(undefined4 *)(param_4 + 1) = 0;
  sVar3 = *(short *)(*param_1 + (long)(int)param_1[2] * 0xc + 2);
  if ((*(uint *)((long)param_4 + 0xc) & 0x7fffffff) == 0) {
    FUN_02f5f960(param_4,PTR_PTR_047d1a50,1);
  }
  *(undefined4 *)(param_4 + 1) = 1;
  piVar16 = (int *)*param_4;
  *piVar16 = (int)param_1[2];
  puVar4 = PTR_PTR_047d1a50;
  iVar13 = (int)param_1[2];
  iVar12 = *(int *)((long)param_1 + 0x14);
  if (0 < iVar12) {
    iVar19 = 0;
    iVar11 = iVar13;
    do {
      if (*(short *)(*param_1 + (long)iVar13 * 0xc + 2) != sVar3) {
        piVar16[1] = iVar13;
        iVar13 = (int)param_4[1];
        lVar10 = (long)iVar13 + 1;
        if ((int)(*(uint *)((long)param_4 + 0xc) & 0x7fffffff) <= iVar13) {
          FUN_02f5f960(param_4,puVar4,lVar10);
        }
        *(int *)(param_4 + 1) = (int)lVar10;
        piVar16 = (int *)(*param_4 + (long)iVar13 * 0xc);
        *piVar16 = iVar19 + (int)param_1[2];
        iVar11 = (int)param_1[2];
        iVar12 = *(int *)((long)param_1 + 0x14);
      }
      iVar19 = iVar19 + 1;
      iVar13 = iVar11 + iVar19;
    } while (iVar19 < iVar12);
  }
  piVar16[1] = iVar13;
  return;
}


