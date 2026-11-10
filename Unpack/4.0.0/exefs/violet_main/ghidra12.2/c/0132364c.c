/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0132364c; name: FUN_0132364c
 */


undefined8 FUN_0132364c(long param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x120);
  plVar4 = *(long **)(lVar5 + 0x48);
  plVar2 = *(long **)(lVar5 + 0x50);
  lVar6 = *param_2;
  plVar3 = (long *)param_2[3];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  if ((plVar4 != plVar2) && (*(long *)(*plVar4 + 0x98) != lVar6)) {
    do {
      plVar1 = plVar4 + 1;
      plVar4 = plVar2;
      if (plVar2 == plVar1) break;
      plVar4 = plVar1;
    } while (*(long *)(*plVar1 + 0x98) != lVar6);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if (*(long **)(lVar5 + 0x50) == plVar4) {
    for (plVar2 = *(long **)(lVar5 + 0x48); plVar2 != plVar4; plVar2 = plVar2 + 1) {
      if (*(int *)(*plVar2 + 0x90) == 0) {
        if (plVar4 == plVar2) {
          return 0;
        }
        FUN_01323758(*plVar2,param_2,param_3,0);
        return 1;
      }
    }
  }
  return 0;
}


