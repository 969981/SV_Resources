/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0162ff00; name: FUN_0162ff00
 */


void FUN_0162ff00(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *local_60;
  undefined4 *local_58;
  long local_50;
  undefined8 *local_48;
  
  plVar11 = (long *)(param_1 + 0xf0);
  lVar6 = nn::os::GetCurrentThread();
  while (*plVar11 == 0) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_0162ff3c;
  }
  ClearExclusiveLocal();
  nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
  do {
    if (*plVar11 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xf8));
        while (*plVar11 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *plVar11 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0162ff3c;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0162ff3c:
  puVar13 = *(undefined4 **)(param_1 + 0x110);
  puVar1 = (undefined8 *)(param_1 + 0x120);
  if (puVar13 == *(undefined4 **)(param_1 + 0x118)) {
    uVar10 = *(ulong *)(param_1 + 0x128);
    lVar6 = (long)puVar13 - *(long *)(param_1 + 0x108) >> 2;
    uVar7 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (long)*(undefined4 **)(param_1 + 0x118) - *(long *)(param_1 + 0x108);
    uVar9 = lVar8 >> 1;
    local_50 = 0;
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    if (uVar10 >> 1 <= (ulong)(lVar8 >> 2)) {
      uVar7 = uVar10;
    }
    local_48 = puVar1;
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar7 << 2,4);
      if (lVar8 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xe8))();
      }
    }
    puVar13 = (undefined4 *)(lVar8 + lVar6 * 4);
    local_50 = lVar8 + uVar7 * 4;
    uVar12 = *puVar1;
    local_60 = puVar13;
    local_58 = puVar13;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar13 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) goto LAB_01630274;
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar13 = param_2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      puVar13 = local_58;
    }
    local_58 = puVar13 + 1;
    FUN_01630288(puVar1,*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110),&local_60)
    ;
    puVar13 = *(undefined4 **)(param_1 + 0x108);
    puVar2 = *(undefined4 **)(param_1 + 0x110);
    *(undefined4 **)(param_1 + 0x108) = local_60;
    *(undefined4 **)(param_1 + 0x110) = local_58;
    lVar6 = *(long *)(param_1 + 0x118);
    *(long *)(param_1 + 0x118) = local_50;
    local_58 = puVar2;
    if ((long)puVar2 - (long)puVar13 != 0) {
      local_58 = puVar2 + (((long)puVar2 - (long)puVar13) - 4U >> 2 ^ 0xffffffffffffffff);
    }
    local_60 = puVar13;
    local_50 = lVar6;
    if (puVar13 != (undefined4 *)0x0) {
      plVar11 = (long *)*local_48;
      uVar7 = (**(code **)(*plVar11 + 0xf8))(plVar11);
      if (((uVar7 & 1) == 0) || (lVar8 = FUN_00c4e600(), *(int *)(lVar8 + 0x12c8) < 1)) {
        (**(code **)(*plVar11 + 0x18))(plVar11,puVar13,lVar6 - (long)puVar13,4);
      }
      else {
        FUN_00c48fe8(plVar11,puVar13,lVar6 - (long)puVar13,4);
      }
    }
  }
  else {
    uVar12 = *puVar1;
    if (((DAT_04865a38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04865a38), iVar5 != 0)) {
      FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
      FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_04865a38);
    }
    lVar6 = nn::os::GetTlsValue(DAT_04865a30);
    if (lVar6 == 0) {
      *puVar13 = param_2;
    }
    else {
      if (0xf < *(ulong *)(lVar6 + 0x80)) {
LAB_01630274:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar12;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
      *puVar13 = param_2;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
    }
    *(undefined4 **)(param_1 + 0x110) = puVar13 + 1;
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xf8));
  return;
}


