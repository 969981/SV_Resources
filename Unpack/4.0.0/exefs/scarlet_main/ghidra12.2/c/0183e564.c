/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183e564; name: FUN_0183e564
 */


void FUN_0183e564(long param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5,
                 long param_6,int param_7,long *param_8,undefined1 *param_9)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  byte local_88 [4];
  byte local_84 [4];
  byte local_80 [4];
  byte local_7c [4];
  byte local_78 [4];
  byte local_74 [4];
  byte local_70 [4];
  byte local_6c [4];
  byte local_68 [4];
  byte local_64 [4];
  byte local_48 [4];
  byte local_44 [4];
  
  *param_9 = 0;
  lVar14 = *(long *)(param_3 + 0x30);
  uVar4 = FUN_0183f034(param_1,param_2,param_6);
  uVar15 = *(undefined8 *)(param_3 + 0x290);
  uVar5 = (**(code **)(*param_4 + 0x98))(param_4);
  uVar6 = FUN_010e161c(uVar15,uVar5);
  switch(*(undefined1 *)(param_6 + 10)) {
  case 0:
  case 3:
    FUN_01253868(*(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x290),uVar4,local_84,local_88);
    uVar11 = (ulong)local_84[0];
    if (((uVar11 != 5) && (local_88[0] < *(byte *)(lVar14 + uVar11 * 0x38 + 0x58))) &&
       (lVar14 = *(long *)(lVar14 + uVar11 * 0x38 + (ulong)local_88[0] * 8 + 0x28), lVar14 != 0)) {
      uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (uVar11 < 0xb) {
        if (*(byte *)((long)param_8 + 0xa6) != 0) {
          plVar9 = param_8;
          uVar13 = uVar11;
          do {
            if (*plVar9 == lVar14) goto LAB_0183e6a0;
            uVar13 = uVar13 - 1;
            plVar9 = plVar9 + 1;
          } while (uVar13 != 0);
        }
        param_8[uVar11] = lVar14;
        goto LAB_0183e660;
      }
    }
    goto LAB_0183e6a0;
  case 1:
    FUN_01253868(*(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x290),uVar4,local_44,local_48);
    uVar11 = (ulong)local_44[0];
    if (((uVar11 == 5) || (*(byte *)(lVar14 + uVar11 * 0x38 + 0x58) <= local_48[0])) ||
       ((plVar9 = *(long **)(lVar14 + uVar11 * 0x38 + (ulong)local_48[0] * 8 + 0x28),
        plVar9 == (long *)0x0 ||
        (uVar11 = (**(code **)(*plVar9 + 0x200))(plVar9), (uVar11 & 1) != 0)))) {
      plVar9 = param_4;
    }
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar11) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar12 = param_8;
      uVar13 = uVar11;
      do {
        if ((long *)*plVar12 == plVar9) {
          return;
        }
        uVar13 = uVar13 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar13 != 0);
    }
    param_8[uVar11] = (long)plVar9;
    break;
  case 2:
    FUN_01253868(*(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x290),uVar4,local_6c,local_70);
    uVar11 = (ulong)local_6c[0];
    if (uVar11 == 5) {
      return;
    }
    if (*(byte *)(lVar14 + uVar11 * 0x38 + 0x58) <= local_70[0]) {
      return;
    }
    lVar14 = *(long *)(lVar14 + uVar11 * 0x38 + (ulong)local_70[0] * 8 + 0x28);
    if (lVar14 == 0) {
      return;
    }
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar11) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar13 = uVar11;
      do {
        if (*plVar9 == lVar14) {
          return;
        }
        uVar13 = uVar13 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar13 != 0);
    }
    goto LAB_0183e7cc;
  case 4:
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    uVar7 = FUN_0123a588(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),uVar6,1);
    if ((uVar7 & 0xff) != (uVar6 & 0xff)) {
      FUN_01253868(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar7,local_7c,local_80);
      uVar11 = (ulong)local_7c[0];
      if (((uVar11 < 5) && (local_80[0] < *(byte *)(lVar14 + uVar11 * 0x38 + 0x58))) &&
         (lVar10 = *(long *)(lVar14 + uVar11 * 0x38 + (ulong)local_80[0] * 8 + 0x28), lVar10 != 0))
      {
        uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
        if (uVar11 < 0xb) {
          if (*(byte *)((long)param_8 + 0xa6) != 0) {
            plVar9 = param_8;
            uVar13 = uVar11;
            do {
              if (*plVar9 == lVar10) goto LAB_0183e8a4;
              uVar13 = uVar13 - 1;
              plVar9 = plVar9 + 1;
            } while (uVar13 != 0);
          }
          param_8[uVar11] = lVar10;
          *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
          cVar3 = *(char *)((long)param_8 + 0xa6);
          cVar2 = cVar3 + '\x01';
          *(char *)((long)param_8 + 0xa6) = cVar2;
          if (*(byte *)((long)param_8 + 0xa7) < (byte)(cVar3 + 1U)) {
            *(char *)((long)param_8 + 0xa7) = cVar2;
          }
        }
      }
    }
LAB_0183e8a4:
    lVar10 = FUN_0183da74(param_1,lVar14,uVar6,0);
    if (lVar10 != 0) {
      uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (uVar11 < 0xb) {
        if (*(byte *)((long)param_8 + 0xa6) != 0) {
          plVar9 = param_8;
          uVar13 = uVar11;
          do {
            if (*plVar9 == lVar10) goto LAB_0183e910;
            uVar13 = uVar13 - 1;
            plVar9 = plVar9 + 1;
          } while (uVar13 != 0);
        }
        param_8[uVar11] = lVar10;
        *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
        bVar1 = *(char *)((long)param_8 + 0xa6) + 1;
        *(byte *)((long)param_8 + 0xa6) = bVar1;
        if (*(byte *)((long)param_8 + 0xa7) < bVar1) {
          *(byte *)((long)param_8 + 0xa7) = bVar1;
        }
      }
    }
LAB_0183e910:
    lVar14 = FUN_0183da74(param_1,lVar14,uVar6,1);
    if (lVar14 == 0) {
      return;
    }
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar11) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar13 = uVar11;
      do {
        if (*plVar9 == lVar14) {
          return;
        }
        uVar13 = uVar13 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar13 != 0);
    }
    goto LAB_0183ed18;
  case 5:
    lVar10 = FUN_0183da74(param_1,lVar14,uVar6,0);
    if (lVar10 != 0) {
      uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (uVar11 < 0xb) {
        if (*(byte *)((long)param_8 + 0xa6) != 0) {
          plVar9 = param_8;
          uVar13 = uVar11;
          do {
            if (*plVar9 == lVar10) goto LAB_0183e9c8;
            uVar13 = uVar13 - 1;
            plVar9 = plVar9 + 1;
          } while (uVar13 != 0);
        }
        param_8[uVar11] = lVar10;
        *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
        bVar1 = *(char *)((long)param_8 + 0xa6) + 1;
        *(byte *)((long)param_8 + 0xa6) = bVar1;
        if (*(byte *)((long)param_8 + 0xa7) < bVar1) {
          *(byte *)((long)param_8 + 0xa7) = bVar1;
        }
      }
    }
LAB_0183e9c8:
    lVar14 = FUN_0183da74(param_1,lVar14,uVar6,1);
    if (lVar14 == 0) {
      return;
    }
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar11) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar13 = uVar11;
      do {
        if (*plVar9 == lVar14) {
          return;
        }
        uVar13 = uVar13 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar13 != 0);
    }
    goto LAB_0183ed18;
  case 6:
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (uVar11 < 0xb) {
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar9 = param_8;
        uVar13 = uVar11;
        do {
          if ((long *)*plVar9 == param_4) goto LAB_0183ea68;
          uVar13 = uVar13 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar13 != 0);
      }
      param_8[uVar11] = (long)param_4;
      *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
      *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
      *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
      bVar1 = *(char *)((long)param_8 + 0xa6) + 1;
      *(byte *)((long)param_8 + 0xa6) = bVar1;
      if (*(byte *)((long)param_8 + 0xa7) < bVar1) {
        *(byte *)((long)param_8 + 0xa7) = bVar1;
      }
    }
LAB_0183ea68:
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    uVar7 = FUN_0123a588(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),uVar6,1);
    if ((uVar7 & 0xff) == (uVar6 & 0xff)) {
      return;
    }
    FUN_01253868(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar7,local_74,local_78);
    uVar11 = (ulong)local_74[0];
    if (4 < uVar11) {
      return;
    }
    if (*(byte *)(lVar14 + uVar11 * 0x38 + 0x58) <= local_78[0]) {
      return;
    }
    lVar14 = *(long *)(lVar14 + uVar11 * 0x38 + (ulong)local_78[0] * 8 + 0x28);
    if (lVar14 == 0) {
      return;
    }
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar11) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar13 = uVar11;
      do {
        if (*plVar9 == lVar14) {
          return;
        }
        uVar13 = uVar13 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar13 != 0);
    }
LAB_0183e7cc:
    param_8[uVar11] = lVar14;
    break;
  case 7:
    if (param_7 != 0) {
      lVar14 = FUN_01021c94(lVar14,param_7);
      if (lVar14 == 0) {
        return;
      }
      uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (10 < uVar11) {
        return;
      }
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar9 = param_8;
        uVar13 = uVar11;
        do {
          if (*plVar9 == lVar14) {
            return;
          }
          uVar13 = uVar13 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar13 != 0);
      }
      goto LAB_0183ed18;
    }
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar11) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar13 = uVar11;
      do {
        if ((long *)*plVar9 == param_4) {
          return;
        }
        uVar13 = uVar13 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar13 != 0);
    }
    param_8[uVar11] = (long)param_4;
    break;
  case 8:
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (uVar11 < 0xb) {
      if (*(byte *)((long)param_8 + 0xa6) != 0) {
        plVar9 = param_8;
        uVar13 = uVar11;
        do {
          if ((long *)*plVar9 == param_4) goto LAB_0183ebb4;
          uVar13 = uVar13 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar13 != 0);
      }
      param_8[uVar11] = (long)param_4;
      *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
      *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
      *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
      bVar1 = *(char *)((long)param_8 + 0xa6) + 1;
      *(byte *)((long)param_8 + 0xa6) = bVar1;
      if (*(byte *)((long)param_8 + 0xa7) < bVar1) {
        *(byte *)((long)param_8 + 0xa7) = bVar1;
      }
    }
LAB_0183ebb4:
    lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x290) + 8);
    uVar7 = FUN_0123a588(*(undefined4 *)(lVar10 + 0x36c),*(undefined1 *)(lVar10 + 0x370),uVar6,1);
    if ((uVar7 & 0xff) != (uVar6 & 0xff)) {
      FUN_01253868(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar7,local_64,local_68);
      uVar11 = (ulong)local_64[0];
      if (((uVar11 < 5) && (local_68[0] < *(byte *)(lVar14 + uVar11 * 0x38 + 0x58))) &&
         (lVar10 = *(long *)(lVar14 + uVar11 * 0x38 + (ulong)local_68[0] * 8 + 0x28), lVar10 != 0))
      {
        uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
        if (uVar11 < 0xb) {
          if (*(byte *)((long)param_8 + 0xa6) != 0) {
            plVar9 = param_8;
            uVar13 = uVar11;
            do {
              if (*plVar9 == lVar10) goto LAB_0183ec84;
              uVar13 = uVar13 - 1;
              plVar9 = plVar9 + 1;
            } while (uVar13 != 0);
          }
          param_8[uVar11] = lVar10;
          *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
          *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
          cVar3 = *(char *)((long)param_8 + 0xa6);
          cVar2 = cVar3 + '\x01';
          *(char *)((long)param_8 + 0xa6) = cVar2;
          if (*(byte *)((long)param_8 + 0xa7) < (byte)(cVar3 + 1U)) {
            *(char *)((long)param_8 + 0xa7) = cVar2;
          }
        }
      }
    }
LAB_0183ec84:
    lVar10 = FUN_0183da74(param_1,lVar14,uVar6,0);
    if (lVar10 != 0) {
      uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (uVar11 < 0xb) {
        if (*(byte *)((long)param_8 + 0xa6) != 0) {
          plVar9 = param_8;
          uVar13 = uVar11;
          do {
            if (*plVar9 == lVar10) goto LAB_0183ecf0;
            uVar13 = uVar13 - 1;
            plVar9 = plVar9 + 1;
          } while (uVar13 != 0);
        }
        param_8[uVar11] = lVar10;
        *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
        *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
        bVar1 = *(char *)((long)param_8 + 0xa6) + 1;
        *(byte *)((long)param_8 + 0xa6) = bVar1;
        if (*(byte *)((long)param_8 + 0xa7) < bVar1) {
          *(byte *)((long)param_8 + 0xa7) = bVar1;
        }
      }
    }
LAB_0183ecf0:
    lVar14 = FUN_0183da74(param_1,lVar14,uVar6,1);
    if (lVar14 == 0) {
      return;
    }
    uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
    if (10 < uVar11) {
      return;
    }
    if (*(byte *)((long)param_8 + 0xa6) != 0) {
      plVar9 = param_8;
      uVar13 = uVar11;
      do {
        if (*plVar9 == lVar14) {
          return;
        }
        uVar13 = uVar13 - 1;
        plVar9 = plVar9 + 1;
      } while (uVar13 != 0);
    }
LAB_0183ed18:
    param_8[uVar11] = lVar14;
    break;
  case 9:
    uVar15 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
    uVar15 = FUN_012440f0(uVar15,2);
    lVar14 = FUN_0183da74(param_1,lVar14,uVar6,uVar15);
    if (lVar14 != 0) {
      uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
      if (uVar11 < 0xb) {
        if (*(byte *)((long)param_8 + 0xa6) != 0) {
          plVar9 = param_8;
          uVar13 = uVar11;
          do {
            if (*plVar9 == lVar14) goto LAB_0183e6a0;
            uVar13 = uVar13 - 1;
            plVar9 = plVar9 + 1;
          } while (uVar13 != 0);
        }
        param_8[uVar11] = lVar14;
        goto LAB_0183e660;
      }
    }
    goto LAB_0183e6a0;
  default:
    goto switchD_0183e5f8_caseD_a;
  case 0xd:
    if (param_7 == 0) {
      return;
    }
    lVar14 = FUN_01021c94(lVar14,param_7);
    if (lVar14 != 0) {
      plVar9 = (long *)(*(code *)**(undefined8 **)(lVar14 + 0x28))((undefined8 *)(lVar14 + 0x28));
      if (((*PTR_DAT_047d3f00 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar8 != 0)) {
        uVar15 = FUN_01b07aa4();
        *(undefined8 *)PTR_DAT_047d3f08 = uVar15;
        __cxa_guard_release(PTR_DAT_047d3f00);
      }
      for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
        if (plVar9 == (long *)PTR_DAT_047d3f08) {
          uVar11 = (ulong)*(byte *)((long)param_8 + 0xa6);
          if (uVar11 < 0xb) {
            if (*(byte *)((long)param_8 + 0xa6) == 0) goto LAB_0183ee04;
            plVar9 = param_8;
            uVar13 = uVar11;
            goto LAB_0183ef70;
          }
          break;
        }
      }
    }
LAB_0183e6a0:
    *param_9 = 1;
    goto switchD_0183e5f8_caseD_a;
  }
  *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
  *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
  *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
  bVar1 = *(char *)((long)param_8 + 0xa6) + 1;
  *(byte *)((long)param_8 + 0xa6) = bVar1;
  if (*(byte *)((long)param_8 + 0xa7) < bVar1) {
    *(byte *)((long)param_8 + 0xa7) = bVar1;
  }
switchD_0183e5f8_caseD_a:
  return;
  while( true ) {
    uVar13 = uVar13 - 1;
    plVar9 = plVar9 + 1;
    if (uVar13 == 0) break;
LAB_0183ef70:
    if (*plVar9 == lVar14) goto LAB_0183e6a0;
  }
LAB_0183ee04:
  param_8[uVar11] = lVar14;
LAB_0183e660:
  *(undefined1 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) + 0x84) = 0;
  *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x58) = 0;
  *(undefined2 *)((long)param_8 + (ulong)*(byte *)((long)param_8 + 0xa6) * 2 + 0x6e) = 0;
  bVar1 = *(char *)((long)param_8 + 0xa6) + 1;
  *(byte *)((long)param_8 + 0xa6) = bVar1;
  if (*(byte *)((long)param_8 + 0xa7) < bVar1) {
    *(byte *)((long)param_8 + 0xa7) = bVar1;
  }
  goto LAB_0183e6a0;
}


