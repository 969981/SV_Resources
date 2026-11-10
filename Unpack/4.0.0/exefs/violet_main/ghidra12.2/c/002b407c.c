/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b407c; name: FUN_002b407c
 */


void FUN_002b407c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
    local_48 = param_2;
    lVar1 = FUN_002c3ab0(lVar6 + 0x108,param_2,&DAT_03cc9966,&local_48,auStack_50);
    lVar2 = FUN_002c4c8c(lVar1 + 0x70,param_3);
    if (lVar1 + 0x78 != lVar2) {
      FUN_002c4d9c(lVar1 + 0x70,lVar2);
    }
    if ((param_4 & 1) == 0) {
      FUN_002b4f10(lVar6,param_2);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    plVar4 = *(long **)(puVar3[2] + 0x108);
    while (plVar4 != (long *)(puVar3[2] + 0x110)) {
      if (plVar4[0x10] != 0) {
        return;
      }
      plVar5 = (long *)plVar4[1];
      if ((long *)plVar4[1] == (long *)0x0) {
        plVar5 = plVar4 + 2;
        if (*(long **)*plVar5 == plVar4) {
          plVar4 = (long *)*plVar5;
        }
        else {
          do {
            lVar1 = *plVar5;
            plVar5 = (long *)(lVar1 + 0x10);
            plVar4 = (long *)*plVar5;
          } while (*plVar4 != lVar1);
        }
      }
      else {
        do {
          plVar4 = plVar5;
          plVar5 = (long *)*plVar4;
        } while ((long *)*plVar4 != (long *)0x0);
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (puVar3 != (undefined8 *)0x0) {
                    /* try { // try from 002b4184 to 002b4187 has its CatchHandler @ 002b41a0 */
      (**(code **)*puVar3)();
    }
  }
  return;
}


