/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b746a8; name: FUN_00b746a8
 */


int FUN_00b746a8(long param_1)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    lVar5 = *(long *)(param_1 + 0x18);
    iVar4 = 0;
    if (lVar5 != 0) {
      uVar7 = *(ulong *)(lVar5 + 0x18);
      uVar6 = 0;
      if (uVar7 != 0) {
        if (uVar7 >> 0x23 == 0) {
          if (uVar7 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar7 < 0x4000) {
            iVar4 = 2;
          }
          else if (uVar7 < 0x200000) {
            iVar4 = 3;
          }
          else {
            iVar4 = 4;
            if (uVar7 >> 0x1c != 0) {
              iVar4 = 5;
            }
          }
        }
        else if (uVar7 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else if (uVar7 >> 0x31 == 0) {
          iVar4 = 7;
        }
        else if (uVar7 >> 0x38 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = 9;
          if ((long)uVar7 < 0) {
            iVar4 = 10;
          }
        }
        uVar6 = iVar4 + 1;
      }
      pbVar8 = *(byte **)(lVar5 + 0x20);
      bVar3 = *pbVar8;
      if ((bVar3 & 1) == 0) {
        if (bVar3 >> 1 != 0) goto LAB_00b74768;
LAB_00b74790:
        *(uint *)(lVar5 + 0x28) = uVar6;
LAB_00b747e0:
        iVar4 = 1;
      }
      else {
        if (*(long *)(pbVar8 + 8) == 0) goto LAB_00b74790;
LAB_00b74768:
        uVar1 = (uint)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = *(uint *)(pbVar8 + 8);
        }
        if (uVar1 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar1 < 0x4000) {
          iVar4 = 2;
        }
        else if (uVar1 < 0x200000) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar1 >> 0x1c != 0) {
            iVar4 = 5;
          }
        }
        uVar6 = uVar6 + uVar1 + iVar4 + 1;
        *(uint *)(lVar5 + 0x28) = uVar6;
        if (uVar6 < 0x80) goto LAB_00b747e0;
        if (uVar6 < 0x4000) {
          iVar4 = 2;
        }
        else if (uVar6 < 0x200000) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar6 >> 0x1c != 0) {
            iVar4 = 5;
          }
        }
      }
      iVar4 = uVar6 + iVar4 + 1;
    }
  }
  else {
    iVar4 = 0;
  }
  pbVar8 = *(byte **)(param_1 + 0x20);
  bVar3 = *pbVar8;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 != 0) goto LAB_00b7480c;
  }
  else if (*(long *)(pbVar8 + 8) != 0) {
LAB_00b7480c:
    uVar6 = (uint)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar6 = *(uint *)(pbVar8 + 8);
    }
    iVar9 = 4;
    if (uVar6 >> 0x1c != 0) {
      iVar9 = 5;
    }
    iVar2 = 3;
    if (0x1fffff < uVar6) {
      iVar2 = iVar9;
    }
    iVar9 = 2;
    if (0x3fff < uVar6) {
      iVar9 = iVar2;
    }
    iVar2 = 1;
    if (0x7f < uVar6) {
      iVar2 = iVar9;
    }
    iVar4 = iVar4 + uVar6 + iVar2 + 1;
  }
  pbVar8 = *(byte **)(param_1 + 0x28);
  bVar3 = *pbVar8;
  if ((bVar3 & 1) == 0) {
    if (bVar3 >> 1 == 0) goto LAB_00b748cc;
  }
  else if (*(long *)(pbVar8 + 8) == 0) goto LAB_00b748cc;
  uVar6 = (uint)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar6 = *(uint *)(pbVar8 + 8);
  }
  iVar9 = 4;
  if (uVar6 >> 0x1c != 0) {
    iVar9 = 5;
  }
  iVar2 = 3;
  if (0x1fffff < uVar6) {
    iVar2 = iVar9;
  }
  iVar9 = 2;
  if (0x3fff < uVar6) {
    iVar9 = iVar2;
  }
  iVar2 = 1;
  if (0x7f < uVar6) {
    iVar2 = iVar9;
  }
  iVar4 = iVar4 + uVar6 + iVar2 + 1;
LAB_00b748cc:
  *(int *)(param_1 + 0x30) = iVar4;
  return iVar4;
}


