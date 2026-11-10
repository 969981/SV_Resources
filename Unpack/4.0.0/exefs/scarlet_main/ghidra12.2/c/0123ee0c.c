/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0123ee0c; name: FUN_0123ee0c
 */


ulong FUN_0123ee0c(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  if (param_2[1] == 1) {
    uVar1 = *param_2;
    plVar4 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),uVar1);
    uVar2 = *(undefined2 *)(param_2 + 4);
    if (param_2[1] != 1) {
      uVar2 = 0;
    }
    uVar3 = (**(code **)(*plVar4 + 400))();
    lVar8 = *(long *)(param_1 + 0x20);
    lVar9 = *(long *)(lVar8 + 0x20);
    uVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x30),uVar1);
    uVar6 = FUN_0129b2a0(*(undefined8 *)(lVar9 + 0x18),uVar5,uVar2,uVar3);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_0123efd0(*(undefined8 *)(param_1 + 0x38),uVar2,plVar4);
      return uVar6;
    }
    FUN_0129aff0(*(undefined8 *)(lVar8 + 0x18),0x5a,uVar1,uVar2,uVar3);
    uVar6 = FUN_0123efd0(*(undefined8 *)(param_1 + 0x38),uVar2,plVar4);
    lVar8 = *(long *)(param_1 + 0x20);
    uVar6 = uVar6 & 0xffffffff;
    lVar9 = *(long *)(lVar8 + 0x20);
    uVar5 = FUN_01021c94(*(undefined8 *)(*(long *)(lVar9 + 0x10) + 0x30),uVar1);
    FUN_014dc030(*(undefined8 *)(lVar9 + 0x18),uVar5,uVar2);
    FUN_0129aff0(*(undefined8 *)(lVar8 + 0x18),0x5b,uVar1,uVar2);
  }
  else {
    uVar7 = 7;
    if (param_2[1] != 5) {
      uVar7 = 0;
    }
    uVar6 = (ulong)uVar7;
  }
  return uVar6;
}


