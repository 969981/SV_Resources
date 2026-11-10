/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005c1d84; name: FUN_005c1d84
 */


void FUN_005c1d84(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *local_60 [3];
  undefined1 auStack_48 [8];
  undefined8 local_38;
  
  *param_1 = 0;
  lVar1 = FUN_01cf7e20();
  plVar4 = param_1 + 1;
  *plVar4 = 0;
  param_1[2] = lVar1;
  param_1[3] = 0;
  *param_1 = (long)plVar4;
  plVar5 = (long *)*param_2;
  do {
    while( true ) {
      if (plVar5 == param_2 + 1) {
        return;
      }
                    /* try { // try from 005c1dd0 to 005c1e0f has its CatchHandler @ 005c1eac */
      plVar2 = (long *)FUN_027ca814(param_1,plVar4,&local_38,auStack_48,plVar5 + 4);
      if (*plVar2 == 0) break;
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] != (long *)0x0) goto LAB_005c1e54;
LAB_005c1e64:
      plVar2 = plVar5 + 2;
      if (*(long **)*plVar2 == plVar5) {
        plVar5 = (long *)*plVar2;
      }
      else {
        do {
          lVar1 = *plVar2;
          plVar2 = (long *)(lVar1 + 0x10);
          plVar5 = (long *)*plVar2;
        } while (*plVar5 != lVar1);
      }
    }
    FUN_005baa3c(local_60,param_1,plVar5 + 4);
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
    param_1[3] = param_1[3] + 1;
    plVar2 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) goto LAB_005c1e64;
LAB_005c1e54:
    do {
      plVar5 = plVar2;
      plVar2 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
  } while( true );
}


