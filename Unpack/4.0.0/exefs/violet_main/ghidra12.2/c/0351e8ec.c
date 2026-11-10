/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0351e8ec; name: FUN_0351e8ec
 */


void FUN_0351e8ec(long param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  puVar3 = PTR_DAT_047e2fd0;
  lVar2 = *param_2;
  while (lVar2 != 0) {
    if (*(int *)(lVar2 + 8) == 1) {
      FUN_03518938(*(undefined8 *)(lVar2 + 0x10));
    }
    else if (*(int *)(lVar2 + 8) == 0) {
      plVar6 = *(long **)(lVar2 + 0x10);
      lVar5 = plVar6[2];
      cVar1 = *(char *)((long)plVar6 + 0x2c);
      plVar4 = (long *)plVar6[1];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0xe0))
                  (plVar4,*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68));
      }
      plVar4 = *(long **)(param_1 + 0x40);
      if ((plVar4 != (long *)0x0) && (plVar6 != plVar4)) {
        do {
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0 && plVar6 != plVar4);
      }
      if (plVar4 != (long *)0x0) {
        *(undefined4 *)(plVar4 + 2) = 0;
      }
      if (cVar1 != '\0') {
        FUN_0351e9e8(param_1,(int)lVar5,1);
      }
    }
    lVar5 = *(long *)(lVar2 + 0x18);
    plVar4 = param_2;
    if (*param_2 != lVar2) {
      plVar4 = (long *)&DAT_00000018;
    }
    *plVar4 = lVar5;
    (**(code **)(puVar3 + 0x30))(0,lVar2);
    lVar2 = lVar5;
  }
  return;
}


