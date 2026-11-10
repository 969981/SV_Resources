/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289b268; name: FUN_0289b268
 */


void FUN_0289b268(long param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  long local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  
  FUN_015c4ad4();
  local_38 = *(long *)(param_1 + 0x28);
  local_40 = local_38;
  if (*(long *)(param_1 + 0x30) != 0) {
    local_40 = local_38 + *(long *)(param_1 + 0x30) * 0x20;
  }
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_00c43ef0(&local_60,param_2);
  local_50 = *(undefined8 *)(param_2 + 0x10);
  local_48 = *(undefined1 *)(param_2 + 0x18);
  FUN_0289b3f0(&local_30,&local_38,&local_40,&local_60);
  puVar6 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_60 + 3);
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
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar7 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar8 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar8;
        local_28 = *puVar6;
        FUN_00c44438(lVar8 + 0x8040,&local_28);
      }
    }
    else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
  }
  lVar8 = *(long *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar8 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x30) * 0x20;
  }
  if (local_30 != lVar8) {
    FUN_015c59e0(&local_28,param_1 + 8);
  }
  return;
}


