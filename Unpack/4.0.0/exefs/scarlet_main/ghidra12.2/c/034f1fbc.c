/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034f1fbc; name: FUN_034f1fbc
 */


void FUN_034f1fbc(void)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  puVar6 = PTR_DAT_047e7438;
  puVar5 = PTR_DAT_047e6f80;
  puVar4 = PTR_DAT_047e2fe8;
  for (lVar13 = *(long *)(PTR_DAT_047e6f80 + 0x10); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x20))
  {
    if ((*(long **)(lVar13 + 0x3f0) != (long *)0x0) &&
       (uVar8 = (**(code **)(**(long **)(lVar13 + 0x3f0) + 0x50))(), (uVar8 & 1) != 0)) {
      (**(code **)(**(long **)(lVar13 + 0x3f0) + 0x58))();
      iVar1 = *(int *)puVar6;
      if ((iVar1 == 0) || (8 < (uint)(*(int *)(*(long *)puVar4 + 0x78) - iVar1))) {
        *(int *)puVar6 = *(int *)(*(long *)puVar4 + 0x78);
        break;
      }
    }
  }
  iVar1 = *(int *)PTR_DAT_047e6ff8;
  lVar13 = *(long *)PTR_DAT_047e6988;
  bVar2 = *PTR_DAT_047e7000;
  if (*(int *)(lVar13 + 8) != 0) {
    uVar9 = nn::os::GetSystemTick();
    *(undefined8 *)(lVar13 + 0x40) = uVar9;
  }
  FUN_03483d98(*(undefined2 *)PTR_DAT_047e6d08);
  FUN_034f094c();
  puVar4 = PTR_DAT_047e71b0;
  lVar13 = *(long *)(PTR_DAT_047e70c8 + 0x10);
  if ((*PTR_DAT_047e71b0 == '\0') || ((*PTR_DAT_047e7280 & 1) != 0)) {
    for (; lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x1e0)) {
      *(ushort *)(lVar13 + 0x1b0) = *(ushort *)(lVar13 + 0x1b0) & 0xfeff;
    }
  }
  else {
    for (; lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x1e0)) {
      FUN_034a2df8(lVar13);
      *(ushort *)(lVar13 + 0x1b0) = *(ushort *)(lVar13 + 0x1b0) & 0xfeff;
    }
    *puVar4 = 0;
  }
  puVar4 = PTR_DAT_047e7260;
  uVar8 = (ulong)*(uint *)(PTR_DAT_047e7260 + 8);
  if (*(uint *)(PTR_DAT_047e7260 + 8) != 0) {
    plVar11 = *(long **)PTR_DAT_047e7260;
    plVar10 = plVar11;
    do {
      if (*plVar10 != 0) {
        FUN_034aa550();
        plVar11 = *(long **)puVar4;
        uVar8 = (ulong)*(uint *)(puVar4 + 8);
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar11 + uVar8);
  }
  bVar2 = iVar1 != 2 | bVar2 & 1;
  for (lVar13 = *(long *)(puVar5 + 0x10); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x20)) {
    plVar10 = *(long **)(lVar13 + 0x3f0);
    if ((plVar10 != (long *)0x0) && (*(char *)(lVar13 + 0x471) != '\0')) {
      (**(code **)(*plVar10 + 0x68))(plVar10,lVar13 + 0x118);
    }
  }
  if (*(long *)(PTR_DAT_047e6ce8 + 0x58) == 0) {
    FUN_034f2670(bVar2);
    FUN_034f2844(bVar2);
  }
  else {
    FUN_034f21bc(bVar2);
  }
  FUN_034f2984();
  FUN_034a0780();
  puVar4 = PTR_DAT_047e2fd0;
  uVar3 = DAT_048b0810;
  do {
    while( true ) {
      uVar3 = uVar3 - 1;
      if ((int)uVar3 < 0) {
        return;
      }
      plVar10 = (long *)(DAT_048b0808 + (ulong)uVar3 * 8);
      lVar13 = *plVar10;
      if (((*(int *)(lVar13 + 0x198) != 1) && (*(long *)(lVar13 + 0x20) == 0)) &&
         ((*(byte *)(lVar13 + 0x1a4) >> 1 & 1) == 0)) break;
      *(byte *)(lVar13 + 0x1a4) = *(byte *)(lVar13 + 0x1a4) & 0xfd;
    }
    plVar11 = (long *)((DAT_048b0808 + (ulong)DAT_048b0810 * 8) - 8);
    if (plVar10 < plVar11) {
      do {
        plVar12 = plVar10 + 1;
        *plVar10 = *plVar12;
        plVar10 = plVar12;
      } while (plVar12 < plVar11);
      DAT_048b0810 = DAT_048b0810 - 1;
      if (lVar13 != 0) goto LAB_034f1d34;
    }
    else {
      DAT_048b0810 = DAT_048b0810 - 1;
LAB_034f1d34:
      if (*(long *)(lVar13 + 0x28) == 0) {
        if (*(long *)(lVar13 + 0x60) == 0) {
          if (*(long *)(lVar13 + 0x68) != -1) goto LAB_034f1d7c;
        }
        else if (*(long *)(*(long *)(lVar13 + 0x60) + 0xa0) == 0) {
LAB_034f1d7c:
          lVar7 = FUN_0349fff0(lVar13 + 0x60);
          if ((lVar7 != 0) &&
             ((*(long *)(lVar7 + 0x460) == lVar13 || (*(long *)(lVar7 + 0x460) == 0)))) {
            *(undefined1 *)(lVar7 + 0x46c) = 0;
            *(undefined8 *)(lVar7 + 0x460) = 0;
          }
        }
      }
      FUN_03504ca4(lVar13);
      (**(code **)(puVar4 + 0x30))(5,lVar13);
    }
    DAT_048b084c = 1;
  } while( true );
}


