/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dc6c18; name: FUN_01dc6c18
 */


void FUN_01dc6c18(long param_1,uint param_2)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if (5 < param_2) {
    return;
  }
  lVar3 = param_1 + (ulong)param_2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x526);
  uVar2 = (ulong)param_2;
  if (0x20 < (byte)(uVar1 >> 8) || 0x1d < (uVar1 & 0xfe)) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x528);
    if ((byte)(uVar1 >> 8) < 0x21 && (uVar1 & 0xfe) < 0x1e) {
      lVar4 = 1;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52a);
      if ((byte)(uVar1 >> 8) < 0x21 && (uVar1 & 0xfe) < 0x1e) {
        lVar4 = 2;
      }
      else {
        uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52c);
        if (((byte)(uVar1 >> 8) < 0x21) && ((uVar1 & 0xfe) < 0x1e)) {
          lVar4 = 3;
        }
        else {
          uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
          if (((byte)(uVar1 >> 8) < 0x21) && ((uVar1 & 0xfe) < 0x1e)) {
            lVar4 = 4;
          }
          else {
            uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x530);
            if ((0x20 < (byte)(uVar1 >> 8)) || (0x1d < (uVar1 & 0xfe))) goto LAB_01dc6cd8;
            lVar4 = 5;
          }
        }
      }
    }
    lVar4 = param_1 + uVar2 * 0xc + lVar4 * 2;
    *(undefined2 *)(lVar3 + 0x526) = *(undefined2 *)(lVar4 + 0x526);
    *(undefined2 *)(lVar4 + 0x526) = 0xffff;
  }
LAB_01dc6cd8:
  lVar3 = param_1 + uVar2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x528);
  if (0x20 < (byte)(uVar1 >> 8) || 0x1d < (uVar1 & 0xfe)) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52a);
    if ((byte)(uVar1 >> 8) < 0x21 && (uVar1 & 0xfe) < 0x1e) {
      lVar4 = 2;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52c);
      if (((byte)(uVar1 >> 8) < 0x21) && ((uVar1 & 0xfe) < 0x1e)) {
        lVar4 = 3;
      }
      else {
        uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
        if (((byte)(uVar1 >> 8) < 0x21) && ((uVar1 & 0xfe) < 0x1e)) {
          lVar4 = 4;
        }
        else {
          uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x530);
          if ((0x20 < (byte)(uVar1 >> 8)) || (0x1d < (uVar1 & 0xfe))) goto LAB_01dc6d68;
          lVar4 = 5;
        }
      }
    }
    lVar4 = param_1 + uVar2 * 0xc + lVar4 * 2;
    *(undefined2 *)(lVar3 + 0x528) = *(undefined2 *)(lVar4 + 0x526);
    *(undefined2 *)(lVar4 + 0x526) = 0xffff;
  }
LAB_01dc6d68:
  lVar3 = param_1 + uVar2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x52a);
  if (0x20 < (byte)(uVar1 >> 8) || 0x1d < (uVar1 & 0xfe)) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52c);
    if (((byte)(uVar1 >> 8) < 0x21) && ((uVar1 & 0xfe) < 0x1e)) {
      lVar4 = 3;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
      if (((byte)(uVar1 >> 8) < 0x21) && ((uVar1 & 0xfe) < 0x1e)) {
        lVar4 = 4;
      }
      else {
        uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x530);
        if ((0x20 < (byte)(uVar1 >> 8)) || (0x1d < (uVar1 & 0xfe))) goto LAB_01dc6dd0;
        lVar4 = 5;
      }
    }
    lVar4 = param_1 + uVar2 * 0xc + lVar4 * 2;
    *(undefined2 *)(lVar3 + 0x52a) = *(undefined2 *)(lVar4 + 0x526);
    *(undefined2 *)(lVar4 + 0x526) = 0xffff;
  }
LAB_01dc6dd0:
  lVar3 = param_1 + uVar2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x52c);
  if ((0x20 < (byte)(uVar1 >> 8)) || (0x1d < (uVar1 & 0xfe))) {
    uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x52e);
    if (((byte)(uVar1 >> 8) < 0x21) && ((uVar1 & 0xfe) < 0x1e)) {
      lVar4 = 4;
    }
    else {
      uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x530);
      if ((0x20 < (byte)(uVar1 >> 8)) || (0x1d < (uVar1 & 0xfe))) goto LAB_01dc6df4;
      lVar4 = 5;
    }
    lVar4 = param_1 + uVar2 * 0xc + lVar4 * 2;
    *(undefined2 *)(lVar3 + 0x52c) = *(undefined2 *)(lVar4 + 0x526);
    *(undefined2 *)(lVar4 + 0x526) = 0xffff;
  }
LAB_01dc6df4:
  lVar3 = param_1 + uVar2 * 0xc;
  uVar1 = *(ushort *)(lVar3 + 0x52e);
  if (((((byte)(uVar1 >> 8) < 0x21) && ((uVar1 & 0xfe) < 0x1e)) ||
      (uVar1 = *(ushort *)(param_1 + uVar2 * 0xc + 0x530), 0x20 < (byte)(uVar1 >> 8))) ||
     (0x1d < (uVar1 & 0xfe))) {
    return;
  }
  param_1 = param_1 + uVar2 * 0xc;
  *(undefined2 *)(lVar3 + 0x52e) = *(undefined2 *)(param_1 + 0x530);
  *(undefined2 *)(param_1 + 0x530) = 0xffff;
  return;
}


