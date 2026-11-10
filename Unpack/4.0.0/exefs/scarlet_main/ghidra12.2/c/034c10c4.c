/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c10c4; name: FUN_034c10c4
 */


long FUN_034c10c4(long param_1,ulong param_2,undefined2 *param_3,uint *param_4,undefined8 *param_5,
                 short *param_6)

{
  ushort *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  void *__s;
  short sVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  MutexType *pMVar13;
  long lVar14;
  long *plVar15;
  char cVar16;
  char local_64 [4];
  
  *param_4 = 0;
  *param_3 = 0;
  uVar5 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
  puVar3 = PTR_DAT_047e2fd0;
  if (uVar5 == 0) {
    return 0;
  }
  if (uVar5 == 1) {
    if (*param_6 < 1) {
      return 0;
    }
    if ((*(byte *)(param_6 + 1) >> 1 & 1) == 0) {
      *param_6 = *param_6 + -1;
    }
    uVar6 = (**(code **)(**(long **)(param_1 + 0x110) + 0x28))(*(long **)(param_1 + 0x110),0);
    *param_4 = uVar6;
    pMVar13 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar13);
    uVar5 = *(uint *)(pMVar13 + 0x28);
    if (uVar5 != 0) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar6 / uVar5;
      }
      for (lVar10 = *(long *)(*(long *)(pMVar13 + 0x20) + (ulong)(uVar6 - uVar2 * uVar5) * 8);
          lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
        if (*(uint *)(lVar10 + 0x10) == uVar6) goto LAB_034c16ac;
      }
    }
  }
  else {
    local_64[0] = '\x01';
    puVar1 = (ushort *)(param_1 + 0x145);
    plVar15 = (long *)*param_5;
    if (((*puVar1 & 0x17) == 1) && (plVar15 == (long *)0x0)) {
      lVar10 = FUN_034c0744(param_1,param_2);
      if (lVar10 == 0) {
        return 0;
      }
      plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
      if (plVar15 == (long *)0x0) {
        return 0;
      }
      *plVar15 = (long)(PTR_DAT_047e72a8 + 0x10);
      *(undefined1 *)(plVar15 + 1) = 1;
      *(undefined2 *)((long)plVar15 + 10) = 0xffff;
      uVar5 = *(uint *)(lVar10 + 8);
      *(uint *)(plVar15 + 1) = uVar5;
      local_64[0] = '\x01';
      if ((uVar5 & 0xff) == 0) {
        if (uVar5 >> 0x10 != 0) {
          sVar9 = (short)(uVar5 >> 0x10) + -1;
          goto LAB_034c1460;
        }
        *(undefined2 *)((long)plVar15 + 10) = 1;
        *(undefined1 *)(plVar15 + 1) = 1;
LAB_034c1554:
        if (((*(byte *)(param_6 + 1) & 1) != 0) &&
           (((*(byte *)(param_6 + 1) >> 1 & 1) != 0 ||
            (sVar9 = *param_6, *param_6 = sVar9 + -1, (short)(sVar9 + -1) != 0))))
        goto LAB_034c1584;
        cVar16 = '\0';
        uVar5 = 0;
        local_64[0] = '\0';
      }
      else {
        iVar7 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
        if (((int)uVar5 >> 0x10) + 1 == iVar7) {
          if ((*(byte *)puVar1 >> 5 & 1) == 0) {
            *(undefined2 *)((long)plVar15 + 10) = 0;
            goto LAB_034c1554;
          }
          *(short *)((long)plVar15 + 10) = *(short *)((long)plVar15 + 10) + -1;
          *(undefined1 *)(plVar15 + 1) = 0;
        }
        else {
          sVar9 = *(short *)((long)plVar15 + 10) + 1;
LAB_034c1460:
          *(short *)((long)plVar15 + 10) = sVar9;
        }
LAB_034c1584:
        uVar5 = (uint)*(ushort *)((long)plVar15 + 10);
        cVar16 = '\x01';
      }
      *param_5 = plVar15;
    }
    else if ((*puVar1 & 7) == 1) {
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x10);
        if (plVar15 == (long *)0x0) {
          *param_5 = 0;
          return 0;
        }
        *plVar15 = (long)(PTR_DAT_047e72a8 + 0x10);
        *(undefined1 *)(plVar15 + 1) = 1;
        *(undefined2 *)((long)plVar15 + 10) = 0xffff;
        *param_5 = plVar15;
        lVar10 = *(long *)(param_1 + 0x128);
        if (lVar10 != 0) {
          *(undefined2 *)((long)plVar15 + 10) = *(undefined2 *)(lVar10 + 10);
          *(undefined2 *)(lVar10 + 10) = 0xffff;
          plVar15 = (long *)*param_5;
        }
      }
      local_64[0] = '\x01';
      sVar9 = *(short *)((long)plVar15 + 10);
      if ((char)plVar15[1] == '\0') {
        if (sVar9 != 0) {
          sVar9 = sVar9 + -1;
          goto LAB_034c1450;
        }
        *(undefined2 *)((long)plVar15 + 10) = 1;
        *(undefined1 *)(plVar15 + 1) = 1;
LAB_034c14b8:
        if (((*(byte *)(param_6 + 1) & 1) != 0) &&
           (((*(byte *)(param_6 + 1) >> 1 & 1) != 0 ||
            (sVar9 = *param_6, *param_6 = sVar9 + -1, (short)(sVar9 + -1) != 0))))
        goto LAB_034c14e8;
        cVar16 = '\0';
        uVar5 = 0;
        local_64[0] = '\0';
      }
      else {
        iVar7 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
        if (sVar9 + 1 == iVar7) {
          if ((*(byte *)puVar1 >> 5 & 1) == 0) {
            *(undefined2 *)((long)plVar15 + 10) = 0;
            goto LAB_034c14b8;
          }
          *(short *)((long)plVar15 + 10) = *(short *)((long)plVar15 + 10) + -1;
          *(undefined1 *)(plVar15 + 1) = 0;
        }
        else {
          sVar9 = *(short *)((long)plVar15 + 10) + 1;
LAB_034c1450:
          *(short *)((long)plVar15 + 10) = sVar9;
        }
LAB_034c14e8:
        uVar5 = (uint)*(ushort *)((long)plVar15 + 10);
        cVar16 = '\x01';
      }
      if ((*puVar1 >> 4 & 1) == 0) {
        if ((*puVar1 >> 7 & 1) == 0) {
          uVar6 = *(uint *)(param_1 + 0x120);
          if (uVar6 != 0) {
            iVar7 = 0;
            do {
              uVar2 = iVar7 + (uVar6 >> 1);
              uVar12 = *(ulong *)(*(long *)(param_1 + 0x118) +
                                 (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4))
              ;
              if (uVar12 == param_2) {
                lVar10 = *(long *)(param_1 + 0x118) + (long)(int)uVar2 * 0x10;
                goto LAB_034c1598;
              }
              if (uVar12 < param_2) {
                iVar7 = uVar2 + 1;
              }
              uVar6 = uVar6 - (uVar12 < param_2) >> 1;
            } while (uVar6 != 0);
          }
          lVar10 = 0;
LAB_034c1598:
          plVar11 = (long *)(lVar10 + 8);
        }
        else {
          plVar11 = (long *)(param_1 + 0x128);
        }
        lVar14 = *plVar11;
        lVar10 = plVar15[1];
        *(char *)(lVar14 + 8) = (char)lVar10;
        sVar9 = -1;
        if ((char)lVar10 == '\0') {
          sVar9 = 1;
        }
        sVar9 = *(short *)((long)plVar15 + 10) + sVar9;
        *(short *)(lVar14 + 10) = sVar9;
        iVar7 = (**(code **)(**(long **)(param_1 + 0x110) + 0x20))();
        if ((sVar9 + 1 == iVar7) && ((*(byte *)puVar1 >> 5 & 1) == 0)) {
          *(undefined2 *)(lVar14 + 10) = 0xffff;
        }
        else if ((*(short *)(lVar14 + 10) == 0) && (*(char *)(lVar14 + 8) == '\0')) {
          *(undefined1 *)(lVar14 + 8) = 1;
        }
      }
    }
    else {
      if (plVar15 == (long *)0x0) {
        plVar15 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x38);
        puVar4 = PTR_DAT_047e72b0;
        if (plVar15 == (long *)0x0) {
          return 0;
        }
        iVar7 = (uVar5 & 0xffff) * 50000;
        *(int *)(plVar15 + 1) = iVar7;
        *(int *)((long)plVar15 + 0xc) = iVar7;
        plVar15[6] = 0;
        *(short *)(plVar15 + 2) = (short)uVar5;
        *(short *)((long)plVar15 + 0x12) = (short)uVar5;
        *plVar15 = (long)(puVar4 + 0x10);
        plVar15[3] = 0;
        plVar15[4] = 0;
        plVar15[5] = 0;
        uVar6 = (uint)*(ushort *)(param_1 + 0x142);
        uVar5 = (uVar5 & 0xffff) + 7 >> 3;
        uVar12 = (ulong)(uVar5 << 1);
        __s = (void *)(**(code **)(puVar3 + 0x10))(0,uVar12);
        plVar15[5] = (long)__s;
        if (__s == (void *)0x0) {
LAB_034c1498:
          (**(code **)(*plVar15 + 0x10))(plVar15);
          return 0;
        }
        plVar15[6] = (long)__s + (ulong)uVar5;
        memset(__s,0,uVar12);
        if (3 < uVar6) {
          uVar6 = 4;
        }
        if (uVar6 != 0) {
          lVar10 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar6 << 1);
          plVar15[3] = lVar10;
          if (lVar10 == 0) goto LAB_034c1498;
          *(uint *)((long)plVar15 + 0x24) = uVar6;
        }
        if ((*(byte *)puVar1 >> 3 & 1) != 0) {
          uVar8 = (**(code **)(**(long **)(param_1 + 0x110) + 0x68))();
          *(undefined4 *)(plVar15 + 1) = uVar8;
          *(undefined4 *)((long)plVar15 + 0xc) = uVar8;
        }
        *param_5 = plVar15;
      }
      uVar5 = FUN_034c0bec(param_1,plVar15,local_64,param_6);
      cVar16 = local_64[0];
    }
    if (cVar16 == '\0') {
      return 0;
    }
    *param_3 = (short)uVar5;
    uVar6 = (**(code **)(**(long **)(param_1 + 0x110) + 0x28))(*(long **)(param_1 + 0x110),uVar5);
    *param_4 = uVar6;
    pMVar13 = *(MutexType **)PTR_DAT_047e6f28;
    nn::os::LockMutex(pMVar13);
    uVar5 = *(uint *)(pMVar13 + 0x28);
    if (uVar5 != 0) {
      uVar2 = 0;
      if (uVar5 != 0) {
        uVar2 = uVar6 / uVar5;
      }
      for (lVar10 = *(long *)(*(long *)(pMVar13 + 0x20) + (ulong)(uVar6 - uVar2 * uVar5) * 8);
          lVar10 != 0; lVar10 = *(long *)(lVar10 + 8)) {
        if (*(uint *)(lVar10 + 0x10) == uVar6) goto LAB_034c16ac;
      }
    }
  }
  lVar14 = 0;
LAB_034c1678:
  nn::os::UnlockMutex(pMVar13);
  return lVar14;
LAB_034c16ac:
  lVar14 = lVar10 + -8;
  *(int *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + 1;
  goto LAB_034c1678;
}


