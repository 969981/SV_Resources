/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033a860; name: FUN_0033a860
 */


void FUN_0033a860(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_38;
  
  puVar2 = param_1 + 1;
  puVar7 = (undefined8 *)*puVar2;
  if (puVar7 != (undefined8 *)0x0) {
    puVar6 = puVar2;
    do {
      iVar1 = strcmp((char *)puVar7[4],param_2);
      if (iVar1 >= 0) {
        puVar6 = puVar7;
      }
      puVar7 = (undefined8 *)puVar7[iVar1 < 0];
    } while (puVar7 != (undefined8 *)0x0);
    if ((puVar6 != puVar2) && (iVar1 = strcmp(param_2,(char *)puVar6[4]), -1 < iVar1)) {
      local_38 = param_3;
      FUN_0033d1bc(puVar6[5] + 0x40,&local_38);
      if (*(long *)(puVar6[5] + 0x50) == 0) {
        plVar4 = (long *)puVar6[1];
        if ((long *)puVar6[1] == (long *)0x0) {
          plVar4 = puVar6 + 2;
          plVar3 = (long *)*plVar4;
          if ((undefined8 *)*plVar3 != puVar6) {
            do {
              lVar5 = *plVar4;
              plVar4 = (long *)(lVar5 + 0x10);
              plVar3 = (long *)*plVar4;
            } while (*plVar3 != lVar5);
          }
        }
        else {
          do {
            plVar3 = plVar4;
            plVar4 = (long *)*plVar3;
          } while ((long *)*plVar3 != (long *)0x0);
        }
        if ((undefined8 *)*param_1 == puVar6) {
          *param_1 = plVar3;
        }
        param_1[2] = param_1[2] + -1;
        FUN_01336080(param_1[1],puVar6);
        puVar2 = (undefined8 *)puVar6[5];
        puVar6[5] = 0;
        if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0033a960 to 0033a963 has its CatchHandler @ 0033a98c */
          (**(code **)*puVar2)();
        }
        FUN_0049e790(PTR_LAB_047cba48,puVar6);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


