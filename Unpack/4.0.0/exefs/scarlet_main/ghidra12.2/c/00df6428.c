/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00df6428; name: FUN_00df6428
 */


void FUN_00df6428(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,
                 undefined1 param_4 [16],long param_5,int *param_6)

{
  char *__s;
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  ushort uVar12;
  byte *pbVar13;
  ushort *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  float fVar22;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 *local_d0;
  char *pcStack_c8;
  size_t local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 uStack_70;
  
  uVar25 = param_4._4_4_;
  uVar24 = param_4._0_4_;
  puVar14 = (ushort *)((long)param_6 - (long)*param_6);
  uVar12 = *puVar14;
  if (uVar12 < 0x13) {
    return;
  }
  uVar15 = (ulong)puVar14[9];
  lVar11 = -(long)*param_6;
  if (uVar15 != 0) {
    uVar16 = (ulong)*(uint *)((long)param_6 + uVar15);
    puVar20 = (uint *)((long)((long)param_6 + uVar15) + uVar16);
    puVar19 = puVar20 + 1;
    uVar17 = (ulong)*puVar20;
    if (uVar17 != 0) {
      puVar20 = puVar19 + uVar17;
      lVar11 = (long)param_6 + uVar16 + uVar15 + 9;
      do {
        uVar3 = *puVar19;
        piVar1 = (int *)((long)puVar19 + (ulong)uVar3);
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
           (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar15 == 0)) {
          lVar9 = 0;
        }
        else {
          puVar21 = (uint *)((long)piVar1 + uVar15);
          lVar9 = (long)puVar21 + (ulong)*puVar21;
        }
        FUN_00df61a4(lVar9);
        local_d0 = (undefined1 *)CONCAT44(extraout_var,extraout_s0);
        pcStack_c8 = (char *)extraout_var_01;
        local_c0 = param_2;
        local_b0 = param_3;
        FUN_00dfcd7c(&local_d0);
        local_a0 = (undefined1 *)CONCAT44(extraout_var_00,extraout_s0_00);
        uStack_70 = CONCAT44(uVar25,uVar24);
        uStack_98 = extraout_var_02;
        uStack_90 = param_2;
        local_80 = param_3;
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
           (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar15 == 0)) {
          if (((*PTR_DAT_047d3e28 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3e28);
          }
          local_d0 = *(undefined1 **)PTR_DAT_047d3e30;
          pcStack_c8 = *(char **)(PTR_DAT_047d3e30 + 8);
          local_c0 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
          local_b8 = *(long **)(PTR_DAT_047d3e30 + 0x18);
          if (local_b8 != (long *)0x0) {
            (**(code **)(*local_b8 + 0x18))();
          }
        }
        else {
          puVar21 = (uint *)((long)piVar1 + uVar15);
          uVar16 = (ulong)*puVar21;
          __s = (char *)((long)puVar21 + uVar16 + 4);
          local_c0 = strlen(__s);
          bVar4 = *(byte *)((long)puVar21 + uVar16 + 4);
          if (bVar4 == 0) {
            local_d0 = &DAT_cbf29ce484222645;
          }
          else {
            local_d0 = &DAT_cbf29ce484222645;
            pbVar13 = (byte *)(lVar11 + uVar16 + uVar15 + (ulong)uVar3);
            do {
              local_d0 = (undefined1 *)(((ulong)local_d0 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            } while (bVar4 != 0);
          }
          local_b8 = (long *)0x0;
          pcStack_c8 = __s;
        }
        if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
           (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar15 == 0)) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(undefined4 *)((long)piVar1 + uVar15);
        }
        FUN_011f87e8(param_5,&local_d0,uVar10,&local_a0,1);
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        puVar19 = puVar19 + 1;
        lVar11 = lVar11 + 4;
      } while (puVar19 != puVar20);
      lVar11 = -(long)*param_6;
      uVar12 = *(ushort *)((long)param_6 - (long)*param_6);
    }
  }
  puVar6 = PTR_DAT_047d4e08;
  puVar5 = PTR_DAT_047d4e00;
  if (uVar12 < 0x15) {
    return;
  }
  uVar15 = (ulong)*(ushort *)((long)param_6 + lVar11 + 0x14);
  if (uVar15 != 0) {
    uVar16 = (ulong)*(uint *)((long)param_6 + uVar15);
    puVar19 = (uint *)((long)((long)param_6 + uVar15) + uVar16);
    puVar20 = puVar19 + 1;
    uVar17 = (ulong)*puVar19;
    if (uVar17 != 0) {
      lVar11 = (long)param_6 + uVar16 + uVar15 + 9;
      puVar19 = puVar20;
      do {
        puVar21 = puVar19 + 1;
        bVar4 = *(byte *)((long)puVar21 + (ulong)*puVar19);
        if (bVar4 != 0) {
          puVar18 = &DAT_cbf29ce484222645;
          pbVar13 = (byte *)(lVar11 + (ulong)*puVar19);
          do {
            puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar4) * 0x100000001b3);
            bVar4 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar4 != 0);
          uStack_98 = CONCAT71(uStack_98._1_7_,1);
          local_a0 = puVar18;
          FUN_00df6b40(param_5 + 0x780,&local_a0);
          if (((*PTR_DAT_047d4df8 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d4df8), iVar7 != 0)) {
            FUN_00100190(PTR_LAB_047d4e10,puVar5,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d4df8);
          }
          uVar8 = *(undefined8 *)puVar5;
          *(undefined8 *)puVar6 = uVar8;
          FUN_00df6864(uVar8,puVar18,param_5);
        }
        lVar11 = lVar11 + 4;
        puVar19 = puVar21;
      } while (puVar21 != puVar20 + uVar17);
      lVar11 = -(long)*param_6;
      uVar12 = *(ushort *)((long)param_6 - (long)*param_6);
    }
  }
  if (uVar12 < 0x17) {
    return;
  }
  uVar15 = (ulong)*(ushort *)((long)param_6 + lVar11 + 0x16);
  if (uVar15 == 0) {
    return;
  }
  puVar19 = (uint *)((long)param_6 + uVar15);
  piVar1 = (int *)((long)puVar19 + (ulong)*puVar19);
  puVar14 = (ushort *)((long)piVar1 - (long)*piVar1);
  if (*puVar14 < 5) {
    uVar8 = 0;
    uVar15 = 0;
  }
  else {
    if ((ulong)puVar14[2] == 0) {
      uVar8 = 0;
      uVar15 = 0;
    }
    else {
      puVar2 = (undefined8 *)((long)piVar1 + (ulong)puVar14[2]);
      uVar8 = *puVar2;
      uVar15 = (ulong)*(uint *)(puVar2 + 1);
    }
    if ((6 < *puVar14) && ((ulong)puVar14[3] != 0)) {
      fVar23 = *(float *)((long)piVar1 + (ulong)puVar14[3]);
      goto LAB_00df65e8;
    }
  }
  fVar23 = 0.0;
LAB_00df65e8:
  fVar26 = 1.0;
  if (0.0 <= fVar23) {
    fVar26 = 0.0;
  }
  fVar22 = 1.0;
  if (0.0 > fVar23) {
    fVar22 = 0.0;
  }
  *(ulong *)(param_5 + 0x7a8) = uVar15;
  *(undefined8 *)(param_5 + 0x7a0) = uVar8;
  *(float *)(param_5 + 0x7b0) = fVar23 * fVar22 - fVar23 * fVar26;
  return;
}


