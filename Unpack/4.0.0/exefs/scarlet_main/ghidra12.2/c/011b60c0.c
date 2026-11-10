/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b60c0; name: FUN_011b60c0
 */


void FUN_011b60c0(long param_1,long *param_2,long param_3)

{
  ushort uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  short *psVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  short *psVar21;
  byte local_78 [24];
  
  local_78[0x10] = 0;
  local_78[0x11] = 0;
  local_78[0x12] = 0;
  local_78[0x13] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[6] = 0;
  local_78[7] = 0;
  local_78[8] = 0;
  local_78[9] = 0;
  local_78[10] = 0;
  local_78[0xb] = 0;
  local_78[0xc] = 0;
  local_78[0xd] = 0;
  local_78[0xe] = 0;
  local_78[0xf] = 0;
  psVar21 = *(short **)(*param_2 + 0x30);
  uVar10 = (ulong)local_78 | 1;
  psVar14 = psVar21;
  while( true ) {
    puVar2 = PTR_DAT_047d90c8;
    if (*psVar14 != 0x10) break;
    uVar1 = psVar14[2];
    if (1 < (byte)((char)(uVar1 >> 8) - 1U)) goto LAB_011b6140;
    if ((ushort)psVar14[1] < 2) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulong)(ushort)psVar14[3];
    }
    if (((uVar1 & 0xff00) != 0x100) ||
       ((((uVar1 & 0xff) != 0xe && ((uVar1 & 0xff) != 0x9e)) || (uVar5 = (uint)uVar11, 0x12 < uVar5)
        ))) goto LAB_011b6140;
    uVar13 = uVar5;
    if (uVar5 < 0x13) {
      uVar13 = 0x12;
    }
    uVar13 = uVar13 + 1;
    uVar17 = ~uVar11;
    uVar18 = (ulong)(uVar13 - uVar5) & 3;
    if ((uVar13 - uVar5 & 3) != 0) {
      do {
        *(char *)(uVar10 + uVar11) = *(char *)(uVar10 + uVar11) + '\x01';
        uVar11 = uVar11 + 1;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
    if (2 < uVar17 + uVar13) {
      lVar15 = uVar13 - uVar11;
      pcVar16 = (char *)(((ulong)local_78 | 2) + uVar11);
      do {
        pcVar16[-1] = pcVar16[-1] + '\x01';
        *pcVar16 = *pcVar16 + '\x01';
        pcVar16[1] = pcVar16[1] + '\x01';
        pcVar16[2] = pcVar16[2] + '\x01';
        lVar15 = lVar15 + -4;
        pcVar16 = pcVar16 + 4;
      } while (lVar15 != 0);
    }
    if (*psVar14 == 0x10) {
LAB_011b6140:
      lVar15 = (ulong)(ushort)psVar14[1] + 2;
LAB_011b6120:
      psVar14 = psVar14 + lVar15;
    }
  }
  if (*psVar14 != 0) {
    lVar15 = 1;
    goto LAB_011b6120;
  }
  while (*psVar21 == 0x10) {
    uVar1 = psVar21[2];
    if ((byte)((char)(uVar1 >> 8) - 1U) < 2) {
      if ((ushort)psVar21[1] < 2) {
        uVar10 = 0;
      }
      else {
        uVar10 = (ulong)(ushort)psVar21[3];
      }
      uVar13 = (uint)uVar10;
      uVar5 = 0;
      if (local_78[uVar10] <= uVar13) {
        uVar5 = (uint)local_78[uVar10];
      }
      uVar11 = (ulong)(uVar13 - uVar5);
      if ((uVar1 & 0xff00) == 0x200) {
        thunk_FUN_011b6a88(*(undefined8 *)(param_1 + 0x48),uVar10,
                           *(undefined4 *)(param_3 + uVar11 * 4),uVar1 + 1 & 0xff,0,1);
      }
      else {
        switch(uVar1 & 0xff) {
        case 0:
          if (uVar13 < 10) {
            iVar6 = *(int *)(param_3 + uVar11 * 4);
          }
          else {
            piVar8 = (int *)FUN_011e2dd4(*(undefined8 *)
                                          (*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x50) +
                                                                        0x150) + 0x290) + 8) + 0x50)
                                         ,*(undefined1 *)
                                           (param_3 + (ulong)(uVar13 + (int)(uVar10 / 10) * -10) * 4
                                           ));
            if (piVar8 == (int *)0x0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *piVar8;
              if (4 < iVar6) {
                iVar6 = 0;
              }
            }
          }
          FUN_011b6f2c(param_1,uVar10,iVar6);
          break;
        case 1:
          FUN_011b7ba8(param_1,*(undefined4 *)(param_3 + uVar11 * 4),uVar10);
          break;
        case 2:
          uVar5 = *(uint *)(param_3 + uVar11 * 4);
LAB_011b6290:
          FUN_014c0d14(param_1,uVar5,uVar10);
          break;
        case 3:
        case 0xf:
          FUN_011b7eb4(*(undefined8 *)(param_1 + 0x48),uVar10,*(undefined4 *)(param_3 + uVar11 * 4))
          ;
          break;
        case 4:
        case 5:
        case 8:
        case 0xd:
          break;
        case 6:
          FUN_011b8e34(*(undefined8 *)(param_1 + 0x48),uVar10,*(undefined4 *)(param_3 + uVar11 * 4))
          ;
          break;
        case 7:
          FUN_011b8b24(*(undefined8 *)(param_1 + 0x48),uVar10,*(undefined4 *)(param_3 + uVar11 * 4))
          ;
          break;
        case 9:
        case 10:
        case 0xb:
        case 0x10:
          thunk_FUN_011b6674(*(undefined8 *)(param_1 + 0x48),uVar10,
                             *(undefined4 *)(param_3 + uVar11 * 4),1);
          break;
        case 0xc:
          FUN_011b8088(param_1,*(undefined4 *)(param_3 + uVar11 * 4),uVar10);
          break;
        case 0xe:
          FUN_011b783c(param_1,uVar10,*(undefined4 *)(param_3 + uVar11 * 4));
          break;
        default:
          if ((uVar1 & 0xff) == 0xd1) {
            bVar3 = *(byte *)(param_3 + uVar11 * 4);
            plVar7 = (long *)FUN_01021c94(*(undefined8 *)
                                           (*(long *)(*(long *)(param_1 + 0x50) + 0x150) + 0x30),
                                          bVar3);
            if (plVar7 != (long *)0x0) {
              uVar11 = (**(code **)(*plVar7 + 0x78))();
              if ((uVar11 & 1) == 0) {
                lVar15 = (**(code **)(*plVar7 + 0x1e0))(plVar7);
                (*(code *)**(undefined8 **)(lVar15 + 0x28))();
                uVar11 = FUN_011b6e8c();
                if ((uVar11 & 1) != 0) {
                  plVar7 = *(long **)(param_1 + 0x48);
                  uVar11 = (**(code **)(*plVar7 + 0x78))(plVar7,plVar7[8],0x3af);
                  if (uVar13 < *(uint *)(plVar7 + 0xb)) {
                    lVar15 = plVar7[8];
                    *(ulong *)(plVar7[0xc] + uVar10 * 0x18 + 8) = uVar11 & 0xffff | 0x20000;
                    lVar12 = plVar7[0xc];
                    lVar20 = *(long *)(lVar12 + uVar10 * 0x18);
                    if (*(char *)(lVar20 + 0x54) != '\0') {
                      uVar4 = FUN_011b8d00(*(undefined8 *)(lVar20 + 0x30),
                                           *(undefined8 *)(lVar15 + 0x30),
                                           *(undefined2 *)(lVar20 + 0x50));
                      *(undefined2 *)(lVar20 + 0x52) = uVar4;
                      lVar12 = plVar7[0xc];
                    }
                    *(undefined2 *)(lVar12 + uVar10 * 0x18 + 0x10) = 0;
                    lVar15 = plVar7[0xc] + uVar10 * 0x18;
                    *(ushort *)(lVar15 + 0x12) = *(ushort *)(lVar15 + 0x12) & 0xfffe;
                  }
                }
              }
              else {
                lVar15 = FUN_014c0ee8(*(undefined8 *)
                                       (*(long *)(*(long *)(param_1 + 0x50) + 0x150) + 0x30),bVar3);
                if (lVar15 != 0) {
                  lVar15 = *(long *)(lVar15 + 0x48);
                  puVar19 = (undefined8 *)(lVar15 + 0x28);
                  puVar19 = (undefined8 *)(**(code **)*puVar19)(puVar19);
                  if (((*PTR_DAT_047dcd50 & 1) == 0) &&
                     (iVar6 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar6 != 0)) {
                    uVar9 = FUN_01af5520();
                    *(undefined8 *)PTR_DAT_047dcd58 = uVar9;
                    __cxa_guard_release(PTR_DAT_047dcd50);
                  }
                  if (puVar19 != (undefined8 *)PTR_DAT_047dcd58) {
                    for (puVar19 = (undefined8 *)*puVar19; puVar19 != (undefined8 *)PTR_DAT_047dcd58
                        ; puVar19 = (undefined8 *)*puVar19) {
                    }
                  }
                  lVar15 = *(long *)(lVar15 + 0x48);
                  uVar5 = FUN_0168a508(*(undefined8 *)(lVar15 + 0x70));
                  if ((uVar5 & 0xff) == 0xff || *(uint *)(*(long *)puVar2 + 0x3d4) < (uVar5 & 0xff))
                  {
                    uVar5 = (uint)bVar3;
                    goto LAB_011b6290;
                  }
                  bVar3 = FUN_0168a508(*(undefined8 *)(lVar15 + 0x70));
                  if (*(uint *)(*(long *)puVar2 + 0x3d4) < (uint)bVar3) {
                    bVar3 = 0xff;
                  }
                  if (bVar3 == 0x6e) {
                    FUN_011b9500(*(undefined8 *)(param_1 + 0x48),uVar10,lVar15);
                  }
                  else {
                    FUN_011b9008(*(undefined8 *)(param_1 + 0x48),uVar10,bVar3,lVar15);
                  }
                }
              }
            }
          }
          else if ((uVar1 & 0xff) == 0x9e) {
            FUN_011b7b40(param_1,uVar10,uVar13 + 1,*(undefined4 *)(param_3 + uVar11 * 4));
          }
        }
      }
    }
    if (*psVar21 == 0x10) {
      lVar15 = (ulong)(ushort)psVar21[1] + 2;
LAB_011b620c:
      psVar21 = psVar21 + lVar15;
    }
  }
  if (*psVar21 == 0) {
    return;
  }
  lVar15 = 1;
  goto LAB_011b620c;
}


