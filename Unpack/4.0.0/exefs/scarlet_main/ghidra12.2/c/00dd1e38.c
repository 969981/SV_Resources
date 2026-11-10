/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd1e38; name: FUN_00dd1e38
 */


void FUN_00dd1e38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined2 local_60;
  undefined1 auStack_58 [8];
  
  if (*(char *)(param_1 + 200) == '\0') {
    return;
  }
  plVar12 = (long *)(param_1 + 0xb0);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_00dd1e98;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb8));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xb8));
        while (*plVar12 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar5) {
            *plVar12 = lVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_00dd1e98;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *plVar12 = lVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_00dd1e98:
  uVar11 = *(undefined8 *)(param_1 + 8);
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x30) == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    *(long **)(lVar8 + 0x30) = DAT_04859430;
  }
  uVar1 = *(undefined8 *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x38);
  *(undefined8 *)(lVar8 + 0x30) = uVar11;
  *(undefined2 *)(lVar8 + 0x38) = 1;
  puVar6 = PTR_nothrow_047cdb88;
  lVar10 = *(long *)(param_1 + 0x78);
  lVar3 = *(long *)(param_1 + 0x80);
  uVar13 = lVar3 - lVar10 >> 3;
  if (0x400 < lVar3 - lVar10) {
    uVar14 = uVar13;
    if (0xffffffffffffffe < (long)uVar13) {
      uVar14 = 0xfffffffffffffff;
    }
    do {
      pvVar9 = operator_new(uVar14 << 3,(nothrow_t *)puVar6);
      if (pvVar9 != (void *)0x0) {
        FUN_00dd3ea0(lVar10,lVar3,auStack_58,uVar13,pvVar9,uVar14);
        plVar12 = *(long **)(lVar8 + 0x30);
        if (plVar12 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar12 = DAT_04859430;
          *(long **)(lVar8 + 0x30) = DAT_04859430;
        }
        uVar13 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (((uVar13 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
          (**(code **)(*plVar12 + 0x18))(plVar12,pvVar9,0,8);
        }
        else {
          FUN_00c48fe8(plVar12,pvVar9,0,8);
        }
        goto LAB_00dd1f80;
      }
      uVar14 = uVar14 >> 1;
    } while (uVar14 != 0);
  }
  FUN_00dd3ea0(lVar10,lVar3,auStack_58,uVar13,0,0);
LAB_00dd1f80:
  *(undefined1 *)(param_1 + 200) = 0;
  *(undefined8 *)(lVar8 + 0x30) = uVar1;
  local_60 = (undefined2)uVar2;
  *(undefined2 *)(lVar8 + 0x38) = local_60;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xb8));
  return;
}


