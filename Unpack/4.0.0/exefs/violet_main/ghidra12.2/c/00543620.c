/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00543620; name: FUN_00543620
 */


void FUN_00543620(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  
  if (*param_2 == '\0') {
    *param_1 = *param_3;
    uVar1 = param_3[1];
    param_1[2] = param_3[2];
    param_1[1] = uVar1;
    lVar3 = param_3[3];
    plVar5 = param_1 + 1;
    param_1[3] = lVar3;
    if (lVar3 == 0) {
      *param_1 = plVar5;
      return;
    }
    *(long **)(*plVar5 + 0x10) = plVar5;
    param_3[1] = 0;
    *param_3 = param_3 + 1;
    param_3[3] = 0;
  }
  else {
    *param_1 = 0;
    uVar1 = FUN_01cf7e20();
    puVar4 = param_1 + 1;
    *puVar4 = 0;
    param_1[2] = uVar1;
    param_1[3] = 0;
    *param_1 = puVar4;
    plVar5 = *(long **)(param_2 + 8);
    while (plVar5 != (long *)(param_2 + 0x10)) {
                    /* try { // try from 00543670 to 0054367f has its CatchHandler @ 00543724 */
      FUN_01d0202c(param_1,puVar4,plVar5 + 4,plVar5 + 4);
      plVar2 = (long *)plVar5[1];
      if ((long *)plVar5[1] == (long *)0x0) {
        plVar2 = plVar5 + 2;
        if (*(long **)*plVar2 == plVar5) {
          plVar5 = (long *)*plVar2;
        }
        else {
          do {
            lVar3 = *plVar2;
            plVar2 = (long *)(lVar3 + 0x10);
            plVar5 = (long *)*plVar2;
          } while (*plVar5 != lVar3);
        }
      }
      else {
        do {
          plVar5 = plVar2;
          plVar2 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
  }
  return;
}


