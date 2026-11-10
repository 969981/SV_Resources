/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f77684; name: FUN_00f77684
 */


long FUN_00f77684(long param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  ulong uVar15;
  bool bVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong *puVar21;
  long lVar22;
  ulong uVar23;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined4 local_70;
  long local_68;
  
  plVar1 = (long *)(param_1 + 0x10);
  lVar11 = nn::os::GetCurrentThread();
  while (*plVar1 == 0 && *(long *)(param_1 + 0x18) == 0) {
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar11;
      *(undefined8 *)(param_1 + 0x18) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_00f776d4;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x18) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x20));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x18) == 0) {
          cVar7 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar16) {
            *plVar1 = lVar11;
            *(undefined8 *)(param_1 + 0x18) = 0;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00f776d4;
        }
      } while( true );
    }
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar11;
      *(undefined8 *)(param_1 + 0x18) = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00f776d4:
  puVar8 = PTR_DAT_047d8c20;
  puVar21 = (ulong *)*param_2;
  if ((ulong *)*param_3 != puVar21) {
    do {
      lVar22 = *param_4;
      lVar11 = *(long *)(lVar22 + 800);
      if (lVar11 == 0) {
LAB_00f778fc:
        if (((*PTR_DAT_047d8c18 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c18), iVar10 != 0)) {
          if (((*PTR_DAT_047d8c28 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar10 != 0)) {
            local_98 = (long *)FUN_00d44228();
            puVar9 = PTR_DAT_047d8c30;
            FUN_00d1e764(PTR_DAT_047d8c30,&local_98);
            FUN_00100190(PTR_LAB_047d9240,puVar9,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d8c28);
          }
          FUN_01db7420(puVar8,PTR_DAT_047d8c30,0);
          FUN_00100190(PTR_FUN_047dc9f0,puVar8,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d8c18);
        }
        local_98 = *(long **)puVar8;
        if (local_98 != (long *)0x0) {
          (**(code **)(*local_98 + 0x18))();
        }
        local_90 = *(undefined8 *)(puVar8 + 8);
        uStack_88 = *(undefined8 *)(puVar8 + 0x10);
        local_80 = *(undefined8 *)(puVar8 + 0x18);
        local_78 = *(long **)(puVar8 + 0x20);
        if (local_78 != (long *)0x0) {
          (**(code **)(*local_78 + 0x18))();
        }
        local_70 = *(undefined4 *)(puVar8 + 0x28);
      }
      else {
        uVar23 = *puVar21;
        if ((*(long *)(lVar11 + 8) == 0) || ((*(byte *)(*(long *)(lVar11 + 8) + 0x1e8) & 1) == 0)) {
          piVar14 = (int *)0x0;
        }
        else {
          puVar12 = (uint *)(**(code **)(**(long **)(lVar11 + 8) + 0x70))();
          piVar14 = (int *)((long)puVar12 + (ulong)*puVar12);
        }
        if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
           (uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar15 == 0)) {
          puVar12 = (uint *)0x0;
        }
        else {
          puVar12 = (uint *)((long)piVar14 + uVar15);
          puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
        }
        lVar11 = *(long *)(*(long *)(lVar22 + 800) + 8);
        if ((lVar11 == 0) || ((*(byte *)(lVar11 + 0x1e8) & 1) == 0)) {
          piVar14 = (int *)0x0;
        }
        else {
          puVar13 = (uint *)(**(code **)(**(long **)(*(long *)(lVar22 + 800) + 8) + 0x70))();
          piVar14 = (int *)((long)puVar13 + (ulong)*puVar13);
        }
        if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 9) ||
           (uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[4], uVar15 == 0)) {
          lVar11 = 0;
        }
        else {
          puVar13 = (uint *)((long)piVar14 + uVar15);
          lVar11 = (long)puVar13 + (ulong)*puVar13;
        }
        puVar20 = (ulong *)(puVar12 + 1);
        uVar15 = (ulong)*puVar12;
        puVar2 = puVar20 + uVar15;
        if (uVar15 == 0) {
          puVar18 = puVar20;
        }
        else {
          puVar17 = puVar20;
          do {
            uVar19 = uVar15 >> 1;
            puVar18 = puVar17 + uVar19 + 1;
            uVar15 = uVar15 + (uVar15 >> 1 ^ 0xffffffffffffffff);
            if (uVar23 <= puVar17[uVar19]) {
              puVar18 = puVar17;
              uVar15 = uVar19;
            }
            puVar17 = puVar18;
          } while (uVar15 != 0);
        }
        if ((puVar18 == puVar2) || (*puVar18 != uVar23)) goto LAB_00f778fc;
        puVar12 = (uint *)(lVar11 + ((ulong)((long)puVar18 - (long)puVar20) >> 3 & 0xffffffff) * 4 +
                          4);
        piVar14 = (int *)((long)puVar12 + (ulong)*puVar12);
        if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 5) ||
           (uVar23 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[2], uVar23 == 0)) {
          uVar23 = 0;
        }
        else {
          uVar23 = (ulong)*(uint *)((long)piVar14 + uVar23);
        }
        puVar12 = (uint *)(**(code **)(**(long **)(*(long *)(lVar22 + 800) + 8) + 0x70))();
        piVar14 = (int *)((long)puVar12 + (ulong)*puVar12);
        puVar12 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (6 - (long)*piVar14)))
        ;
        puVar12 = (uint *)((long)puVar12 + uVar23 * 4 + (ulong)*puVar12 + 4);
        local_68 = (long)puVar12 + (ulong)*puVar12;
        FUN_00cf95c4(&local_98,&local_68);
      }
      FUN_00f77b58(param_1,&local_98);
      if (local_78 != (long *)0x0) {
        (**(code **)(*local_78 + 0x20))();
      }
      if (local_98 != (long *)0x0) {
        (**(code **)(*local_98 + 0x20))();
      }
      puVar21 = puVar21 + 1;
    } while ((ulong *)*param_3 != puVar21);
  }
  lVar11 = *(long *)(param_1 + 0x3b8);
  lVar22 = *(long *)(param_1 + 0x3b0);
  do {
    lVar5 = *plVar1;
    lVar6 = *(long *)(param_1 + 0x18);
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x18) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  do {
    lVar3 = *plVar1;
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar3 != lVar5 || lVar4 != lVar6) {
      bVar16 = false;
      ClearExclusiveLocal();
      goto LAB_00f779e0;
    }
    cVar7 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar16) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x14) = lVar6;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  bVar16 = true;
LAB_00f779e0:
  if (!bVar16) {
    do {
      lVar5 = *plVar1;
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar5 != lVar3 || lVar6 != lVar4) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto joined_r0x00f77ac4;
      }
      cVar7 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar16) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x14) = lVar4;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    bVar16 = true;
joined_r0x00f77ac4:
    if (!bVar16) {
      do {
        lVar3 = *plVar1;
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar3 != lVar5 || lVar4 != lVar6) {
          bVar16 = false;
          ClearExclusiveLocal();
          lVar5 = lVar3;
          lVar6 = lVar4;
          goto joined_r0x00f77ac4;
        }
        cVar7 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar16) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x14) = lVar6;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      bVar16 = true;
      lVar5 = lVar3;
      lVar6 = lVar4;
      goto joined_r0x00f77ac4;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x20));
  return (lVar11 - lVar22 >> 3) * -0x71c71c71c71c71c7;
}


