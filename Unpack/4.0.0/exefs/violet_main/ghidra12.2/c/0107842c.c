/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0107842c; name: FUN_0107842c
 */


void FUN_0107842c(long param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  memcpy((void *)(param_1 + 8),(void *)(param_2 + 8),0x58);
  plVar1 = (long *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar7 = (long *)*(long *)(param_1 + 0x90);
    while (plVar7 != (long *)0x0) {
      plVar8 = *(long **)(param_1 + 0x98);
      plVar9 = (long *)*plVar7;
      uVar3 = (**(code **)(*plVar8 + 0xf8))(plVar8);
      if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
        (**(code **)(*plVar8 + 0x18))(plVar8,plVar7,0x18,4);
        plVar7 = plVar9;
      }
      else {
        FUN_00c48fe8(plVar8,plVar7,0x18,4);
        plVar7 = plVar9;
      }
    }
    lVar5 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (((((lVar5 != 0) && (*(undefined8 *)*plVar1 = 0, lVar5 != 1)) &&
         (*(undefined8 *)(*plVar1 + 8) = 0, lVar5 != 2)) &&
        ((*(undefined8 *)(*plVar1 + 0x10) = 0, lVar5 != 3 &&
         (*(undefined8 *)(*plVar1 + 0x18) = 0, lVar5 != 4)))) &&
       ((*(undefined8 *)(*plVar1 + 0x20) = 0, lVar5 != 5 &&
        ((*(undefined8 *)(*plVar1 + 0x28) = 0, lVar5 != 6 &&
         (*(undefined8 *)(*plVar1 + 0x30) = 0, lVar5 != 7)))))) {
      lVar6 = 7;
      do {
        *(undefined8 *)(*plVar1 + lVar6 * 8) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar5 != lVar6);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  for (plVar7 = *(long **)(param_2 + 0x90); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    uVar2 = *(undefined1 *)((long)plVar7 + 0x14);
    puVar4 = (undefined1 *)FUN_010785a8(plVar1,plVar7 + 2);
    *puVar4 = uVar2;
  }
  return;
}


