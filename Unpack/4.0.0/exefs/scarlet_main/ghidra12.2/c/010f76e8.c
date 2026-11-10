/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010f76e8; name: FUN_010f76e8
 */


void FUN_010f76e8(long param_1,long *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  long local_a8;
  undefined8 *puStack_a0;
  uint *local_98;
  undefined1 **ppuStack_90;
  uint local_84;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  
  FUN_00eaabc4();
  plVar1 = (long *)(param_1 + 0x1b0);
  lVar7 = nn::os::GetCurrentThread();
  do {
    lVar9 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x1b8) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_010f7738:
  while ((lVar9 != 0 && (lVar7 != lVar9))) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1c0));
    do {
      lVar9 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x1b8);
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar9;
        *(long *)(param_1 + 0x1b8) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  do {
    lVar2 = *plVar1;
    if (lVar2 != lVar9 || *(long *)(param_1 + 0x1b8) != lVar10) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_010f7768;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar9;
      *(long *)(param_1 + 0x1b4) = lVar10 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_010f7768:
  if (!bVar8) {
    lVar9 = lVar2;
    lVar10 = *(long *)(param_1 + 0x1b8);
    goto LAB_010f7738;
  }
  if (**(char **)(param_4 + 8) == '\0') {
    uVar13 = (*(long *)(param_1 + 0xf8) - *(long *)(param_1 + 0xf0) >> 3) * 0xb6db6db7;
    if ((int)uVar13 != 0) {
      uVar17 = 0;
      plVar16 = (long *)(*(long *)(param_1 + 0xf0) + 0x10);
LAB_010f77bc:
      if (*plVar16 != *param_2) goto code_r0x010f77c8;
      pbStack_78 = (byte *)(**(code **)(*DAT_0485a020 + 0x30))(DAT_0485a020,param_3,plVar16[-2]);
      if (pbStack_78 == (byte *)0x0) {
        if (((*PTR_DAT_047d3e28 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
          FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3e28);
        }
        local_80 = *(undefined1 **)PTR_DAT_047d3e30;
        pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
        local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
        plVar16 = *(long **)(PTR_DAT_047d3e30 + 0x18);
        local_68 = plVar16;
        if (plVar16 != (long *)0x0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
      }
      else {
        local_70 = strlen((char *)pbStack_78);
        bVar4 = *pbStack_78;
        local_80 = &DAT_cbf29ce484222645;
        pbVar14 = pbStack_78;
        while (bVar4 != 0) {
          pbVar14 = pbVar14 + 1;
          local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar4) * 0x100000001b3);
          bVar4 = *pbVar14;
        }
        plVar16 = (long *)0x0;
        local_68 = (long *)0x0;
      }
      puVar15 = *(undefined8 **)(param_1 + 0x168);
      puVar3 = *(undefined8 **)(param_1 + 0x170);
      if (puVar15 != puVar3) {
        FUN_010f8584(*puVar15,uVar17 & 0xffffffff,&local_80);
        if (puVar15 + 1 != puVar3) {
          FUN_010f8584(puVar15[1],uVar17 & 0xffffffff,&local_80);
          for (puVar15 = puVar15 + 2; puVar15 != puVar3; puVar15 = puVar15 + 1) {
            FUN_010f8584(*puVar15,uVar17 & 0xffffffff,&local_80);
          }
        }
        plVar16 = local_68;
      }
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
  }
  else {
    local_84 = 0;
    lVar7 = *(long *)(param_1 + 0xf0);
    lVar9 = *(long *)(param_1 + 0xf8);
    if ((int)((ulong)(lVar9 - lVar7) >> 3) * -0x49249249 != 0) {
      uVar13 = 0;
      do {
        uVar12 = (uint)uVar13;
        if (*(long *)(lVar7 + uVar13 * 0x38 + 0x10) == *param_2) {
          pbVar14 = (byte *)(**(code **)(*DAT_0485a020 + 0x30))
                                      (DAT_0485a020,param_3,*(undefined8 *)(lVar7 + uVar13 * 0x38));
          if (pbVar14 == (byte *)0x0) {
            if (((*PTR_DAT_047d3e28 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
              FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3e28);
            }
            local_80 = *(undefined1 **)PTR_DAT_047d3e30;
            pbStack_78 = *(byte **)(PTR_DAT_047d3e30 + 8);
            local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
            local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x18))();
            }
          }
          else {
            local_70 = strlen((char *)pbVar14);
            bVar4 = *pbVar14;
            if (bVar4 == 0) {
              local_80 = &DAT_cbf29ce484222645;
            }
            else {
              local_80 = &DAT_cbf29ce484222645;
              pbVar11 = pbVar14;
              do {
                pbVar11 = pbVar11 + 1;
                local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar4) * 0x100000001b3);
                bVar4 = *pbVar11;
              } while (bVar4 != 0);
            }
            local_68 = (long *)0x0;
            pbStack_78 = pbVar14;
          }
          puVar3 = *(undefined8 **)(param_1 + 0x170);
          for (puVar15 = *(undefined8 **)(param_1 + 0x168); puVar15 != puVar3; puVar15 = puVar15 + 1
              ) {
            local_a8 = param_4;
            puStack_a0 = puVar15;
            local_98 = &local_84;
            ppuStack_90 = &local_80;
            FUN_010f88fc(*puVar15,local_84,&local_a8);
          }
          if (local_68 != (long *)0x0) {
            (**(code **)(*local_68 + 0x20))();
          }
          lVar7 = *(long *)(param_1 + 0xf0);
          lVar9 = *(long *)(param_1 + 0xf8);
          uVar12 = local_84;
        }
        local_84 = uVar12 + 1;
        uVar13 = (ulong)local_84;
      } while (local_84 < (uint)((int)((ulong)(lVar9 - lVar7) >> 3) * -0x49249249));
    }
  }
LAB_010f77d8:
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x1b8);
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b8) = lVar9;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    lVar10 = *plVar1;
    lVar2 = *(long *)(param_1 + 0x1b8);
    if (lVar10 != lVar7 || lVar2 != lVar9) {
      bVar8 = false;
      ClearExclusiveLocal();
      goto LAB_010f7814;
    }
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x1b4) = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar8 = true;
LAB_010f7814:
  if (!bVar8) {
    do {
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x1b8);
      if (lVar7 != lVar10 || lVar9 != lVar2) {
        bVar8 = false;
        ClearExclusiveLocal();
        goto joined_r0x010f794c;
      }
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *plVar1 = lVar10;
        *(long *)(param_1 + 0x1b4) = lVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar8 = true;
joined_r0x010f794c:
    if (!bVar8) {
      do {
        lVar10 = *plVar1;
        lVar2 = *(long *)(param_1 + 0x1b8);
        if (lVar10 != lVar7 || lVar2 != lVar9) {
          bVar8 = false;
          ClearExclusiveLocal();
          lVar7 = lVar10;
          lVar9 = lVar2;
          goto joined_r0x010f794c;
        }
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = lVar7;
          *(long *)(param_1 + 0x1b4) = lVar9 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar8 = true;
      lVar7 = lVar10;
      lVar9 = lVar2;
      goto joined_r0x010f794c;
    }
  }
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1c0));
  FUN_010f7c04(param_1);
  return;
code_r0x010f77c8:
  uVar17 = uVar17 + 1;
  plVar16 = plVar16 + 7;
  if ((uVar13 & 0xffffffff) == uVar17) goto LAB_010f77d8;
  goto LAB_010f77bc;
}


