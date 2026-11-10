/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fb1d60; name: FUN_02fb1d60
 */


void FUN_02fb1d60(long *param_1,long param_2,long *param_3,int param_4,int param_5,long param_6)

{
  undefined8 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 *local_450 [64];
  undefined8 *local_250 [64];
  undefined8 local_50;
  undefined4 local_48;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <
      *(int *)(*(long *)(param_2 + 0x4b0) + 0x20)) {
    FUN_02f5f72c(param_1,PTR_PTR_047d1a50);
  }
  if (param_4 <= param_5) {
    lVar12 = *param_3;
    lVar9 = (long)param_4 * 0xc;
    iVar6 = 0;
    iVar2 = param_5;
    if (param_5 <= param_4) {
      iVar2 = param_4;
    }
    iVar10 = param_4 + -1;
    uVar16 = 0xffffffff;
    do {
      uVar3 = *(ushort *)(lVar12 + lVar9 + 2);
      uVar4 = (uint)uVar3;
      if ((uVar16 != 0xffffffff) && (uVar16 != uVar3)) {
        lVar12 = param_1[1];
        *(int *)(param_1 + 1) = (int)lVar12 + 1;
        piVar13 = (int *)(*param_1 + (long)(int)lVar12 * 0xc);
        *piVar13 = param_4;
        piVar13[1] = iVar10;
        piVar13[2] = iVar6;
        lVar12 = *param_3;
        param_4 = iVar10 + 1;
        iVar6 = 0;
        uVar4 = (uint)*(ushort *)(lVar12 + lVar9 + 2);
      }
      uVar16 = uVar4;
      lVar17 = lVar12 + lVar9;
      lVar9 = lVar9 + 0xc;
      lVar17 = param_6 + (ulong)*(uint *)(lVar17 + 4) * 0x68;
      uVar4 = (uint)*(byte *)(lVar17 + 0x54) + (uint)*(ushort *)(lVar17 + 0x52) +
              (*(byte *)(lVar17 + 0x55) & 0x1f) >> 4;
      if (uVar4 == 0) {
        uVar4 = 1;
      }
      iVar10 = iVar10 + 1;
      iVar6 = uVar4 + iVar6;
    } while (iVar2 != iVar10);
    if (iVar6 != 0) {
      lVar9 = param_1[1];
      *(int *)(param_1 + 1) = (int)lVar9 + 1;
      piVar13 = (int *)(*param_1 + (long)(int)lVar9 * 0xc);
      *piVar13 = param_4;
      piVar13[1] = param_5;
      piVar13[2] = iVar6;
    }
  }
  lVar9 = tpidr_el0;
  lVar12 = *(long *)(lVar9 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar12;
  }
  plVar20 = *(long **)(lVar12 + 0x3e0);
  if (plVar20 != (long *)0x0) {
    lVar12 = *plVar20;
    if (*(code **)(lVar12 + 0x18) != (code *)0x0) {
      (**(code **)(lVar12 + 0x18))(&DAT_03bf1308,4,*(undefined8 *)(lVar12 + 0x28));
    }
    puVar11 = (undefined8 *)plVar20[2];
    uVar7 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= (ulong)plVar20[3]) && (plVar20[2] = uVar7, puVar11 != (undefined8 *)0x0)) {
      *puVar11 = &DAT_03bf1306;
      uVar5 = nn::os::GetSystemTick();
      puVar11[1] = uVar5;
    }
    if (((*(byte *)(lVar12 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
      puVar11 = (undefined8 *)plVar20[2];
      uVar7 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar20[3]) && (plVar20[2] = uVar7, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c4e575;
        puVar11[1] = *(undefined8 *)(plVar20[6] + 8);
      }
    }
  }
  if ((int)param_1[1] < 2) {
LAB_02fb1f5c:
    lVar12 = *(long *)(lVar9 + 0x1000b8);
    if (lVar12 == 0) {
      lVar12 = FUN_00e5d3b4();
      *(long *)(lVar9 + 0x1000b8) = lVar12;
    }
    plVar20 = *(long **)(lVar12 + 0x3e0);
    if (plVar20 != (long *)0x0) {
      lVar9 = *plVar20;
      if (((*(byte *)(lVar9 + 0x38) & 1) != 0) && (plVar20[6] != 0)) {
        puVar11 = (undefined8 *)plVar20[2];
        uVar7 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
        if ((uVar7 <= (ulong)plVar20[3]) && (plVar20[2] = uVar7, puVar11 != (undefined8 *)0x0)) {
          *puVar11 = &DAT_03c4e575;
          puVar11[1] = *(undefined8 *)(plVar20[6] + 8);
        }
      }
      puVar11 = (undefined8 *)plVar20[2];
      uVar7 = (long)puVar11 + 0x17U & 0xfffffffffffffff8;
      if ((uVar7 <= (ulong)plVar20[3]) && (plVar20[2] = uVar7, puVar11 != (undefined8 *)0x0)) {
        *puVar11 = &DAT_03c2d363;
        uVar5 = nn::os::GetSystemTick();
        puVar11[1] = uVar5;
      }
      if (*(code **)(lVar9 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02fb2014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar9 + 0x20))(*(undefined8 *)(lVar9 + 0x28));
        return;
      }
    }
    return;
  }
  puVar8 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)((long)puVar8 + (ulong)((int)param_1[1] - 1) * 0xc);
  uVar16 = 0;
  local_250[0] = puVar8;
  local_450[0] = puVar11;
LAB_02fb205c:
  lVar12 = (long)(int)uVar16;
LAB_02fb2060:
  do {
    puVar15 = puVar11;
    do {
      puVar11 = puVar15;
      uVar16 = *(uint *)((long)puVar8 +
                        (((long)puVar11 - (long)puVar8 >> 2) * -0x5555555555555555 >> 1) * 0xc + 8);
      puVar15 = puVar11;
      puVar18 = puVar8;
      do {
        puVar1 = (undefined8 *)((long)puVar18 - 0xc);
        do {
          puVar19 = puVar1;
          puVar1 = (undefined8 *)((long)puVar19 + 0xc);
        } while (uVar16 < *(uint *)((long)puVar19 + 0x14));
        puVar18 = puVar19 + 3;
        do {
          puVar14 = puVar15;
          puVar15 = (undefined8 *)((long)puVar14 - 0xc);
        } while (*(uint *)(puVar14 + 1) < uVar16);
        if (puVar14 < puVar1) {
          puVar15 = puVar14;
          puVar18 = puVar1;
        }
        else if (puVar19 != puVar15) {
          local_50 = *puVar14;
          local_48 = *(undefined4 *)(puVar14 + 1);
          uVar5 = *puVar1;
          *(undefined4 *)(puVar14 + 1) = *(undefined4 *)((long)puVar19 + 0x14);
          *puVar14 = uVar5;
          *(undefined4 *)((long)puVar19 + 0x14) = local_48;
          *puVar1 = local_50;
        }
      } while (puVar18 <= puVar15);
      if (puVar15 <= puVar8) {
        puVar8 = puVar18;
        if (puVar18 < puVar11) goto LAB_02fb2060;
        uVar16 = (int)lVar12 - 1;
        if ((int)lVar12 < 1) goto LAB_02fb1f5c;
        puVar8 = local_250[uVar16];
        puVar11 = local_450[uVar16];
        goto LAB_02fb205c;
      }
    } while (puVar11 <= puVar18);
    puVar1 = puVar15;
    puVar19 = puVar8;
    if ((long)puVar11 - (long)puVar18 <= (long)puVar15 - (long)puVar8) {
      puVar1 = puVar11;
      puVar19 = puVar18;
      puVar11 = puVar15;
      puVar18 = puVar8;
    }
    local_250[lVar12] = puVar18;
    local_450[lVar12] = puVar11;
    lVar12 = lVar12 + 1;
    puVar8 = puVar19;
    puVar11 = puVar1;
  } while( true );
}


