/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d79a28; name: FUN_00d79a28
 */


void FUN_00d79a28(long param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  code *pcVar13;
  bool bVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  bool *local_d0 [12];
  bool local_6c [4];
  undefined8 local_68;
  
  if ((*(char *)(param_1 + 0x448) == '\x02') &&
     (local_6c[0] = *(bool *)(param_1 + 0x44a), local_6c[0] != false)) {
    local_d0[0] = local_6c;
    puVar17 = *(undefined8 **)(param_1 + 0x1f0);
    puVar18 = *(undefined8 **)(param_1 + 0x1f8);
    if (puVar17 != puVar18) {
      local_68 = *puVar17;
      FUN_00d79e58(local_d0,&local_68);
      while (puVar17 = puVar17 + 1, puVar17 != puVar18) {
        local_68 = *puVar17;
        FUN_00d79e58(local_d0,&local_68);
      }
    }
    FUN_02b522a4(local_d0);
    if (((local_6c[0] != false) && (*(char *)(param_1 + 1099) == '\0')) &&
       ((*(char *)(param_1 + 0x450) == '\0' || (*(char *)(param_1 + 0x440) == '\x02')))) {
      plVar15 = (long *)(param_1 + 0x40);
      uVar9 = (**(code **)(*plVar15 + 0x70))(plVar15);
      if ((uVar9 & 1) == 0) {
        plVar19 = (long *)(param_1 + 0x48);
        lVar16 = *plVar19;
        lVar10 = nn::os::GetCurrentThread();
        if (lVar10 != lVar16) {
          lVar10 = nn::os::GetCurrentThread();
LAB_00d79bd8:
          if (*plVar19 == 0) goto code_r0x00d79be0;
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
          do {
            if (*plVar19 != 0) {
              do {
                ClearExclusiveLocal();
                nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x50));
                while (*plVar19 == 0) {
                  cVar3 = '\x01';
                  bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar14) {
                    *plVar19 = lVar10;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') goto LAB_00d79be8;
                }
              } while( true );
            }
            cVar3 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar14) {
              *plVar19 = lVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_00d79be8:
          bVar14 = false;
          goto LAB_00d79bec;
        }
        plVar19 = (long *)0x0;
        bVar14 = true;
LAB_00d79bec:
        puVar7 = PTR_DAT_047d39c0;
        puVar6 = PTR_DAT_047d39b8;
        puVar5 = PTR_DAT_047d39b0;
        plVar2 = *(long **)(param_1 + 0x68);
        for (plVar1 = *(long **)(param_1 + 0x60); plVar1 != plVar2; plVar1 = plVar1 + 1) {
          lVar10 = *plVar1;
          if (((*(byte *)(lVar10 + 0x438) >> 1 & 1) != 0) ||
             ((*(char *)(lVar10 + 0x430) == '\0' &&
              ((*(long *)(lVar10 + 0x128) != *(long *)(lVar10 + 0x130) ||
               (*(char *)(lVar10 + 0x7c2) != '\0')))))) {
LAB_00d79d28:
            bVar4 = false;
            goto LAB_00d79d2c;
          }
          if ((*(long *)(lVar10 + 0x5a0) != 0) &&
             (puVar17 = *(undefined8 **)(*(long *)(lVar10 + 0x5a0) + 0x10),
             puVar17 != (undefined8 *)0x0)) {
            plVar11 = (long *)(**(code **)*puVar17)();
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
                *(undefined8 *)PTR_DAT_047d39c8 = 0;
                __cxa_guard_release(puVar7);
              }
              *(undefined **)puVar6 = PTR_DAT_047d39c8;
              __cxa_guard_release(puVar5);
            }
            for (; plVar11 != (long *)0x0; plVar11 = (long *)*plVar11) {
              if (plVar11 == (long *)puVar6) {
                if (((*(long **)(lVar10 + 0x5b0) != (long *)0x0) &&
                    (*(long **)(lVar10 + 0x5b0) != plVar15)) &&
                   (uVar9 = FUN_00d79ebc(), (uVar9 & 1) == 0)) goto LAB_00d79d28;
                break;
              }
            }
          }
        }
        bVar4 = true;
LAB_00d79d2c:
        if (!bVar14) {
          *plVar19 = 0;
          nn::os::SignalLightEvent((LightEventType *)(plVar19 + 1));
        }
        local_6c[0] = bVar4;
        if (!bVar4) {
          return;
        }
      }
      else {
        local_6c[0] = true;
      }
      plVar15 = (long *)(param_1 + 0x370);
      lVar16 = *plVar15;
      lVar10 = nn::os::GetCurrentThread();
      if (lVar10 != lVar16) {
        lVar10 = nn::os::GetCurrentThread();
LAB_00d79b70:
        if (*plVar15 == 0) goto code_r0x00d79b78;
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x378));
        do {
          if (*plVar15 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x378));
              while (*plVar15 == 0) {
                cVar3 = '\x01';
                bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar14) {
                  *plVar15 = lVar10;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') goto LAB_00d79b80;
              }
            } while( true );
          }
          cVar3 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar14) {
            *plVar15 = lVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
LAB_00d79b80:
        bVar14 = false;
        goto LAB_00d79b84;
      }
      plVar15 = (long *)0x0;
      bVar14 = true;
LAB_00d79b84:
      puVar17 = *(undefined8 **)(param_1 + 0x388);
      puVar18 = *(undefined8 **)(param_1 + 0x390);
      if (puVar17 != puVar18) {
        pcVar13 = (code *)*puVar17;
        puVar12 = puVar17 + 4;
        while( true ) {
          puVar20 = puVar17 + 0x10;
          (*pcVar13)(puVar12);
          if (puVar20 == puVar18) break;
          puVar12 = puVar17 + 0x14;
          pcVar13 = (code *)*puVar20;
          puVar17 = puVar20;
        }
        puVar17 = *(undefined8 **)(param_1 + 0x388);
        puVar18 = *(undefined8 **)(param_1 + 0x390);
        if (puVar18 != puVar17) {
          pcVar13 = (code *)puVar18[-0xf];
          puVar12 = puVar18 + -0x10;
          if (pcVar13 != (code *)0x0) {
            puVar18[-0xe] = 0;
            puVar18[-0xd] = 0;
            *puVar12 = 0;
            puVar18[-0xf] = 0;
            (*pcVar13)(puVar18 + -0xc);
          }
          while (puVar18 = puVar12, puVar18 != puVar17) {
            pcVar13 = (code *)puVar18[-0xf];
            puVar12 = puVar18 + -0x10;
            if (pcVar13 != (code *)0x0) {
              puVar18[-0xe] = 0;
              puVar18[-0xd] = 0;
              puVar18[-0x10] = 0;
              puVar18[-0xf] = 0;
              (*pcVar13)(puVar18 + -0xc);
            }
          }
        }
      }
      *(undefined8 **)(param_1 + 0x390) = puVar17;
      if (!bVar14) {
        *plVar15 = 0;
        nn::os::SignalLightEvent((LightEventType *)(plVar15 + 1));
      }
      if (local_6c[0] != false) {
        *(undefined1 *)(param_1 + 0x448) = 3;
      }
    }
  }
  return;
code_r0x00d79be0:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar19,0x10);
  if (bVar14) {
    *plVar19 = lVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00d79be8;
  goto LAB_00d79bd8;
code_r0x00d79b78:
  cVar3 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar15,0x10);
  if (bVar14) {
    *plVar15 = lVar10;
    cVar3 = ExclusiveMonitorsStatus();
  }
  if (cVar3 == '\0') goto LAB_00d79b80;
  goto LAB_00d79b70;
}


