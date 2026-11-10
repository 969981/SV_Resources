/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bc2808; name: FUN_00bc2808
 */


int FUN_00bc2808(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 0x81) == 0) {
    iVar7 = 0;
  }
  else {
    if ((uVar2 & 1) == 0) {
      iVar7 = 0;
    }
    else {
      bVar1 = **(byte **)(param_1 + 0x18);
      uVar10 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar10 = *(uint *)(*(byte **)(param_1 + 0x18) + 8);
      }
      iVar7 = 4;
      if (uVar10 >> 0x1c != 0) {
        iVar7 = 5;
      }
      iVar3 = 3;
      if (0x1fffff < uVar10) {
        iVar3 = iVar7;
      }
      iVar7 = 2;
      if (0x3fff < uVar10) {
        iVar7 = iVar3;
      }
      iVar3 = 1;
      if (0x7f < uVar10) {
        iVar3 = iVar7;
      }
      iVar7 = uVar10 + iVar3 + 1;
    }
    if ((uVar2 >> 7 & 1) != 0) {
      uVar2 = FUN_00bd29dc(*(undefined8 *)(param_1 + 0xb0));
      if (uVar2 < 0x80) {
        iVar3 = 1;
      }
      else if (uVar2 < 0x4000) {
        iVar3 = 2;
      }
      else if (uVar2 < 0x200000) {
        iVar3 = 3;
      }
      else {
        iVar3 = 4;
        if (uVar2 >> 0x1c != 0) {
          iVar3 = 5;
        }
      }
      iVar7 = iVar7 + uVar2 + iVar3 + 1;
    }
  }
  iVar7 = *(int *)(param_1 + 0x28) + iVar7;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar8 = 0;
    do {
      uVar4 = FUN_00bc5be8(*(undefined8 *)(*(long *)(param_1 + 0x30) + lVar8 * 8 + 8));
      iVar3 = 4;
      if ((uVar4 >> 0x1c & 0xf) != 0) {
        iVar3 = 5;
      }
      uVar2 = (uint)uVar4;
      iVar5 = 3;
      if (0x1fffff < uVar2) {
        iVar5 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = iVar5;
      }
      iVar5 = 1;
      if (0x7f < uVar2) {
        iVar5 = iVar3;
      }
      iVar7 = uVar2 + iVar7 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x28));
  }
  iVar7 = *(int *)(param_1 + 0x40) + iVar7;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar8 = 0;
    do {
      uVar4 = FUN_00bc5be8(*(undefined8 *)(*(long *)(param_1 + 0x48) + lVar8 * 8 + 8));
      iVar3 = 4;
      if ((uVar4 >> 0x1c & 0xf) != 0) {
        iVar3 = 5;
      }
      uVar2 = (uint)uVar4;
      iVar5 = 3;
      if (0x1fffff < uVar2) {
        iVar5 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = iVar5;
      }
      iVar5 = 1;
      if (0x7f < uVar2) {
        iVar5 = iVar3;
      }
      iVar7 = uVar2 + iVar7 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x40));
  }
  iVar7 = *(int *)(param_1 + 0x58) + iVar7;
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar8 = 0;
    do {
      uVar4 = FUN_00bc2808(*(undefined8 *)(*(long *)(param_1 + 0x60) + lVar8 * 8 + 8));
      iVar3 = 4;
      if ((uVar4 >> 0x1c & 0xf) != 0) {
        iVar3 = 5;
      }
      uVar2 = (uint)uVar4;
      iVar5 = 3;
      if (0x1fffff < uVar2) {
        iVar5 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = iVar5;
      }
      iVar5 = 1;
      if (0x7f < uVar2) {
        iVar5 = iVar3;
      }
      iVar7 = uVar2 + iVar7 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x58));
  }
  iVar7 = *(int *)(param_1 + 0x70) + iVar7;
  if (0 < *(int *)(param_1 + 0x70)) {
    lVar8 = 0;
    do {
      uVar4 = FUN_00bc91f0(*(undefined8 *)(*(long *)(param_1 + 0x78) + lVar8 * 8 + 8));
      iVar3 = 4;
      if ((uVar4 >> 0x1c & 0xf) != 0) {
        iVar3 = 5;
      }
      uVar2 = (uint)uVar4;
      iVar5 = 3;
      if (0x1fffff < uVar2) {
        iVar5 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = iVar5;
      }
      iVar5 = 1;
      if (0x7f < uVar2) {
        iVar5 = iVar3;
      }
      iVar7 = uVar2 + iVar7 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x70));
  }
  iVar7 = *(int *)(param_1 + 0x88) + iVar7;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar8 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 0x90) + lVar8 * 8 + 8);
      uVar2 = *(uint *)(lVar9 + 0x10);
      if ((uVar2 & 3) == 0) {
        uVar10 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(lVar9 + 0x18);
          if ((int)uVar10 < 0) {
            uVar10 = 0xb;
          }
          else if (uVar10 < 0x80) {
            uVar10 = 2;
          }
          else {
            if (uVar10 < 0x4000) {
              iVar5 = 2;
            }
            else {
              iVar3 = 4;
              if (uVar10 >> 0x1c != 0) {
                iVar3 = 5;
              }
              iVar5 = 3;
              if (0x1fffff < uVar10) {
                iVar5 = iVar3;
              }
            }
            uVar10 = iVar5 + 1;
          }
        }
        if ((uVar2 >> 1 & 1) != 0) {
          uVar2 = *(uint *)(lVar9 + 0x1c);
          if ((int)uVar2 < 0) {
            iVar3 = 0xb;
          }
          else if (uVar2 < 0x80) {
            iVar3 = 2;
          }
          else {
            if (uVar2 < 0x4000) {
              iVar3 = 2;
            }
            else if (uVar2 < 0x200000) {
              iVar3 = 3;
            }
            else {
              iVar3 = 4;
              if (uVar2 >> 0x1c != 0) {
                iVar3 = 5;
              }
            }
            iVar3 = iVar3 + 1;
          }
          uVar10 = iVar3 + uVar10;
        }
      }
      if ((*(ulong *)(lVar9 + 8) & 1) == 0) {
        *(uint *)(lVar9 + 0x14) = uVar10;
        iVar5 = 1;
      }
      else {
        iVar3 = FUN_00c0358c(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
        uVar10 = iVar3 + uVar10;
        iVar3 = 4;
        if (uVar10 >> 0x1c != 0) {
          iVar3 = 5;
        }
        iVar5 = 3;
        if (0x1fffff < uVar10) {
          iVar5 = iVar3;
        }
        iVar3 = 2;
        if (0x3fff < uVar10) {
          iVar3 = iVar5;
        }
        iVar5 = 1;
        if (0x7f < uVar10) {
          iVar5 = iVar3;
        }
        *(uint *)(lVar9 + 0x14) = uVar10;
      }
      iVar7 = uVar10 + iVar7 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x88));
  }
  iVar7 = *(int *)(param_1 + 0xa0) + iVar7;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar8 = 0;
    do {
      uVar4 = FUN_00bc759c(*(undefined8 *)(*(long *)(param_1 + 0xa8) + lVar8 * 8 + 8));
      iVar3 = 4;
      if ((uVar4 >> 0x1c & 0xf) != 0) {
        iVar3 = 5;
      }
      uVar2 = (uint)uVar4;
      iVar5 = 3;
      if (0x1fffff < uVar2) {
        iVar5 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = iVar5;
      }
      iVar5 = 1;
      if (0x7f < uVar2) {
        iVar5 = iVar3;
      }
      iVar7 = uVar2 + iVar7 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0xa0));
  }
  iVar7 = *(int *)(param_1 + 0xc0) + iVar7;
  if (0 < *(int *)(param_1 + 0xc0)) {
    lVar8 = 0;
    do {
      lVar9 = *(long *)(*(long *)(param_1 + 200) + lVar8 * 8 + 8);
      uVar2 = *(uint *)(lVar9 + 0x10);
      if ((uVar2 & 3) == 0) {
        uVar10 = 0;
      }
      else {
        if ((uVar2 & 1) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(lVar9 + 0x18);
          if ((int)uVar10 < 0) {
            uVar10 = 0xb;
          }
          else if (uVar10 < 0x80) {
            uVar10 = 2;
          }
          else {
            if (uVar10 < 0x4000) {
              iVar5 = 2;
            }
            else {
              iVar3 = 4;
              if (uVar10 >> 0x1c != 0) {
                iVar3 = 5;
              }
              iVar5 = 3;
              if (0x1fffff < uVar10) {
                iVar5 = iVar3;
              }
            }
            uVar10 = iVar5 + 1;
          }
        }
        if ((uVar2 >> 1 & 1) != 0) {
          uVar2 = *(uint *)(lVar9 + 0x1c);
          if ((int)uVar2 < 0) {
            iVar3 = 0xb;
          }
          else if (uVar2 < 0x80) {
            iVar3 = 2;
          }
          else {
            if (uVar2 < 0x4000) {
              iVar3 = 2;
            }
            else if (uVar2 < 0x200000) {
              iVar3 = 3;
            }
            else {
              iVar3 = 4;
              if (uVar2 >> 0x1c != 0) {
                iVar3 = 5;
              }
            }
            iVar3 = iVar3 + 1;
          }
          uVar10 = iVar3 + uVar10;
        }
      }
      if ((*(ulong *)(lVar9 + 8) & 1) == 0) {
        *(uint *)(lVar9 + 0x14) = uVar10;
        iVar5 = 1;
      }
      else {
        iVar3 = FUN_00c0358c(*(ulong *)(lVar9 + 8) & 0xfffffffffffffffe);
        uVar10 = iVar3 + uVar10;
        iVar3 = 4;
        if (uVar10 >> 0x1c != 0) {
          iVar3 = 5;
        }
        iVar5 = 3;
        if (0x1fffff < uVar10) {
          iVar5 = iVar3;
        }
        iVar3 = 2;
        if (0x3fff < uVar10) {
          iVar3 = iVar5;
        }
        iVar5 = 1;
        if (0x7f < uVar10) {
          iVar5 = iVar3;
        }
        *(uint *)(lVar9 + 0x14) = uVar10;
      }
      iVar7 = uVar10 + iVar7 + iVar5;
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0xc0));
  }
  uVar2 = *(uint *)(param_1 + 0xd8);
  uVar4 = (ulong)uVar2;
  iVar7 = uVar2 + iVar7;
  if (0 < (int)uVar2) {
    puVar6 = *(undefined8 **)(param_1 + 0xe0);
    do {
      puVar6 = puVar6 + 1;
      bVar1 = *(byte *)*puVar6;
      uVar2 = (uint)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar2 = *(uint *)((byte *)*puVar6 + 8);
      }
      iVar3 = 4;
      if (uVar2 >> 0x1c != 0) {
        iVar3 = 5;
      }
      iVar5 = 3;
      if (0x1fffff < uVar2) {
        iVar5 = iVar3;
      }
      iVar3 = 2;
      if (0x3fff < uVar2) {
        iVar3 = iVar5;
      }
      iVar5 = 1;
      if (0x7f < uVar2) {
        iVar5 = iVar3;
      }
      uVar4 = uVar4 - 1;
      iVar7 = iVar7 + uVar2 + iVar5;
    } while (uVar4 != 0);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    iVar3 = FUN_00c0358c(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
    iVar7 = iVar3 + iVar7;
  }
  *(int *)(param_1 + 0x14) = iVar7;
  return iVar7;
}


