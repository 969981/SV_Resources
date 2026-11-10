/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e6bc0; name: FUN_027e6bc0
 */


void FUN_027e6bc0(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_100 [16];
  undefined8 *local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined1 auStack_d8 [8];
  long local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [104];
  undefined8 local_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  undefined8 local_18;
  
  if ((*(int *)(param_1 + 0x48) == 0) && (*(long *)(param_1 + 0x50) != 0)) {
    if (*(int *)(param_1 + 0x4c) == 1) {
      local_d0 = param_1;
      FUN_027e9ae0(&lStack_40,*(undefined8 *)(param_1 + 8),&local_d0);
      if (((*PTR_DAT_047da868 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047da868), iVar8 != 0)) {
        FUN_00100190(PTR_LAB_047daa50,PTR_DAT_047da870,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047da868);
      }
      uVar11 = *(undefined8 *)PTR_DAT_047da870;
      *(undefined8 *)PTR_DAT_047da878 = uVar11;
      FUN_027e6e74(&local_d0,param_1);
      if (local_d0 == 0) {
        local_48 = 0;
      }
      else {
        FUN_027e6fc4(&local_48);
      }
      FUN_027e7058(&local_d0);
      FUN_027e7158(&local_e0,&local_48);
      FUN_027e9b74(auStack_d8,&lStack_40);
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      local_c8 = (code *)0x0;
      FUN_027e9ca8(&local_d0,&local_e0);
      FUN_027e6e74(auStack_100,param_1);
      local_f0 = (undefined8 *)0x0;
      uStack_e8 = 0;
      FUN_027e725c(&local_f0,auStack_100);
      FUN_0174ab80(uVar11,&local_d0,&local_f0);
      puVar6 = local_f0;
      if (local_f0 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_f0 + 3);
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
          piVar2 = (int *)((long)local_f0 + 0x1c);
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
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_18 = *puVar6;
            FUN_00c44438(lVar10 + 0x8040,&local_18);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
      FUN_027e7058(auStack_100);
      pcVar7 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        local_c8 = (code *)0x0;
        (*pcVar7)(auStack_b0);
      }
      FUN_027e9c40(auStack_d8);
      FUN_027e2e30(&local_e0);
      FUN_027e2e30(&local_48);
      plVar9 = &lStack_40;
    }
    else {
      if (*(int *)(param_1 + 0x4c) != 0) {
        return;
      }
      local_e0 = param_1;
      FUN_027e9ae0(&local_d0,*(undefined8 *)(param_1 + 8),&local_e0);
      FUN_027e9b74(auStack_38,&local_d0);
      FUN_027e9c04((long *)(param_1 + 0x50),auStack_38);
      FUN_027e9c40(auStack_38);
      plVar9 = &local_d0;
    }
    FUN_027e9c40(plVar9);
  }
  return;
}


