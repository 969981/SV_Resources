/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0112a220; name: FUN_0112a220
 */


void FUN_0112a220(long param_1)

{
  uint *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return;
  }
  uVar5 = 0;
  lVar6 = 0xf0;
  do {
    puVar1 = (uint *)(param_1 + lVar6);
    lVar6 = lVar6 + 4;
    uVar5 = *puVar1 | uVar5;
  } while (lVar6 != 0x110);
  if (uVar5 != 0) {
    return;
  }
  if (*(int *)(param_1 + 300) == 0) {
LAB_0112a364:
    *(undefined4 *)(param_1 + 0x2e0) = 1;
    goto LAB_0112a36c;
  }
  if (((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x11c) != 0)) ||
     (*(int *)(param_1 + 0x40) == 0)) {
    *(undefined4 *)(param_1 + 0x2e0) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x68c) == 0) {
      FUN_00101f80(param_1,0);
    }
    *(undefined4 *)(param_1 + 0x68c) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    if (*(int *)(param_1 + 0x690) == 0) {
      if (*(int *)(param_1 + 300) == 0) goto LAB_0112a364;
      lVar6 = 0;
      uVar7 = 0;
      bVar3 = false;
      do {
        lVar2 = *(long *)(param_1 + 0x1b8) + lVar6;
        if (*(int *)(lVar2 + 0x60) != 0) {
          *(undefined4 *)(lVar2 + 0x60) = 0;
          if ((1 < *(uint *)(param_1 + 0xc)) &&
             ((int)*(uint *)(param_1 + 0xc) <= *(int *)(*(long *)(param_1 + 0x1b8) + lVar6 + 0x50)))
          {
            bVar3 = true;
          }
        }
        uVar5 = *(uint *)(param_1 + 300);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x1c0;
      } while (uVar7 < uVar5);
      if (bVar3) goto LAB_0112a2c0;
    }
    else {
      *(undefined4 *)(param_1 + 0x690) = 0;
LAB_0112a2c0:
      *(int *)(param_1 + 0x63c) = *(int *)(param_1 + 0x63c) + 1;
      FUN_00102180(param_1,0);
      *(undefined4 *)(param_1 + 0x644) = 0;
      *(undefined4 *)(param_1 + 0x69c) = 0;
      FUN_00102180(param_1,1);
      uVar5 = *(uint *)(param_1 + 300);
    }
    *(undefined4 *)(param_1 + 0x2e0) = 1;
    if (uVar5 == 0) goto LAB_0112a36c;
  }
  if (*(int *)(*(long *)(param_1 + 0x1b8) + 0x5c) == 1) {
    FUN_001025d0(param_1);
  }
LAB_0112a36c:
  iVar4 = FUN_0011f640();
  if (1 < *(int *)(param_1 + 0x640) + 1U) {
    *(int *)(param_1 + 0x668) = (iVar4 - *(int *)(param_1 + 0x640)) + *(int *)(param_1 + 0x668);
    *(undefined4 *)(param_1 + 0x640) = 0;
  }
  iVar4 = 1;
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    iVar4 = *(uint *)(param_1 + 0xc) + 1;
  }
  FUN_00102c80(param_1,iVar4);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  return;
}


