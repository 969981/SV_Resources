/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a29d0; name: FUN_010a29d0
 */


void FUN_010a29d0(long param_1,ulong param_2)

{
  long *plVar1;
  byte bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  char cVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint local_64;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x49b) & 1) == 0) {
    cVar16 = *(char *)(param_1 + (param_2 & 0xff) * 0x38 + 0x58);
    if (cVar16 != '\0') {
      do {
        bVar2 = cVar16 - 1;
        if (bVar2 == 0) {
          return;
        }
        puVar17 = (undefined8 *)(param_1 + (param_2 & 0xff) * 0x38 + (ulong)bVar2 * 8 + 0x28);
        uVar9 = (**(code **)(*(long *)*puVar17 + 0x208))();
        puVar5 = PTR_DAT_047d3f08;
        puVar4 = PTR_DAT_047d3f00;
        cVar16 = cVar16 + -1;
      } while ((uVar9 & 1) == 0);
      uVar18 = 0;
      plVar1 = (long *)(param_1 + 0x140);
LAB_010a2a70:
      plVar12 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x290) + 8) +
                                    0x50) + 0x38);
      local_64 = 0;
      if (plVar12 != (long *)0x0) {
        do {
          if ((*(uint *)((long)plVar12 + 0x14) == ((uint)param_2 & 0xff)) &&
             ((uint)*(byte *)(plVar12 + 3) == (uVar18 & 0xff))) {
            local_64 = *(uint *)(plVar12 + 2);
            goto LAB_010a2ab0;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
        local_64 = 0;
      }
LAB_010a2ab0:
      uVar9 = *(ulong *)(param_1 + 0x148);
      if (uVar9 != 0) {
        uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar15 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        uVar13 = (ulong)local_64;
        if (uVar15 < 2) {
          uVar14 = (ulong)((int)uVar9 - 1U & local_64);
        }
        else {
          uVar14 = uVar13;
          if (uVar9 <= uVar13) {
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = uVar13 / uVar9;
            }
            uVar14 = uVar13 - uVar14 * uVar9;
          }
        }
        plVar12 = *(long **)(*plVar1 + uVar14 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          if (uVar15 < 2) {
            do {
              if (plVar12[1] == uVar13) {
                if (*(uint *)(plVar12 + 2) == local_64) goto LAB_010a2bb0;
              }
              else if ((plVar12[1] & uVar9 - 1) != uVar14) break;
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
          else {
            do {
              uVar15 = plVar12[1];
              if (uVar15 == uVar13) {
                if (*(uint *)(plVar12 + 2) == local_64) goto LAB_010a2bb0;
              }
              else {
                if (uVar9 <= uVar15) {
                  uVar3 = 0;
                  if (uVar9 != 0) {
                    uVar3 = uVar15 / uVar9;
                  }
                  uVar15 = uVar15 - uVar3 * uVar9;
                }
                if (uVar15 != uVar14) break;
              }
              plVar12 = (long *)*plVar12;
            } while (plVar12 != (long *)0x0);
          }
        }
      }
      goto LAB_010a2c50;
    }
  }
  return;
LAB_010a2bb0:
  plVar12 = (long *)FUN_010a1b68(plVar1,&local_64);
  if (*plVar12 != 0) {
    puVar10 = (undefined8 *)FUN_010a1b68(plVar1,&local_64);
    plVar12 = (long *)*puVar10;
    puVar10 = (undefined8 *)(**(code **)plVar12[5])(plVar12 + 5);
    if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
      uVar11 = FUN_01b07aa4();
      *(undefined8 *)puVar5 = uVar11;
      __cxa_guard_release(puVar4);
    }
    for (; puVar10 != (undefined8 *)0x0; puVar10 = (undefined8 *)*puVar10) {
      if (puVar10 == (undefined8 *)puVar5) {
        sVar6 = (**(code **)(*plVar12 + 0xf8))(plVar12);
        if (sVar6 == 0x95) {
          uVar7 = (**(code **)(*(long *)*puVar17 + 0x98))();
          puVar10 = (undefined8 *)FUN_010a1b68(plVar1,&local_64);
          (**(code **)(*(long *)*puVar10 + 0x1e8))((long *)*puVar10,uVar7);
        }
        break;
      }
    }
  }
LAB_010a2c50:
  uVar18 = uVar18 + 1;
  if (uVar18 == bVar2) {
    return;
  }
  goto LAB_010a2a70;
}


