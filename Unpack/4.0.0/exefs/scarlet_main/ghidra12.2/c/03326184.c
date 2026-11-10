/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03326184; name: FUN_03326184
 */


void FUN_03326184(long *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  long local_38;
  long lStack_30;
  ulong local_28;
  undefined4 local_8 [2];
  
  lVar12 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar12;
  uVar9 = param_2[2];
  param_1[2] = uVar9;
  if ((uVar9 & 1) != 0) {
    piVar1 = (int *)((uVar9 & 0xfffffffffffffffe) + 8);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = *piVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = *param_4;
  pbVar10 = (byte *)param_1[1];
  if ((pbVar10 != (byte *)0x0) && (*param_1 != 0)) {
    pbVar11 = pbVar10;
    if ((*pbVar10 & 1) == 0) {
      do {
        pbVar11 = *(byte **)(pbVar11 + 8);
      } while ((*pbVar11 & 1) == 0);
    }
    if (((*(ulong *)(pbVar11 + 0x10) & 0x1f) == 7) &&
       (uVar3 = *(uint *)(param_3 + 0x1bc), 0 < (int)uVar3)) {
      uVar4 = (int)pbVar10 * -0x61c8864f;
      uVar5 = (int)((ulong)pbVar10 >> 0x20) * -0x61c8864f;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar9 = (ulong)(uVar3 & (uVar4 + (uVar4 >> 2) + uVar5 * 0x40 + 0x9e3779b9 ^ uVar5));
      lVar12 = *(long *)(param_3 + 0x1b0);
      pbVar11 = *(byte **)(lVar12 + uVar9 * 0x10);
      if (pbVar11 != (byte *)0xffffffffffffffff) {
        if (pbVar11 != pbVar10) {
          do {
            uVar9 = (ulong)((int)uVar9 + 1U & uVar3);
            pbVar11 = *(byte **)(lVar12 + uVar9 * 0x10);
            if (pbVar11 == (byte *)0xffffffffffffffff) {
              return;
            }
          } while (pbVar11 != pbVar10);
        }
        uVar9 = *(ulong *)(lVar12 + uVar9 * 0x10 + 8);
        if (((int)uVar9 != 0) &&
           (*(long *)(*(long *)(param_3 + 0xb0) +
                     (-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 | (uVar9 & 0xffffffff) << 3)) != 0))
        {
          local_8[0] = *param_4;
          FUN_0331dda8(&local_38,param_3,param_1,local_8);
          if (local_38 != 0) {
            *param_1 = local_38;
            param_1[1] = lStack_30;
            if ((local_28 & 1) != 0) {
              piVar1 = (int *)((local_28 & 0xfffffffffffffffe) + 8);
              do {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar7) {
                  *piVar1 = *piVar1 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
            }
            if ((param_1[2] & 1U) != 0) {
              plVar8 = (long *)(param_1[2] & 0xfffffffffffffffe);
              plVar2 = plVar8 + 1;
              do {
                lVar12 = *plVar2;
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar7) {
                  *(int *)plVar2 = (int)lVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if ((plVar8 != (long *)0x0) && ((int)lVar12 == 1)) {
                (**(code **)(*plVar8 + 8))();
              }
            }
            param_1[2] = local_28;
          }
          if ((local_28 & 1) != 0) {
            plVar8 = (long *)(local_28 & 0xfffffffffffffffe);
            plVar2 = plVar8 + 1;
            do {
              lVar12 = *plVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *(int *)plVar2 = (int)lVar12 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if ((plVar8 != (long *)0x0) && ((int)lVar12 == 1)) {
              (**(code **)(*plVar8 + 8))();
            }
          }
        }
      }
    }
  }
  return;
}


