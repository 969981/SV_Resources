/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dba8ec; name: FUN_00dba8ec
 */


void FUN_00dba8ec(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  undefined *local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined1 *puStack_560;
  undefined8 local_558;
  undefined1 auStack_550 [768];
  undefined1 *local_250;
  undefined8 local_248;
  undefined1 auStack_240 [128];
  undefined1 *local_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [256];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  long *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  lVar12 = *(long *)(param_1 + 0x378);
  lVar8 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
  lVar8 = *(long *)(lVar8 + 8);
  puVar9 = *(undefined8 **)(lVar12 + 0x70);
  nn::os::LockMutex((MutexType *)(puVar9 + 0x24));
  fVar14 = 0.033333335;
  if (*(char *)((long)puVar9 + 0x119) != '\0') {
    fVar14 = (float)((double)lVar8 / 1000000000.0);
  }
  fVar14 = *(float *)((long)puVar9 + 0x11c) * fVar14;
  if ((1.1920929e-07 < fVar14) && (lVar8 = ((long *)puVar9[9])[1] - *(long *)puVar9[9], lVar8 != 0))
  {
    plVar13 = (long *)*puVar9;
    uVar11 = lVar8 >> 3;
    local_80 = 0;
    local_b0 = (undefined8 *)0x0;
    local_a8 = (undefined8 *)0x0;
    local_90 = 0x555555555555555;
    uStack_88 = 0;
    local_a0 = (undefined8 *)0x0;
    local_98 = plVar13;
    if (0x555555555555555 < uVar11) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = uVar11 * 0x30;
    puVar10 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,lVar8,8);
    if (puVar10 == (undefined8 *)0x0) {
      (**(code **)(*plVar13 + 0xe8))(plVar13);
    }
    puVar5 = PTR_LAB_047d3900;
    puVar1 = puVar10 + uVar11 * 6;
    local_b0 = puVar10;
    local_a8 = puVar10;
    local_a0 = puVar1;
    while( true ) {
      lVar8 = lVar8 + -0x30;
      if (((DAT_04865a38 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04865a38), iVar7 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(puVar5,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar12 = nn::os::GetTlsValue(DAT_04865a30);
      puVar6 = local_b0;
      if (lVar12 == 0) {
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
      }
      else {
        if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar13;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      }
      if (lVar8 == 0) break;
      puVar10 = puVar10 + 6;
      plVar13 = local_98;
    }
    plVar13 = *(long **)puVar9[9];
    plVar2 = (long *)((long *)puVar9[9])[1];
    local_a8 = puVar1;
    if (plVar13 != plVar2) {
      iVar7 = 0;
      do {
        lVar8 = *plVar13;
        if (((*(char *)(lVar8 + 0x70) != '\0') && (*(int *)(lVar8 + 0x74) == 2)) &&
           (1.1920929e-07 < *(float *)(*(long *)(lVar8 + 0x420) + 0x88))) {
          memcpy(puVar6 + (long)iVar7 * 6,(void *)(lVar8 + 0x410),0x30);
          iVar7 = iVar7 + 1;
        }
        plVar13 = plVar13 + 1;
      } while (plVar2 != plVar13);
      if (0 < iVar7) {
        local_578 = PTR_DAT_047ddb80 + 0x10;
        uStack_570 = 0xffffffff;
        puStack_560 = auStack_550;
        local_568 = 1;
        local_250 = auStack_240;
        local_1c0 = auStack_1b0;
        local_558 = 0x8000002000000000;
        local_248 = 0x8000002000000000;
        local_1b8 = 0x8000002000000000;
        FUN_00dbb0cc(puVar6,iVar7,*(undefined4 *)(puVar9 + 3),&local_578,4);
        (**(code **)(*(long *)(puVar9[2] + 0x18) + 0xb0))((long *)(puVar9[2] + 0x18),&local_578,0);
        FUN_00dbaf98(&local_578);
        plVar2 = (long *)((long *)puVar9[9])[1];
        for (plVar13 = *(long **)puVar9[9]; plVar13 != plVar2; plVar13 = plVar13 + 1) {
          lVar8 = *plVar13;
          if (((*(char *)(lVar8 + 0x70) != '\0') && (*(int *)(lVar8 + 0x74) == 2)) &&
             ((1.1920929e-07 < *(float *)(*(long *)(lVar8 + 0x420) + 0x88) &&
              (*(long *)(lVar8 + 0xc0) != 0)))) {
            FUN_00dbae24();
          }
        }
      }
    }
    plVar13 = local_98;
    puVar10 = local_b0;
    if (local_b0 != (undefined8 *)0x0) {
      local_a8 = local_b0;
      lVar8 = (long)local_a0 - (long)local_b0;
      uVar11 = (**(code **)(*local_98 + 0xf8))(local_98);
      if (((uVar11 & 1) == 0) || (lVar12 = FUN_00c4e600(), *(int *)(lVar12 + 0x12c8) < 1)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,puVar10,lVar8,8);
      }
      else {
        FUN_00c48fe8(plVar13,puVar10,lVar8,8);
      }
    }
  }
  if (fVar14 <= 1.1920929e-07) {
    (**(code **)(*(long *)puVar9[1] + 0x488))();
LAB_00dbaccc:
    nn::os::UnlockMutex((MutexType *)(puVar9 + 0x24));
    return;
  }
  uStack_570 = CONCAT44(uStack_570._4_4_,*(undefined4 *)(puVar9 + 3));
  local_578 = (undefined *)(ulong)(uint)fVar14;
  if (((*PTR_DAT_047d8c00 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_047d8c00), iVar7 != 0))
  {
    FUN_00100190(PTR_LAB_047d8d08,PTR_DAT_047d8c08,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c00);
  }
  lVar12 = *(long *)PTR_DAT_047d8c08;
  *(long *)PTR_DAT_047d8c10 = lVar12;
  plVar13 = (long *)(lVar12 + 0x30);
  lVar8 = nn::os::GetCurrentThread();
  while (*plVar13 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_00dbac90;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x38));
  do {
    if (*plVar13 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar12 + 0x38));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_00dbac90;
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
LAB_00dbac90:
  lVar8 = 0;
  if (puVar9[2] != 0) {
    lVar8 = puVar9[2] + 0x18;
  }
  FUN_00d21de0(puVar9[1],&local_578,lVar8);
  lVar8 = 0;
  if (puVar9[2] != 0) {
    lVar8 = puVar9[2] + 0x18;
  }
  FUN_00d21a40(puVar9[1],lVar8);
  *(undefined8 *)(lVar12 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar12 + 0x38));
  goto LAB_00dbaccc;
}


