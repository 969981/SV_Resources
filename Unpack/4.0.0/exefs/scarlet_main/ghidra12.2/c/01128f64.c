/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01128f64; name: FUN_01128f64
 */


void FUN_01128f64(long param_1,long param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  ulong local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  
  if (param_2 == 0) {
    return;
  }
  plVar13 = (long *)(param_1 + 0x210);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01128fa8;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x218));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01128fa8;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01128fa8:
  plVar13 = *(long **)(param_2 + 8);
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
  }
  puVar2 = (ulong *)PTR_DAT_047d8b70;
  if (plVar13 != (long *)0x0) {
    puVar2 = (ulong *)(plVar13 + 6);
  }
  uVar14 = *puVar2;
  plVar7 = (long *)PTR_PTR_047d4508;
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x18))(plVar13);
    plVar7 = plVar13 + 7;
  }
  uVar9 = *(ulong *)(param_1 + 0x250);
  plVar1 = (long *)(param_1 + 0x248);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar14;
    }
    else if (uVar14 < uVar9) {
      uVar11 = uVar14;
    }
    else {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar14 / uVar9;
      }
      uVar11 = uVar14 - uVar11 * uVar9;
    }
    plVar12 = *(long **)(*plVar1 + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar14) {
            if (plVar12[2] == uVar14) goto LAB_0112913c;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) goto LAB_01129184;
          plVar12 = (long *)*plVar12;
          plVar15 = (long *)0x0;
        } while (plVar12 != (long *)0x0);
        goto LAB_01129140;
      }
      do {
        uVar10 = plVar12[1];
        if (uVar10 == uVar14) {
          if (plVar12[2] == uVar14) {
LAB_0112913c:
            plVar15 = plVar12;
            break;
          }
        }
        else {
          if (uVar9 <= uVar10) {
            uVar6 = 0;
            if (uVar9 != 0) {
              uVar6 = uVar10 / uVar9;
            }
            uVar10 = uVar10 - uVar6 * uVar9;
          }
          if (uVar10 != uVar11) goto LAB_01129184;
        }
        plVar12 = (long *)*plVar12;
        plVar15 = (long *)0x0;
      } while (plVar12 != (long *)0x0);
      goto LAB_01129140;
    }
  }
LAB_01129184:
  plVar15 = (long *)0x0;
LAB_01129140:
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  if ((plVar15 != (long *)0x0) &&
     (lVar8 = plVar15[6], iVar5 = (int)lVar8 + -1, *(int *)(plVar15 + 6) = iVar5,
     iVar5 == 0 || (int)lVar8 < 1)) {
    FUN_0112924c(plVar15[7]);
    local_70 = *puVar2;
    lStack_68 = *plVar7;
    if (plVar13 == (long *)0x0) {
      local_60 = 0;
    }
    else {
      local_60 = plVar13[8];
    }
    local_58 = (long *)0x0;
    if (plVar13 == (long *)0x0) {
      local_58 = plVar13;
      FUN_01129318(plVar1,&local_70);
    }
    else {
      (**(code **)(*plVar13 + 0x18))(plVar13);
      local_58 = plVar13;
      FUN_01129318(plVar1,&local_70);
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  if (plVar13 != (long *)0x0) {
    (**(code **)(*plVar13 + 0x20))(plVar13);
  }
  *(undefined8 *)(param_1 + 0x210) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x218));
  return;
}


