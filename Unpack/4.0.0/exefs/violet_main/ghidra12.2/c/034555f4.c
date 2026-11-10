/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034555f4; name: FUN_034555f4
 */


void FUN_034555f4(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_047e6f28;
  plVar6 = *(long **)(param_1 + 0x50);
  while (plVar6 != (long *)0x0) {
    lVar7 = plVar6[2];
    lVar8 = *(long *)(lVar7 + 8);
    plVar3 = (long *)FUN_0344ec90(*(undefined8 *)puVar2,*(undefined4 *)(lVar8 + 0x30),
                                  *(byte *)(lVar8 + 0x36) >> 6 & 1);
    if (lVar8 == param_2) {
      *(int *)(lVar7 + 0x34) = *(int *)(lVar7 + 0x34) + 1;
    }
    plVar6 = (long *)*plVar6;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x30))();
    }
  }
  plVar6 = *(long **)(param_1 + 0x28);
  if (plVar6 != (long *)0x0) {
    plVar3 = (long *)0x0;
    do {
      lVar7 = plVar6[2];
      lVar8 = *(long *)(lVar7 + 8);
      plVar4 = (long *)FUN_0344ec90(*(undefined8 *)puVar2,*(undefined4 *)(lVar8 + 0x30),
                                    *(byte *)(lVar8 + 0x36) >> 6 & 1);
      if (lVar8 == param_2) {
        FUN_0345541c(param_1,*(undefined4 *)(param_2 + 0x30),lVar7,0);
        plVar5 = (long *)*plVar6;
        plVar1 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar6) {
          plVar1 = plVar3;
        }
        *plVar1 = (long)plVar5;
        if (*(long **)(param_1 + 0x30) == plVar6) {
          *(long **)(param_1 + 0x30) = plVar3;
        }
        *plVar6 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar6;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
      }
      else {
        plVar5 = (long *)*plVar6;
        plVar3 = plVar6;
      }
      plVar6 = plVar5;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4);
      }
    } while (plVar6 != (long *)0x0);
  }
  return;
}


