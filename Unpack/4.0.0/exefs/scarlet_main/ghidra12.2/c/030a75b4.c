/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030a75b4; name: FUN_030a75b4
 */


undefined8 FUN_030a75b4(float param_1,long param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  int local_44;
  
  puVar3 = PTR_DAT_047e4f38;
  uVar7 = (ulong)*(uint *)(param_2 + 0x40);
  if (0 < (int)*(uint *)(param_2 + 0x40)) {
    iVar6 = 0;
    iVar4 = 0;
    iVar8 = 0;
    plVar9 = *(long **)(param_2 + 0x38);
    do {
      if ((*plVar9 != 0) && (lVar10 = *(long *)(*plVar9 + 0x20), lVar10 != 0)) {
        iVar4 = *(int *)(lVar10 + 0x160) + iVar4 + *(int *)(lVar10 + 0x164);
        iVar8 = *(int *)(lVar10 + 0xd8) + iVar8 + *(int *)(lVar10 + 0xe8);
        iVar6 = ((*(int *)(lVar10 + 0xd8) * 9 + iVar6 + *(int *)(lVar10 + 0x160) * -7) -
                *(int *)(lVar10 + 0x164)) + *(int *)(lVar10 + 0xe8) * 3 + *(int *)(lVar10 + 0xf8);
      }
      uVar7 = uVar7 - 1;
      plVar9 = plVar9 + 0x20;
    } while (uVar7 != 0);
    if (iVar8 != 0) {
      fVar12 = (float)NEON_fminnm((float)iVar4 / ((float)iVar8 * param_1),0x3f800000);
      local_44 = (int)(fVar12 * (float)iVar6);
      cVar2 = (char)param_3[1];
      lVar10 = tpidr_el0;
      if (cVar2 != '\x03') {
        lVar11 = (*(long **)(param_2 + 0x38))[(long)(int)*param_3 * 0x20];
        if (cVar2 == '\x02') goto LAB_030a7780;
        if (cVar2 == '\x01') goto LAB_030a7728;
        if (cVar2 == '\0') goto LAB_030a76d4;
      }
      while( true ) {
        iVar4 = *(int *)puVar3;
        lVar11 = *(long *)(lVar10 + 0x1000b8);
        if (lVar11 == 0) {
          lVar11 = FUN_00e5d3b4();
          *(long *)(lVar10 + 0x1000b8) = lVar11;
        }
        if (*(long *)(lVar11 + (long)iVar4 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        iVar4 = *(int *)(param_2 + 0x40);
        if (iVar4 < 1) {
          return 1;
        }
        uVar7 = (ulong)*param_3;
        iVar8 = iVar4;
        while( true ) {
          uVar1 = 0;
          if ((int)uVar7 + 1 < iVar4) {
            uVar1 = (int)uVar7 + 1;
          }
          uVar7 = (ulong)uVar1;
          *param_3 = uVar1;
          lVar11 = *(long *)(*(long *)(param_2 + 0x38) +
                            (-(ulong)(uVar1 >> 0x1f) & 0xffffff0000000000 | uVar7 << 8));
          if (((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 0x20), lVar11 != 0)) &&
             ((*(int *)(lVar11 + 0x164) != 0 || (*(int *)(lVar11 + 0x160) != 0)))) break;
          iVar8 = iVar8 + -1;
          if (iVar8 == 0) {
            return 1;
          }
        }
        *(undefined1 *)(param_3 + 1) = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        lVar11 = *(long *)(*(long *)(param_2 + 0x38) + (long)(int)uVar1 * 0x100);
LAB_030a76d4:
        iVar4 = *(int *)puVar3;
        lVar5 = *(long *)(lVar10 + 0x1000b8);
        if (lVar5 == 0) {
          lVar5 = FUN_00e5d3b4();
          *(long *)(lVar10 + 0x1000b8) = lVar5;
        }
        if (*(long *)(lVar5 + (long)iVar4 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        iVar4 = FUN_030a5250(lVar11,param_2,param_3 + 2,param_3 + 3,&local_44);
        if (iVar4 == 0) break;
        *(undefined1 *)(param_3 + 1) = 1;
        param_3[2] = 0;
        param_3[3] = 0;
LAB_030a7728:
        iVar4 = *(int *)puVar3;
        lVar5 = *(long *)(lVar10 + 0x1000b8);
        if (lVar5 == 0) {
          lVar5 = FUN_00e5d3b4();
          *(long *)(lVar10 + 0x1000b8) = lVar5;
        }
        if (*(long *)(lVar5 + (long)iVar4 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        iVar4 = FUN_030a5864(lVar11,param_2,param_3 + 2,param_3 + 3,&local_44,param_4);
        if (iVar4 == 0) break;
        *(undefined1 *)(param_3 + 1) = 2;
        param_3[2] = 0;
        param_3[3] = 0;
LAB_030a7780:
        iVar4 = *(int *)puVar3;
        lVar5 = *(long *)(lVar10 + 0x1000b8);
        if (lVar5 == 0) {
          lVar5 = FUN_00e5d3b4();
          *(long *)(lVar10 + 0x1000b8) = lVar5;
        }
        if (*(long *)(lVar5 + (long)iVar4 * 8 + 1000) != 0) {
          FUN_03231bdc();
        }
        FUN_030a64fc(lVar11,&local_44);
        *(undefined1 *)(param_3 + 1) = 3;
        param_3[2] = 0;
        param_3[3] = 0;
      }
      iVar4 = *(int *)puVar3;
      lVar11 = *(long *)(lVar10 + 0x1000b8);
      if (lVar11 == 0) {
        lVar11 = FUN_00e5d3b4();
        *(long *)(lVar10 + 0x1000b8) = lVar11;
      }
      if (*(long *)(lVar11 + (long)iVar4 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      iVar4 = *(int *)puVar3;
      lVar11 = *(long *)(lVar10 + 0x1000b8);
      if (lVar11 == 0) {
        lVar11 = FUN_00e5d3b4();
        *(long *)(lVar10 + 0x1000b8) = lVar11;
      }
      if (*(long *)(lVar11 + (long)iVar4 * 8 + 1000) == 0) {
        return 0;
      }
      FUN_03231bdc();
      return 0;
    }
  }
  return 1;
}


