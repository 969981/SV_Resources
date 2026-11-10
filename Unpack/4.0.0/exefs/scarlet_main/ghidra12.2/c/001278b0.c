/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001278b0; name: FUN_001278b0
 */


undefined8 * FUN_001278b0(long param_1,long *param_2,undefined2 param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  
  bVar2 = *(byte *)(param_2 + 1);
  uVar15 = 1000000;
  while (bVar2 = bVar2 & 0x3f, bVar2 != 6) {
    if (bVar2 == 0x16) {
      plVar6 = param_2;
LAB_00127aa8:
      pcVar17 = (code *)*plVar6;
      lVar8 = *(long *)(param_1 + 0x28);
      if (lVar8 - *(long *)(param_1 + 0x10) < 0x150) {
        lVar16 = *(long *)(param_1 + 0x30);
        if (*(long *)(*(long *)(param_1 + 0x18) + 0x18) < 1) {
          lVar18 = lVar16;
        }
        else {
          FUN_0012ac30(param_1);
          lVar8 = *(long *)(param_1 + 0x28);
          lVar18 = *(long *)(param_1 + 0x30);
        }
        if (1000000 < (int)((ulong)(lVar8 - lVar18) >> 4)) goto LAB_00127cd8;
        uVar1 = (uint)((ulong)(lVar8 - lVar18) >> 3) & 0xfffffffe;
        if (999999 < (int)uVar1) {
          uVar1 = uVar15;
        }
        uVar15 = (int)((ulong)(*(long *)(param_1 + 0x10) - lVar18) >> 4) + 0x14;
        if ((int)uVar15 <= (int)uVar1) {
          uVar15 = uVar1;
        }
        if (1000000 < (int)uVar15) goto LAB_00127ce4;
        FUN_00126ce0(param_1,uVar15,1);
        param_2 = (long *)((long)param_2 + (*(long *)(param_1 + 0x30) - lVar16));
        plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
      }
      else {
        plVar6 = *(long **)(*(long *)(param_1 + 0x20) + 0x18);
      }
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)FUN_0013af00(param_1);
      }
      *(long **)(param_1 + 0x20) = plVar6;
      *(undefined2 *)((long)plVar6 + 0x3c) = param_3;
      *(undefined2 *)((long)plVar6 + 0x3e) = 2;
      lVar8 = *(long *)(param_1 + 0x10);
      *plVar6 = (long)param_2;
      plVar6[1] = lVar8 + 0x140;
      if ((*(uint *)(param_1 + 0xc0) & 1) != 0) {
        FUN_00127080(param_1,0,0xffffffff,1,
                     (int)((ulong)(*(long *)(param_1 + 0x10) - (long)param_2) >> 4) + -1);
      }
      uVar5 = (*pcVar17)(param_1);
      FUN_00127330(param_1,plVar6,uVar5);
      return (undefined8 *)0x0;
    }
    if (bVar2 == 0x26) {
      plVar6 = (long *)(*param_2 + 0x18);
      goto LAB_00127aa8;
    }
    lVar8 = *(long *)(param_1 + 0x28);
    if (lVar8 - *(long *)(param_1 + 0x10) < 0x20) {
      lVar16 = *(long *)(param_1 + 0x30);
      if (*(long *)(*(long *)(param_1 + 0x18) + 0x18) < 1) {
        lVar18 = lVar16;
      }
      else {
        FUN_0012ac30(param_1);
        lVar8 = *(long *)(param_1 + 0x28);
        lVar18 = *(long *)(param_1 + 0x30);
      }
      if (1000000 < (int)((ulong)(lVar8 - lVar18) >> 4)) goto LAB_00127cd8;
      uVar1 = (uint)((ulong)(lVar8 - lVar18) >> 3) & 0xfffffffe;
      if (999999 < (int)uVar1) {
        uVar1 = uVar15;
      }
      iVar12 = (int)((ulong)(*(long *)(param_1 + 0x10) - lVar18) >> 4);
      if ((int)uVar1 <= iVar12) {
        uVar1 = iVar12 + 1;
      }
      if (1000000 < (int)uVar1) goto LAB_00127ce4;
      FUN_00126ce0(param_1,uVar1,1);
      param_2 = (long *)((long)param_2 + (*(long *)(param_1 + 0x30) - lVar16));
    }
    plVar6 = (long *)FUN_0013df20(param_1,param_2,0x17);
    if ((*(byte *)(plVar6 + 1) & 0xf) == 0) {
      FUN_00125ee0(param_1,param_2);
      goto LAB_00127cd8;
    }
    plVar9 = *(long **)(param_1 + 0x10);
    if (param_2 < plVar9) {
      do {
        plVar13 = plVar9 + -2;
        *plVar9 = *plVar13;
        *(char *)(plVar9 + 1) = (char)plVar9[-1];
        plVar9 = plVar13;
      } while (param_2 < plVar13);
      plVar9 = *(long **)(param_1 + 0x10);
    }
    *(long **)(param_1 + 0x10) = plVar9 + 2;
    *param_2 = *plVar6;
    bVar2 = *(byte *)(plVar6 + 1);
    *(byte *)(param_2 + 1) = bVar2;
  }
  lVar18 = *(long *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x28);
  lVar16 = *(long *)(*param_2 + 0x18);
  bVar2 = *(byte *)(lVar16 + 0xc);
  bVar3 = *(byte *)(lVar16 + 10);
  plVar6 = param_2;
  if (lVar8 - lVar18 >> 4 <= (long)(ulong)bVar2) {
    lVar11 = *(long *)(param_1 + 0x30);
    if (*(long *)(*(long *)(param_1 + 0x18) + 0x18) < 1) {
      lVar14 = lVar11;
    }
    else {
      FUN_0012ac30(param_1);
      lVar8 = *(long *)(param_1 + 0x28);
      lVar14 = *(long *)(param_1 + 0x30);
    }
    if (1000000 < (int)((ulong)(lVar8 - lVar14) >> 4)) {
LAB_00127cd8:
                    /* WARNING: Subroutine does not return */
      FUN_00126bd0(param_1,5);
    }
    uVar1 = (uint)((ulong)(lVar8 - lVar14) >> 3) & 0xfffffffe;
    if (999999 < (int)uVar1) {
      uVar1 = uVar15;
    }
    uVar15 = (int)((ulong)(*(long *)(param_1 + 0x10) - lVar14) >> 4) + (uint)bVar2;
    if ((int)uVar15 <= (int)uVar1) {
      uVar15 = uVar1;
    }
    if (1000000 < (int)uVar15) {
LAB_00127ce4:
      FUN_00126ce0(param_1,0xf4308,1);
                    /* WARNING: Subroutine does not return */
      FUN_00125b90(param_1,"stack overflow");
    }
    FUN_00126ce0(param_1,uVar15,1);
    plVar6 = (long *)((long)param_2 + (*(long *)(param_1 + 0x30) - lVar11));
  }
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x18);
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)FUN_0013af00(param_1);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  *(undefined2 *)((long)puVar7 + 0x3c) = param_3;
  uVar10 = *(undefined8 *)(lVar16 + 0x40);
  uVar15 = (uint)((ulong)(lVar18 - (long)param_2) >> 4);
  *puVar7 = plVar6;
  puVar7[1] = plVar6 + (ulong)bVar2 * 2 + 2;
  puVar7[4] = uVar10;
  *(undefined8 **)(param_1 + 0x20) = puVar7;
  if ((int)uVar15 <= (int)(uint)bVar3) {
    uVar1 = (uint)bVar3;
    if ((int)(uint)bVar3 <= (int)uVar15) {
      uVar1 = uVar15;
    }
    if (((uVar1 - uVar15) + 1 & 1) == 0) {
      uVar4 = uVar15 - 1;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x10);
      *(long *)(param_1 + 0x10) = lVar8 + 0x10;
      *(undefined1 *)(lVar8 + 8) = 0;
      uVar4 = uVar15;
    }
    if ((int)uVar15 < (int)(uint)bVar3) {
      iVar12 = uVar4 - uVar1;
      do {
        lVar8 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar8 + 0x10;
        *(undefined1 *)(lVar8 + 8) = 0;
        lVar8 = *(long *)(param_1 + 0x10);
        iVar12 = iVar12 + 2;
        *(long *)(param_1 + 0x10) = lVar8 + 0x10;
        *(undefined1 *)(lVar8 + 8) = 0;
      } while (iVar12 != 0);
    }
  }
  return puVar7;
}


