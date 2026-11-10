/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024a6ff8; name: FUN_024a6ff8
 */


long * FUN_024a6ff8(long param_1,long *param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 == (long *)0x0) {
    *param_2 = (long)plVar3;
    return plVar3;
  }
  iVar1 = *param_3;
  if (iVar1 == 1) {
    do {
      if ((int)plVar4[4] == 1) {
        if ((int)plVar4[5] <= param_3[2]) {
          if ((int)plVar4[5] < param_3[2]) goto LAB_024a7044;
          goto LAB_024a70b0;
        }
LAB_024a7034:
        plVar3 = plVar4;
        plVar2 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_024a70ac;
      }
      else {
        if (1 < (int)plVar4[4]) goto LAB_024a7034;
LAB_024a7044:
        plVar3 = plVar4 + 1;
        plVar2 = (long *)*plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_024a70b0;
      }
      plVar4 = plVar2;
    } while( true );
  }
  iVar5 = *(int *)(plVar4 + 4);
  if (iVar5 != iVar1) {
    do {
      if (iVar1 < iVar5) {
        plVar3 = plVar4;
        plVar2 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) goto LAB_024a70ac;
      }
      else {
        if (iVar1 <= iVar5) break;
        plVar3 = plVar4 + 1;
        plVar2 = (long *)*plVar3;
        if ((long *)*plVar3 == (long *)0x0) break;
      }
      plVar4 = plVar2;
      iVar5 = (int)plVar4[4];
    } while (iVar5 != iVar1);
  }
LAB_024a70b0:
  *param_2 = (long)plVar4;
  return plVar3;
LAB_024a70ac:
  plVar4 = plVar3;
  goto LAB_024a70b0;
}


