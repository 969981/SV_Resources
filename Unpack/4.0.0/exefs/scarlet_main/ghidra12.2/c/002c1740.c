/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c1740; name: FUN_002c1740
 */


void FUN_002c1740(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 *local_60 [3];
  undefined1 auStack_48 [8];
  undefined8 local_38;
  
  param_1[2] = 0;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  *param_1 = (long)plVar6;
  plVar4 = (long *)*param_2;
  do {
    while( true ) {
      if (plVar4 == param_2 + 1) {
        return;
      }
                    /* try { // try from 002c178c to 002c17cb has its CatchHandler @ 002c1868 */
      plVar2 = (long *)FUN_002c1880(param_1,plVar6,&local_38,auStack_48,plVar4 + 4);
      if (*plVar2 != 0) break;
      FUN_002c1a8c(local_60,param_1,plVar4 + 4);
      local_60[0][2] = local_38;
      *local_60[0] = 0;
      local_60[0][1] = 0;
      *plVar2 = (long)local_60[0];
      puVar3 = local_60[0];
      if (*(long *)*param_1 != 0) {
        *param_1 = *(long *)*param_1;
        puVar3 = (undefined8 *)*plVar2;
      }
      FUN_010108e0(param_1[1],puVar3);
      param_1[2] = param_1[2] + 1;
      plVar2 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) goto LAB_002c1820;
LAB_002c1810:
      do {
        plVar4 = plVar2;
        plVar2 = (long *)*plVar4;
      } while (plVar2 != (long *)0x0);
    }
    plVar2 = (long *)plVar4[1];
    if ((long *)plVar4[1] != (long *)0x0) goto LAB_002c1810;
LAB_002c1820:
    plVar2 = plVar4 + 2;
    bVar1 = (long *)*(long *)*plVar2 != plVar4;
    plVar4 = (long *)*plVar2;
    if (bVar1) {
      do {
        lVar5 = *plVar2;
        plVar2 = (long *)(lVar5 + 0x10);
        plVar4 = (long *)*plVar2;
      } while (*(long *)*plVar2 != lVar5);
    }
  } while( true );
}


