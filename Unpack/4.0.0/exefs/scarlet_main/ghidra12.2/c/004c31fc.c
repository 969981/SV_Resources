/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004c31fc; name: FUN_004c31fc
 */


undefined8 FUN_004c31fc(undefined8 *param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar5 = param_1 + 1;
  plVar1 = (long *)*plVar5;
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    uVar4 = *param_2;
    plVar3 = plVar1;
    plVar8 = plVar5;
    do {
      while ((plVar7 = plVar3, (ulong)plVar7[4] < uVar4 ||
             (((ulong)plVar7[4] <= uVar4 && ((int)plVar7[5] < (int)param_2[1]))))) {
        plVar3 = (long *)plVar7[1];
        if ((long *)plVar7[1] == (long *)0x0) goto LAB_004c325c;
      }
      plVar3 = (long *)*plVar7;
      plVar8 = plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
LAB_004c325c:
    if (((plVar8 == plVar5) || (uVar4 < (ulong)plVar8[4])) ||
       ((uVar4 <= (ulong)plVar8[4] && ((int)param_2[1] < (int)plVar8[5])))) {
      return 0;
    }
    plVar5 = (long *)plVar8[1];
    if ((long *)plVar8[1] == (long *)0x0) {
      plVar5 = plVar8 + 2;
      plVar3 = (long *)*plVar5;
      if ((long *)*plVar3 != plVar8) {
        do {
          lVar6 = *plVar5;
          plVar5 = (long *)(lVar6 + 0x10);
          plVar3 = (long *)*plVar5;
        } while (*plVar3 != lVar6);
      }
    }
    else {
      do {
        plVar3 = plVar5;
        plVar5 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
    if ((long *)*param_1 == plVar8) {
      *param_1 = plVar3;
    }
    param_1[2] = param_1[2] + -1;
    FUN_01336080(plVar1,plVar8);
    FUN_0049e790(PTR_LAB_047cba48,plVar8);
    uVar2 = 1;
  }
  return uVar2;
}


