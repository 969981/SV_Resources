/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d8d60; name: FUN_003d8d60
 */


uint FUN_003d8d60(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  long *plVar13;
  char cVar14;
  ulong uVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  ulong local_68;
  
  puVar17 = *(undefined8 **)(param_1 + 0x550);
  uVar20 = *(uint *)((long)puVar17 + 0x1c);
  if (param_5 == 0xffffffff) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    lVar7 = FUN_003af5b0(param_3,&local_68);
    if (lVar7 == 0) {
      return 0;
    }
    puVar19 = (uint *)(*(long *)(param_1 + 0xa8) + ((long)(local_68 << 0x20) >> 0x1e) + 0x310);
    uVar12 = 0x50;
    if ((*(uint *)((long)puVar17 + 0x1c) & 0x30001) != 0) {
      uVar12 = 0x6f0;
    }
    uVar21 = 1;
    uVar15 = local_68;
    if ((uVar20 & 0x30000) == 0) goto LAB_003d8e20;
LAB_003d8e7c:
    iVar6 = FUN_00483d70(0,param_2,param_4);
    uVar5 = 0;
    if (iVar6 != 0 || uVar12 != 0) {
      uVar5 = uVar12 | 0x800;
    }
    uVar20 = (uint)(iVar6 == 0) << 0xb;
    bVar1 = uVar12 == 0;
    uVar12 = uVar5;
    if ((bVar1) && (iVar6 != 0)) {
      uVar12 = 0;
      uVar20 = 0;
      goto LAB_003d92ec;
    }
  }
  else {
    local_68 = (ulong)param_5;
    if (param_5 == 0xfffffffe) {
      plVar13 = (long *)*puVar17;
      local_68 = ((long)plVar13 + (-0x20 - (long)puVar17) >> 3) * -0x3333333333333333;
      param_5 = (uint)local_68;
    }
    else {
      plVar13 = puVar17 + (long)(int)param_5 * 5 + 4;
    }
    uVar12 = 0;
    param_2 = *plVar13;
    param_3 = plVar13[1];
    puVar19 = (uint *)(*(long *)(param_1 + 0xa8) + (long)(int)param_5 * 4 + 0x310);
    if (param_2 == 0 || param_3 == 0) {
      uVar20 = 0;
      goto LAB_003d92ec;
    }
    param_4 = plVar13[2];
    uVar21 = uVar20 & 0x30001;
    uVar15 = local_68;
    if ((uVar20 & 0x30000) != 0) goto LAB_003d8e7c;
LAB_003d8e20:
    uVar20 = 0;
    uVar15 = local_68;
  }
  uVar5 = FUN_003b4ef0(param_1);
  if ((((uVar5 & 0xffffff00) == 0x300) && (iVar6 = FUN_003b4ef0(param_1), uVar21 != 0)) &&
     (0x302 < iVar6)) {
    if ((*(long *)(*(long *)(param_1 + 0xa8) + 0x2f0) == 0) &&
       (*(long *)(*(long *)(param_1 + 0xa8) + 0x2e8) == 0)) {
      if ((6 < (uint)uVar15) || ((0x7dU >> (ulong)((uint)uVar15 & 0x1f) & 1) == 0)) {
        uVar16 = 0xffffffff;
        goto LAB_003d8f04;
      }
      uVar15 = -(uVar15 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar15 & 0xffffffff) << 2;
      uVar16 = *(undefined4 *)(&DAT_03cdd1c8 + uVar15);
      lVar7 = puVar17[0x33];
      if (lVar7 == 0) goto LAB_003d8f04;
      uVar18 = puVar17[0x34];
      if (uVar18 != 0) {
        uVar22 = 0;
        iVar6 = *(int *)(&DAT_03cdd1e4 + uVar15);
        do {
          lVar11 = FUN_003d62c0(*(undefined2 *)(lVar7 + uVar22 * 2));
          if (((lVar11 != 0) && (*(int *)(lVar11 + 0xc) == 0x40)) &&
             (*(int *)(lVar11 + 0x14) == iVar6)) break;
          uVar22 = uVar22 + 1;
        } while (uVar22 < uVar18);
        if (uVar22 != uVar18) goto LAB_003d8f04;
      }
      if (uVar12 == 0) goto LAB_003d92e8;
LAB_003d8fdc:
      bVar1 = true;
      goto LAB_003d8fe0;
    }
    uVar16 = 0;
LAB_003d8f04:
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
        (iVar6 = **(int **)(param_1 + 8), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
      lVar7 = FUN_003d93f0(param_1,param_2,param_3);
      if (lVar7 != 0) {
        uVar20 = uVar20 | 0x10;
      }
      uVar21 = uVar20;
LAB_003d8f84:
      uVar20 = uVar21 | 0x20;
      iVar6 = FUN_0047e430(param_4);
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          uVar8 = FUN_0047e450(param_4,iVar6);
          iVar2 = FUN_003d96b0(param_1,uVar8,uVar16);
          if (iVar2 == 0) {
            if (uVar12 == 0) goto LAB_003d92e8;
            uVar20 = uVar21;
            break;
          }
          iVar6 = iVar6 + 1;
          iVar2 = FUN_0047e430(param_4);
        } while (iVar6 < iVar2);
      }
      goto LAB_003d8fdc;
    }
    iVar6 = FUN_003d96b0(param_1,param_2,uVar16);
    if (iVar6 != 0) {
      uVar21 = uVar20 | 0x10;
      goto LAB_003d8f84;
    }
    if (uVar12 != 0) {
      uVar21 = uVar20;
      goto LAB_003d8f84;
    }
LAB_003d92e8:
    uVar12 = 0;
    goto LAB_003d92ec;
  }
  bVar1 = uVar21 != 0;
  if (uVar12 != 0) {
    uVar20 = uVar20 | 0x30;
  }
LAB_003d8fe0:
  iVar6 = FUN_003d97b0(param_1,param_2,1);
  if (iVar6 == 0) {
    if (uVar12 == 0) goto LAB_003d92e8;
  }
  else {
    uVar20 = uVar20 | 0x40;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar20 = uVar20 | 0x80;
LAB_003d90cc:
    if ((bool)(bVar1 ^ 1U | *(int *)(param_1 + 0x38) != 0)) goto LAB_003d910c;
    iVar6 = FUN_0043e840(param_3);
    if (iVar6 == 6) {
      cVar14 = '\x01';
LAB_003d9140:
      lVar7 = *(long *)(param_1 + 0xa8);
      if (*(ulong *)(lVar7 + 600) != 0) {
        uVar15 = 0;
        do {
          if (cVar14 == *(char *)(*(long *)(lVar7 + 0x250) + uVar15)) {
            uVar20 = uVar20 | 0x400;
            break;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ulong *)(lVar7 + 600));
      }
      if ((uVar20 & 0x400) == 0 && uVar12 == 0) goto LAB_003d92ec;
    }
    else {
      if (iVar6 == 0x198) {
        cVar14 = '@';
        goto LAB_003d9140;
      }
      if (iVar6 == 0x74) {
        cVar14 = '\x02';
        goto LAB_003d9140;
      }
      lVar7 = *(long *)(param_1 + 0xa8);
      uVar20 = uVar20 | 0x400;
    }
    uVar8 = *(undefined8 *)(lVar7 + 0x260);
    iVar6 = FUN_0047e430(uVar8);
    uVar5 = uVar20 | 0x200;
    uVar21 = uVar5;
    if (iVar6 != 0) {
      uVar21 = uVar20;
    }
    uVar20 = uVar21;
    if ((uVar21 >> 9 & 1) == 0) {
      uVar9 = FUN_00483ac0(param_2);
      iVar6 = FUN_0047e430(uVar8);
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          uVar10 = FUN_0047e450(uVar8,iVar6);
          iVar2 = FUN_00483880(uVar9,uVar10);
          if (iVar2 == 0) {
            uVar20 = uVar5;
            break;
          }
          iVar6 = iVar6 + 1;
          iVar2 = FUN_0047e430(uVar8);
        } while (iVar6 < iVar2);
      }
    }
    if ((uVar20 >> 9 & 1) == 0) {
      iVar6 = FUN_0047e430(param_4);
      if (0 < iVar6) {
        iVar6 = 0;
        do {
          FUN_0047e450(param_4,iVar6);
          uVar9 = FUN_00483ac0();
          iVar2 = FUN_0047e430(uVar8);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              uVar10 = FUN_0047e450(uVar8,iVar2);
              iVar4 = FUN_00483880(uVar9,uVar10);
              if (iVar4 == 0) {
                uVar21 = 0x200;
                uVar20 = uVar5;
                goto LAB_003d92e0;
              }
              iVar2 = iVar2 + 1;
              iVar4 = FUN_0047e430(uVar8);
            } while (iVar2 < iVar4);
          }
          iVar6 = iVar6 + 1;
          iVar2 = FUN_0047e430(param_4);
        } while (iVar6 < iVar2);
      }
      uVar21 = 0;
    }
    else {
      uVar21 = uVar20 & 0x200;
    }
LAB_003d92e0:
    if (uVar21 == 0 && uVar12 == 0) goto LAB_003d92e8;
  }
  else {
    if (bVar1) {
      uVar20 = uVar20 | 0x80;
      iVar6 = FUN_0047e430(param_4);
      if (0 < iVar6) {
        iVar6 = 2;
        if (uVar12 != 0) {
          iVar6 = 0xb;
        }
        iVar2 = 0;
        if (uVar12 == 0) {
          do {
            uVar8 = FUN_0047e450(param_4,iVar2);
            iVar3 = FUN_003d97b0(param_1,uVar8,0);
            iVar4 = iVar6;
            if (iVar3 != 0) {
              iVar4 = 0;
            }
            if (iVar4 != 0) {
              if (iVar4 == 2) goto LAB_003d92e8;
              goto LAB_003d920c;
            }
            iVar2 = iVar2 + 1;
            iVar4 = FUN_0047e430(param_4);
          } while (iVar2 < iVar4);
        }
        else {
          do {
            uVar8 = FUN_0047e450(param_4,iVar2);
            iVar3 = FUN_003d97b0(param_1,uVar8,0);
            iVar4 = iVar6;
            uVar21 = uVar20 & 0xffffff7f;
            if (iVar3 != 0) {
              iVar4 = 0;
              uVar21 = uVar20;
            }
            uVar20 = uVar21;
            if (iVar4 != 0) {
              if (iVar4 != 2) goto LAB_003d920c;
              uVar12 = 1;
              goto LAB_003d92ec;
            }
            iVar2 = iVar2 + 1;
            iVar4 = FUN_0047e430(param_4);
          } while (iVar2 < iVar4);
        }
      }
      goto LAB_003d90cc;
    }
LAB_003d910c:
    uVar20 = uVar20 | 0x600;
  }
  uVar21 = (uint)(uVar12 == 0 || (uVar12 & (uVar20 ^ 0xffffffff)) == 0);
  if (uVar21 == 0) {
    uVar12 = 1;
  }
  uVar20 = uVar20 | uVar21;
LAB_003d92ec:
  uVar5 = FUN_003b4ef0(param_1);
  uVar21 = 0x102;
  if ((uVar5 & 0xffffff00) == 0x300) {
    iVar6 = FUN_003b4ef0(param_1);
    uVar21 = 0x102;
    if (0x302 < iVar6) {
      uVar21 = *puVar19 & 0x102;
    }
  }
  uVar21 = uVar21 | uVar20;
  if (uVar12 == 0) {
    if ((uVar20 & 1) == 0) {
      uVar21 = 0;
      *puVar19 = *puVar19 & 0x102;
    }
    else {
      *puVar19 = uVar21;
    }
  }
  return uVar21;
LAB_003d920c:
  if (iVar4 != 0xb) {
    return 0;
  }
  goto LAB_003d90cc;
}


