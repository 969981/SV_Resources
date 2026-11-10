/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030ac668; name: FUN_030ac668
 */


void FUN_030ac668(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  float fVar18;
  undefined8 uVar17;
  float fVar19;
  undefined8 uVar20;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  float local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  puVar5 = PTR_DAT_047d1a08;
  local_d0 = 0x100;
  plVar8 = (long *)(**(code **)PTR_DAT_047d1a08)(0,&local_d0,0);
  if (*(code **)(puVar5 + 0x10) != (code *)0x0) {
    (**(code **)(puVar5 + 0x10))(plVar8,"FindPathInput");
  }
  FUN_030b9058(plVar8,0);
  lVar15 = *(long *)(param_2 + 0x40);
  lVar10 = *(long *)(lVar15 + 0x40);
  local_b0 = 0x3a83126f3a83126f;
  local_d0 = CONCAT44(*(undefined4 *)(lVar10 + 0xe8),*(undefined4 *)(lVar10 + 0xe8));
  local_c0 = 1;
  local_b8 = 0x3f800000;
  local_b4 = 0;
  local_bc = *(float *)(lVar10 + 0x50) * 0.5;
  uStack_a4 = *(undefined4 *)(lVar10 + 0x30);
  local_a8 = 0xffffffff;
  local_a0 = *(undefined8 *)(lVar10 + 0x78);
  local_98 = *(undefined8 *)(lVar10 + 0x80);
  local_90 = *(undefined4 *)(lVar10 + 0x88);
  uStack_80 = *(undefined8 *)(lVar10 + 0x58);
  local_88 = *(undefined8 *)(lVar10 + 0x90);
  uStack_c8 = local_d0;
  iVar6 = FUN_030ae3b0(param_3,(undefined8 *)(lVar15 + 0x20),lVar10 + 0x20,&local_d0,&local_e0);
  if (iVar6 == -1) {
    iVar6 = *(int *)(param_2 + 0x50);
    lVar10 = (long)iVar6;
    uVar20 = *(undefined8 *)(lVar15 + 0x28);
    uVar17 = *(undefined8 *)(lVar15 + 0x20);
    if ((int)(*(uint *)(param_2 + 0x54) & 0x7fffffff) <= iVar6) {
      FUN_030ae1bc(param_2 + 0x48,PTR_PTR_047d1a50,lVar10 + 1);
      iVar6 = *(int *)(param_2 + 0x50);
    }
    puVar13 = (undefined4 *)(*(long *)(param_2 + 0x48) + (long)iVar6 * 0xa0);
    *(int *)(param_2 + 0x50) = (int)(lVar10 + 1);
    *puVar13 = 1;
    *(undefined8 *)(puVar13 + 0xf) = 0;
    *(undefined8 *)(puVar13 + 0x24) = 0;
    *(undefined8 *)(puVar13 + 0x26) = 0x8000000000000000;
    *(undefined8 *)(puVar13 + 0xc) = 0xffffffffffffffff;
    *(undefined8 *)(puVar13 + 6) = uVar20;
    *(undefined8 *)(puVar13 + 4) = uVar17;
    *(undefined8 *)(puVar13 + 8) = 0;
    *(undefined8 *)(puVar13 + 10) = 0;
    *param_1 = 0;
    if (plVar8 == (long *)0x0) {
      return;
    }
  }
  else {
    *(int *)(plVar8 + 8) = iVar6;
    *(undefined4 *)(plVar8 + 10) = 0;
    *(undefined4 *)(plVar8 + 7) = 0;
    plVar8[5] = lStack_d8;
    plVar8[4] = local_e0;
    lVar10 = local_e0;
    lVar11 = lStack_d8;
    if (*(int *)(lVar15 + 0x38) != 0) {
      lVar10 = (long)*(int *)(lVar15 + 0x38) << 5;
      puVar14 = *(undefined8 **)(lVar15 + 0x30);
      do {
        if (*(int *)(puVar14 + 2) == -1) {
          uStack_e8 = puVar14[1];
          local_f0 = *puVar14;
        }
        else {
          lVar11 = *(long *)(*(long *)(param_3 + 0x38) + (long)*(int *)(puVar14 + 2) * 0x100);
          fVar18 = (float)((ulong)*puVar14 >> 0x20);
          fVar16 = (float)*puVar14;
          fVar19 = (float)puVar14[1];
          local_f0 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x90) >> 0x20) +
                              (float)((ulong)*(undefined8 *)(lVar11 + 0x80) >> 0x20) * fVar19 +
                              (float)((ulong)*(undefined8 *)(lVar11 + 0x60) >> 0x20) * fVar16 +
                              (float)((ulong)*(undefined8 *)(lVar11 + 0x70) >> 0x20) * fVar18,
                              (float)*(undefined8 *)(lVar11 + 0x90) +
                              (float)*(undefined8 *)(lVar11 + 0x80) * fVar19 +
                              (float)*(undefined8 *)(lVar11 + 0x60) * fVar16 +
                              (float)*(undefined8 *)(lVar11 + 0x70) * fVar18);
          uStack_e8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar11 + 0x98) >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar11 + 0x88) >> 0x20) * fVar19 +
                               (float)((ulong)*(undefined8 *)(lVar11 + 0x68) >> 0x20) * fVar16 +
                               (float)((ulong)*(undefined8 *)(lVar11 + 0x78) >> 0x20) * fVar18,
                               (float)*(undefined8 *)(lVar11 + 0x98) +
                               (float)*(undefined8 *)(lVar11 + 0x88) * fVar19 +
                               (float)*(undefined8 *)(lVar11 + 0x68) * fVar16 +
                               (float)*(undefined8 *)(lVar11 + 0x78) * fVar18);
        }
        lVar11 = *(long *)(lVar15 + 0x40);
        local_b0 = 0x3a83126f3a83126f;
        local_d0 = CONCAT44(*(undefined4 *)(lVar11 + 0xe8),*(undefined4 *)(lVar11 + 0xe8));
        local_c0 = 1;
        local_b8 = 0x3f800000;
        local_b4 = 0;
        local_bc = *(float *)(lVar11 + 0x50) * 0.5;
        uStack_a4 = *(undefined4 *)(lVar11 + 0x30);
        local_a8 = 0xffffffff;
        local_a0 = *(undefined8 *)(lVar11 + 0x78);
        local_98 = *(undefined8 *)(lVar11 + 0x80);
        local_90 = *(undefined4 *)(lVar11 + 0x88);
        uStack_80 = *(undefined8 *)(lVar11 + 0x58);
        local_88 = *(undefined8 *)(lVar11 + 0x90);
        uStack_c8 = local_d0;
        iVar7 = FUN_030ae3b0(param_3,&local_f0,lVar11 + 0x20,&local_d0,&local_100);
        if (iVar7 != -1) {
          iVar9 = (int)plVar8[10];
          lVar11 = (long)iVar9;
          if ((int)(*(uint *)((long)plVar8 + 0x54) & 0x7fffffff) <= iVar9) {
            FUN_0305c42c(plVar8 + 9,PTR_PTR_047d1a50,lVar11 + 1);
            iVar9 = (int)plVar8[10];
          }
          *(int *)(plVar8[9] + (long)iVar9 * 4) = iVar7;
          iVar7 = (int)plVar8[7];
          lVar12 = (long)iVar7;
          *(int *)(plVar8 + 10) = (int)(lVar11 + 1);
          if ((int)(*(uint *)((long)plVar8 + 0x3c) & 0x7fffffff) <= iVar7) {
            FUN_02e9b11c(plVar8 + 6,PTR_PTR_047d1a50,lVar12 + 1);
            iVar7 = (int)plVar8[7];
          }
          puVar1 = (undefined8 *)(plVar8[6] + (long)iVar7 * 0x10);
          puVar1[1] = local_f8;
          *puVar1 = local_100;
          *(int *)(plVar8 + 7) = (int)(lVar12 + 1);
        }
        puVar14 = puVar14 + 4;
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != 0);
      if ((int)plVar8[10] != 0) {
        iVar6 = *(int *)(*(long *)(lVar15 + 0x40) + 0x44);
        if (iVar6 < 1) {
          iVar6 = 10000;
        }
        *(int *)(plVar8 + 0xb) = iVar6;
        lVar10 = *(long *)(*(long *)(lVar15 + 0x40) + 0x58);
        plVar8[0xc] = *(long *)(*(long *)(lVar15 + 0x40) + 0x50);
        plVar8[0xd] = lVar10;
        lVar10 = *(long *)(lVar15 + 0x40);
        lVar11 = *(long *)(lVar10 + 0x60);
        plVar8[0xf] = *(long *)(lVar10 + 0x68);
        plVar8[0xe] = lVar11;
        memcpy(plVar8 + 0x10,(void *)(lVar10 + 0x70),0x58);
        lVar11 = *(long *)(*(long *)(lVar15 + 0x40) + 0x28);
        lVar10 = *(long *)(*(long *)(lVar15 + 0x40) + 0x20);
        *(undefined1 *)(plVar8 + 0x16) = 1;
        *(undefined1 *)((long)plVar8 + 0xaa) = 0;
        plVar8[0xf] = lVar11;
        plVar8[0xe] = lVar10;
        uVar17 = *(undefined8 *)plVar8[6];
        lVar10 = *(long *)(lVar15 + 0x40);
        fVar16 = (float)plVar8[4] - (float)uVar17;
        fVar18 = (float)((ulong)plVar8[4] >> 0x20) - (float)((ulong)uVar17 >> 0x20);
        fVar19 = (float)plVar8[5] - (float)((undefined8 *)plVar8[6])[1];
        fVar16 = SQRT(fVar16 * fVar16 + fVar18 * fVar18 + fVar19 * fVar19);
        if (*(char *)(lVar10 + 0x48) != '\0') {
          *(float *)((long)plVar8 + 0xc4) =
               *(float *)(lVar10 + 0x34) + fVar16 * *(float *)(lVar10 + 0x38);
          lVar10 = *(long *)(lVar15 + 0x40);
        }
        if (*(char *)(lVar10 + 0x49) != '\0') {
          *(float *)((long)plVar8 + 0xbc) =
               *(float *)(lVar10 + 0x3c) + fVar16 * *(float *)(lVar10 + 0x40);
        }
        *param_1 = (long)plVar8;
        return;
      }
      lVar10 = local_e0;
      lVar11 = lStack_d8;
    }
    iVar7 = *(int *)(param_2 + 0x50);
    lVar15 = (long)iVar7;
    if ((int)(*(uint *)(param_2 + 0x54) & 0x7fffffff) <= iVar7) {
      FUN_030ae1bc(param_2 + 0x48,PTR_PTR_047d1a50,lVar15 + 1);
      iVar7 = *(int *)(param_2 + 0x50);
    }
    puVar13 = (undefined4 *)(*(long *)(param_2 + 0x48) + (long)iVar7 * 0xa0);
    *(int *)(param_2 + 0x50) = (int)(lVar15 + 1);
    *puVar13 = 1;
    puVar13[0xc] = iVar6;
    puVar13[0xd] = 0xffffffff;
    *(undefined8 *)(puVar13 + 0x24) = 0;
    *(undefined8 *)(puVar13 + 0x26) = 0x8000000000000000;
    *(long *)(puVar13 + 6) = lVar11;
    *(long *)(puVar13 + 4) = lVar10;
    *(undefined8 *)(puVar13 + 8) = 0;
    *(undefined8 *)(puVar13 + 10) = 0;
    *(undefined8 *)(puVar13 + 0xf) = 0x100000000;
    *param_1 = 0;
  }
  if (plVar8[1] != 0) {
    plVar2 = plVar8 + 2;
    do {
      lVar10 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8);
    }
  }
  return;
}


