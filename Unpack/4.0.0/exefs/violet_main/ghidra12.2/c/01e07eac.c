/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e07eac; name: FUN_01e07eac
 */


void FUN_01e07eac(byte *param_1,long *param_2)

{
  long *plVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  byte *local_68 [3];
  
  if (((DAT_04837608 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04837608), iVar7 != 0)) {
    FUN_00100190(&LAB_00a92af8,&DAT_048375f8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04837608);
  }
  lVar6 = DAT_048375f8;
  DAT_04837610 = DAT_048375f8;
  plVar1 = (long *)(DAT_048375f8 + 0x2d8);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar1 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01e07f78;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x2e0));
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x2e0));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01e07f78;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01e07f78:
  plVar1 = (long *)(lVar6 + 0x58);
  plVar9 = *(long **)(lVar6 + 0x50);
joined_r0x01e07f84:
  plVar5 = plVar9;
  if (plVar5 == plVar1) {
    *(undefined8 *)(lVar6 + 0x2d8) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x2e0));
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0xff;
    param_1[0x19] = 0xff;
    param_1[0x1a] = 0xff;
    param_1[0x1b] = 0xff;
    param_1[0x1c] = 0xff;
    param_1[0x1d] = 0xff;
    param_1[0x1e] = 0xff;
    param_1[0x1f] = 0xff;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x20] = 0xff;
    param_1[0x21] = 0xff;
    param_1[0x22] = 0x7f;
    param_1[0x23] = 0x7f;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    return;
  }
  pbVar2 = (byte *)(plVar5 + 4);
  plVar9 = plVar1;
  if ((long *)*plVar1 != (long *)0x0) {
    plVar14 = (long *)*plVar1;
    do {
      if (*pbVar2 < *(byte *)(plVar14 + 4)) {
        plVar11 = (long *)*plVar14;
        plVar9 = plVar14;
        if (plVar11 == (long *)0x0) {
          goto LAB_01e07fd4;
        }
      }
      else {
        if (*pbVar2 <= *(byte *)(plVar14 + 4)) goto LAB_01e07fd4;
        plVar9 = plVar14 + 1;
        plVar11 = (long *)*plVar9;
        if (plVar11 == (long *)0x0) goto LAB_01e07fd4;
      }
      plVar14 = plVar11;
    } while( true );
  }
  plVar14 = plVar1;
LAB_01e07fd4:
  puVar12 = (undefined8 *)*plVar9;
  if (puVar12 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)(lVar6 + 0x60);
    local_68[0] = pbVar2;
    puVar12 = (undefined8 *)(**(code **)(*(long *)*puVar13 + 0x10))((long *)*puVar13,0x60,8);
    if (puVar12 == (undefined8 *)0x0) {
      (**(code **)(*(long *)*puVar13 + 0xe8))();
    }
    FUN_00d75208(puVar13,puVar12 + 4,local_68);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = plVar14;
    *plVar9 = (long)puVar12;
    puVar13 = puVar12;
    if (**(long **)(lVar6 + 0x50) != 0) {
      *(long *)(lVar6 + 0x50) = **(long **)(lVar6 + 0x50);
      puVar13 = (undefined8 *)*plVar9;
    }
    FUN_010108e0(*(undefined8 *)(lVar6 + 0x58),puVar13);
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
  }
  puVar12 = puVar12 + 6;
  do {
    puVar12 = (undefined8 *)*puVar12;
    plVar9 = plVar1;
    if ((long *)*plVar1 != (long *)0x0) {
      plVar14 = (long *)*plVar1;
      do {
        if (*pbVar2 < *(byte *)(plVar14 + 4)) {
          plVar11 = (long *)*plVar14;
          plVar9 = plVar14;
          if (plVar11 == (long *)0x0) {
            goto LAB_01e0802c;
          }
        }
        else {
          if (*pbVar2 <= *(byte *)(plVar14 + 4)) goto LAB_01e0802c;
          plVar9 = plVar14 + 1;
          plVar11 = (long *)*plVar9;
          if (plVar11 == (long *)0x0) goto LAB_01e0802c;
        }
        plVar14 = plVar11;
      } while( true );
    }
    plVar14 = plVar1;
LAB_01e0802c:
    puVar13 = (undefined8 *)*plVar9;
    local_68[0] = pbVar2;
    if (puVar13 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)(lVar6 + 0x60);
      puVar13 = (undefined8 *)(**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,0x60,8);
      if (puVar13 == (undefined8 *)0x0) {
        (**(code **)(*(long *)*puVar10 + 0xe8))();
      }
      FUN_00d75208(puVar10,puVar13 + 4,local_68);
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = plVar14;
      *plVar9 = (long)puVar13;
      puVar10 = puVar13;
      if (**(long **)(lVar6 + 0x50) != 0) {
        *(long *)(lVar6 + 0x50) = **(long **)(lVar6 + 0x50);
        puVar10 = (undefined8 *)*plVar9;
      }
      FUN_010108e0(*(undefined8 *)(lVar6 + 0x58),puVar10);
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    }
    if (puVar12 == puVar13 + 5) break;
    if ((long *)puVar12[2] == (long *)0x0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)puVar12[2];
    }
    puVar12 = puVar12 + 1;
    if (lVar8 == *param_2) {
      *param_1 = *pbVar2;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      FUN_00d0a71c();
      param_1[0x18] = 0xff;
      param_1[0x19] = 0xff;
      param_1[0x1a] = 0xff;
      param_1[0x1b] = 0xff;
      param_1[0x1c] = 0xff;
      param_1[0x1d] = 0xff;
      param_1[0x1e] = 0xff;
      param_1[0x1f] = 0xff;
      param_1[0x30] = 0;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      param_1[0x34] = 0;
      param_1[0x35] = 0;
      param_1[0x36] = 0;
      param_1[0x37] = 0;
      param_1[0x38] = 0;
      param_1[0x39] = 0;
      param_1[0x3a] = 0;
      param_1[0x3b] = 0;
      param_1[0x3c] = 0;
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x3f] = 0;
      param_1[0x20] = 0xff;
      param_1[0x21] = 0xff;
      param_1[0x22] = 0x7f;
      param_1[0x23] = 0x7f;
      *(undefined8 *)(lVar6 + 0x2d8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar6 + 0x2e0));
      return;
    }
  } while( true );
  plVar9 = (long *)plVar5[1];
  if (plVar9 == (long *)0x0) {
    plVar9 = (long *)plVar5[2];
    if (*(long **)plVar5[2] != plVar5) {
      lVar8 = plVar5[2];
      plVar9 = *(long **)(lVar8 + 0x10);
      if (**(long **)(lVar8 + 0x10) != lVar8) {
        lVar8 = *(long *)(lVar8 + 0x10);
        while( true ) {
          plVar9 = *(long **)(lVar8 + 0x10);
          if (*plVar9 == lVar8) break;
          lVar8 = *(long *)(lVar8 + 0x10);
        }
      }
    }
  }
  else {
    for (plVar5 = (long *)*plVar9; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      plVar9 = plVar5;
    }
  }
  goto joined_r0x01e07f84;
}


