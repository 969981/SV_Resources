/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00357510; name: FUN_00357510
 */


void FUN_00357510(long param_1,void *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  
  FUN_0038db40();
  uVar4 = *(ulong *)(param_1 + 0x50);
  if (uVar4 != 0) {
    uVar8 = 0;
    puVar7 = *(undefined8 **)(param_1 + 0x60);
    do {
      pvVar9 = (void *)*puVar7;
      if (pvVar9 == param_2) {
        lVar5 = uVar4 - 1;
        *(long *)(param_1 + 0x50) = lVar5;
        *puVar7 = (*(undefined8 **)(param_1 + 0x60))[lVar5];
        *(void **)(*(long *)(param_1 + 0x60) + lVar5 * 8) = pvVar9;
        plVar1 = (long *)((long)param_2 + 8);
        do {
          lVar6 = *plVar1;
          lVar5 = lVar6 + -2;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 == 0) {
          FUN_0038db20((long)param_2 + 0x10);
          FUN_00354750((long)param_2 + 0xa0);
          if (DAT_047ef698 == '\x01') {
            pvVar9 = *(void **)((long)param_2 + 0xb8);
            FUN_0038db40(&DAT_047ef6a8);
            if (DAT_047ef6a0 == pvVar9) {
              DAT_047ef6a0 = *(void **)((long)pvVar9 + 0x10);
            }
            lVar5 = *(long *)((long)pvVar9 + 0x18);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)((long)pvVar9 + 0x10);
            }
            if (*(long *)((long)pvVar9 + 0x10) != 0) {
              *(long *)(*(long *)((long)pvVar9 + 0x10) + 0x18) = lVar5;
            }
            free(pvVar9);
            FUN_0038db60(&DAT_047ef6a8);
          }
          if ((*(int *)((long)param_2 + 0x30) != 0) && (4 < *(ulong *)((long)param_2 + 0x48))) {
            FUN_00350fd0();
          }
          free(param_2);
        }
        else if (lVar6 < 3) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        break;
      }
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 < uVar4);
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar4 = 0;
    do {
      FUN_00357510(*(undefined8 *)(*(long *)(param_1 + 0x48) + uVar4 * 8),param_2);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ulong *)(param_1 + 0x38));
  }
  FUN_0038db60(param_1);
  return;
}


