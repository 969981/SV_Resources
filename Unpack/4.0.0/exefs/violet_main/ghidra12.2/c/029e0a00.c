/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029e0a00; name: FUN_029e0a00
 */


void FUN_029e0a00(long param_1)

{
  long *plVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  undefined1 uVar8;
  uint uVar9;
  
  lVar6 = *(long *)(param_1 + 0x280);
  bVar3 = false;
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x69) == '\0') {
      bVar3 = *(char *)(lVar6 + 0x6a) != '\0';
    }
    else {
      bVar3 = true;
    }
  }
  lVar6 = *(long *)(param_1 + 0x288);
  bVar4 = false;
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x69) == '\0') {
      bVar4 = *(char *)(lVar6 + 0x6a) != '\0';
    }
    else {
      bVar4 = true;
    }
  }
  plVar1 = (long *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x244) == '\0') {
    cVar5 = '\x04';
    if (!bVar3 && !bVar4) {
      cVar5 = '\0';
    }
    if ((*(char *)(param_1 + 0x58) == cVar5) && (*(char *)(param_1 + 0x59) == '\n'))
    goto LAB_029e0a90;
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    *(char *)(param_1 + 0x58) = cVar5;
    cVar5 = '\n';
  }
  else {
    cVar5 = *(char *)(param_1 + 0x245);
    if ((*(char *)(param_1 + 0x58) == cVar5) && (*(char *)(param_1 + 0x59) == cVar5))
    goto LAB_029e0a90;
    uVar2 = *(undefined2 *)(param_1 + 0x58);
    *(char *)(param_1 + 0x58) = cVar5;
  }
  *(char *)(param_1 + 0x59) = cVar5;
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_00c6a584(*(long *)(param_1 + 0x48),plVar1);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,uVar2);
LAB_029e0a90:
  if (*(long **)(param_1 + 0x180) != *(long **)(param_1 + 0x178)) {
    lVar6 = **(long **)(param_1 + 0x178);
    if (bVar3 || bVar4) {
      if (*(char *)(param_1 + 0x244) == '\0') {
        uVar9 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
        if (9 < uVar9) {
          uVar9 = 10;
        }
        uVar8 = (undefined1)uVar9;
      }
      else {
        uVar8 = 0;
      }
      *(undefined1 *)(lVar6 + 0x1fc) = uVar8;
      if (1 < (ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3)) {
        if (*(char *)(param_1 + 0x244) == '\0') {
          uVar9 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
          if (9 < uVar9) {
            uVar9 = 10;
          }
          uVar8 = (undefined1)uVar9;
        }
        else {
          uVar8 = 0;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 8) + 0x1fc) = uVar8;
        lVar6 = *(long *)(param_1 + 0x178);
        if (2 < (ulong)(*(long *)(param_1 + 0x180) - lVar6 >> 3)) {
          uVar7 = 2;
          do {
            if (*(char *)(param_1 + 0x244) == '\0') {
              uVar9 = (uint)*(byte *)(param_1 + 0x2a0) * (uint)*(byte *)(param_1 + 0x2a0);
              if (9 < uVar9) {
                uVar9 = 10;
              }
              uVar8 = (undefined1)uVar9;
            }
            else {
              uVar8 = 0;
            }
            *(undefined1 *)(*(long *)(lVar6 + uVar7 * 8) + 0x1fc) = uVar8;
            lVar6 = *(long *)(param_1 + 0x178);
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ulong)(*(long *)(param_1 + 0x180) - lVar6 >> 3));
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x244) == '\0') {
        uVar8 = *(undefined1 *)(param_1 + 0x2a0);
      }
      else {
        uVar8 = 0;
      }
      *(undefined1 *)(lVar6 + 0x1fc) = uVar8;
      if (1 < (ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3)) {
        if (*(char *)(param_1 + 0x244) == '\0') {
          uVar8 = *(undefined1 *)(param_1 + 0x2a0);
        }
        else {
          uVar8 = 0;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 8) + 0x1fc) = uVar8;
        lVar6 = *(long *)(param_1 + 0x178);
        if (2 < (ulong)(*(long *)(param_1 + 0x180) - lVar6 >> 3)) {
          uVar7 = 2;
          do {
            if (*(char *)(param_1 + 0x244) == '\0') {
              uVar8 = *(undefined1 *)(param_1 + 0x2a0);
            }
            else {
              uVar8 = 0;
            }
            *(undefined1 *)(*(long *)(lVar6 + uVar7 * 8) + 0x1fc) = uVar8;
            lVar6 = *(long *)(param_1 + 0x178);
            uVar7 = uVar7 + 1;
          } while (uVar7 < (ulong)(*(long *)(param_1 + 0x180) - lVar6 >> 3));
        }
      }
    }
  }
  return;
}


