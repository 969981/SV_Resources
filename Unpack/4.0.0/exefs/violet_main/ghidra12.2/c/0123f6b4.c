/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123f6b4; name: FUN_0123f6b4
 */


void FUN_0123f6b4(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar5 = *param_3;
  uVar6 = (ulong)*(byte *)(lVar5 + 0x2420);
  if (*(byte *)(lVar5 + 0x2420) != 0) {
    lVar8 = 0;
    uVar9 = 0;
    do {
      if ((((uint)uVar9 & 0xff) < (uint)uVar6) &&
         (lVar10 = lVar5 + lVar8, *(int *)(lVar10 + 0xc) == 1)) {
        plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),
                                      *(undefined4 *)(lVar10 + 8));
        uVar1 = FUN_0124020c(*(undefined8 *)(param_1 + 0x38),plVar3,*(undefined2 *)(lVar10 + 0x18));
        lVar5 = *(long *)(param_1 + 0x20);
        lVar10 = *(long *)(lVar5 + 0x20);
        uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
        plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(lVar10 + 0x10) + 0x30),uVar2);
        (**(code **)(*plVar4 + 0x4b0))(plVar4,uVar1);
        uVar7 = *(undefined8 *)(lVar5 + 0x18);
        uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
        FUN_0129aff0(uVar7,0x51,uVar2,uVar1 & 0xff);
        lVar5 = *param_3;
      }
      uVar6 = (ulong)*(byte *)(lVar5 + 0x2420);
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x8c;
    } while (uVar9 < uVar6);
  }
  return;
}


