/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02114e38; name: FUN_02114e38
 */


uint FUN_02114e38(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x50);
  uVar3 = *(undefined1 *)(lVar8 + 0x8d);
  uVar1 = *(undefined4 *)(lVar8 + 0x30);
  uVar2 = *(undefined4 *)(lVar8 + 0x34);
  uVar4 = *(undefined1 *)(lVar8 + 0x8c);
  uVar7 = FUN_00f7e2a0(uVar2,uVar3,0);
  uVar5 = 0;
  if ((uVar7 & 1) != 0) {
    uVar5 = FUN_010a5f84(uVar2,uVar4,uVar3,uVar1,0);
    uVar5 = ~uVar5 & 1;
  }
  uVar7 = FUN_00f7e2a0(uVar2,uVar3,1);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_010a5f84(uVar2,uVar4,uVar3,uVar1,1);
    uVar5 = uVar5 + (~uVar6 & 1);
  }
  uVar7 = FUN_00f7e2a0(uVar2,uVar3,2);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_010a5f84(uVar2,uVar4,uVar3,uVar1,2);
    uVar5 = uVar5 + (~uVar6 & 1);
  }
  uVar7 = FUN_00f7e2a0(uVar2,uVar3,3);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_010a5f84(uVar2,uVar4,uVar3,uVar1,3);
    uVar5 = uVar5 + (~uVar6 & 1);
  }
  uVar7 = FUN_00f7e2a0(uVar2,uVar3,4);
  if ((uVar7 & 1) != 0) {
    uVar6 = FUN_010a5f84(uVar2,uVar4,uVar3,uVar1,4);
    uVar5 = uVar5 + (~uVar6 & 1);
  }
  return uVar5;
}


