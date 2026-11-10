/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01613b98; name: FUN_01613b98
 */


void FUN_01613b98(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(PTR_DAT_047e2f98 + 0x10);
  uVar2 = *(undefined8 *)PTR_DAT_047e2f98;
  uVar3 = *(undefined8 *)(PTR_DAT_047e2f98 + 8);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(PTR_DAT_047e2f98 + 0x18);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  FUN_01613e70(param_1 + 0x28);
  memcpy((void *)(param_1 + 0x90),PTR_DAT_047e2fa0,0x23);
  if (*(long *)(param_1 + 0x110) != 0) {
    plVar1 = (long *)(param_1 + 0xb8);
    FUN_016026ac(plVar1,*(undefined8 *)(param_1 + 0xe8));
    uVar7 = *(ulong *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    if (uVar7 != 0) {
      uVar4 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 0x10) = 0;
          lVar6 = uVar5 * 8;
          uVar5 = uVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar6 + 0x18) = 0;
        } while ((uVar7 & 0xfffffffffffffffc) != uVar5);
      }
      if (uVar4 != 0) {
        lVar6 = uVar5 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar6) = 0;
          uVar4 = uVar4 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(long *)(param_1 + 0x178) != 0) {
    plVar1 = (long *)(param_1 + 0x120);
    FUN_016026ac(plVar1,*(undefined8 *)(param_1 + 0x150));
    uVar7 = *(ulong *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (uVar7 != 0) {
      uVar4 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 0x10) = 0;
          lVar6 = uVar5 * 8;
          uVar5 = uVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar6 + 0x18) = 0;
        } while ((uVar7 & 0xfffffffffffffffc) != uVar5);
      }
      if (uVar4 != 0) {
        lVar6 = uVar5 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar6) = 0;
          uVar4 = uVar4 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    plVar1 = (long *)(param_1 + 0x188);
    FUN_01602490(plVar1,*(undefined8 *)(param_1 + 0x1b8));
    uVar7 = *(ulong *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    if (uVar7 != 0) {
      uVar4 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 0x10) = 0;
          lVar6 = uVar5 * 8;
          uVar5 = uVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar6 + 0x18) = 0;
        } while ((uVar7 & 0xfffffffffffffffc) != uVar5);
      }
      if (uVar4 != 0) {
        lVar6 = uVar5 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar6) = 0;
          uVar4 = uVar4 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  if (*(long *)(param_1 + 0x248) != 0) {
    plVar1 = (long *)(param_1 + 0x1f0);
    FUN_01602490(plVar1,*(undefined8 *)(param_1 + 0x220));
    uVar7 = *(ulong *)(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x220) = 0;
    if (uVar7 != 0) {
      uVar4 = uVar7 & 3;
      if (uVar7 - 1 < 3) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        do {
          *(undefined8 *)(*plVar1 + uVar5 * 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 8) = 0;
          *(undefined8 *)(*plVar1 + uVar5 * 8 + 0x10) = 0;
          lVar6 = uVar5 * 8;
          uVar5 = uVar5 + 4;
          *(undefined8 *)(*plVar1 + lVar6 + 0x18) = 0;
        } while ((uVar7 & 0xfffffffffffffffc) != uVar5);
      }
      if (uVar4 != 0) {
        lVar6 = uVar5 << 3;
        do {
          *(undefined8 *)(*plVar1 + lVar6) = 0;
          uVar4 = uVar4 - 1;
          lVar6 = lVar6 + 8;
        } while (uVar4 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  return;
}


