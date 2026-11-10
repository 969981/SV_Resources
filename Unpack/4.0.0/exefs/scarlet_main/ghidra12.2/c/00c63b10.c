/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c63b10; name: munmap
 */


int munmap(void *__addr,size_t __len)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined1 auStack_68 [8];
  long *local_60 [2];
  
  if (((ulong)__addr & 0xfff) != 0) {
    return -1;
  }
  plVar12 = (long *)&DAT_04859d88;
  std::mutex::lock();
  plVar8 = (long *)&DAT_04859d88;
  if (DAT_04859d88 != (long *)0x0) {
    plVar8 = DAT_04859d88;
  }
  for (; (long **)plVar8 != &DAT_04859d88; plVar8 = (long *)*plVar8) {
    if (plVar8 == (long *)0x0) goto LAB_00c63d20;
    if (__addr < (void *)plVar8[5]) {
      if ((void *)plVar8[4] <= __addr) break;
      plVar8 = plVar8 + 1;
    }
    else {
      plVar8 = plVar8 + 2;
    }
  }
  uVar11 = (long)__addr + __len + 0xfff & 0xfffffffffffff000;
  if ((long **)plVar8 == &DAT_04859d88) {
    plVar10 = plVar8;
    if (DAT_04859db0 <= uVar11) goto LAB_00c63c34;
LAB_00c63d48:
    iVar3 = (**(code **)(*DAT_04859de0 + 0x18))(DAT_04859de0,__addr,uVar11 - (long)__addr);
    if (iVar3 != 0) {
      iVar3 = -1;
      goto LAB_00c63d24;
    }
    plVar8[5] = (long)__addr;
    puVar5 = (undefined8 *)(*DAT_04859de8)(0x38);
    lVar7 = plVar8[5];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[6] = 0;
    puVar5[4] = uVar11;
    puVar5[5] = lVar7;
    FUN_0270653c(local_60);
  }
  else {
    plVar10 = plVar8;
    do {
      if (uVar11 <= (ulong)plVar10[4]) {
        plVar12 = plVar10;
        break;
      }
      plVar14 = (long *)plVar10[2];
      if ((long *)plVar10[2] == (long *)0x0) {
        do {
          plVar14 = plVar10;
          plVar9 = (long *)*plVar14;
          plVar10 = plVar9;
        } while (plVar14 == (long *)plVar9[2]);
        plVar10 = plVar14;
        if ((long *)plVar14[2] != plVar9) {
          plVar10 = plVar9;
        }
      }
      else {
        do {
          plVar10 = plVar14;
          plVar14 = (long *)plVar10[1];
        } while ((long *)plVar10[1] != (long *)0x0);
      }
    } while ((long **)plVar10 != &DAT_04859d88);
    uVar6 = plVar8[5];
    if (uVar11 < uVar6) goto LAB_00c63d48;
    plVar10 = plVar12;
    if (plVar12 != plVar8) {
      iVar3 = -1;
      plVar14 = plVar8;
      while( true ) {
        if (uVar11 < uVar6) {
          iVar4 = (**(code **)(*DAT_04859de0 + 0x18))(DAT_04859de0,plVar14[4],uVar11 - plVar14[4]);
          if (iVar4 != 0) goto LAB_00c63d24;
          plVar14[4] = uVar11;
          plVar10 = plVar14;
        }
        else {
          pvVar2 = (void *)plVar14[4];
          if ((void *)plVar14[4] <= __addr) {
            pvVar2 = __addr;
          }
          iVar4 = (**(code **)(*DAT_04859de0 + 0x18))(DAT_04859de0,pvVar2,uVar6 - (long)pvVar2);
          if (iVar4 != 0) goto LAB_00c63d24;
          if ((void *)plVar14[4] < __addr) {
            plVar14[5] = (long)__addr;
            plVar9 = (long *)plVar8[2];
            if ((long *)plVar8[2] == (long *)0x0) {
              do {
                plVar9 = plVar8;
                plVar13 = (long *)*plVar9;
                plVar8 = plVar13;
              } while (plVar9 == (long *)plVar13[2]);
              plVar8 = plVar9;
              if ((long *)plVar9[2] != plVar13) {
                plVar8 = plVar13;
              }
            }
            else {
              do {
                plVar8 = plVar9;
                plVar9 = (long *)plVar8[1];
              } while ((long *)plVar8[1] != (long *)0x0);
            }
          }
        }
        plVar9 = (long *)plVar14[2];
        if ((long *)plVar14[2] == (long *)0x0) {
          do {
            plVar9 = plVar14;
            plVar13 = (long *)*plVar9;
            plVar14 = plVar13;
          } while (plVar9 == (long *)plVar13[2]);
          plVar14 = plVar9;
          if ((long *)plVar9[2] != plVar13) {
            plVar14 = plVar13;
          }
        }
        else {
          do {
            plVar14 = plVar9;
            plVar9 = (long *)plVar14[1];
          } while ((long *)plVar14[1] != (long *)0x0);
        }
        if (plVar14 == plVar12) break;
        uVar6 = plVar14[5];
      }
    }
LAB_00c63c34:
    FUN_02706728(auStack_68,plVar8,plVar10,local_60);
  }
  lVar7 = DAT_04859d70;
  if (DAT_04859d88 != (long *)0x0) {
    plVar8 = (long *)&DAT_04859d88;
    plVar12 = DAT_04859d88;
    do {
      lVar1 = 0x10;
      if (uVar11 <= (ulong)plVar12[4]) {
        lVar1 = 8;
        plVar8 = plVar12;
      }
      plVar12 = *(long **)((long)plVar12 + lVar1);
    } while (plVar12 != (long *)0x0);
    if ((long **)plVar8 != &DAT_04859d88) {
      do {
        local_60[0] = plVar8;
        plVar12 = (long *)FUN_027065c0(local_60);
        if (plVar12 == plVar8) {
          uVar11 = 0;
        }
        else {
          uVar11 = plVar8[4] - plVar12[5];
        }
        uVar6 = uVar11;
        if ((plVar8[1] != 0) && (uVar6 = *(ulong *)(plVar8[1] + 0x30), uVar6 <= uVar11)) {
          uVar6 = uVar11;
        }
        uVar11 = uVar6;
        if ((plVar8[2] != 0) && (uVar11 = *(ulong *)(plVar8[2] + 0x30), uVar11 <= uVar6)) {
          uVar11 = uVar6;
        }
        local_60[0] = plVar8;
        plVar12 = (long *)FUN_027065c0(local_60);
        uVar6 = uVar11;
        if ((plVar12 == plVar8) && (uVar6 = plVar8[4] - lVar7, (ulong)(plVar8[4] - lVar7) <= uVar11)
           ) {
          uVar6 = uVar11;
        }
        if (uVar6 == plVar8[6]) break;
        plVar8[6] = uVar6;
        plVar8 = (long *)*plVar8;
      } while ((long **)plVar8 != &DAT_04859d88);
    }
  }
LAB_00c63d20:
  iVar3 = 0;
LAB_00c63d24:
  std::mutex::unlock();
  return iVar3;
}


