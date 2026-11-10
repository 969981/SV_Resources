/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0351f1f0; name: FUN_0351f1f0
 */


long FUN_0351f1f0(long param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4,
                 long *param_5)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long local_190 [32];
  uint local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar1 = *(long *)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x10);
  lVar8 = plVar2[0xd];
  local_90 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_68 = 1;
  (**(code **)(*plVar2 + 0xb8))(plVar2,local_190,0);
  local_68._0_3_ = CONCAT12(1,(undefined2)local_68);
  if (local_88 == 0) {
    *param_3 = 0;
    return 0;
  }
  *param_3 = 1;
  lVar9 = *(long *)(local_88 + 0x18);
  *param_4 = 0;
  if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x5a) & 1) != 0)) {
    iVar3 = FUN_0351f4a4(param_1,local_190,param_2,param_5);
    if (iVar3 == 2) {
      return 0;
    }
    if (iVar3 != 0) goto LAB_0351f284;
LAB_0351f3f0:
    lVar9 = *param_5;
    goto LAB_0351f480;
  }
  iVar3 = 3;
LAB_0351f284:
  if ((char)local_68 != '\0') {
LAB_0351f28c:
    *param_3 = iVar3 != 3;
    return 0;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),local_190,0);
  if (*(long *)(local_88 + 0x18) == 0) {
    *param_3 = iVar3 != 3;
    if (lVar9 == 0) {
      return 0;
    }
    if (iVar3 != 1) {
      return 0;
    }
    if ((*(byte *)(lVar9 + 0x5a) & 1) == 0) {
      return 0;
    }
    if (local_88 == 0) goto LAB_0351f400;
    uVar5 = (ulong)local_90;
    if (local_90 == 0) {
LAB_0351f408:
      lVar9 = 0;
    }
    else {
      if (local_90 == 1) {
LAB_0351f3e0:
        uVar6 = 0;
        lVar9 = 0;
      }
      else {
        lVar9 = 0;
        uVar7 = 0;
        do {
          uVar6 = uVar7 + 2;
          lVar9 = *(long *)(*(long *)(local_190[uVar7 + 1] + 8) + 0x68) +
                  *(long *)(*(long *)(local_190[uVar7] + 8) + 0x68) + lVar9;
          uVar7 = uVar6;
        } while ((uVar5 & 0xfffffffe) != uVar6);
      }
LAB_0351f44c:
      if ((uVar5 & 1) != 0) {
        lVar9 = *(long *)(*(long *)(local_190[uVar6] + 8) + 0x68) + lVar9;
      }
    }
    uVar5 = *(long *)(local_88 + 8) - (ulong)*(uint *)(local_80 + 0x88);
    lVar9 = (uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU)) + lVar9;
  }
  else {
    if ((iVar3 == 3) && ((*(byte *)(*(long *)(local_88 + 0x18) + 0x5a) & 1) == 0))
    goto LAB_0351f28c;
    *param_4 = 1;
    iVar4 = FUN_0351f4a4(param_1,local_190,param_2,param_5);
    *param_3 = iVar3 != 3 || iVar4 != 3;
    if (1 < iVar4 - 2U) {
      if (iVar4 != 0) {
        return 0;
      }
      goto LAB_0351f3f0;
    }
    if (iVar3 == 3) {
      return 0;
    }
    if (local_88 != 0) {
      uVar5 = (ulong)local_90;
      if (local_90 == 0) goto LAB_0351f408;
      if (local_90 == 1) goto LAB_0351f3e0;
      lVar9 = 0;
      uVar7 = 0;
      do {
        uVar6 = uVar7 + 2;
        lVar9 = *(long *)(*(long *)(local_190[uVar7 + 1] + 8) + 0x68) +
                *(long *)(*(long *)(local_190[uVar7] + 8) + 0x68) + lVar9;
        uVar7 = uVar6;
      } while ((uVar5 & 0xfffffffe) != uVar6);
      goto LAB_0351f44c;
    }
LAB_0351f400:
    lVar9 = 0x7fffffffffffffff;
  }
  *param_5 = lVar9;
LAB_0351f480:
  return lVar9 - (lVar1 - lVar8);
}


