/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008cd2e4; name: FUN_008cd2e4
 */


void FUN_008cd2e4(long param_1,long param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  if (*(uint *)(param_2 + 0x10) != 0xffffffff && param_2 != 0) {
    piVar5 = (int *)(param_2 + (ulong)*(uint *)(param_2 + 0x10));
    do {
      iVar3 = *piVar5;
      if (iVar3 < 0x4c534145) {
        if (iVar3 < 0x33305045) {
          if (iVar3 < 0x31414145) {
            if (iVar3 == 0x30414145) {
              *(ulong *)(param_1 + 0x2c8) = (long)piVar5 + (ulong)(uint)piVar5[5];
            }
            else {
              if (iVar3 != 0x30434145) {
                if (iVar3 == 0x31305045) {
                  uVar4 = piVar5[5];
                  *(undefined4 *)(param_1 + 0x330) = 1;
                  *(ulong *)(param_1 + 0x338) = (long)piVar5 + (ulong)uVar4;
                }
                goto LAB_008cd410;
              }
              *(ulong *)(param_1 + 0x2a8) = (long)piVar5 + (ulong)(uint)piVar5[5];
            }
          }
          else {
            if (0x314e5245 < iVar3) {
              if (iVar3 == 0x314e5246) {
                uVar4 = piVar5[5];
                *(undefined1 *)(param_1 + 3) = 1;
                *(ulong *)(param_1 + 0x250) = (long)piVar5 + (ulong)uVar4;
              }
              else if (iVar3 == 0x32305045) {
                *(ulong *)(param_1 + 0x338) = (long)piVar5 + (ulong)(uint)piVar5[5];
                *(undefined4 *)(param_1 + 0x330) = 2;
              }
              goto LAB_008cd410;
            }
            if (iVar3 == 0x31414145) {
              *(ulong *)(param_1 + 0x2d0) = (long)piVar5 + (ulong)(uint)piVar5[5];
            }
            else {
              if (iVar3 != 0x31434145) goto LAB_008cd410;
              *(ulong *)(param_1 + 0x2b0) = (long)piVar5 + (ulong)(uint)piVar5[5];
            }
          }
LAB_008cd40c:
          *(undefined1 *)(param_1 + 1) = 1;
        }
        else if (iVar3 < 0x46534346) {
          if (iVar3 < 0x44415046) {
            if (iVar3 == 0x33305045) {
              *(ulong *)(param_1 + 0x338) = (long)piVar5 + (ulong)(uint)piVar5[5];
              *(undefined4 *)(param_1 + 0x330) = 3;
            }
            else if (iVar3 == 0x34305045) {
              *(ulong *)(param_1 + 0x338) = (long)piVar5 + (ulong)(uint)piVar5[5];
              *(undefined4 *)(param_1 + 0x330) = 4;
            }
          }
          else if (iVar3 == 0x44415046) {
            uVar4 = piVar5[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x278) = (long)piVar5 + (ulong)uVar4;
          }
          else if (iVar3 == 0x444e5246) {
            uVar4 = piVar5[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x248) = (long)piVar5 + (ulong)uVar4;
          }
        }
        else if (iVar3 < 0x4c4f4346) {
          if (iVar3 == 0x46534346) {
            uVar4 = piVar5[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x288) = (long)piVar5 + (ulong)uVar4;
          }
          else if (iVar3 == 0x47414d46) {
            uVar4 = piVar5[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 600) = (long)piVar5 + (ulong)uVar4;
          }
        }
        else if (iVar3 == 0x4c4f4346) {
          uVar4 = piVar5[5];
          *(undefined1 *)(param_1 + 3) = 1;
          *(ulong *)(param_1 + 0x268) = (long)piVar5 + (ulong)uVar4;
        }
        else if (iVar3 == 0x4c504145) {
          *(ulong *)(param_1 + 0x2c0) = (long)piVar5 + (ulong)(uint)piVar5[5];
          goto LAB_008cd40c;
        }
      }
      else if (iVar3 < 0x52544145) {
        if (iVar3 < 0x50444143) {
          if (iVar3 == 0x4c534145) {
            *(ulong *)(param_1 + 0x2e8) = (long)piVar5 + (ulong)(uint)piVar5[5];
            goto LAB_008cd40c;
          }
          if (iVar3 == 0x4e4c4346) {
            uVar4 = piVar5[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x280) = (long)piVar5 + (ulong)uVar4;
          }
          else if (iVar3 == 0x4e505346) {
            uVar4 = piVar5[5];
            *(undefined1 *)(param_1 + 3) = 1;
            *(ulong *)(param_1 + 0x260) = (long)piVar5 + (ulong)uVar4;
          }
        }
        else if (iVar3 < 0x50445543) {
          if (iVar3 == 0x50444143) {
            *(ulong *)(param_1 + 0x310) = (long)piVar5 + (ulong)(uint)piVar5[5];
          }
          else if (iVar3 == 0x50445343) {
            *(ulong *)(param_1 + 0x300) = (long)piVar5 + (ulong)(uint)piVar5[5];
            *(ulong *)(param_1 + 0x308) = (ulong)(uint)piVar5[1] - 0x20;
          }
        }
        else if (iVar3 == 0x50445543) {
          *(ulong *)(param_1 + 0x318) = (long)piVar5 + (ulong)(uint)piVar5[5];
        }
        else if (iVar3 == 0x52454145) {
          uVar4 = piVar5[5];
          *(undefined2 *)(param_1 + 1) = 0x101;
          *(ulong *)(param_1 + 0x298) = (long)piVar5 + (ulong)uVar4;
        }
      }
      else {
        if (0x56444144 < iVar3) {
          if (iVar3 < 0x564f4145) {
            if (iVar3 == 0x56444145) {
              *(ulong *)(param_1 + 0x2e0) = (long)piVar5 + (ulong)(uint)piVar5[5];
            }
            else {
              if (iVar3 != 0x56474145) goto LAB_008cd410;
              *(ulong *)(param_1 + 0x2f8) = (long)piVar5 + (ulong)(uint)piVar5[5];
            }
          }
          else {
            if (iVar3 != 0x564f4145) {
              if (iVar3 == 0x564f4346) {
                uVar4 = piVar5[5];
                *(undefined1 *)(param_1 + 3) = 1;
                *(ulong *)(param_1 + 0x270) = (long)piVar5 + (ulong)uVar4;
              }
              goto LAB_008cd410;
            }
            *(ulong *)(param_1 + 0x2d8) = (long)piVar5 + (ulong)(uint)piVar5[5];
          }
          goto LAB_008cd40c;
        }
        if (iVar3 < 0x53534145) {
          if (iVar3 == 0x52544145) {
            *(ulong *)(param_1 + 0x2b8) = (long)piVar5 + (ulong)(uint)piVar5[5];
            goto LAB_008cd40c;
          }
          if (iVar3 == 0x53454145) {
            uVar4 = piVar5[5];
            *(undefined2 *)(param_1 + 1) = 0x101;
            *(ulong *)(param_1 + 0x290) = (long)piVar5 + (ulong)uVar4;
          }
        }
        else {
          if (iVar3 == 0x53534145) {
            *(ulong *)(param_1 + 0x2f0) = (long)piVar5 + (ulong)(uint)piVar5[5];
            goto LAB_008cd40c;
          }
          if (iVar3 == 0x54454145) {
            uVar4 = piVar5[5];
            *(undefined2 *)(param_1 + 1) = 0x101;
            *(ulong *)(param_1 + 0x2a0) = (long)piVar5 + (ulong)uVar4;
          }
        }
      }
LAB_008cd410:
      puVar1 = (uint *)(piVar5 + 3);
      piVar2 = (int *)((long)piVar5 + (ulong)*puVar1);
      piVar5 = (int *)0x0;
      if (*puVar1 != 0xffffffff) {
        piVar5 = piVar2;
      }
    } while (piVar5 != (int *)0x0);
  }
  return;
}


