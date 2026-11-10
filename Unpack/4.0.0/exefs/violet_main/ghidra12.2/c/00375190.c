/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00375190; name: FUN_00375190
 */


void FUN_00375190(long param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != param_2) {
    (**(code **)(*(long *)*param_3 + 0x18))((long *)*param_3,iVar1);
  }
  if (iVar1 != 4) {
    puVar4 = (undefined8 *)*param_3;
    *param_3 = 0;
    plVar5 = (long *)(param_1 + 0x18);
    plVar6 = (long *)*plVar5;
    if (plVar6 == (long *)0x0) {
      plVar7 = plVar5;
    }
    else {
      plVar5 = (long *)(param_1 + 0x18);
      while( true ) {
        while( true ) {
          plVar7 = plVar6;
          if ((undefined8 *)plVar6[4] <= puVar4) break;
          if ((long *)*plVar6 == (long *)0x0) {
            lVar3 = *plVar6;
            goto joined_r0x00375224;
          }
          plVar5 = plVar6;
          plVar6 = (long *)*plVar6;
        }
        if (puVar4 <= (undefined8 *)plVar6[4]) break;
        plVar5 = plVar6 + 1;
        if ((long *)*plVar5 == (long *)0x0) break;
        plVar6 = (long *)*plVar5;
      }
    }
    lVar3 = *plVar5;
    plVar6 = plVar5;
joined_r0x00375224:
    if (lVar3 == 0) {
      puVar2 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
      puVar2[4] = puVar4;
      puVar2[5] = puVar4;
      puVar2[2] = plVar7;
      *puVar2 = 0;
      puVar2[1] = 0;
      *plVar6 = (long)puVar2;
      if (**(long **)(param_1 + 0x10) != 0) {
        *(long *)(param_1 + 0x10) = **(long **)(param_1 + 0x10);
        puVar2 = (undefined8 *)*plVar6;
      }
      FUN_010108e0(*(undefined8 *)(param_1 + 0x18),puVar2);
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
      return;
    }
    if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00375234 to 0037523b has its CatchHandler @ 003752b8 */
      (**(code **)*puVar4)(puVar4);
    }
  }
  return;
}


