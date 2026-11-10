/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f651a4; name: FUN_01f651a4
 */


void FUN_01f651a4(undefined8 *param_1,long param_2,int param_3)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if (((*PTR_DAT_047d6c98 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d6c98), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d6cb0,PTR_DAT_047d6ca0,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d6c98);
  }
  lVar10 = *(long *)PTR_DAT_047d6ca0;
  *(long *)PTR_DAT_047d6ca8 = lVar10;
  if (((lVar10 != 0) && (*(long *)PTR_DAT_047d0a08 != 0)) &&
     (lVar10 = *(long *)(*(long *)PTR_DAT_047d0a08 + 0xb8), lVar10 != 0)) {
    plVar11 = *(long **)(param_2 + 0x40);
    if (plVar11 != *(long **)(param_2 + 0x48)) {
      iVar9 = 0;
      do {
        lVar14 = *plVar11;
        if (lVar14 != 0) {
          lVar12 = *(long *)(lVar14 + 0x170);
          lVar5 = *(long *)(lVar14 + 0x178);
          if ((lVar12 != lVar5) && (*(long *)(lVar12 + 8) != lVar10)) {
            do {
              lVar13 = lVar12 + 0x10;
              if (lVar5 == lVar13) {
                lVar12 = lVar5;
                break;
              }
              plVar1 = (long *)(lVar12 + 0x18);
              lVar12 = lVar13;
            } while (*plVar1 != lVar10);
          }
          if (lVar5 != lVar12) {
            if (iVar9 == param_3) {
              local_38 = (undefined8 *)0x0;
              uStack_30 = 0;
              FUN_00c43ef0(&local_38,lVar14 + 0x30);
              *param_1 = 0;
              param_1[1] = 0;
              if (local_38[2] == lVar14 + 0x28) {
                FUN_011726f0(param_1,&local_38);
              }
              puVar8 = local_38;
              if (local_38 == (undefined8 *)0x0) {
                return;
              }
              psVar2 = (short *)(local_38 + 3);
              do {
                sVar4 = *psVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar7) {
                  *psVar2 = sVar4 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (sVar4 != 1) {
                if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                return;
              }
              piVar3 = (int *)((long)local_38 + 0x1c);
              do {
                iVar9 = *piVar3;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar7) {
                  *piVar3 = -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar9 == -1) {
                return;
              }
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar10 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar10;
              local_28 = *puVar8;
              FUN_00c44438(lVar10 + 0x8040,&local_28);
              return;
            }
            iVar9 = iVar9 + 1;
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != *(long **)(param_2 + 0x48));
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


