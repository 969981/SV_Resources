/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013fbb90; name: FUN_013fbb90
 */


void FUN_013fbb90(long param_1,int param_2,long param_3)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *local_48;
  undefined8 uStack_40;
  long local_38;
  undefined8 local_18;
  
  local_38 = param_3;
  if (param_2 == 0) {
    uVar8 = FUN_013fbe70();
    if (((uVar8 & 1) != 0) && (lVar9 = FUN_013fbdd0(), lVar9 != param_3)) {
      FUN_013fbf8c(param_1,&local_38);
    }
  }
  else if (param_2 == 1) {
    if (((*PTR_DAT_047d6c98 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d6c98);
    }
    lVar9 = *(long *)PTR_DAT_047d6ca0;
    *(long *)PTR_DAT_047d6ca8 = lVar9;
    if ((lVar9 == 0) || (*(long *)PTR_DAT_047d0a08 == 0)) {
      lVar9 = 0;
    }
    else {
      lVar9 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8);
    }
    lVar11 = local_38;
    if (lVar9 == local_38) {
      lVar10 = *(long *)(param_1 + 0xb8);
      lVar11 = lVar9;
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x42) == '\0')) {
        local_48 = (undefined8 *)0x0;
        uStack_40 = 0;
        *(undefined2 *)(lVar10 + 0x42) = 0x501;
        FUN_00d8e6c4(lVar10 + 0x48,&local_48);
        puVar6 = local_48;
        if (local_48 != (undefined8 *)0x0) {
          psVar1 = (short *)(local_48 + 3);
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
            piVar2 = (int *)((long)local_48 + 0x1c);
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
              lVar9 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar9;
              local_18 = *puVar6;
              FUN_00c44438(lVar9 + 0x8040,&local_18);
            }
          }
          else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
        }
        lVar11 = local_38;
      }
      FUN_013fbef0(param_1,&local_38);
    }
    lVar9 = FUN_013fbdd0();
    if (lVar9 == lVar11) {
      FUN_013fbef0(param_1,&local_38);
    }
    uVar8 = FUN_013fbe70();
    if ((uVar8 & 1) != 0) {
      FUN_013fcebc(param_1,&local_38);
    }
  }
  return;
}


