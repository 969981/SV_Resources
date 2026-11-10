/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284ea34; name: FUN_0284ea34
 */


void FUN_0284ea34(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  char local_70;
  undefined8 local_68;
  
  lVar5 = *(long *)(param_1 + 0x28);
  lVar3 = lVar5;
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = lVar5 + *(long *)(param_1 + 0x30) * 0x20;
  }
  do {
    if (lVar5 == lVar3) {
      return;
    }
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_00c43ef0(&local_88,lVar5);
    local_78 = *(undefined8 **)(lVar5 + 0x10);
    local_70 = *(char *)(lVar5 + 0x18);
    if (local_70 == '\0') {
      if (local_88 != (undefined8 *)0x0) {
        if (*(short *)((long)local_88 + 0x1a) != 0) goto LAB_0284eab8;
        goto LAB_0284ead8;
      }
    }
    else {
LAB_0284eab8:
      if (local_78 != (undefined8 *)0x0) {
        (**(code **)*local_78)(local_78,param_2,param_3,param_4);
      }
LAB_0284ead8:
      puVar8 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar4 = *psVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar7) {
            *psVar1 = sVar4 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (sVar4 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar10;
            local_68 = *puVar8;
            FUN_00c44438(lVar10 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
    }
    lVar5 = lVar5 + 0x20;
  } while( true );
}


