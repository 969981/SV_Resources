/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0221d90c; name: FUN_0221d90c
 */


void FUN_0221d90c(long *param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  
  if (*param_1 != 0) {
    if ((param_2 & 1) != 0) {
      puVar6 = (ulong *)param_1[1];
      while (uVar9 = *puVar6, ((uint)uVar9 >> 8 & 1) == 0) {
        if (((uVar9 & 1) != 0) || (puVar6 = (ulong *)puVar6[1], puVar6 == (ulong *)0x0))
        goto LAB_0221d97c;
      }
      if ((puVar6 != (ulong *)0x0) &&
         ((code *)puVar6[(ulong)(byte)POPCOUNT((char)uVar9) + 2] != (code *)0x0)) {
        (*(code *)puVar6[(ulong)(byte)POPCOUNT((char)uVar9) + 2])(*param_1,(ulong *)param_1[1],1);
      }
    }
LAB_0221d97c:
    if ((param_2 >> 1 & 1) != 0) {
      puVar7 = (undefined8 *)param_1[1];
      uVar8 = (uint)*puVar7;
      if ((uVar8 >> 0x13 & 1) == 0) {
        do {
          puVar7 = (undefined8 *)puVar7[1];
          uVar8 = (uint)*puVar7;
        } while ((uVar8 >> 0x13 & 1) == 0);
      }
      uVar9 = CONCAT44(uVar8,uVar8) & 0x7ffff0007ffff;
      (**(code **)(*(long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar9) +
                                                 POPCOUNT((char)(uVar9 >> 8)) +
                                                POPCOUNT((char)(uVar9 >> 0x10))) + 2] + 0x20))
                ((long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                             POPCOUNT((char)(uVar9 >> 0x10))) + 2],*param_1);
      uVar9 = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if ((uVar9 & 1) != 0) {
        plVar5 = (long *)(uVar9 & 0xfffffffffffffffe);
        plVar1 = plVar5 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x0221da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 8))();
          return;
        }
      }
    }
  }
  return;
}


