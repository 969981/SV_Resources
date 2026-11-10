/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c07bdc; name: FUN_00c07bdc
 */


ulong FUN_00c07bdc(long param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  uint uVar14;
  long *plVar15;
  ulong local_78 [3];
  
  plVar7 = (long *)(**(code **)(*param_2 + 0xb0))(param_2);
  if (*(int *)(param_1 + 0x40) == 3) {
    uVar3 = (**(code **)(*plVar7 + 0x30))(plVar7,param_2,param_1);
  }
  else {
    uVar3 = (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_1);
    uVar3 = uVar3 & 1;
  }
  switch(*(undefined4 *)(param_1 + 0x3c)) {
  case 1:
  case 6:
  case 0x10:
    uVar14 = uVar3 << 3;
    goto LAB_00c08774;
  case 2:
  case 7:
  case 0xf:
    uVar14 = uVar3 << 2;
    goto LAB_00c08774;
  case 3:
    if (*(int *)(param_1 + 0x40) != 3) {
      pcVar13 = *(code **)(*plVar7 + 0x90);
LAB_00c085bc:
      uVar12 = (*pcVar13)(plVar7,param_2,param_1);
      uVar3 = 9;
      if ((long)uVar12 < 0) {
        uVar3 = 10;
      }
      uVar14 = 8;
      if (uVar12 >> 0x38 != 0) {
        uVar14 = uVar3;
      }
      uVar3 = 7;
      if (uVar12 >> 0x31 != 0) {
        uVar3 = uVar14;
      }
      uVar14 = 6;
      if (uVar12 >> 0x2a != 0) {
        uVar14 = uVar3;
      }
      uVar3 = 4;
      if (uVar12 >> 0x1c != 0) {
        uVar3 = 5;
      }
      uVar6 = 3;
      if (0x1fffff < uVar12) {
        uVar6 = uVar3;
      }
      uVar3 = 2;
      if (0x3fff < uVar12) {
        uVar3 = uVar6;
      }
      uVar6 = 1;
      if (0x7f < uVar12) {
        uVar6 = uVar3;
      }
      if (uVar12 >> 0x23 == 0) {
        uVar14 = uVar6;
      }
      goto LAB_00c08774;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        uVar12 = (**(code **)(*plVar7 + 0x158))(plVar7,param_2,param_1,uVar6);
        if (uVar12 >> 0x23 == 0) {
          if (uVar12 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar12 < 0x4000) {
            iVar4 = 2;
          }
          else if (uVar12 < 0x200000) {
            iVar4 = 3;
          }
          else {
            iVar4 = 4;
            if (uVar12 >> 0x1c != 0) {
              iVar4 = 5;
            }
          }
        }
        else if (uVar12 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else if (uVar12 >> 0x31 == 0) {
          iVar4 = 7;
        }
        else if (uVar12 >> 0x38 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = 9;
          if ((long)uVar12 < 0) {
            iVar4 = 10;
          }
        }
        uVar6 = uVar6 + 1;
        uVar14 = iVar4 + uVar14;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x40) != 3) {
      pcVar13 = *(code **)(*plVar7 + 0xa0);
      goto LAB_00c085bc;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        uVar12 = (**(code **)(*plVar7 + 0x168))(plVar7,param_2,param_1,uVar6);
        if (uVar12 >> 0x23 == 0) {
          if (uVar12 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar12 < 0x4000) {
            iVar4 = 2;
          }
          else if (uVar12 < 0x200000) {
            iVar4 = 3;
          }
          else {
            iVar4 = 4;
            if (uVar12 >> 0x1c != 0) {
              iVar4 = 5;
            }
          }
        }
        else if (uVar12 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else if (uVar12 >> 0x31 == 0) {
          iVar4 = 7;
        }
        else if (uVar12 >> 0x38 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = 9;
          if ((long)uVar12 < 0) {
            iVar4 = 10;
          }
        }
        uVar6 = uVar6 + 1;
        uVar14 = iVar4 + uVar14;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0x40) != 3) {
      uVar12 = (**(code **)(*plVar7 + 0x88))(plVar7,param_2,param_1);
      uVar3 = 4;
      if ((uVar12 >> 0x1c & 0xf) != 0) {
        uVar3 = 5;
      }
      uVar6 = (uint)uVar12;
      uVar14 = 3;
      if (0x1fffff < uVar6) {
        uVar14 = uVar3;
      }
      uVar3 = 2;
      if (0x3fff < uVar6) {
        uVar3 = uVar14;
      }
      uVar5 = 1;
      if (0x7f < uVar6) {
        uVar5 = uVar3;
      }
      uVar14 = 10;
      if ((uVar12 & 0x80000000) == 0) {
        uVar14 = uVar5;
      }
      goto LAB_00c08774;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        uVar5 = (**(code **)(*plVar7 + 0x150))(plVar7,param_2,param_1,uVar6);
        if ((int)uVar5 < 0) {
          iVar4 = 10;
        }
        else if (uVar5 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar5 < 0x4000) {
          iVar4 = 2;
        }
        else if (uVar5 < 0x200000) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar5 >> 0x1c != 0) {
            iVar4 = 5;
          }
        }
        uVar6 = uVar6 + 1;
        uVar14 = iVar4 + uVar14;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 8:
    uVar14 = uVar3;
    goto LAB_00c08774;
  case 9:
  case 0xc:
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      lVar11 = tpidr_el0;
      do {
        local_78[1] = 0;
        local_78[2] = 0;
        local_78[0] = 0;
        if (*(int *)(param_1 + 0x40) == 3) {
          pbVar8 = (byte *)(**(code **)(*plVar7 + 0x1a8))(plVar7,param_2,param_1,uVar6,local_78);
        }
        else {
          pbVar8 = (byte *)(**(code **)(*plVar7 + 0xe0))(plVar7,param_2,param_1,local_78);
        }
        uVar12 = local_78[2];
        uVar5 = (uint)(*pbVar8 >> 1);
        if ((*pbVar8 & 1) != 0) {
          uVar5 = *(uint *)(pbVar8 + 8);
        }
        iVar4 = 4;
        if (uVar5 >> 0x1c != 0) {
          iVar4 = 5;
        }
        iVar1 = 3;
        if (0x1fffff < uVar5) {
          iVar1 = iVar4;
        }
        iVar4 = 2;
        if (0x3fff < uVar5) {
          iVar4 = iVar1;
        }
        iVar1 = 1;
        if (0x7f < uVar5) {
          iVar1 = iVar4;
        }
        uVar14 = uVar14 + uVar5 + iVar1;
        if (((local_78[0] & 1) != 0) && (local_78[2] != 0)) {
          plVar15 = *(long **)(lVar11 + 0x30);
          if (plVar15 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar15 = DAT_04859430;
            *(long **)(lVar11 + 0x30) = DAT_04859430;
          }
          uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
          if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
            (**(code **)(*plVar15 + 0x18))(plVar15,uVar12,0,8);
          }
          else {
            FUN_00c48fe8(plVar15,uVar12,0,8);
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 10:
    if (*(int *)(param_1 + 0x40) != 3) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0xd8))(plVar7,param_2,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00c08510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar12 = (**(code **)(*plVar7 + 0x60))();
      return uVar12;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        plVar15 = (long *)(**(code **)(*plVar7 + 0x1a0))(plVar7,param_2,param_1,uVar6);
        iVar4 = (**(code **)(*plVar15 + 0x60))();
        uVar6 = uVar6 + 1;
        uVar14 = iVar4 + uVar14;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0x40) != 3) {
      plVar7 = (long *)(**(code **)(*plVar7 + 0xd8))(plVar7,param_2,param_1,0);
      uVar12 = (**(code **)(*plVar7 + 0x60))();
      iVar4 = 4;
      if ((uVar12 >> 0x1c & 0xf) != 0) {
        iVar4 = 5;
      }
      uVar3 = (uint)uVar12;
      iVar1 = 3;
      if (0x1fffff < uVar3) {
        iVar1 = iVar4;
      }
      iVar4 = 2;
      if (0x3fff < uVar3) {
        iVar4 = iVar1;
      }
      iVar1 = 1;
      if (0x7f < uVar3) {
        iVar1 = iVar4;
      }
      uVar14 = iVar1 + uVar3;
      goto LAB_00c08774;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        plVar15 = (long *)(**(code **)(*plVar7 + 0x1a0))(plVar7,param_2,param_1,uVar6);
        uVar12 = (**(code **)(*plVar15 + 0x60))();
        iVar4 = 4;
        if ((uVar12 >> 0x1c & 0xf) != 0) {
          iVar4 = 5;
        }
        uVar5 = (uint)uVar12;
        iVar1 = 3;
        if (0x1fffff < uVar5) {
          iVar1 = iVar4;
        }
        iVar4 = 2;
        if (0x3fff < uVar5) {
          iVar4 = iVar1;
        }
        iVar1 = 1;
        if (0x7f < uVar5) {
          iVar1 = iVar4;
        }
        uVar6 = uVar6 + 1;
        uVar14 = uVar5 + uVar14 + iVar1;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 0xd:
    if (*(int *)(param_1 + 0x40) != 3) {
      uVar12 = (**(code **)(*plVar7 + 0x98))(plVar7,param_2,param_1);
      uVar3 = 4;
      if ((uVar12 >> 0x1c & 0xf) != 0) {
        uVar3 = 5;
      }
      uVar6 = (uint)uVar12;
      uVar14 = 3;
      if (0x1fffff < uVar6) {
        uVar14 = uVar3;
      }
      uVar3 = 2;
      if (0x3fff < uVar6) {
        uVar3 = uVar14;
      }
      uVar14 = 1;
      if (0x7f < uVar6) {
        uVar14 = uVar3;
      }
      goto LAB_00c08774;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        uVar5 = (**(code **)(*plVar7 + 0x160))(plVar7,param_2,param_1,uVar6);
        if (uVar5 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar5 < 0x4000) {
          iVar4 = 2;
        }
        else if (uVar5 < 0x200000) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar5 >> 0x1c != 0) {
            iVar4 = 5;
          }
        }
        uVar6 = uVar6 + 1;
        uVar14 = iVar4 + uVar14;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 0xe:
    if (*(int *)(param_1 + 0x40) != 3) {
      lVar11 = (**(code **)(*plVar7 + 200))(plVar7,param_2,param_1);
      uVar3 = *(uint *)(lVar11 + 0x10);
      if ((int)uVar3 < 0) {
        uVar14 = 10;
        goto LAB_00c08774;
      }
      if (uVar3 < 0x80) goto LAB_00c0867c;
      if (uVar3 < 0x4000) {
        uVar14 = 2;
        goto LAB_00c08774;
      }
      uVar14 = 3;
      uVar6 = 4;
      if (uVar3 >> 0x1c != 0) {
        uVar6 = 5;
      }
      bVar2 = 0x1fffff < uVar3;
LAB_00c08770:
      if (bVar2) {
        uVar14 = uVar6;
      }
      goto LAB_00c08774;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        lVar11 = (**(code **)(*plVar7 + 400))(plVar7,param_2,param_1,uVar6);
        uVar5 = *(uint *)(lVar11 + 0x10);
        if ((int)uVar5 < 0) {
          iVar4 = 10;
        }
        else if (uVar5 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar5 < 0x4000) {
          iVar4 = 2;
        }
        else if (uVar5 < 0x200000) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar5 >> 0x1c != 0) {
            iVar4 = 5;
          }
        }
        uVar6 = uVar6 + 1;
        uVar14 = iVar4 + uVar14;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 0x11:
    if (*(int *)(param_1 + 0x40) != 3) {
      iVar4 = (**(code **)(*plVar7 + 0x88))(plVar7,param_2,param_1);
      uVar3 = iVar4 << 1 ^ iVar4 >> 0x1f;
      if (uVar3 < 0x80) {
LAB_00c0867c:
        uVar14 = 1;
        goto LAB_00c08774;
      }
      uVar5 = 4;
      if (uVar3 >> 0x1c != 0) {
        uVar5 = 5;
      }
      uVar14 = 2;
      uVar6 = 3;
      if (0x1fffff < uVar3) {
        uVar6 = uVar5;
      }
      bVar2 = 0x3fff < uVar3;
      goto LAB_00c08770;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        iVar4 = (**(code **)(*plVar7 + 0x150))(plVar7,param_2,param_1,uVar6);
        uVar5 = iVar4 << 1 ^ iVar4 >> 0x1f;
        if (uVar5 < 0x80) {
          iVar4 = 1;
        }
        else if (uVar5 < 0x4000) {
          iVar4 = 2;
        }
        else if (uVar5 < 0x200000) {
          iVar4 = 3;
        }
        else {
          iVar4 = 4;
          if (uVar5 >> 0x1c != 0) {
            iVar4 = 5;
          }
        }
        uVar6 = uVar6 + 1;
        uVar14 = iVar4 + uVar14;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
    break;
  case 0x12:
    if (*(int *)(param_1 + 0x40) != 3) {
      lVar11 = (**(code **)(*plVar7 + 0x90))(plVar7,param_2,param_1);
      uVar12 = lVar11 << 1 ^ lVar11 >> 0x3f;
      if (uVar12 >> 0x23 != 0) {
        uVar3 = 9;
        if ((long)uVar12 < 0) {
          uVar3 = 10;
        }
        uVar14 = 8;
        if (uVar12 >> 0x38 != 0) {
          uVar14 = uVar3;
        }
        uVar3 = 7;
        if (uVar12 >> 0x31 != 0) {
          uVar3 = uVar14;
        }
        uVar14 = 6;
        if (uVar12 >> 0x2a != 0) {
          uVar14 = uVar3;
        }
        goto LAB_00c08774;
      }
      if (uVar12 < 0x80) goto LAB_00c0867c;
      uVar3 = 4;
      if (uVar12 >> 0x1c != 0) {
        uVar3 = 5;
      }
      uVar14 = 2;
      uVar6 = 3;
      if (0x1fffff < uVar12) {
        uVar6 = uVar3;
      }
      bVar2 = 0x3fff < uVar12;
      goto LAB_00c08770;
    }
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar14 = 0;
      do {
        lVar11 = (**(code **)(*plVar7 + 0x158))(plVar7,param_2,param_1,uVar6);
        uVar12 = lVar11 << 1 ^ lVar11 >> 0x3f;
        if (uVar12 >> 0x23 == 0) {
          if (uVar12 < 0x80) {
            iVar4 = 1;
          }
          else if (uVar12 < 0x4000) {
            iVar4 = 2;
          }
          else if (uVar12 < 0x200000) {
            iVar4 = 3;
          }
          else {
            iVar4 = 4;
            if (uVar12 >> 0x1c != 0) {
              iVar4 = 5;
            }
          }
        }
        else if (uVar12 >> 0x2a == 0) {
          iVar4 = 6;
        }
        else if (uVar12 >> 0x31 == 0) {
          iVar4 = 7;
        }
        else if (uVar12 >> 0x38 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = 9;
          if ((long)uVar12 < 0) {
            iVar4 = 10;
          }
        }
        uVar6 = uVar6 + 1;
        uVar14 = iVar4 + uVar14;
      } while (uVar3 != uVar6);
      goto LAB_00c08774;
    }
  }
  uVar14 = 0;
LAB_00c08774:
  return (ulong)uVar14;
}


