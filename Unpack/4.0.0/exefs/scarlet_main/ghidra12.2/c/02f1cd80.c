/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1cd80; name: FUN_02f1cd80
 */


void FUN_02f1cd80(long *param_1,long *param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  if (param_2 != param_1) {
    uVar4 = *(uint *)(param_2 + 1);
    if (*(uint *)(param_1 + 1) < uVar4) {
      FUN_02f1c3ec(param_1,0,uVar4,0x10);
    }
    piVar1 = (int *)((long)param_1 + 0x24);
    iVar3 = *(int *)((long)param_2 + 0x24);
    uVar11 = *piVar1 + 1;
    if (uVar11 <= iVar3 + 1U) {
      uVar11 = iVar3 + 1;
    }
    if (uVar4 <= uVar11) {
      uVar11 = uVar4;
    }
    FUN_02f1cf38(param_1,*param_2,*param_2 + (ulong)uVar11 * 0x50);
    puVar7 = PTR_DAT_047d1a08;
    if (uVar4 < *(uint *)(param_1 + 1)) {
      if ((*piVar1 != -1) && (uVar4 <= *(uint *)((long)param_1 + 0x24))) {
        uVar11 = uVar4;
        do {
          lVar9 = *param_1;
          if (0.0 <= *(float *)(lVar9 + (long)(int)uVar11 * 0x50 + 0x28)) {
            plVar8 = *(long **)(lVar9 + (long)(int)uVar11 * 0x50 + 8);
            if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
              plVar2 = plVar8 + 2;
              do {
                lVar12 = *plVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar6) {
                  *plVar2 = lVar12 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar12 + -1 == 0) {
                (**(code **)(*plVar8 + 0x18))();
              }
            }
            uVar10 = *(ulong *)(lVar9 + (long)(int)uVar11 * 0x50);
            if ((uVar10 & 1) != 0) {
              (**(code **)(puVar7 + 8))(0,uVar10 - 1,0);
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 <= *(uint *)((long)param_1 + 0x24));
      }
      FUN_02f1c3ec(param_1,0,uVar4,0x10);
    }
    *piVar1 = *(int *)((long)param_2 + 0x24);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(int *)(param_1 + 4) = (int)param_2[4];
  }
  return;
}


