/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f2854; name: FUN_007f2854
 */


long * FUN_007f2854(long *param_1,ulong param_2,uint param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ushort uVar11;
  long *plVar12;
  ushort uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  char local_a0 [16];
  char acStack_90 [8];
  char acStack_88 [104];
  
  uVar9 = param_3 & 0xffff;
  if ((param_3 & 0xffff) == 0) {
    sprintf(local_a0,"%08x",(ulong)param_4[3]);
    sprintf(local_a0 + 8,"%08x",(ulong)param_4[2]);
    sprintf(acStack_90,"%08x",(ulong)param_4[1]);
    uVar9 = sprintf(acStack_88,"%08x",(ulong)*param_4);
    param_1 = (long *)(ulong)uVar9;
  }
  else {
    if (uVar9 == 0xffff) {
      uVar3 = *(ushort *)(param_1 + 6);
      uVar11 = *(ushort *)((long)param_1 + 0x32);
    }
    else {
      uVar3 = *(ushort *)(param_1 + 6);
      if ((int)(uVar9 - uVar3) < 0) {
        *(undefined1 *)(param_1 + 9) = 1;
        return param_1;
      }
      uVar11 = *(ushort *)((long)param_1 + 0x32);
      if ((int)(uint)uVar11 < (int)(uVar9 - uVar3)) {
        local_a0[8] = '\0';
        local_a0[9] = '\0';
        local_a0[10] = '\0';
        local_a0[0xb] = '\0';
        local_a0[0] = '\0';
        local_a0[1] = '\0';
        local_a0[2] = '\0';
        local_a0[3] = ' ';
        local_a0[4] = '\0';
        local_a0[5] = '\0';
        local_a0[6] = '\0';
        local_a0[7] = '\0';
        plVar12 = (long *)(**(code **)(*param_1 + 0x30))(param_1,local_a0);
        return plVar12;
      }
    }
    if (uVar11 != 0) {
      uVar4 = *(ushort *)(param_1 + 5);
      uVar7 = 1 << (ulong)((uint)param_2 & 0x1f);
      lVar15 = param_1[4];
      uVar13 = 0;
      uVar14 = param_2 >> 5 & 7;
      uVar5 = uVar3;
      do {
        uVar16 = *(int *)((long)param_1 + 0x2c) + (uint)uVar13;
        uVar2 = 0;
        if (uVar4 <= uVar16) {
          uVar2 = (uint)uVar4;
        }
        uVar10 = (ulong)(uVar16 - uVar2);
        uVar6 = *(ushort *)(lVar15 + uVar10 * 0x5d0 + 0x24);
        if (((uint)uVar6 < (uint)uVar5) || (0x7f < (int)((uint)uVar6 - (uint)uVar3))) break;
        if ((*(char *)(lVar15 + uVar10 * 0x5d0 + 0x28) == '\0') ||
           ((*(uint *)(lVar15 + uVar10 * 0x5d0 + uVar14 * 4 + 0x2c) & uVar7) != 0)) {
          uVar16 = (uint)uVar6;
          if (uVar16 < (param_3 & 0xffff)) {
LAB_007f2954:
            lVar1 = lVar15 + uVar10 * 0x5d0 + uVar14 * 4;
            *(uint *)(lVar1 + 0x2c) = *(uint *)(lVar1 + 0x2c) & ~uVar7;
          }
          else if (((param_3 & 0xffff) < uVar16) && (uVar16 = uVar16 + ~uVar9, (int)uVar16 < 0x80))
          {
            uVar2 = uVar16 + 0x1f;
            if (-1 < (int)uVar16) {
              uVar2 = uVar16;
            }
            if ((param_4[(int)uVar2 >> 5] >> (ulong)(uVar16 & 0x1f) & 1) != 0) goto LAB_007f2954;
          }
        }
        bVar8 = uVar13 < uVar11;
        uVar11 = *(ushort *)((long)param_1 + 0x32);
        if (bVar8) {
          uVar13 = uVar13 + 1;
        }
        uVar5 = uVar6;
      } while (uVar13 < uVar11);
    }
    uVar14 = (ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50);
    if (uVar14 != 0) {
      plVar12 = (long *)param_1[8];
      do {
        if (*plVar12 != 0) {
          plVar12 = (long *)FUN_007ef9e8();
          return plVar12;
        }
        uVar14 = uVar14 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar14 != 0);
    }
  }
  return param_1;
}


