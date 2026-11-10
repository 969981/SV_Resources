/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bf15f8; name: FUN_00bf15f8
 */


long * FUN_00bf15f8(long param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(long *)(param_3 + 0x50) != *(long *)(param_1 + 8)) {
    FUN_00be9330(*(long *)(param_1 + 8),param_3,"ReleaseMessage",
                 "Field does not match message type.");
  }
  if (*(int *)(param_3 + 0x40) == 3) {
    FUN_00be9330(*(undefined8 *)(param_1 + 8),param_3,"ReleaseMessage",
                 "Field is repeated; the method requires a singular field.");
  }
  if ((*(uint *)(param_3 + 0x3c) & 0xfffffffe) != 10) {
    FUN_00beafb0(*(undefined8 *)(param_1 + 8),param_3,"ReleaseMessage",10);
  }
  if (param_4 == 0) {
    param_4 = *(long *)(param_1 + 0x50);
  }
  if (*(char *)(param_3 + 0x44) != '\0') {
    plVar3 = (long *)FUN_00c1c0d8(param_2 + *(int *)(param_1 + 0x34),param_3,param_4);
    goto LAB_00bf17e0;
  }
  if (*(int *)(param_1 + 0x28) != -1) {
    uVar2 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x30)) >> 4) * 0x38e38e39;
    uVar1 = uVar2 + 0x1f;
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    lVar7 = param_2 + *(int *)(param_1 + 0x28);
    *(uint *)(lVar7 + (long)((int)uVar1 >> 5) * 4) =
         *(uint *)(lVar7 + (long)((int)uVar1 >> 5) * 4) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU)
    ;
  }
  lVar7 = *(long *)(param_3 + 0x58);
  if (lVar7 == 0) {
LAB_00bf1784:
    if (*(char *)(param_3 + 0x44) == '\0') {
      plVar3 = (long *)(*(long *)(param_3 + 0x50) + 0x30);
    }
    else if (*(long *)(param_3 + 0x60) == 0) {
      plVar3 = (long *)(*(long *)(param_3 + 0x30) + 0x88);
    }
    else {
      plVar3 = (long *)(*(long *)(param_3 + 0x60) + 0x80);
    }
    iVar5 = (int)((ulong)(param_3 - *plVar3) >> 4) * 0x38e38e39;
  }
  else {
    lVar8 = lVar7 - *(long *)(*(long *)(lVar7 + 0x10) + 0x40) >> 4;
    uVar6 = lVar8 * -0x5555555555555555;
    lVar7 = param_2 + *(int *)(param_1 + 0x2c);
    if (*(int *)(lVar7 + (-(uVar6 >> 0x1f & 1) & 0xfffffffc00000000 |
                         lVar8 * -0x5555555555555554 & 0x3fffffffcU)) != *(int *)(param_3 + 0x38)) {
      plVar3 = (long *)0x0;
      goto LAB_00bf17e0;
    }
    *(undefined4 *)(lVar7 + (long)(int)uVar6 * 4) = 0;
    lVar7 = *(long *)(param_3 + 0x58);
    if (lVar7 == 0) goto LAB_00bf1784;
    iVar5 = *(int *)(*(long *)(param_1 + 8) + 0x2c) +
            (int)((ulong)(lVar7 - *(long *)(*(long *)(lVar7 + 0x10) + 0x40)) >> 4) * -0x55555555;
  }
  lVar7 = (long)*(int *)(*(long *)(param_1 + 0x20) + (long)iVar5 * 4);
  plVar3 = *(long **)(param_2 + lVar7);
  *(undefined8 *)(param_2 + lVar7) = 0;
LAB_00bf17e0:
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != -1) {
    if (*(int *)(param_1 + 0x30) == -1) {
      uVar9 = *(ulong *)(param_2 + iVar5);
      uVar6 = uVar9 & 0xfffffffffffffffe;
      if ((uVar9 & 1) != 0) {
        uVar6 = *(ulong *)(uVar6 + 8);
      }
    }
    else {
      uVar6 = *(ulong *)(param_2 + iVar5);
    }
    if ((plVar3 != (long *)0x0) && (uVar6 != 0)) {
      plVar4 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3);
      (**(code **)(*plVar4 + 0x88))(plVar4,plVar3);
      plVar3 = plVar4;
    }
  }
  return plVar3;
}


