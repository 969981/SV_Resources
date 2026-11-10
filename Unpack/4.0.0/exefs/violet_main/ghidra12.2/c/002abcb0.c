/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002abcb0; name: FUN_002abcb0
 */


void FUN_002abcb0(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined8 uVar3;
  size_t sVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  char *__s;
  
  puVar1 = PTR_PTR_047cc6d8;
  plVar6 = (long *)*param_3;
  while (plVar6 != param_3 + 1) {
    uVar3 = FUN_0038ad50(puVar1,param_1);
    FUN_002abdf0(param_1,uVar3,plVar6 + 7);
    if ((*(byte *)(plVar6 + 4) & 1) == 0) {
      __s = (char *)((long)plVar6 + 0x21);
    }
    else {
      __s = (char *)plVar6[6];
    }
    sVar4 = strlen(__s);
    lVar5 = *param_2;
    if (lVar5 == 0) {
      lVar5 = FUN_0038b150(param_1,0,8);
      *param_2 = lVar5;
    }
    FUN_0038b920(lVar5 + 8,__s,sVar4,0,param_1);
    FUN_0038b4e0(lVar5 + 8,__s,sVar4,uVar3,param_1);
    plVar7 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar7 = plVar6 + 2;
      bVar2 = (long *)*(long *)*plVar7 != plVar6;
      plVar6 = (long *)*plVar7;
      if (bVar2) {
        do {
          lVar5 = *plVar7;
          plVar7 = (long *)(lVar5 + 0x10);
          plVar6 = (long *)*plVar7;
        } while (*(long *)*plVar7 != lVar5);
      }
    }
    else {
      do {
        plVar6 = plVar7;
        plVar7 = (long *)*plVar6;
      } while (plVar7 != (long *)0x0);
    }
  }
  return;
}


