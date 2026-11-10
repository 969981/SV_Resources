/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b1c80; name: FUN_034b1c80
 */


undefined8 FUN_034b1c80(long param_1)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((uVar1 & 1) == 0) {
      uVar3 = *(short *)(param_1 + 0x20) + 1;
      *(ushort *)(param_1 + 0x20) = uVar3;
      if (uVar3 < *(ushort *)(param_1 + 0x22)) {
        if ((uVar1 >> 1 & 1) == 0) {
          return 0x11;
        }
        *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 0x18;
        goto LAB_034b1dec;
      }
      if ((uVar1 >> 1 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x20) = 0;
        return 0x11;
      }
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 8);
      *(undefined2 *)(param_1 + 0x20) = 0;
    }
    else {
      lVar8 = *(long *)PTR_DAT_047e7068 * 0x5851f42d4c957f2d + 1;
      *(long *)PTR_DAT_047e7068 = lVar8;
      uVar3 = *(ushort *)(param_1 + 0x22);
      uVar4 = 0;
      uVar7 = (uint)((ulong)lVar8 >> 0x21);
      if (uVar3 != 0) {
        uVar4 = uVar7 / uVar3;
      }
      uVar7 = uVar7 - uVar4 * uVar3;
      uVar9 = (ulong)uVar7;
      *(short *)(param_1 + 0x20) = (short)uVar7;
      if ((uVar1 >> 1 & 1) == 0) {
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 == (long *)0x0) {
          return 0x11;
        }
      }
      else {
        plVar6 = *(long **)(param_1 + 0x10);
        *(ulong *)(param_1 + 0x18) = *(long *)(param_1 + 8) + (ulong)uVar7 * 0x18;
        if (plVar6 == (long *)0x0) goto LAB_034b1dec;
      }
      uVar1 = *(uint *)(plVar6 + 1);
      if (uVar1 == 0) {
        bVar5 = true;
      }
      else {
        uVar10 = 0;
        bVar5 = true;
        do {
          while (bVar5) {
            cVar2 = ((undefined1 *)*plVar6)[uVar10];
            uVar10 = uVar10 + 1;
            bVar5 = cVar2 != '\0';
            if (uVar10 == uVar1) {
              if (cVar2 == '\0') {
                bVar5 = false;
              }
              else {
                *(undefined1 *)*plVar6 = 0;
                if (1 < *(uint *)(plVar6 + 1)) {
                  uVar9 = 1;
                  do {
                    *(undefined1 *)(*plVar6 + uVar9) = 0;
                    uVar9 = uVar9 + 1;
                  } while (uVar9 < *(uint *)(plVar6 + 1));
                }
                plVar6 = *(long **)(param_1 + 0x10);
                bVar5 = true;
                uVar9 = (ulong)*(ushort *)(param_1 + 0x20);
              }
              goto LAB_034b1dcc;
            }
          }
          uVar10 = uVar10 + 1;
          bVar5 = false;
        } while (uVar10 != uVar1);
      }
LAB_034b1dcc:
      *(undefined1 *)(*plVar6 + (uVar9 & 0xffff)) = 1;
      if ((*(byte *)(param_1 + 0x28) >> 1 & 1) == 0) {
        return 0x11;
      }
      if (!bVar5) goto LAB_034b1dec;
    }
    if (*(char *)(param_1 + 0x2d) != '\0') {
LAB_034b1dec:
      *(undefined2 *)(param_1 + 0x24) = 0;
      return 1;
    }
  }
  return 0x11;
}


