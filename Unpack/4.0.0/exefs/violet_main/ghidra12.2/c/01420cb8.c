/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01420cb8; name: FUN_01420cb8
 */


void FUN_01420cb8(long param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_b0 [64];
  undefined2 local_70;
  undefined4 local_6c;
  
  plVar12 = (long *)(param_1 + 0x180);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar12 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_01420cfc;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
  do {
    if (*plVar12 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x188));
        while (*plVar12 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar4) {
            *plVar12 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01420cfc;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar4) {
      *plVar12 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01420cfc:
  lVar6 = *(long *)(param_1 + 0x148);
  do {
    if (lVar6 == *(long *)(param_1 + 0x150)) {
      local_70 = (undefined2)param_2;
      local_6c = 1;
      pvVar7 = (void *)FUN_00c4c40c(*(undefined8 *)(*(long *)(param_1 + 0x138) + 0x70),param_2);
      memcpy(auStack_b0,pvVar7,0x40);
      if (*(ulong *)(param_1 + 0x150) < *(ulong *)(param_1 + 0x158)) {
        FUN_0142100c((long *)(param_1 + 0x148),auStack_b0);
      }
      else {
        uVar11 = *(ulong *)(param_1 + 0x168);
        lVar6 = (long)(*(ulong *)(param_1 + 0x150) - *(long *)(param_1 + 0x148)) >> 4;
        if (0x7ffffffffffffffe < uVar11) {
          uVar11 = 0x7fffffffffffffff;
        }
        uVar1 = lVar6 * -0x3333333333333333 + 1;
        if (uVar11 < uVar1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = (long)(*(ulong *)(param_1 + 0x158) - *(long *)(param_1 + 0x148)) >> 4;
        uVar10 = lVar8 * -0x6666666666666666;
        if (uVar1 <= uVar10) {
          uVar1 = uVar10;
        }
        puVar2 = (undefined8 *)(param_1 + 0x160);
        if (uVar11 >> 1 <= (ulong)(lVar8 * -0x3333333333333333)) {
          uVar1 = uVar11;
        }
        if (uVar1 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar1 * 0x50,0x10);
          if (lVar8 == 0) {
            (**(code **)(*(long *)*puVar2 + 0xe8))();
          }
        }
        pvVar7 = (void *)(lVar8 + lVar6 * 0x10);
        uVar14 = *puVar2;
        if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
          FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
          FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
          __cxa_guard_release(&DAT_04865a38);
        }
        lVar6 = nn::os::GetTlsValue(DAT_04865a30);
        if (lVar6 == 0) {
          memcpy(pvVar7,auStack_b0,0x50);
        }
        else {
          if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar14;
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
          memcpy(pvVar7,auStack_b0,0x50);
          *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        }
        lVar13 = *(long *)(param_1 + 0x148);
        lVar9 = *(long *)(param_1 + 0x150);
        lVar6 = (long)pvVar7 + 0x50;
        if (lVar9 != lVar13) {
          do {
            pvVar7 = (void *)((long)pvVar7 + -0x50);
            lVar9 = lVar9 + -0x50;
            FUN_01421110(puVar2,pvVar7,lVar9);
          } while (lVar13 != lVar9);
          lVar13 = *(long *)(param_1 + 0x148);
        }
        lVar9 = *(long *)(param_1 + 0x158);
        *(void **)(param_1 + 0x148) = pvVar7;
        *(long *)(param_1 + 0x150) = lVar6;
        *(ulong *)(param_1 + 0x158) = lVar8 + uVar1 * 0x50;
        if (lVar13 != 0) {
          plVar12 = (long *)*puVar2;
          lVar9 = lVar9 - lVar13;
          uVar11 = (**(code **)(*plVar12 + 0xf8))(plVar12);
          if (((uVar11 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar12 + 0x18))(plVar12,lVar13,lVar9,0x10);
          }
          else {
            FUN_00c48fe8(plVar12,lVar13,lVar9,0x10);
          }
        }
      }
LAB_01420d20:
      *(undefined8 *)(param_1 + 0x180) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x188));
      return;
    }
    if ((uint)*(ushort *)(lVar6 + 0x40) == (param_2 & 0xffff)) {
      *(int *)(lVar6 + 0x44) = *(int *)(lVar6 + 0x44) + 1;
      goto LAB_01420d20;
    }
    lVar6 = lVar6 + 0x50;
  } while( true );
}


