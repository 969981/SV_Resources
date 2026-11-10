/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02923c90; name: FUN_02923c90
 */


ulong FUN_02923c90(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 local_38;
  
  lVar2 = *param_2;
  *(long *)(param_1 + 8) = param_2[1];
  *(long *)(param_1 + 0x10) = param_2[2];
  *(long *)(param_1 + 0x18) = param_2[3];
  *(long *)(param_1 + 0x20) = param_2[4];
  *(long *)(param_1 + 0x28) = param_2[5];
  *(long *)(param_1 + 0x30) = param_2[6];
  *(long *)(param_1 + 0x38) = param_2[7];
  *(long *)(param_1 + 0x40) = param_2[8];
  *(long *)(param_1 + 0x48) = param_2[9];
  *(long *)(param_1 + 0x50) = param_2[10];
  *(long *)(param_1 + 0x58) = param_2[0xb];
  plVar1 = (long *)(param_1 + 0x60);
  if (*(long *)(param_1 + 0xb8) != 0) {
    plVar3 = (long *)*(long *)(param_1 + 0x90);
    while (plVar3 != (long *)0x0) {
      plVar9 = *(long **)(param_1 + 0x98);
      plVar10 = (long *)*plVar3;
      uVar4 = (**(code **)(*plVar9 + 0xf8))(plVar9);
      if (((uVar4 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar9 + 0x18))(plVar9,plVar3,0x18,4);
        plVar3 = plVar10;
      }
      else {
        FUN_00c48fe8(plVar9,plVar3,0x18,4);
        plVar3 = plVar10;
      }
    }
    lVar6 = *(long *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x90) = 0;
    if (((((lVar6 != 0) && (*(undefined8 *)*plVar1 = 0, lVar6 != 1)) &&
         (*(undefined8 *)(*plVar1 + 8) = 0, lVar6 != 2)) &&
        ((*(undefined8 *)(*plVar1 + 0x10) = 0, lVar6 != 3 &&
         (*(undefined8 *)(*plVar1 + 0x18) = 0, lVar6 != 4)))) &&
       ((*(undefined8 *)(*plVar1 + 0x20) = 0, lVar6 != 5 &&
        ((*(undefined8 *)(*plVar1 + 0x28) = 0, lVar6 != 6 &&
         (*(undefined8 *)(*plVar1 + 0x30) = 0, lVar6 != 7)))))) {
      lVar8 = 7;
      do {
        *(undefined8 *)(*plVar1 + lVar8 * 8) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar6 != lVar8);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  uVar4 = 0x60;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    uVar7 = *(undefined8 *)((long)param_2 + uVar4);
    local_38 = uVar7;
    puVar5 = (undefined1 *)FUN_010785a8(plVar1,&local_38);
    uVar4 = (ulong)((int)uVar4 + 8);
    *puVar5 = (char)((ulong)uVar7 >> 0x20);
  }
  return uVar4;
}


