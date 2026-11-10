/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b7ba8; name: FUN_011b7ba8
 */


void FUN_011b7ba8(long param_1,undefined1 param_2,ulong param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 0x150) + 0x30)
                                ,param_2);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x78))();
    if ((uVar4 & 1) == 0) {
      lVar5 = (**(code **)(*plVar3 + 0x1e0))(plVar3);
      (*(code *)**(undefined8 **)(lVar5 + 0x28))();
      uVar4 = FUN_011b6e8c();
      if ((uVar4 & 1) == 0) {
        return;
      }
      plVar3 = *(long **)(param_1 + 0x48);
      uVar2 = 0x3af;
    }
    else {
      lVar5 = FUN_014c0ee8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 0x150) + 0x30),
                           param_2);
      if (lVar5 == 0) {
        return;
      }
      uVar2 = FUN_01a6acfc();
      plVar3 = *(long **)(param_1 + 0x48);
    }
    uVar4 = (**(code **)(*plVar3 + 0x78))(plVar3,plVar3[8],uVar2);
    if (((uint)param_3 & 0xff) < *(uint *)(plVar3 + 0xb)) {
      uVar8 = param_3 & 0xff;
      lVar5 = uVar8 * 2 + (param_3 & 0xff);
      lVar6 = plVar3[8];
      *(ulong *)(plVar3[0xc] + lVar5 * 8 + 8) = uVar4 & 0xffff | 0x20000;
      lVar7 = plVar3[0xc];
      lVar5 = *(long *)(lVar7 + lVar5 * 8);
      if (*(char *)(lVar5 + 0x54) != '\0') {
        uVar1 = FUN_011b8d00(*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar6 + 0x30),
                             *(undefined2 *)(lVar5 + 0x50));
        *(undefined2 *)(lVar5 + 0x52) = uVar1;
        lVar7 = plVar3[0xc];
      }
      *(undefined2 *)(lVar7 + uVar8 * 0x18 + 0x10) = 0;
      lVar5 = plVar3[0xc] + uVar8 * 0x18;
      *(ushort *)(lVar5 + 0x12) = *(ushort *)(lVar5 + 0x12) & 0xfffe;
    }
  }
  return;
}


