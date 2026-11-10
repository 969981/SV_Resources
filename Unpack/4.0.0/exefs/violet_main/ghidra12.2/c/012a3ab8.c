/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012a3ab8; name: FUN_012a3ab8
 */


void FUN_012a3ab8(float param_1,long param_2,ulong param_3)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  bool bVar13;
  bool bVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  undefined4 local_78 [2];
  ulong local_70;
  float local_68;
  
  plVar12 = (long *)(param_2 + 0x300);
  lVar10 = *plVar12;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar10) {
    lVar8 = nn::os::GetCurrentThread();
LAB_012a3b04:
    if (*plVar12 == 0) goto code_r0x012a3b0c;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x308));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x308));
          while (*plVar12 == 0) {
            cVar4 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar13) {
              *plVar12 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_012a3b14;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar13) {
        *plVar12 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_012a3b14:
    bVar13 = false;
    goto LAB_012a3b18;
  }
  bVar13 = true;
LAB_012a3b18:
  if ((*(byte *)(param_2 + 0x629) & 1) != 0) {
    local_78[0] = 1;
    local_70 = param_3;
    local_68 = param_1;
    FUN_012a3ef0(param_2 + 0x630,local_78);
    goto LAB_012a3bac;
  }
  if ((*(ulong *)(param_2 + 0x290) <= param_3) ||
     ((param_3 < *(ulong *)(param_2 + 0x228) &&
      ((*(ulong *)(*(long *)(param_2 + 0x220) + (param_3 >> 3 & 0x1ffffffffffffff8)) >>
        (param_3 & 0x3f) & 1) != 0)))) goto LAB_012a3bac;
  plVar12 = (long *)(param_2 + 0x318);
  lVar10 = *plVar12;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 != lVar10) {
    lVar8 = nn::os::GetCurrentThread();
LAB_012a3b70:
    if (*plVar12 == 0) goto code_r0x012a3b78;
    ClearExclusiveLocal();
    nn::os::WaitLightEvent((LightEventType *)(param_2 + 800));
    do {
      if (*plVar12 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 800));
          while (*plVar12 == 0) {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = lVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_012a3b80;
          }
        } while( true );
      }
      cVar4 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar14) {
        *plVar12 = lVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_012a3b80:
    bVar14 = false;
    goto LAB_012a3b84;
  }
  bVar14 = true;
LAB_012a3b84:
  pfVar9 = (float *)(*(long *)(param_2 + 0x1e8) + param_3 * 0x20 + 0x14);
  if (*pfVar9 != param_1) {
    *pfVar9 = param_1;
    lVar8 = *(long *)(param_2 + 0x1e8) + param_3 * 0x20;
    lVar10 = *(long *)(lVar8 + 8);
    lVar11 = *(long *)(*(long *)(param_2 + 0x28) + *(long *)(lVar8 + 0x18) * 8);
    lVar15 = *(long *)(lVar11 + 0x68);
    uVar18 = *(undefined4 *)(lVar8 + 0x14);
    lVar8 = *(long *)(lVar15 + lVar10 * 0x48 + 0x30);
    if ((lVar8 != 0) && (sVar2 = *(short *)(lVar8 + 0x1a), sVar2 != 0)) {
      puVar17 = *(undefined8 **)(lVar8 + 8);
      if ((*PTR_DAT_047d39b0 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_047d39b0);
        puVar6 = PTR_DAT_047d39c8;
        if (iVar7 != 0) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar7 != 0)) {
            *(undefined8 *)puVar6 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          *(undefined **)PTR_DAT_047d39b8 = puVar6;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
      }
      if (puVar17 != (undefined8 *)0x0) {
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          if (puVar17 == (undefined8 *)PTR_DAT_047d39b8) goto LAB_012a3e44;
          puVar17 = (undefined8 *)*puVar17;
          plVar12 = (long *)0x0;
        } while (puVar17 != (undefined8 *)0x0);
        goto LAB_012a3ca0;
      }
    }
    plVar12 = (long *)0x0;
    goto LAB_012a3ca0;
  }
  goto LAB_012a3b98;
code_r0x012a3b0c:
  cVar4 = '\x01';
  bVar13 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar13) {
    *plVar12 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_012a3b14;
  goto LAB_012a3b04;
code_r0x012a3b78:
  cVar4 = '\x01';
  bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
  if (bVar14) {
    *plVar12 = lVar8;
    cVar4 = ExclusiveMonitorsStatus();
  }
  if (cVar4 == '\0') goto LAB_012a3b80;
  goto LAB_012a3b70;
  while( true ) {
    plVar12 = (long *)0x0;
    sVar2 = sVar3;
    if (sVar3 == 0) break;
LAB_012a3e44:
    sVar3 = *psVar1;
    if (sVar3 == sVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_012a3e68;
      bVar5 = true;
    }
    else {
      ClearExclusiveLocal();
LAB_012a3e68:
      bVar5 = false;
    }
    if (bVar5) {
      plVar12 = (long *)0x0;
      if (*(long *)(lVar8 + 0x10) != 0) {
        plVar12 = (long *)(*(long *)(lVar8 + 0x10) + -8);
      }
      break;
    }
  }
LAB_012a3ca0:
  if (*(char *)(lVar15 + lVar10 * 0x48 + 0x28) == '\0') {
    if (plVar12 != (long *)0x0) {
      plVar16 = (long *)(lVar15 + lVar10 * 0x48 + 8);
      if (*plVar16 != -1) {
        if (*(long *)(*(long *)(lVar11 + 0x68) + lVar10 * 0x48 + 8) != -1) {
          FUN_010b4850(*(undefined8 *)(lVar11 + 0x118));
          *(undefined8 *)(*(long *)(lVar11 + 0x68) + lVar10 * 0x48 + 8) = 0xffffffffffffffff;
        }
        lVar8 = FUN_010974dc(uVar18,lVar11,lVar10,0);
        *plVar16 = lVar8;
      }
      plVar16 = (long *)(lVar15 + lVar10 * 0x48 + 0x10);
      if (*plVar16 != -1) {
        if (*(long *)(*(long *)(lVar11 + 0x68) + lVar10 * 0x48 + 0x10) != -1) {
          FUN_010b4850(*(undefined8 *)(lVar11 + 0x120));
          *(undefined8 *)(*(long *)(lVar11 + 0x68) + lVar10 * 0x48 + 0x10) = 0xffffffffffffffff;
        }
        lVar8 = FUN_01098dd0(uVar18,lVar11,lVar10,0);
        *plVar16 = lVar8;
      }
      goto LAB_012a3d74;
    }
  }
  else if (plVar12 != (long *)0x0) {
LAB_012a3d74:
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
LAB_012a3b98:
  if (!bVar14) {
    *(undefined8 *)(param_2 + 0x318) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 800));
  }
LAB_012a3bac:
  if (!bVar13) {
    *(undefined8 *)(param_2 + 0x300) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x308));
    return;
  }
  return;
}


