/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034a7788; name: FUN_034a7788
 */


undefined4 FUN_034a7788(float param_1,long param_2,undefined4 *param_3)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  long *local_70;
  ulong local_68;
  
  local_70 = (long *)0x0;
  local_68 = 0;
  local_78 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = (undefined8 *)0x0;
  puVar14 = *(undefined8 **)(param_3 + 0x22);
  if (puVar14 == (undefined8 *)0x0) {
    local_80 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
    if (local_80 != (undefined8 *)0x0) {
      *(undefined4 *)(local_80 + 2) = 1;
      ppuVar10 = &local_80;
      puVar14 = &local_98;
      *local_80 = 0;
      local_80[1] = 0;
      goto LAB_034a780c;
    }
    uVar6 = 2;
    local_80 = (undefined8 *)0x0;
  }
  else {
    ppuVar10 = (undefined8 **)(puVar14 + 3);
LAB_034a780c:
    uVar6 = *(undefined4 *)(param_2 + 0x18);
    plVar7 = (long *)FUN_0345f330(0x503,0,ppuVar10);
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 0x1d) = *(undefined4 *)(puVar14 + 4);
      memcpy(plVar7 + 0xd,param_3 + 0xe,0x44);
      *(undefined4 *)((long)plVar7 + 0xac) = param_3[0x1f];
      (**(code **)(*plVar7 + 0x28))(plVar7,uVar6);
      plVar8 = *(long **)(param_3 + 2);
      plVar7[0x1c] = (long)plVar8;
      (**(code **)(*plVar8 + 0x10))();
      *(byte *)((long)plVar7 + 0x36) =
           (*(byte *)(param_3 + 0xa4) & 4) << 5 | *(byte *)((long)plVar7 + 0x36) & 0x7f;
      *(undefined4 *)(plVar7 + 0x18) = param_3[0x24];
      *(byte *)((long)plVar7 + 0xc5) = *(byte *)(param_3 + 0xa4) >> 1 & 1;
      *(undefined4 *)((long)plVar7 + 0xbc) = param_3[0x20];
      plVar8 = *(long **)(param_3 + 6);
      if (plVar8 != (long *)0x0) {
        lVar12 = *plVar8;
        *(int *)(plVar7 + 0x20) = (int)plVar8[1];
        plVar7[0x1f] = lVar12;
      }
      bVar2 = *(byte *)(param_3 + 0xa3);
      *(undefined4 *)(plVar7 + 0x19) = param_3[0xa2];
      *(byte *)((long)plVar7 + 0xcc) = bVar2 | 1;
      *(undefined4 *)(plVar7 + 0x1a) = *param_3;
      iVar5 = FUN_034a7dd0(param_2);
      if (iVar5 == 2) {
        uVar15 = 1;
      }
      else {
        do {
          puVar1 = (uint *)(param_2 + 0xda);
          param_2 = *(long *)(param_2 + 0x98);
        } while (param_2 != 0 && (*puVar1 & 0x800000) == 0);
        uVar15 = *puVar1 >> 0x19 & 2;
      }
      piVar11 = *(int **)(param_3 + 0x2a);
      uVar13 = *(undefined8 *)(param_3 + 0x26);
      *(undefined4 *)((long)plVar7 + 0x10c) = param_3[0x28];
      *(undefined8 *)((long)plVar7 + 0x104) = uVar13;
      plVar7[0x22] = (long)piVar11;
      if (piVar11 != (int *)0x0) {
        *piVar11 = *piVar11 + 1;
        lVar12 = plVar7[0x22];
        puVar16 = (undefined8 *)(lVar12 + 0x80);
        puVar9 = (undefined8 *)*puVar16;
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x18);
          if (puVar9 == (undefined8 *)0x0) goto LAB_034a79c0;
          *puVar9 = *puVar16;
          *puVar16 = puVar9;
        }
        if (*(undefined8 **)(lVar12 + 0x78) == (undefined8 *)0x0) {
          *(undefined8 **)(lVar12 + 0x70) = puVar9;
        }
        else {
          **(undefined8 **)(lVar12 + 0x78) = puVar9;
          puVar9 = (undefined8 *)*puVar16;
        }
        *(undefined8 **)(lVar12 + 0x78) = puVar9;
        *(undefined8 *)(lVar12 + 0x80) = *puVar9;
        *puVar9 = 0;
        *(int *)(lVar12 + 0x94) = *(int *)(lVar12 + 0x94) + 1;
        lVar12 = *(long *)(lVar12 + 0x78);
        *(uint *)(lVar12 + 8) = uVar15;
        *(long **)(lVar12 + 0x10) = plVar7;
      }
LAB_034a79c0:
      puVar4 = PTR_DAT_047e2fd0;
      lVar12 = *(long *)(param_3 + 0x22);
      if (lVar12 != 0) {
        if ((int)plVar7[0x24] != 0) {
          plVar8 = (long *)plVar7[0x23];
          do {
            *(int *)(*plVar8 + 0x84) = *(int *)(*plVar8 + 0x84) + -1;
            puVar9 = (undefined8 *)*plVar8;
            iVar5 = *(int *)((long)puVar9 + 0x74) + -1;
            *(int *)((long)puVar9 + 0x74) = iVar5;
            if (iVar5 == 0) {
              (**(code **)*puVar9)(puVar9);
              (**(code **)(puVar4 + 0x30))(0,puVar9);
            }
            plVar8 = plVar8 + 1;
          } while (plVar8 != (long *)(plVar7[0x23] + (ulong)*(uint *)(plVar7 + 0x24) * 8));
        }
        *(undefined4 *)(plVar7 + 0x24) = 0;
        FUN_03499328(plVar7 + 0x23,lVar12 + 0x28);
      }
      dVar17 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_047e6fa0);
      dVar18 = 0.5;
      if (dVar17 * (double)param_1 <= 0.0) {
        dVar18 = -0.5;
      }
      uVar6 = FUN_034a7ba0(puVar14,param_3,(int)(dVar18 + dVar17 * (double)param_1),plVar7);
      (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar7 = local_70;
      puVar4 = PTR_DAT_047e2fd0;
      if ((int)local_68 != 0) {
        lVar12 = (local_68 & 0xffffffff) << 3;
        plVar8 = local_70;
        do {
          *(int *)(*plVar8 + 0x84) = *(int *)(*plVar8 + 0x84) + -1;
          puVar14 = (undefined8 *)*plVar8;
          iVar5 = *(int *)((long)puVar14 + 0x74) + -1;
          *(int *)((long)puVar14 + 0x74) = iVar5;
          if (iVar5 == 0) {
            (**(code **)*puVar14)(puVar14);
            (**(code **)(puVar4 + 0x30))(0,puVar14);
          }
          plVar8 = plVar8 + 1;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
      uVar3 = local_68 >> 0x20;
      local_68 = uVar3 << 0x20;
      if (plVar7 != (long *)0x0) {
        local_68 = uVar3 << 0x20;
        (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,plVar7);
        local_70 = (long *)0x0;
        local_68 = local_68 & 0xffffffff;
      }
      goto LAB_034a7b3c;
    }
    uVar6 = 0x34;
  }
  local_68 = local_68 & 0xffffffff00000000;
LAB_034a7b3c:
  puVar14 = local_80;
  if ((local_80 != (undefined8 *)0x0) &&
     (iVar5 = *(int *)(local_80 + 2), *(int *)(local_80 + 2) = iVar5 + -1, iVar5 + -1 == 0)) {
    FUN_034783fc(local_80);
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar14);
  }
  return uVar6;
}


