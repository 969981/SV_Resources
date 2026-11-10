/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270c570; name: FUN_0270c570
 */


void FUN_0270c570(long param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  uint *puVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *local_470;
  long *local_468;
  long *local_460;
  long *local_290;
  long *local_288;
  undefined1 auStack_280 [88];
  long *local_228;
  undefined1 auStack_220 [432];
  long *local_70 [2];
  
  puVar8 = PTR_DAT_047d4250;
  puVar7 = PTR_DAT_047d4248;
  puVar6 = PTR_DAT_047d4240;
  if ((6 < *(ushort *)((long)param_2 - (long)*param_2)) &&
     (uVar13 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar13 != 0)) {
    uVar15 = (ulong)*(uint *)((long)param_2 + uVar13);
    uVar17 = (ulong)*(uint *)((long)((long)param_2 + uVar13) + uVar15);
    if (uVar17 != 0) {
      lVar1 = uVar15 + uVar13;
      lVar18 = 0;
      do {
        uVar13 = (ulong)*(uint *)((long)param_2 + lVar18 + lVar1 + 4);
        FUN_0270cdcc(&local_470,param_3);
        lVar2 = lVar18 + uVar13 + lVar1;
        lVar16 = lVar18 + (uVar13 - (long)*(int *)((long)param_2 + lVar2 + 4)) + lVar1;
        if ((*(ushort *)((long)param_2 + lVar16 + 4) < 5) ||
           (uVar15 = (ulong)*(ushort *)((long)param_2 + lVar16 + 8), uVar15 == 0)) {
          lVar16 = 0;
        }
        else {
          lVar16 = uVar13 + uVar15;
          lVar16 = (long)param_2 +
                   lVar18 + lVar16 + (ulong)*(uint *)((long)param_2 + lVar18 + lVar16 + lVar1 + 4) +
                   lVar1 + 4;
        }
        if (*(char *)(lVar16 + 4) == '\0') {
          plVar12 = (long *)FUN_00d44228();
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
        else {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          uVar11 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar8 = uVar11;
          FUN_00cf9884(local_70,uVar11,(char *)(lVar16 + 4));
          plVar12 = local_70[0];
        }
        plVar9 = local_470;
        local_470 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))();
        }
        lVar16 = lVar18 + (uVar13 - (long)*(int *)((long)param_2 + lVar2 + 4)) + lVar1;
        if ((*(ushort *)((long)param_2 + lVar16 + 4) < 7) ||
           (uVar15 = (ulong)*(ushort *)((long)param_2 + lVar16 + 10), uVar15 == 0)) {
          lVar16 = 0;
        }
        else {
          lVar16 = uVar13 + uVar15;
          lVar16 = (long)param_2 +
                   lVar18 + lVar16 + (ulong)*(uint *)((long)param_2 + lVar18 + lVar16 + lVar1 + 4) +
                   lVar1 + 4;
        }
        local_470 = plVar12;
        if (*(char *)(lVar16 + 4) == '\0') {
          plVar12 = (long *)FUN_00d44228();
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
        else {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          uVar11 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar8 = uVar11;
          FUN_00cf9884(local_70,uVar11,(char *)(lVar16 + 4));
          plVar12 = local_70[0];
        }
        plVar9 = local_468;
        local_468 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))();
        }
        lVar16 = lVar18 + (uVar13 - (long)*(int *)((long)param_2 + lVar2 + 4)) + lVar1;
        if ((*(ushort *)((long)param_2 + lVar16 + 4) < 9) ||
           (uVar15 = (ulong)*(ushort *)((long)param_2 + lVar16 + 0xc), uVar15 == 0)) {
          lVar16 = 0;
        }
        else {
          lVar16 = uVar13 + uVar15;
          lVar16 = (long)param_2 +
                   lVar18 + lVar16 + (ulong)*(uint *)((long)param_2 + lVar18 + lVar16 + lVar1 + 4) +
                   lVar1 + 4;
        }
        local_468 = plVar12;
        if (*(char *)(lVar16 + 4) == '\0') {
          plVar12 = (long *)FUN_00d44228();
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
        else {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          uVar11 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar8 = uVar11;
          FUN_00cf9884(local_70,uVar11,(char *)(lVar16 + 4));
          plVar12 = local_70[0];
        }
        plVar9 = local_460;
        local_460 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))();
        }
        lVar16 = (long)*(int *)((long)param_2 + lVar2 + 4);
        lVar5 = lVar18 + (uVar13 - lVar16) + lVar1;
        uVar4 = *(ushort *)((long)param_2 + lVar5 + 4);
        local_460 = plVar12;
        if (uVar4 < 0xb) {
LAB_0270cb18:
          lVar16 = 0;
        }
        else {
          uVar15 = (ulong)*(ushort *)((long)param_2 + lVar5 + 0xe);
          if (uVar15 != 0) {
            lVar16 = uVar13 + uVar15;
            FUN_0270cecc(&local_470,
                         (long)param_2 +
                         lVar18 + lVar16 + (ulong)*(uint *)((long)param_2 +
                                                           lVar18 + lVar16 + lVar1 + 4) + lVar1 + 4)
            ;
            lVar16 = (long)*(int *)((long)param_2 + lVar2 + 4);
            uVar4 = *(ushort *)((long)param_2 + lVar18 + (uVar13 - lVar16) + lVar1 + 4);
          }
          if ((uVar4 < 0xd) ||
             (uVar15 = (ulong)*(ushort *)((long)param_2 + lVar18 + (uVar13 - lVar16) + lVar1 + 0x10)
             , uVar15 == 0)) goto LAB_0270cb18;
          lVar16 = uVar13 + uVar15;
          lVar16 = (long)param_2 +
                   lVar18 + lVar16 + (ulong)*(uint *)((long)param_2 + lVar18 + lVar16 + lVar1 + 4) +
                   lVar1 + 4;
        }
        if (*(char *)(lVar16 + 4) == '\0') {
          plVar12 = (long *)FUN_00d44228();
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
          }
        }
        else {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100190(PTR_LAB_047d4510,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          uVar11 = *(undefined8 *)puVar7;
          *(undefined8 *)puVar8 = uVar11;
          FUN_00cf9884(local_70,uVar11,(char *)(lVar16 + 4));
          plVar12 = local_70[0];
        }
        plVar9 = local_290;
        local_290 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x20))();
        }
        lVar16 = (long)*(int *)((long)param_2 + lVar2 + 4);
        lVar5 = lVar18 + (uVar13 - lVar16) + lVar1;
        uVar4 = *(ushort *)((long)param_2 + lVar5 + 4);
        local_290 = plVar12;
        if (0xe < uVar4) {
          uVar15 = (ulong)*(ushort *)((long)param_2 + lVar5 + 0x12);
          if (uVar15 != 0) {
            lVar16 = uVar13 + uVar15;
            lVar16 = lVar16 + (ulong)*(uint *)((long)param_2 + lVar18 + lVar16 + lVar1 + 4);
            lVar5 = lVar18 + (lVar16 - *(int *)((long)param_2 + lVar18 + lVar16 + lVar1 + 4)) +
                             lVar1;
            if ((*(ushort *)((long)param_2 + lVar5 + 4) < 5) ||
               (uVar15 = (ulong)*(ushort *)((long)param_2 + lVar5 + 8), uVar15 == 0)) {
              lVar16 = 0;
            }
            else {
              lVar16 = lVar16 + uVar15;
              lVar16 = (long)param_2 +
                       lVar18 + lVar16 + (ulong)*(uint *)((long)param_2 +
                                                         lVar18 + lVar16 + lVar1 + 4) + lVar1 + 4;
            }
            if (*(char *)(lVar16 + 4) == '\0') {
              plVar12 = (long *)FUN_00d44228();
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
            }
            else {
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d4510,puVar7,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar6);
              }
              uVar11 = *(undefined8 *)puVar7;
              *(undefined8 *)puVar8 = uVar11;
              FUN_00cf9884(local_70,uVar11,(char *)(lVar16 + 4));
              plVar12 = local_70[0];
            }
            plVar9 = local_288;
            local_288 = (long *)0x0;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x20))();
            }
            lVar16 = lVar18 + (uVar13 - (long)*(int *)((long)param_2 + lVar2 + 4)) + lVar1;
            if (*(ushort *)((long)param_2 + lVar16 + 4) < 0xf) {
              piVar14 = (int *)0x0;
            }
            else {
              uVar15 = (ulong)*(ushort *)((long)param_2 + lVar16 + 0x12);
              piVar14 = (int *)0x0;
              if (uVar15 != 0) {
                lVar16 = uVar13 + uVar15;
                piVar14 = (int *)((long)param_2 +
                                 lVar18 + lVar16 + (ulong)*(uint *)((long)param_2 +
                                                                   lVar18 + lVar16 + lVar1 + 4) +
                                 lVar1 + 4);
              }
            }
            if ((*(ushort *)((long)piVar14 - (long)*piVar14) < 7) ||
               (uVar15 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[3], uVar15 == 0)) {
              lVar16 = 0;
            }
            else {
              puVar3 = (uint *)((long)piVar14 + uVar15);
              lVar16 = (long)puVar3 + (ulong)*puVar3;
            }
            local_288 = plVar12;
            FUN_0270d9d8(auStack_280,lVar16);
            lVar16 = (long)*(int *)((long)param_2 + lVar2 + 4);
            uVar4 = *(ushort *)((long)param_2 + lVar18 + (uVar13 - lVar16) + lVar1 + 4);
          }
          if ((0x10 < uVar4) &&
             (uVar15 = (ulong)*(ushort *)((long)param_2 + lVar18 + (uVar13 - lVar16) + lVar1 + 0x14)
             , uVar15 != 0)) {
            lVar16 = uVar13 + uVar15;
            lVar16 = lVar16 + (ulong)*(uint *)((long)param_2 + lVar18 + lVar16 + lVar1 + 4);
            lVar16 = lVar16 + (ulong)*(ushort *)
                                      ((long)param_2 +
                                      lVar18 + (lVar16 - *(int *)((long)param_2 +
                                                                 lVar18 + lVar16 + lVar1 + 4)) +
                                               lVar1 + 8);
            lVar16 = lVar16 + (ulong)*(uint *)((long)param_2 + lVar18 + lVar16 + lVar1 + 4);
            if (*(char *)((long)param_2 + lVar18 + lVar16 + lVar1 + 8) == '\0') {
              plVar12 = (long *)FUN_00d44228();
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
            }
            else {
              if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                FUN_00100190(PTR_LAB_047d4510,puVar7,&PTR_LOOP_04483000);
                __cxa_guard_release(puVar6);
              }
              uVar11 = *(undefined8 *)puVar7;
              *(undefined8 *)puVar8 = uVar11;
              FUN_00cf9884(local_70,uVar11,(long)param_2 + lVar18 + lVar16 + lVar1 + 8);
              plVar12 = local_70[0];
            }
            plVar9 = local_228;
            local_228 = (long *)0x0;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x20))();
            }
            lVar2 = uVar13 + *(ushort *)
                              ((long)param_2 +
                              lVar18 + (uVar13 - (long)*(int *)((long)param_2 + lVar2 + 4)) + lVar1
                              + 0x14);
            lVar2 = lVar2 + (ulong)*(uint *)((long)param_2 + lVar18 + lVar2 + lVar1 + 4);
            lVar16 = lVar18 + (lVar2 - *(int *)((long)param_2 + lVar18 + lVar2 + lVar1 + 4)) + lVar1
            ;
            local_228 = plVar12;
            if ((6 < *(ushort *)((long)param_2 + lVar16 + 4)) &&
               (uVar13 = (ulong)*(ushort *)((long)param_2 + lVar16 + 10), uVar13 != 0)) {
              lVar2 = lVar2 + uVar13;
              FUN_0270dabc(auStack_220,
                           (long)param_2 +
                           lVar18 + lVar2 + (ulong)*(uint *)((long)param_2 +
                                                            lVar18 + lVar2 + lVar1 + 4) + lVar1 + 4)
              ;
            }
          }
        }
        FUN_0270dbb8(param_1 + 0x210,&local_470);
        FUN_021b1728(&local_470);
        lVar18 = lVar18 + 4;
      } while (uVar17 * 4 != lVar18);
    }
  }
  return;
}


