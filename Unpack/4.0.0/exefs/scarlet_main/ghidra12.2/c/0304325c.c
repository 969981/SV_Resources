/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0304325c; name: FUN_0304325c
 */


void FUN_0304325c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  
  if (*(int *)((long)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      *param_1 = 0;
    }
    else {
      plVar3 = (long *)(**(code **)(*param_2 + 0x18))(param_2,(long)(int)param_1[1] << 3);
      uVar8 = *(uint *)(param_1 + 1);
      if (0 < (int)uVar8) {
        plVar9 = (long *)*param_1;
        plVar4 = plVar3;
        plVar5 = plVar9;
        if (uVar8 != 1) {
          iVar7 = -(uVar8 & 0xfffffffe);
          do {
            *plVar4 = *plVar5;
            *plVar5 = 0;
            plVar4[1] = plVar5[1];
            plVar5[1] = 0;
            plVar4 = plVar4 + 2;
            plVar5 = plVar5 + 2;
            iVar7 = iVar7 + 2;
          } while (iVar7 != 0);
        }
        if ((uVar8 & 1) != 0) {
          *plVar4 = *plVar5;
          *plVar5 = 0;
        }
        uVar10 = 0;
        do {
          plVar4 = (long *)*plVar9;
          if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
            plVar5 = plVar4 + 2;
            do {
              lVar6 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar6 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar6 + -1 == 0) {
              (**(code **)(*plVar4 + 0x18))();
            }
          }
          uVar10 = uVar10 + 1;
          plVar9 = plVar9 + 1;
        } while (uVar10 != uVar8);
        uVar8 = *(uint *)(param_1 + 1);
      }
      *param_1 = (long)plVar3;
      *(uint *)((long)param_1 + 0xc) = uVar8;
    }
  }
  return;
}


