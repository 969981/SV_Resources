/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012474b0; name: FUN_012474b0
 */


void FUN_012474b0(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long *plVar8;
  undefined1 auStack_70 [16];
  long local_60;
  byte local_58;
  byte local_57;
  char local_56;
  
  FUN_01247754(auStack_70,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (local_56 == '\0') {
    uVar5 = (ulong)local_58;
    lVar6 = 0;
    if (local_58 < 5) {
      lVar6 = *(long *)(local_60 + 0x30) + uVar5 * 0x38 + 0x28;
    }
    if (local_57 < *(byte *)(lVar6 + 0x30)) {
      plVar8 = *(long **)(lVar6 + (ulong)local_57 * 8);
    }
    else {
      plVar8 = (long *)0x0;
    }
    local_57 = local_57 + 1;
    if (local_58 < 5) {
      do {
        lVar6 = *(long *)(*(long *)(local_60 + 0x290) + 8);
        bVar2 = FUN_010f9128(*(undefined4 *)(lVar6 + 0x36c),*(undefined1 *)(lVar6 + 0x370),
                             (uint)uVar5 & 0xff);
        for (; local_57 < bVar2; local_57 = local_57 + 1) {
          lVar6 = 0;
          if (local_58 < 5) {
            lVar6 = *(long *)(local_60 + 0x30) + (ulong)local_58 * 0x38 + 0x28;
          }
          if (((local_57 < *(byte *)(lVar6 + 0x30)) &&
              (plVar4 = *(long **)(lVar6 + (ulong)local_57 * 8), plVar4 != (long *)0x0)) &&
             (uVar5 = (**(code **)(*plVar4 + 0x200))(), (uVar5 & 1) == 0)) goto LAB_012475e0;
        }
        uVar1 = local_58 + 1;
        uVar5 = (ulong)uVar1;
        local_58 = (byte)uVar1;
        local_57 = 0;
      } while ((uVar1 & 0xff) < 5);
    }
    local_56 = '\x01';
LAB_012475e0:
LAB_012475ec:
    iVar3 = (**(code **)(*plVar8 + 0x98))(plVar8);
    uVar5 = (ulong)*(byte *)(param_3 + 8);
    if (uVar5 != 0) {
      piVar7 = (int *)(param_3 + 0xc);
      do {
        if (*piVar7 == iVar3) {
          FUN_01247a58(param_2,plVar8);
          break;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 1;
      } while (uVar5 != 0);
    }
    if (local_56 == '\0') {
      uVar5 = (ulong)local_58;
      lVar6 = 0;
      if (local_58 < 5) {
        lVar6 = *(long *)(local_60 + 0x30) + uVar5 * 0x38 + 0x28;
      }
      if (local_57 < *(byte *)(lVar6 + 0x30)) {
        plVar8 = *(long **)(lVar6 + (ulong)local_57 * 8);
      }
      else {
        plVar8 = (long *)0x0;
      }
      local_57 = local_57 + 1;
      if (local_58 < 5) {
        do {
          lVar6 = *(long *)(*(long *)(local_60 + 0x290) + 8);
          bVar2 = FUN_010f9128(*(undefined4 *)(lVar6 + 0x36c),*(undefined1 *)(lVar6 + 0x370),
                               (uint)uVar5 & 0xff);
          for (; local_57 < bVar2; local_57 = local_57 + 1) {
            lVar6 = 0;
            if (local_58 < 5) {
              lVar6 = *(long *)(local_60 + 0x30) + (ulong)local_58 * 0x38 + 0x28;
            }
            if (((local_57 < *(byte *)(lVar6 + 0x30)) &&
                (plVar4 = *(long **)(lVar6 + (ulong)local_57 * 8), plVar4 != (long *)0x0)) &&
               (uVar5 = (**(code **)(*plVar4 + 0x200))(), (uVar5 & 1) == 0)) goto LAB_012475ec;
          }
          uVar1 = local_58 + 1;
          uVar5 = (ulong)uVar1;
          local_58 = (byte)uVar1;
          local_57 = 0;
        } while ((uVar1 & 0xff) < 5);
      }
      local_56 = '\x01';
      goto LAB_012475ec;
    }
  }
  return;
}


