/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00a585d0; name: FUN_00a585d0
 */


ulong FUN_00a585d0(ulong *param_1,ulong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  int *piVar9;
  uint uVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  byte *pbVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  int local_12c;
  ulong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  
  lVar11 = (long)param_2 - (long)param_1 >> 3;
  if ((ulong)(lVar11 * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00a58630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (*(code *)(&UNK_00a58634 +
                      (ulong)*(ushort *)(&DAT_03d2fe82 + lVar11 * 0x5555555555555556) * 4))(1);
    return uVar7;
  }
  FUN_00a57230(param_1,param_1 + 3,param_1 + 6,param_3);
  puVar4 = PTR_DAT_047d7440;
  puVar3 = PTR_DAT_047d7438;
  if (param_1 + 9 != param_2) {
    local_12c = 0;
    lVar11 = 0;
    puVar13 = param_1 + 9;
    puVar15 = param_1 + 6;
    pbVar14 = PTR_DAT_047d7430;
    do {
      puVar12 = puVar13;
      local_c8 = *puVar12;
      local_c0 = puVar12[1];
      uStack_b8 = puVar12[2];
      uStack_d0 = puVar15[2];
      local_e0 = *puVar15;
      local_d8 = puVar15[1];
      uVar10 = (uint)local_c8;
      auVar18 = FUN_00a65480(&local_c8,*(undefined4 *)*param_3);
      uVar7 = auVar18._0_8_ >> 0x20;
      if (((*pbVar14 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(pbVar14,auVar18._8_8_,uVar7), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d7448,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(pbVar14);
      }
      uVar8 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar8;
      piVar9 = (int *)FUN_00e9d320(uVar8,uVar10 & 0xffff,uVar7);
      uVar1 = *(ushort *)
               ((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
      uVar16 = local_e0 & 0xffff;
      auVar18 = FUN_00a65480(&local_e0,*(undefined4 *)*param_3);
      uVar7 = auVar18._0_8_ >> 0x20;
      if (((*pbVar14 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430,auVar18._8_8_,uVar7), iVar6 != 0)) {
        FUN_00100190(PTR_LAB_047d7448,puVar3,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d7430);
      }
      uVar8 = *(undefined8 *)puVar3;
      *(undefined8 *)puVar4 = uVar8;
      piVar9 = (int *)FUN_00e9d320(uVar8,uVar16,uVar7);
      pbVar14 = PTR_DAT_047d7430;
      uVar2 = *(ushort *)
               ((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
      if (uVar2 < uVar1) {
LAB_00a58878:
        local_80 = *puVar12;
        local_78 = puVar12[1];
        local_70 = puVar12[2];
        uVar7 = puVar15[2];
        uVar16 = *puVar15;
        puVar12[1] = puVar15[1];
        puVar12[2] = uVar7;
        *puVar12 = uVar16;
        puVar13 = param_1;
        if (puVar15 != param_1) {
          puVar13 = puVar15;
          lVar17 = lVar11;
          do {
            uVar10 = (uint)local_80;
            local_f8 = local_80;
            uStack_f0 = local_78;
            local_e8 = local_70;
            puVar15 = (ulong *)((long)param_1 + lVar17 + 0x18);
            local_110 = *puVar15;
            local_108 = *(undefined8 *)((long)param_1 + lVar17 + 0x20);
            uStack_100 = *(undefined8 *)((long)param_1 + lVar17 + 0x28);
            uVar7 = FUN_00a65480(&local_f8,*(undefined4 *)*param_3);
            if (((*pbVar14 & 1) == 0) && (iVar6 = __cxa_guard_acquire(pbVar14), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d7448,puVar3,&PTR_LOOP_04483000);
              __cxa_guard_release(pbVar14);
            }
            uVar8 = *(undefined8 *)puVar3;
            *(undefined8 *)puVar4 = uVar8;
            piVar9 = (int *)FUN_00e9d320(uVar8,uVar10 & 0xffff,uVar7 >> 0x20);
            uVar1 = *(ushort *)
                     ((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
            uVar16 = local_110 & 0xffff;
            uVar7 = FUN_00a65480(&local_110,*(undefined4 *)*param_3);
            if (((*pbVar14 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar6 != 0)
               ) {
              FUN_00100190(PTR_LAB_047d7448,puVar3,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d7430);
            }
            uVar8 = *(undefined8 *)puVar3;
            *(undefined8 *)puVar4 = uVar8;
            piVar9 = (int *)FUN_00e9d320(uVar8,uVar16,uVar7 >> 0x20);
            pbVar14 = PTR_DAT_047d7430;
            uVar2 = *(ushort *)
                     ((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)) + 10);
            if (uVar1 <= uVar2) {
              if (uVar1 != uVar2) {
                puVar13 = (ulong *)((long)param_1 + lVar17 + 0x30);
                goto LAB_00a58a70;
              }
              if ((ushort)local_110 <= (ushort)local_f8) goto LAB_00a58a70;
            }
            *(undefined8 *)((long)param_1 + lVar17 + 0x38) =
                 *(undefined8 *)((long)param_1 + lVar17 + 0x20);
            *(undefined8 *)((long)param_1 + lVar17 + 0x40) =
                 *(undefined8 *)((long)param_1 + lVar17 + 0x28);
            puVar13 = puVar13 + -3;
            bVar5 = lVar17 != -0x18;
            *(ulong *)((long)param_1 + lVar17 + 0x30) = *puVar15;
            lVar17 = lVar17 + -0x18;
          } while (bVar5);
          puVar13 = param_1;
        }
LAB_00a58a70:
        puVar13[1] = local_78;
        puVar13[2] = local_70;
        *puVar13 = local_80;
        local_12c = local_12c + 1;
        if (local_12c == 8) {
          return (ulong)(puVar12 + 3 == param_2);
        }
      }
      else if (uVar1 == uVar2) {
        if ((ushort)local_c8 < (ushort)local_e0) goto LAB_00a58878;
      }
      lVar11 = lVar11 + 0x18;
      puVar13 = puVar12 + 3;
      puVar15 = puVar12;
    } while (puVar12 + 3 != param_2);
  }
  return 1;
}


