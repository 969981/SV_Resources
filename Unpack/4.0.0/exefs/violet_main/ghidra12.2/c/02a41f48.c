/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a41f48; name: FUN_02a41f48
 */


undefined8 FUN_02a41f48(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 local_70;
  long lStack_68;
  
  uVar6 = (**(code **)(*param_1 + 0x70))();
  if ((uVar6 & 1) == 0) {
    plVar13 = param_1 + 1;
    lVar11 = *plVar13;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar11) {
      plVar13 = (long *)0x0;
      bVar9 = true;
    }
    else {
      lVar7 = nn::os::GetCurrentThread();
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 2));
            while (*plVar13 == 0) {
              cVar2 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar9) {
                *plVar13 = lVar7;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                bVar9 = false;
                goto LAB_02a41fb4;
              }
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar9) {
          *plVar13 = lVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        bVar9 = false;
      } while (cVar2 != '\0');
    }
LAB_02a41fb4:
    puVar4 = PTR_DAT_047d39b8;
    puVar3 = PTR_DAT_047d39b0;
    puVar14 = (undefined8 *)param_1[4];
    puVar1 = (undefined8 *)param_1[5];
    uVar10 = 1;
    if (puVar14 != puVar1) {
      do {
        plVar12 = (long *)*puVar14;
        puVar8 = (undefined8 *)*param_2;
        lVar7 = param_2[1];
        if ((((*(byte *)(plVar12 + 0x87) >> 1 & 1) != 0) ||
            (((char)plVar12[0x86] == '\0' &&
             ((plVar12[0x25] != plVar12[0x26] || (*(char *)((long)plVar12 + 0x7c2) != '\0')))))) &&
           (uVar6 = (**(code **)(*plVar12 + 0xd8))(plVar12), (uVar6 & 1) == 0)) {
          lVar11 = FUN_02a41dd8(plVar12 + 0x21);
          if (lVar11 == 0) {
LAB_02a4213c:
            uVar10 = 0;
            goto LAB_02a42144;
          }
          *(undefined1 *)*puVar8 = 1;
        }
        if ((plVar12[0xb4] != 0) &&
           (puVar8 = *(undefined8 **)(plVar12[0xb4] + 0x10), puVar8 != (undefined8 *)0x0)) {
          puVar8 = (undefined8 *)(**(code **)*puVar8)();
          if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
            if (((*PTR_DAT_047d39c0 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar5 != 0)) {
              *(undefined8 *)PTR_DAT_047d39c8 = 0;
              __cxa_guard_release(PTR_DAT_047d39c0);
            }
            *(undefined **)puVar4 = PTR_DAT_047d39c8;
            __cxa_guard_release(puVar3);
          }
          for (; puVar8 != (undefined8 *)0x0; puVar8 = (undefined8 *)*puVar8) {
            if (puVar8 == (undefined8 *)puVar4) {
              lVar11 = plVar12[0xb6];
              if ((lVar11 != 0) && (lVar11 != lVar7)) {
                local_70 = *param_2;
                lStack_68 = lVar11;
                uVar6 = FUN_02a41f48(lVar11,&local_70);
                if ((uVar6 & 1) == 0) goto LAB_02a4213c;
              }
              break;
            }
          }
        }
        puVar14 = puVar14 + 1;
      } while (puVar14 != puVar1);
      uVar10 = 1;
    }
LAB_02a42144:
    if (!bVar9) {
      *plVar13 = 0;
      nn::os::SignalLightEvent((LightEventType *)(plVar13 + 1));
    }
  }
  else {
    uVar10 = 1;
  }
  return uVar10;
}


