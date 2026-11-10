/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0331dda8; name: FUN_0331dda8
 */


void FUN_0331dda8(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  lVar6 = FUN_03327360((long *)(param_2 + 0x28),param_4);
  if ((lVar6 != 0) &&
     (uVar2 = *(uint *)(*(long *)(param_2 + 0x28) + (long)*(int *)(lVar6 + 4) * 8 + 4),
     -1 < (int)uVar2)) {
    uVar3 = *(uint *)(*(long *)(param_2 + 0x18) + (ulong)uVar2 * 0x10 + 8);
    if (0 < (int)uVar3) {
      plVar7 = *(long **)(*(long *)(param_2 + 0x18) + (ulong)uVar2 * 0x10);
      uVar8 = 0;
      if (*param_3 == 0) {
        plVar9 = plVar7;
        do {
          if (*plVar9 == 0) goto LAB_0331de7c;
          uVar8 = uVar8 + 1;
          plVar9 = plVar9 + 6;
        } while (uVar3 != uVar8);
      }
      else {
        plVar9 = plVar7 + 1;
        do {
          if ((plVar9[-1] == *param_3) && (*plVar9 == param_3[1])) {
LAB_0331de7c:
            uVar8 = uVar8 & 0xffffffff;
            lVar6 = plVar7[uVar8 * 6 + 4];
            *param_1 = plVar7[uVar8 * 6 + 3];
            param_1[1] = lVar6;
            uVar8 = plVar7[uVar8 * 6 + 5];
            param_1[2] = uVar8;
            if ((uVar8 & 1) == 0) {
              return;
            }
            piVar1 = (int *)((uVar8 & 0xfffffffffffffffe) + 8);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            return;
          }
          uVar8 = uVar8 + 1;
          plVar9 = plVar9 + 6;
        } while (uVar3 != uVar8);
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


