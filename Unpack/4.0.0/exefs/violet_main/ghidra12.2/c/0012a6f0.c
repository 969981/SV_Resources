/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0012a6f0; name: FUN_0012a6f0
 */


/* WARNING: Removing unreachable block (ram,0x0012a784) */

long FUN_0012a6f0(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  lVar8 = *(long *)(param_1 + 0x18);
  *(undefined1 *)(lVar8 + 0x67) = 1;
  lVar10 = 0;
  switch(*(undefined1 *)(lVar8 + 0x65)) {
  case 0:
    if (*(long *)(lVar8 + 0x88) == 0) {
      uVar6 = 1;
      goto LAB_0012aabc;
    }
    lVar10 = FUN_0012c4b0(lVar8);
    break;
  case 1:
    lVar10 = FUN_0012bce0(param_1);
    lVar11 = *(long *)(param_1 + 0x18);
    plVar9 = (long *)(lVar11 + 0x70);
    *(undefined1 *)(lVar11 + 0x65) = 3;
    do {
      while (plVar4 = (long *)*plVar9, plVar4 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + 100);
        if ((*(byte *)((long)plVar4 + 9) & (bVar3 ^ 0x18)) == 0) {
          *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar3 & 0x18;
        }
        else {
          *plVar9 = *plVar4;
          FUN_0012bbc0(param_1);
          plVar4 = plVar9;
        }
        plVar5 = (long *)0x0;
        if (*plVar4 != 0) {
          plVar5 = plVar4;
        }
        if (plVar5 != plVar9) goto LAB_0012a7ec;
      }
      plVar5 = (long *)0x0;
    } while (plVar9 == (long *)0x0);
LAB_0012a7ec:
    *(long **)(lVar11 + 0x78) = plVar5;
    *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x18) + *(long *)(lVar8 + 0x10);
    break;
  default:
    goto switchD_0012a73c_caseD_2;
  case 3:
    plVar9 = *(long **)(lVar8 + 0x78);
    if (plVar9 == (long *)0x0) {
      uVar7 = 0;
      *(undefined1 *)(lVar8 + 0x65) = 4;
      *(long *)(lVar8 + 0x78) = lVar8 + 0x80;
    }
    else {
      lVar10 = *(long *)(lVar8 + 0x18);
      plVar4 = (long *)*plVar9;
      if (plVar4 != (long *)0x0) {
        bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + 100);
        uVar12 = 0;
        do {
          if ((*(byte *)((long)plVar4 + 9) & (bVar3 ^ 0x18)) == 0) {
            *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar3 & 0x18;
            plVar5 = (long *)*plVar4;
            plVar9 = plVar4;
          }
          else {
            *plVar9 = *plVar4;
            FUN_0012bbc0(param_1);
            plVar5 = (long *)*plVar9;
          }
          plVar4 = plVar5;
          uVar7 = uVar12 + 1;
          plVar5 = plVar4;
          lVar11 = lVar10;
          if (0x62 < uVar12) break;
          uVar7 = uVar12 + 1;
          plVar5 = (long *)0x0;
          uVar12 = uVar7;
        } while (plVar4 != (long *)0x0);
        goto LAB_0012a988;
      }
LAB_0012aa8c:
      plVar4 = (long *)0x0;
      uVar7 = 0;
      lVar11 = lVar10;
LAB_0012aa98:
      *(long **)(lVar8 + 0x78) = plVar4;
      *(long *)(lVar8 + 0x20) = (lVar10 - lVar11) + *(long *)(lVar8 + 0x20);
    }
    goto LAB_0012aaac;
  case 4:
    plVar9 = *(long **)(lVar8 + 0x78);
    if (plVar9 != (long *)0x0) {
      lVar10 = *(long *)(lVar8 + 0x18);
      plVar4 = (long *)*plVar9;
      if (plVar4 == (long *)0x0) goto LAB_0012aa8c;
      bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + 100);
      uVar12 = 0;
      do {
        if ((*(byte *)((long)plVar4 + 9) & (bVar3 ^ 0x18)) == 0) {
          *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar3 & 0x18;
          plVar5 = (long *)*plVar4;
          plVar9 = plVar4;
        }
        else {
          *plVar9 = *plVar4;
          FUN_0012bbc0(param_1);
          plVar5 = (long *)*plVar9;
        }
        plVar4 = plVar5;
        uVar7 = uVar12 + 1;
        plVar5 = plVar4;
        lVar11 = lVar10;
        if (0x62 < uVar12) break;
        uVar7 = uVar12 + 1;
        plVar5 = (long *)0x0;
        uVar12 = uVar7;
      } while (plVar4 != (long *)0x0);
LAB_0012a988:
      lVar10 = *(long *)(lVar8 + 0x18);
      plVar4 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        plVar4 = plVar9;
      }
      goto LAB_0012aa98;
    }
    uVar7 = 0;
    *(undefined1 *)(lVar8 + 0x65) = 5;
    *(long *)(lVar8 + 0x78) = lVar8 + 0xb0;
    goto LAB_0012aaac;
  case 5:
    plVar9 = *(long **)(lVar8 + 0x78);
    if (plVar9 != (long *)0x0) {
      lVar10 = *(long *)(lVar8 + 0x18);
      plVar4 = (long *)*plVar9;
      if (plVar4 == (long *)0x0) goto LAB_0012aa8c;
      bVar3 = *(byte *)(*(long *)(param_1 + 0x18) + 100);
      uVar12 = 0;
      do {
        if ((*(byte *)((long)plVar4 + 9) & (bVar3 ^ 0x18)) == 0) {
          *(byte *)((long)plVar4 + 9) = *(byte *)((long)plVar4 + 9) & 0xc0 | bVar3 & 0x18;
          plVar5 = (long *)*plVar4;
          plVar9 = plVar4;
        }
        else {
          *plVar9 = *plVar4;
          FUN_0012bbc0(param_1);
          plVar5 = (long *)*plVar9;
        }
        plVar4 = plVar5;
        uVar7 = uVar12 + 1;
        plVar5 = plVar4;
        lVar11 = lVar10;
        if (0x62 < uVar12) break;
        uVar7 = uVar12 + 1;
        plVar5 = (long *)0x0;
        uVar12 = uVar7;
      } while (plVar4 != (long *)0x0);
      goto LAB_0012a988;
    }
    uVar7 = 0;
    *(undefined1 *)(lVar8 + 0x65) = 6;
    *(undefined8 *)(lVar8 + 0x78) = 0;
LAB_0012aaac:
    lVar10 = (long)(int)uVar7;
    break;
  case 6:
    if (*(char *)(lVar8 + 0x6b) == '\0') {
      iVar2 = *(int *)(lVar8 + 0x3c);
      iVar1 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar1 = iVar2;
      }
      if (*(int *)(lVar8 + 0x38) < iVar1 >> 2) {
        lVar10 = *(long *)(lVar8 + 0x18);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        FUN_0013b9b0(param_1,iVar2 >> 1);
        *(long *)(lVar8 + 0x20) = (*(long *)(lVar8 + 0x18) - lVar10) + *(long *)(lVar8 + 0x20);
      }
    }
    uVar6 = 7;
LAB_0012aabc:
    lVar10 = 0;
    *(undefined1 *)(lVar8 + 0x65) = uVar6;
    break;
  case 7:
    if ((*(long *)(lVar8 + 0xb0) == 0) || (*(char *)(lVar8 + 0x6b) != '\0')) {
      uVar6 = 8;
      goto LAB_0012aabc;
    }
    *(undefined1 *)(lVar8 + 0x67) = 0;
    lVar10 = *(long *)(param_1 + 0x18);
    if (*(long *)(lVar10 + 0xb0) == 0) {
      lVar10 = 0;
    }
    else {
      FUN_0012d220(param_1);
      if (*(long *)(lVar10 + 0xb0) == 0) {
        lVar10 = 0x32;
      }
      else {
        FUN_0012d220(param_1);
        if (*(long *)(lVar10 + 0xb0) == 0) {
          lVar10 = 100;
        }
        else {
          FUN_0012d220(param_1);
          if (*(long *)(lVar10 + 0xb0) == 0) {
            lVar10 = 0x96;
          }
          else {
            FUN_0012d220(param_1);
            if (*(long *)(lVar10 + 0xb0) == 0) {
              lVar10 = 200;
            }
            else {
              FUN_0012d220(param_1);
              if (*(long *)(lVar10 + 0xb0) == 0) {
                lVar10 = 0xfa;
              }
              else {
                FUN_0012d220(param_1);
                if (*(long *)(lVar10 + 0xb0) == 0) {
                  lVar10 = 300;
                }
                else {
                  FUN_0012d220(param_1);
                  if (*(long *)(lVar10 + 0xb0) == 0) {
                    lVar10 = 0x15e;
                  }
                  else {
                    FUN_0012d220(param_1);
                    if (*(long *)(lVar10 + 0xb0) == 0) {
                      lVar10 = 400;
                    }
                    else {
                      FUN_0012d220(param_1);
                      if (*(long *)(lVar10 + 0xb0) == 0) {
                        lVar10 = 0x1c2;
                      }
                      else {
                        FUN_0012d220(param_1);
                        lVar10 = 500;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 8:
    *(undefined8 *)(lVar8 + 0xa0) = 0;
    *(undefined8 *)(lVar8 + 0xa8) = 0;
    *(undefined8 *)(lVar8 + 0x88) = 0;
    *(undefined8 *)(lVar8 + 0x90) = 0;
    *(undefined8 *)(lVar8 + 0x98) = 0;
    if ((*(byte *)(*(long *)(lVar8 + 0x108) + 9) & 0x18) != 0) {
      FUN_00129df0(lVar8);
    }
    if (((*(byte *)(lVar8 + 0x48) >> 6 & 1) != 0) &&
       ((*(byte *)(*(long *)(lVar8 + 0x40) + 9) & 0x18) != 0)) {
      FUN_00129df0(lVar8);
    }
    FUN_0012c230(lVar8);
    for (plVar9 = *(long **)(lVar8 + 0xb0); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if ((*(byte *)((long)plVar9 + 9) & 0x18) != 0) {
        FUN_00129df0(lVar8,plVar9);
      }
    }
    *(undefined1 *)(lVar8 + 0x65) = 0;
    lVar10 = 1;
  }
  *(undefined1 *)(lVar8 + 0x67) = 0;
switchD_0012a73c_caseD_2:
  return lVar10;
}


