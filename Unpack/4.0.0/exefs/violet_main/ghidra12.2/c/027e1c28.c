/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e1c28; name: FUN_027e1c28
 */


void FUN_027e1c28(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 local_f8;
  long local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [100];
  undefined4 local_6c;
  long *local_68;
  undefined1 auStack_60 [24];
  long *local_48;
  undefined8 local_28;
  
  FUN_027e6e74(&local_f0,param_2);
  if (local_f0 == 0) {
    local_28 = 0;
  }
  else {
    FUN_027e6fc4(&local_28);
  }
  FUN_027e7058(&local_f0);
  FUN_01050714(&local_68,param_3);
  FUN_0135d26c(auStack_60,&local_68);
  local_6c = 0;
  FUN_027e7158(&local_108,&local_28);
  local_100 = *param_4;
  local_f8 = *(undefined2 *)(param_4 + 1);
  local_f0 = 0;
  local_e8 = (code *)0x0;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_027e71e8(&local_f0,&local_108);
  FUN_015d1ba8(param_1,auStack_60,&local_6c,&local_f0);
  pcVar7 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar7)(auStack_d0);
  }
  FUN_027e2e30(&local_108);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  lVar9 = *param_1;
  FUN_027e6e74(&local_f0,param_2);
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  FUN_027e725c(&local_118,&local_f0);
  if (((*(char *)(lVar9 + 0x140) != '\0') && (local_118 != (undefined8 *)0x0)) &&
     (local_118[2] != 0)) {
    (**(code **)(*(long *)(local_118[2] + -0x28) + 0x78))();
  }
  FUN_0154631c(lVar9 + 0x130,&local_118);
  puVar6 = local_118;
  if (local_118 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_118 + 3);
    do {
      sVar3 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)local_118 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar9 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar9;
        local_108 = *puVar6;
        FUN_00c44438(lVar9 + 0x8040,&local_108);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  FUN_027e7058(&local_f0);
  FUN_027e2e30(&local_28);
  return;
}


