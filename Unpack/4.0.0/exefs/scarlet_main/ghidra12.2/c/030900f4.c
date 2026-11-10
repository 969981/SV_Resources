/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030900f4; name: FUN_030900f4
 */


void FUN_030900f4(long param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar3) {
    uVar12 = 0;
    do {
      plVar7 = (long *)(*(long *)(param_1 + 0x38) + uVar12 * 0x18);
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        if (*(char *)(*(long *)(param_1 + 0x38) + uVar12 * 0x18 + 0x10) != '\x01') {
          lVar6 = FUN_03065a74(plVar7);
        }
        if (*(float *)(lVar6 + 0x1c) + 0.001 < *(float *)(lVar6 + 0x18)) {
          lVar8 = *param_2;
          piVar9 = (int *)(lVar6 + 0x48);
          iVar11 = *(int *)(lVar8 + uVar12 * 8);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
            if (bVar5) {
              *piVar9 = *piVar9 + iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          piVar9 = (int *)(lVar8 + uVar12 * 8 + 4);
          iVar11 = *piVar9;
          if (iVar11 < *(int *)(lVar6 + 0x70)) {
            piVar1 = (int *)(lVar6 + 0x70);
            iVar10 = *(int *)(lVar6 + 0x70);
            do {
              iVar2 = *piVar1;
              if (iVar2 == iVar10) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar11 = *piVar9;
              iVar10 = iVar2;
            } while (iVar11 < iVar2);
          }
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar3);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_2 + 0xc)) && (*param_2 != 0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,*param_2,(ulong)*(uint *)((long)param_2 + 0xc) << 3);
  }
  *param_2 = 0;
  *(undefined4 *)((long)param_2 + 0xc) = 0x80000000;
  return;
}


