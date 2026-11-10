/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ed068; name: FUN_007ed068
 */


void FUN_007ed068(long *param_1,long param_2,uint *param_3)

{
  char cVar1;
  undefined1 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 local_160;
  undefined4 local_158;
  char acStack_150 [256];
  
  if ((param_2 != 0) && (param_3 != (uint *)0x0)) {
    memset(acStack_150,0,0xff);
    *param_3 = 0;
    if ((long *)param_1[3] != param_1 + 2) {
      plVar5 = (long *)(param_1[3] - (long)*(int *)((long)param_1 + 0x24));
      do {
        cVar1 = (**(code **)(*plVar5 + 0x20))(plVar5);
        if (cVar1 == -1) {
          local_158 = 0;
          local_160 = 1;
          (**(code **)(*param_1 + 0x10))(param_1,&local_160);
        }
        else {
          uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
          if (acStack_150[uVar3 & 0xff] == '\0') {
            uVar2 = (**(code **)(*plVar5 + 0x20))(plVar5);
            *(undefined1 *)(param_2 + (ulong)*param_3) = uVar2;
            *param_3 = *param_3 + 1;
            uVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
            *(undefined1 *)(param_2 + (ulong)*param_3) = uVar2;
            *param_3 = *param_3 + 1;
            uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
            acStack_150[uVar3 & 0xff] = '\x01';
          }
        }
        plVar4 = *(long **)((long)plVar5 + (long)*(int *)((long)param_1 + 0x24) + 8);
        plVar5 = (long *)((long)plVar4 - (long)*(int *)((long)param_1 + 0x24));
      } while (plVar4 != param_1 + 2);
    }
  }
  return;
}


