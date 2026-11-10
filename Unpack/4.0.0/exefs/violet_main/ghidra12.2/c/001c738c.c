/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c738c; name: FUN_001c738c
 */


long * FUN_001c738c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(param_1 + 0x1100);
  auVar10 = FUN_001e0dfc();
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_001dc298(param_1,5,2);
  }
  FUN_001c8d30(lVar4,auStack_78);
  lVar3 = FUN_001c8d40(auStack_78);
  if (lVar3 == 0) {
    plVar5 = (long *)0x0;
  }
  else {
    lVar6 = 0;
    plVar5 = (long *)0x0;
    iVar7 = -1;
    do {
      lVar3 = *(long *)(lVar3 + 0x18);
      for (puVar8 = *(undefined8 **)(lVar3 + 0x10); puVar8 != (undefined8 *)0x0;
          puVar8 = (undefined8 *)puVar8[2]) {
        plVar9 = (long *)*puVar8;
        iVar2 = iVar7;
        if ((plVar9[0x98] + plVar9[0x9c] == 0) && (*plVar9 == 0)) {
          iVar2 = FUN_001e0e28(auVar10._0_8_,auVar10._8_8_,plVar9[0x47],plVar9[0x48]);
          lVar1 = lVar3;
          if (iVar2 <= iVar7) {
            iVar2 = iVar7;
            lVar1 = lVar6;
            plVar9 = plVar5;
          }
          plVar5 = plVar9;
          lVar6 = lVar1;
        }
        iVar7 = iVar2;
      }
      lVar3 = FUN_001c8d40(auStack_78);
    } while (lVar3 != 0);
    if (plVar5 != (long *)0x0) {
      FUN_001c71bc(lVar6,plVar5);
      *(long *)(lVar4 + 0x30) = *(long *)(lVar4 + 0x30) + -1;
      *plVar5 = param_1;
    }
  }
  if (*(long *)(param_1 + 0xe8) != 0) {
    FUN_001dc2d8(param_1,5);
  }
  return plVar5;
}


