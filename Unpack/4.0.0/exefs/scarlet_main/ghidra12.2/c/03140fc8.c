/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03140fc8; name: FUN_03140fc8
 */


void FUN_03140fc8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  *param_1 = (long)&PTR_LAB_046680d0;
  puVar4 = PTR_PTR_047d1a50;
  if ((int)param_1[4] != 0) {
    plVar8 = (long *)param_1[3];
    plVar9 = plVar8 + (long)(int)param_1[4] * 3;
    do {
      plVar10 = plVar9 + -3;
      iVar6 = (int)plVar9[-2];
      if (0 < iVar6) {
        lVar11 = 0;
        do {
          if ((0.0 <= *(float *)(*plVar10 + lVar11 * 0x18 + 8)) &&
             (plVar5 = *(long **)(*plVar10 + lVar11 * 0x18), plVar5 != (long *)0x0)) {
            if (plVar5[1] != 0) {
              plVar1 = plVar5 + 2;
              do {
                lVar7 = *plVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar3) {
                  *plVar1 = lVar7 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar7 + -1 == 0) {
                (**(code **)(*plVar5 + 0x18))();
              }
            }
            iVar6 = (int)plVar9[-2];
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar6);
      }
      *(undefined4 *)(plVar9 + -2) = 0;
      if ((-1 < (int)*(uint *)((long)plVar9 + -0xc)) && (*plVar10 != 0)) {
        (**(code **)(*(long *)puVar4 + 0x20))
                  (puVar4,*plVar10,(ulong)*(uint *)((long)plVar9 + -0xc) * 0x18);
      }
      plVar9[-3] = 0;
      *(undefined4 *)((long)plVar9 + -0xc) = 0x80000000;
      plVar9 = plVar10;
    } while (plVar10 != plVar8);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(*(long *)puVar4 + 0x20))
              (puVar4,param_1[3],(ulong)*(uint *)((long)param_1 + 0x24) * 0x18);
  }
  param_1[3] = 0;
  puVar4 = PTR_DAT_047d1a00;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = (long)(puVar4 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x03141134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


