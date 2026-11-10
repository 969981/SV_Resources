/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fcd1f0; name: FUN_02fcd1f0
 */


void FUN_02fcd1f0(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  
  uVar3 = *(uint *)(param_1 + 0x108);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      lVar12 = *(long *)(param_1 + 0x100);
      lVar5 = lVar12 + uVar11 * 0x500;
      uVar4 = *(uint *)(lVar5 + 0x118);
      plVar1 = (long *)(lVar5 + 0x110);
      if (*(char *)(lVar5 + 0x10c) != '\0') {
        plVar8 = (long *)*plVar1;
        if ((int)uVar4 < 1) {
          plVar9 = plVar8;
        }
        else {
          uVar2 = uVar4 & 3;
          plVar9 = plVar8;
          if (2 < uVar4 - 1) {
            iVar10 = -(uVar4 & 0xfffffffc);
            do {
              plVar7 = plVar8;
              if (*plVar9 != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = *plVar9;
              }
              plVar8 = plVar7;
              if (plVar9[1] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[1];
              }
              plVar7 = plVar8;
              if (plVar9[2] != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = plVar9[2];
              }
              plVar8 = plVar7;
              if (plVar9[3] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[3];
              }
              plVar9 = plVar9 + 4;
              iVar10 = iVar10 + 4;
            } while (iVar10 != 0);
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            plVar7 = plVar8;
            if (*plVar9 != 0) {
              plVar7 = plVar8 + 1;
              *plVar8 = *plVar9;
            }
            plVar8 = plVar7;
            plVar9 = plVar9 + 1;
          }
          plVar9 = (long *)*plVar1;
        }
        uVar4 = (uint)((ulong)((long)plVar8 - (long)plVar9) >> 3);
        *(undefined1 *)(lVar5 + 0x10c) = 0;
      }
      if (uVar4 != 0) {
        if (param_2 == 0) {
          plVar8 = *(long **)(lVar12 + uVar11 * 0x500 + 0x100);
          (**(code **)(*plVar8 + 0x28))(plVar8,*plVar1);
        }
        else {
          FUN_031c2998(param_2,*plVar1);
        }
      }
      lVar6 = lVar12 + uVar11 * 0x500;
      *(undefined4 *)(lVar5 + 0x118) = 0;
      uVar4 = *(uint *)(lVar6 + 0x218);
      plVar1 = (long *)(lVar6 + 0x210);
      *(undefined4 *)(lVar6 + 0x108) = 0;
      if (*(char *)(lVar6 + 0x20c) != '\0') {
        plVar8 = (long *)*plVar1;
        if ((int)uVar4 < 1) {
          plVar9 = plVar8;
        }
        else {
          uVar2 = uVar4 & 3;
          plVar9 = plVar8;
          if (2 < uVar4 - 1) {
            iVar10 = -(uVar4 & 0xfffffffc);
            do {
              plVar7 = plVar8;
              if (*plVar9 != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = *plVar9;
              }
              plVar8 = plVar7;
              if (plVar9[1] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[1];
              }
              plVar7 = plVar8;
              if (plVar9[2] != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = plVar9[2];
              }
              plVar8 = plVar7;
              if (plVar9[3] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[3];
              }
              plVar9 = plVar9 + 4;
              iVar10 = iVar10 + 4;
            } while (iVar10 != 0);
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            plVar7 = plVar8;
            if (*plVar9 != 0) {
              plVar7 = plVar8 + 1;
              *plVar8 = *plVar9;
            }
            plVar8 = plVar7;
            plVar9 = plVar9 + 1;
          }
          plVar9 = (long *)*plVar1;
        }
        uVar4 = (uint)((ulong)((long)plVar8 - (long)plVar9) >> 3);
        *(undefined1 *)(lVar6 + 0x20c) = 0;
      }
      if (uVar4 != 0) {
        if (param_2 == 0) {
          plVar8 = *(long **)(lVar12 + uVar11 * 0x500 + 0x200);
          (**(code **)(*plVar8 + 0x28))(plVar8,*plVar1);
        }
        else {
          FUN_031c2998(param_2,*plVar1);
        }
      }
      lVar5 = lVar12 + uVar11 * 0x500;
      *(undefined4 *)(lVar6 + 0x218) = 0;
      *(undefined4 *)(lVar5 + 0x208) = 0;
      uVar4 = *(uint *)(lVar5 + 0x18);
      plVar1 = (long *)(lVar5 + 0x10);
      if (*(char *)(lVar5 + 0xc) != '\0') {
        plVar8 = (long *)*plVar1;
        if ((int)uVar4 < 1) {
          plVar9 = plVar8;
        }
        else {
          uVar2 = uVar4 & 3;
          plVar9 = plVar8;
          if (2 < uVar4 - 1) {
            iVar10 = -(uVar4 & 0xfffffffc);
            do {
              plVar7 = plVar8;
              if (*plVar9 != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = *plVar9;
              }
              plVar8 = plVar7;
              if (plVar9[1] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[1];
              }
              plVar7 = plVar8;
              if (plVar9[2] != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = plVar9[2];
              }
              plVar8 = plVar7;
              if (plVar9[3] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[3];
              }
              plVar9 = plVar9 + 4;
              iVar10 = iVar10 + 4;
            } while (iVar10 != 0);
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            plVar7 = plVar8;
            if (*plVar9 != 0) {
              plVar7 = plVar8 + 1;
              *plVar8 = *plVar9;
            }
            plVar8 = plVar7;
            plVar9 = plVar9 + 1;
          }
          plVar9 = (long *)*plVar1;
        }
        uVar4 = (uint)((ulong)((long)plVar8 - (long)plVar9) >> 3);
        *(char *)(lVar5 + 0xc) = '\0';
      }
      if (uVar4 != 0) {
        if (param_2 == 0) {
          plVar8 = *(long **)(lVar12 + uVar11 * 0x500);
          (**(code **)(*plVar8 + 0x28))(plVar8,*plVar1);
        }
        else {
          FUN_031c2998(param_2,*plVar1);
        }
      }
      lVar6 = lVar12 + uVar11 * 0x500;
      *(uint *)(lVar5 + 0x18) = 0;
      uVar4 = *(uint *)(lVar6 + 0x318);
      plVar1 = (long *)(lVar6 + 0x310);
      *(undefined4 *)(lVar6 + 8) = 0;
      if (*(char *)(lVar6 + 0x30c) != '\0') {
        plVar8 = (long *)*plVar1;
        if ((int)uVar4 < 1) {
          plVar9 = plVar8;
        }
        else {
          uVar2 = uVar4 & 3;
          plVar9 = plVar8;
          if (2 < uVar4 - 1) {
            iVar10 = -(uVar4 & 0xfffffffc);
            do {
              plVar7 = plVar8;
              if (*plVar9 != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = *plVar9;
              }
              plVar8 = plVar7;
              if (plVar9[1] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[1];
              }
              plVar7 = plVar8;
              if (plVar9[2] != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = plVar9[2];
              }
              plVar8 = plVar7;
              if (plVar9[3] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[3];
              }
              plVar9 = plVar9 + 4;
              iVar10 = iVar10 + 4;
            } while (iVar10 != 0);
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            plVar7 = plVar8;
            if (*plVar9 != 0) {
              plVar7 = plVar8 + 1;
              *plVar8 = *plVar9;
            }
            plVar8 = plVar7;
            plVar9 = plVar9 + 1;
          }
          plVar9 = (long *)*plVar1;
        }
        uVar4 = (uint)((ulong)((long)plVar8 - (long)plVar9) >> 3);
        *(undefined1 *)(lVar6 + 0x30c) = 0;
      }
      if (uVar4 != 0) {
        if (param_2 == 0) {
          plVar8 = *(long **)(lVar12 + uVar11 * 0x500 + 0x300);
          (**(code **)(*plVar8 + 0x28))(plVar8,*plVar1);
        }
        else {
          FUN_031c2998(param_2,*plVar1);
        }
      }
      lVar5 = lVar12 + uVar11 * 0x500;
      *(undefined4 *)(lVar6 + 0x318) = 0;
      uVar4 = *(uint *)(lVar5 + 0x418);
      plVar1 = (long *)(lVar5 + 0x410);
      *(undefined4 *)(lVar5 + 0x308) = 0;
      if (*(char *)(lVar5 + 0x40c) != '\0') {
        plVar8 = (long *)*plVar1;
        if ((int)uVar4 < 1) {
          plVar9 = plVar8;
        }
        else {
          uVar2 = uVar4 & 3;
          plVar9 = plVar8;
          if (2 < uVar4 - 1) {
            iVar10 = -(uVar4 & 0xfffffffc);
            do {
              plVar7 = plVar8;
              if (*plVar9 != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = *plVar9;
              }
              plVar8 = plVar7;
              if (plVar9[1] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[1];
              }
              plVar7 = plVar8;
              if (plVar9[2] != 0) {
                plVar7 = plVar8 + 1;
                *plVar8 = plVar9[2];
              }
              plVar8 = plVar7;
              if (plVar9[3] != 0) {
                plVar8 = plVar7 + 1;
                *plVar7 = plVar9[3];
              }
              plVar9 = plVar9 + 4;
              iVar10 = iVar10 + 4;
            } while (iVar10 != 0);
          }
          for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            plVar7 = plVar8;
            if (*plVar9 != 0) {
              plVar7 = plVar8 + 1;
              *plVar8 = *plVar9;
            }
            plVar8 = plVar7;
            plVar9 = plVar9 + 1;
          }
          plVar9 = (long *)*plVar1;
        }
        uVar4 = (uint)((ulong)((long)plVar8 - (long)plVar9) >> 3);
        *(undefined1 *)(lVar5 + 0x40c) = 0;
      }
      if (uVar4 != 0) {
        if (param_2 == 0) {
          plVar8 = *(long **)(lVar12 + uVar11 * 0x500 + 0x400);
          (**(code **)(*plVar8 + 0x28))(plVar8,*plVar1);
        }
        else {
          FUN_031c2998(param_2,*plVar1);
        }
      }
      lVar6 = uVar11 * 0x500;
      uVar11 = uVar11 + 1;
      *(undefined4 *)(lVar5 + 0x418) = 0;
      *(undefined4 *)(lVar12 + lVar6 + 0x408) = 0;
    } while (uVar11 != uVar3);
  }
  return;
}


