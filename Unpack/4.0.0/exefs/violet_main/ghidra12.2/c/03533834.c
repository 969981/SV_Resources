/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03533834; name: FUN_03533834
 */


void FUN_03533834(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  for (plVar5 = *(long **)(param_1 + 0x30); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 0x10;
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x3c) == 3) {
      uVar4 = 2;
    }
    else {
      if (*(int *)(lVar3 + 0x3c) != 0) goto LAB_035338a0;
      uVar4 = 1;
    }
    *(undefined4 *)(lVar3 + 0x3c) = uVar4;
  }
LAB_035338a0:
  puVar2 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x80) != 0) {
    plVar5 = (long *)(*(long *)(param_1 + 0x80) + 0x10);
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      lVar6 = 0;
      do {
        if (*(int *)(lVar3 + 8) == 1) {
          FUN_035187ac(*(undefined8 *)(lVar3 + 0x10));
          lVar7 = *(long *)(lVar3 + 0x18);
          plVar1 = plVar5;
          if (*plVar5 != lVar3) {
            plVar1 = (long *)(lVar6 + 0x18);
          }
          *plVar1 = lVar7;
          (**(code **)(puVar2 + 0x30))(0,lVar3);
          lVar3 = lVar7;
        }
        else {
          lVar6 = lVar3;
          lVar3 = *(long *)(lVar3 + 0x18);
        }
      } while (lVar3 != 0);
    }
  }
  return;
}


