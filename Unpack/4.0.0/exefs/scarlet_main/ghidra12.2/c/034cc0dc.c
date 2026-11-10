/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034cc0dc; name: FUN_034cc0dc
 */


undefined8 FUN_034cc0dc(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 200) != '\0') {
    lVar4 = *(long *)(param_1 + 0xa0);
    if (lVar4 == 0) {
      fVar5 = 0.0;
    }
    else {
      do {
        fVar5 = (float)FUN_034cd368(lVar4);
        lVar4 = *(long *)(lVar4 + 0x10);
      } while (lVar4 != 0);
    }
    if (fVar5 < *(float *)(param_1 + 0xb4)) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
      *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
    }
    *(float *)(param_1 + 0xb4) = fVar5;
    *(undefined1 *)(param_1 + 200) = 0;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    if ((*(int *)(param_1 + 0x70) != 0) && (0.0 < *(float *)(param_1 + 0x74))) {
      lVar4 = -4;
      if (*(long *)(param_1 + 0x68) != -1) {
        lVar4 = *(long *)(param_1 + 0x68);
      }
      uVar1 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uint)lVar4 / uVar1;
        }
        for (plVar3 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                                (ulong)((uint)lVar4 - uVar2 * uVar1) * 8); plVar3 != (long *)0x0;
            plVar3 = (long *)*plVar3) {
          if (plVar3[1] == lVar4) {
            if (((plVar3[2] != 0) && (lVar4 = *(long *)(plVar3[2] + 0x70), lVar4 != 0)) &&
               (*(char *)(lVar4 + 0x2c) != '\0')) {
              return 1;
            }
            break;
          }
        }
      }
    }
    if ((*(int *)(param_1 + 0x88) != 0) && (0.0 < *(float *)(param_1 + 0x8c))) {
      lVar4 = -4;
      if (*(long *)(param_1 + 0x80) != -1) {
        lVar4 = *(long *)(param_1 + 0x80);
      }
      uVar1 = *(uint *)(*(long *)PTR_DAT_047e6cc0 + 0x38);
      if (uVar1 != 0) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = (uint)lVar4 / uVar1;
        }
        for (plVar3 = *(long **)(*(long *)(*(long *)PTR_DAT_047e6cc0 + 0x30) +
                                (ulong)((uint)lVar4 - uVar2 * uVar1) * 8); plVar3 != (long *)0x0;
            plVar3 = (long *)*plVar3) {
          if (plVar3[1] == lVar4) {
            if (plVar3[2] == 0) {
              return 0;
            }
            lVar4 = *(long *)(plVar3[2] + 0x70);
            if (lVar4 == 0) {
              return 0;
            }
            if (*(char *)(lVar4 + 0x2c) == '\0') {
              return 0;
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


