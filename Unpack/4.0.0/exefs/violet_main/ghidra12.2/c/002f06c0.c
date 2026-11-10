/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002f06c0; name: FUN_002f06c0
 */


void FUN_002f06c0(undefined4 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *local_70 [3];
  undefined1 auStack_58 [8];
  undefined8 local_48;
  
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  puVar4 = (undefined8 *)(param_1 + 10);
  *puVar4 = 0;
  plVar5 = (long *)(param_1 + 8);
  *plVar5 = (long)puVar4;
  *(undefined8 *)(param_1 + 0xc) = 0;
  plVar6 = (long *)*param_2;
  do {
    while( true ) {
      if (plVar6 == param_2 + 1) {
        *(undefined8 *)(param_1 + 0xe) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x12) = 0;
        return;
      }
                    /* try { // try from 002f0720 to 002f075f has its CatchHandler @ 002f0808 */
      plVar1 = (long *)FUN_00288128(plVar5,puVar4,&local_48,auStack_58,plVar6 + 4);
      if (*plVar1 == 0) break;
      plVar1 = (long *)plVar6[1];
      if ((long *)plVar6[1] != (long *)0x0) goto LAB_002f07a4;
LAB_002f07b4:
      plVar1 = plVar6 + 2;
      if (*(long **)*plVar1 == plVar6) {
        plVar6 = (long *)*plVar1;
      }
      else {
        do {
          lVar3 = *plVar1;
          plVar1 = (long *)(lVar3 + 0x10);
          plVar6 = (long *)*plVar1;
        } while (*plVar6 != lVar3);
      }
    }
    FUN_002883f4(local_70,plVar5,plVar6 + 4);
    local_70[0][2] = local_48;
    *local_70[0] = 0;
    local_70[0][1] = 0;
    *plVar1 = (long)local_70[0];
    puVar2 = local_70[0];
    if (*(long *)*plVar5 != 0) {
      *plVar5 = *(long *)*plVar5;
      puVar2 = (undefined8 *)*plVar1;
    }
    FUN_010108e0(*(undefined8 *)(param_1 + 10),puVar2);
    *(long *)(param_1 + 0xc) = *(long *)(param_1 + 0xc) + 1;
    plVar1 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) goto LAB_002f07b4;
LAB_002f07a4:
    do {
      plVar6 = plVar1;
      plVar1 = (long *)*plVar6;
    } while ((long *)*plVar6 != (long *)0x0);
  } while( true );
}


