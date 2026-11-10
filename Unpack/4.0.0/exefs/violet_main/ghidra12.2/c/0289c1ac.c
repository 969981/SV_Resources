/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0289c1ac; name: FUN_0289c1ac
 */


void FUN_0289c1ac(long param_1,undefined1 *param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar8 = *(long *)(param_1 + 0xb8);
  if (lVar8 != 0) {
    local_28 = (undefined8 *)0x0;
    uStack_20 = 0;
    *(undefined1 *)(lVar8 + 0x43) = *param_2;
    *(undefined1 *)(lVar8 + 0x42) = 1;
    FUN_00d8e6c4(lVar8 + 0x48,&local_28);
    puVar6 = local_28;
    if (local_28 != (undefined8 *)0x0) {
      psVar1 = (short *)(local_28 + 3);
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
        piVar2 = (int *)((long)local_28 + 0x1c);
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
          if ((*PTR_DAT_047d3908 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908);
            if (iVar7 != 0) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
          }
          lVar8 = *(long *)PTR_DAT_047d3910;
          *(long *)PTR_DAT_047d3918 = lVar8;
          local_18 = *puVar6;
          FUN_00c44438(lVar8 + 0x8040,&local_18);
        }
      }
      else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  return;
}


