/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026f6d70; name: FUN_026f6d70
 */


void FUN_026f6d70(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  plVar6 = (long *)*param_2;
  while (plVar6 != (long *)*param_3) {
    plVar5 = (long *)*param_3;
    if (*plVar6 != *(long *)*param_4) {
      do {
        plVar6 = plVar6 + 3;
        *param_2 = (long)plVar6;
        if (plVar6 == (long *)*param_3) goto LAB_026f6e28;
        plVar5 = (long *)*param_3;
      } while (*plVar6 != *(long *)*param_4);
    }
    do {
      plVar4 = plVar5;
      plVar6 = plVar4 + -3;
      *param_3 = plVar6;
      plVar7 = (long *)*param_2;
      if (plVar6 == plVar7) goto LAB_026f6e28;
      plVar5 = plVar6;
    } while (*plVar6 == *(long *)*param_4);
    lVar1 = *plVar7;
    lVar2 = plVar7[1];
    lVar9 = plVar7[2];
    lVar3 = plVar4[-1];
    lVar8 = *plVar6;
    plVar7[1] = plVar4[-2];
    plVar7[2] = lVar3;
    *plVar7 = lVar8;
    plVar4[-2] = lVar2;
    plVar4[-1] = lVar9;
    *plVar6 = lVar1;
    plVar6 = (long *)(*param_2 + 0x18);
    *param_2 = (long)plVar6;
  }
LAB_026f6e28:
  *param_1 = plVar6;
  return;
}


