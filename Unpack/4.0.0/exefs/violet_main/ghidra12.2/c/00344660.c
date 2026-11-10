/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00344660; name: FUN_00344660
 */


ulong FUN_00344660(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *in_x4;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar8 = *(long *)(param_1 + 0x50);
  *(long *)(*in_x4 + 0x50) = lVar8;
  FUN_0037b030();
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    plVar1 = (long *)(*in_x4 + 0x60);
    lVar4 = (long)plVar1 + ((ulong)((int)lVar8 * 0x18 + 0xf) & 0xfffffff0);
    plVar5 = (long *)(*in_x4 + 0x70);
    plVar3 = (long *)(param_1 + 0x60);
    lVar6 = lVar8;
    do {
      lVar10 = plVar3[1];
      lVar9 = *plVar3;
      *plVar5 = lVar4;
      plVar5[-1] = lVar10;
      plVar5[-2] = lVar9;
      lVar4 = lVar4 + ((ulong)(*(int *)(lVar9 + 0x10) + 0xf) & 0xfffffff0);
      lVar6 = lVar6 + -1;
      plVar5 = plVar5 + 3;
      plVar3 = plVar3 + 2;
    } while (lVar6 != 0);
    uVar7 = 0;
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,in_x4);
      if (uVar2 != 0) {
        if (uVar7 == 0) {
          uVar7 = uVar2;
        }
        else if (4 < uVar2) {
          FUN_00350fd0();
        }
      }
      plVar1 = plVar1 + 3;
    }
  }
  return uVar7;
}


