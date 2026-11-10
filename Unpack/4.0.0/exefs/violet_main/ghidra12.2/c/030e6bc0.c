/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030e6bc0; name: FUN_030e6bc0
 */


undefined8 FUN_030e6bc0(long param_1,int *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int *piVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined4 local_58 [2];
  int local_50 [2];
  undefined4 local_48 [2];
  int local_28 [2];
  
  lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x18) + (long)*param_2 * 0x10;
  if ((int)*(short *)(lVar2 + 10) + (int)*(short *)(lVar2 + 8) < 0x17) {
    plVar1 = (long *)(param_1 + 0x10);
    lVar2 = FUN_030e7a5c(plVar1,param_2);
    if (lVar2 == 0) {
      uVar5 = 0xffffffff00000000;
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (ulong)*(uint *)(lVar2 + 4);
      uVar5 = (lVar2 - *(long *)(param_1 + 0x20)) * 0x20000000;
    }
    lVar2 = *plVar1 + ((long)((uVar8 | uVar5) << 0x20) >> 0x1d);
    uVar7 = *(uint *)(lVar2 + 4);
    *(uint *)(lVar2 + 4) = uVar7 & 0xff7fffff;
    if ((uVar7 & 0xff400000) != 0) {
      return 0;
    }
    iVar6 = (int)(uVar8 | uVar5);
    if ((*(uint *)(param_1 + 0x28) < (uint)(uVar5 >> 0x20)) ||
       (lVar2 = *(long *)(param_1 + 0x20) + ((long)uVar5 >> 0x20) * 8, *(int *)(lVar2 + 4) != iVar6)
       ) {
      lVar2 = FUN_030e7a5c(plVar1,*plVar1 + (long)iVar6 * 8);
    }
    FUN_030e7acc(plVar1,lVar2);
    local_28[0] = *param_2;
    local_48[0] = 0xffffffff;
    piVar3 = local_28;
    puVar4 = local_48;
  }
  else {
    plVar1 = (long *)(param_1 + 0x30);
    lVar2 = FUN_030e7e50(plVar1,param_2);
    if (lVar2 == 0) {
      lVar2 = -0x100000000;
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = *(uint *)(lVar2 + 4);
      lVar2 = (lVar2 - *(long *)(param_1 + 0x40)) * 0x20000000;
    }
    lVar10 = *plVar1;
    uVar7 = uVar7 | (uint)lVar2;
    lVar9 = lVar10 + (long)(int)uVar7 * 0x28;
    *(undefined1 *)(lVar9 + 0xd) = 0;
    if (*(char *)(lVar9 + 0xc) != '\0') {
      return 0;
    }
    if (*(int *)(lVar10 + (long)(int)uVar7 * 0x28 + 8) != 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x48) < (uint)((ulong)lVar2 >> 0x20)) ||
       (lVar2 = *(long *)(param_1 + 0x40) + (lVar2 >> 0x20) * 8, *(uint *)(lVar2 + 4) != uVar7)) {
      lVar2 = FUN_030e7e50(plVar1,*plVar1 + (long)(int)uVar7 * 0x28);
    }
    FUN_030e7ec4(plVar1,lVar2);
    local_50[0] = *param_2;
    piVar3 = local_50;
    puVar4 = local_58;
    local_58[0] = 0xffffffff;
  }
  FUN_030e2538(param_1,piVar3,puVar4,param_3);
  return 1;
}


