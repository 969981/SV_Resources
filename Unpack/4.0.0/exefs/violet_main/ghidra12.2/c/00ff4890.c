/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ff4890; name: FUN_00ff4890
 */


void FUN_00ff4890(long param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 uVar5;
  
  uVar2 = 0;
  switch(param_2) {
  case 0:
    *(undefined2 *)(param_1 + 0x244) = 0;
    if ((*(char *)(param_1 + 0x58) == '\0') && (*(char *)(param_1 + 0x59) == '\n'))
    goto LAB_00ff4920;
    uVar1 = *(undefined2 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0x58) = 0xa00;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),(long *)(param_1 + 0x38));
    }
    lVar3 = *(long *)(param_1 + 0x38);
    goto LAB_00ff4918;
  case 1:
    break;
  case 2:
    uVar2 = 0x100;
    break;
  case 3:
    uVar2 = 0x200;
    break;
  case 4:
    uVar2 = 0x300;
    break;
  case 5:
    uVar2 = 0x400;
    break;
  case 6:
    uVar2 = 0x500;
    break;
  default:
    if (param_2 < 0xb) {
      uVar2 = 0x600;
    }
    else if (param_2 < 0xd) {
      uVar2 = 0x700;
    }
    else if (param_2 < 0x10) {
      uVar2 = 0x800;
    }
    else {
      uVar2 = 0x900;
      if (0x1e < param_2) {
        uVar2 = 0xa00;
      }
    }
  }
  *(ushort *)(param_1 + 0x244) = (ushort)uVar2 | 1;
  if (((uint)*(byte *)(param_1 + 0x58) != uVar2 >> 8) ||
     ((uint)*(byte *)(param_1 + 0x59) != uVar2 >> 8)) {
    uVar1 = *(undefined2 *)(param_1 + 0x58);
    uVar5 = (undefined1)(uVar2 >> 8);
    *(undefined1 *)(param_1 + 0x58) = uVar5;
    *(undefined1 *)(param_1 + 0x59) = uVar5;
    if (*(long *)(param_1 + 0x48) != 0) {
      FUN_00c6a584(*(long *)(param_1 + 0x48),(long *)(param_1 + 0x38));
    }
    lVar3 = *(long *)(param_1 + 0x38);
LAB_00ff4918:
    (**(code **)(lVar3 + 0x20))(param_1 + 0x38,uVar1);
  }
LAB_00ff4920:
  if (*(long **)(param_1 + 0x180) != *(long **)(param_1 + 0x178)) {
    if (*(char *)(param_1 + 0x244) == '\0') {
      uVar5 = *(undefined1 *)(param_1 + 0x2a0);
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)(**(long **)(param_1 + 0x178) + 0x1fc) = uVar5;
    if (1 < (ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3)) {
      if (*(char *)(param_1 + 0x244) == '\0') {
        uVar5 = *(undefined1 *)(param_1 + 0x2a0);
      }
      else {
        uVar5 = 0;
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 8) + 0x1fc) = uVar5;
      if (2 < (ulong)(*(long *)(param_1 + 0x180) - *(long *)(param_1 + 0x178) >> 3)) {
        if (*(char *)(param_1 + 0x244) == '\0') {
          uVar5 = *(undefined1 *)(param_1 + 0x2a0);
        }
        else {
          uVar5 = 0;
        }
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x178) + 0x10) + 0x1fc) = uVar5;
        lVar3 = *(long *)(param_1 + 0x178);
        if (3 < (ulong)(*(long *)(param_1 + 0x180) - lVar3 >> 3)) {
          uVar4 = 3;
          do {
            if (*(char *)(param_1 + 0x244) == '\0') {
              uVar5 = *(undefined1 *)(param_1 + 0x2a0);
            }
            else {
              uVar5 = 0;
            }
            *(undefined1 *)(*(long *)(lVar3 + uVar4 * 8) + 0x1fc) = uVar5;
            lVar3 = *(long *)(param_1 + 0x178);
            uVar4 = uVar4 + 1;
          } while (uVar4 < (ulong)(*(long *)(param_1 + 0x180) - lVar3 >> 3));
        }
      }
    }
  }
  return;
}


