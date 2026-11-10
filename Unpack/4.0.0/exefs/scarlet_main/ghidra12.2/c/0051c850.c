/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051c850; name: FUN_0051c850
 */


/* WARNING: Type propagation algorithm not settling */

byte * FUN_0051c850(byte *param_1)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  undefined *puVar10;
  bool bVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  byte *extraout_x1;
  size_t __n;
  uint uVar15;
  ulong in_x4;
  uint uVar16;
  ulong in_x5;
  byte *in_x7;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  byte *pbVar25;
  byte *pbVar26;
  uint *puVar27;
  uint uVar28;
  long *plVar29;
  long lVar30;
  uint uVar31;
  undefined *unaff_x23;
  long *unaff_x24;
  long *plVar32;
  long lVar33;
  long lVar34;
  byte *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  pbVar12 = (byte *)(**(code **)(*(long *)param_1 + 0x98))();
  (**(code **)(*(long *)param_1 + 0x98))(param_1);
  puVar10 = PTR_FUN_047cba38;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (*(char *)(*(long *)(pbVar12 + 0x20) + 0x4b) == '\0') {
                    /* try { // try from 0051c9b0 to 0051c9bf has its CatchHandler @ 0051ce44 */
    FUN_004f4acc(extraout_x1,param_1,&local_78);
    plVar29 = local_70;
LAB_0051c9c4:
    if (plVar29 == local_78) goto LAB_0051c9d0;
    plVar29 = (long *)0x0;
    lVar33 = 0;
    do {
                    /* try { // try from 0051c9f4 to 0051c9fb has its CatchHandler @ 0051ce48 */
      lVar34 = FUN_0051ce6c(local_78[(long)plVar29],param_1);
      plVar29 = (long *)((long)plVar29 + 1);
      lVar33 = lVar34 + lVar33;
    } while (plVar29 < (long *)((long)local_70 - (long)local_78 >> 3));
  }
  else {
    if (0 < *(int *)(pbVar12 + 0x68)) {
      lVar33 = 0;
      plVar29 = (long *)0x0;
      lVar34 = 1;
      plVar14 = (long *)*(long *)(pbVar12 + 0x28);
      do {
        lVar30 = (long)plVar29 - (long)local_78 >> 3;
        uVar18 = lVar30 + 1;
        if (uVar18 >> 0x3d != 0) {
                    /* try { // try from 0051ce38 to 0051ce3f has its CatchHandler @ 0051ce40 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        uVar17 = (long)local_68 - (long)local_78 >> 2;
        if (uVar18 <= uVar17) {
          uVar18 = uVar17;
        }
        if (0xffffffffffffffe < (ulong)((long)local_68 - (long)local_78 >> 3)) {
          uVar18 = 0x1fffffffffffffff;
        }
        if (uVar18 == 0) {
          lVar13 = 0;
        }
        else {
          lVar13 = FUN_0049e770(puVar10,uVar18 << 3);
        }
        unaff_x24 = local_78;
        plVar32 = (long *)(lVar13 + lVar30 * 8);
        plVar1 = (long *)(lVar13 + uVar18 * 8);
        plVar29 = plVar32 + 1;
        *plVar32 = (long)plVar14;
        __n = (long)local_70 - (long)local_78;
        plVar32 = (long *)((long)plVar32 - __n);
        if (0 < (long)__n) {
          memcpy(plVar32,local_78,__n);
        }
        local_78 = plVar32;
        local_70 = plVar29;
        local_68 = plVar1;
        if (unaff_x24 != (long *)0x0) {
          FUN_0049e790(PTR_LAB_047cba48,unaff_x24);
        }
        while( true ) {
          unaff_x23 = puVar10;
          if (*(int *)(pbVar12 + 0x68) <= lVar34) goto LAB_0051c9c4;
          lVar33 = lVar33 + 0x98;
          lVar34 = lVar34 + 1;
          unaff_x24 = (long *)(*(long *)(pbVar12 + 0x28) + lVar33);
          plVar14 = unaff_x24;
          if (local_68 <= plVar29) break;
          local_70 = plVar29 + 1;
          *plVar29 = (long)unaff_x24;
          plVar29 = local_70;
        }
      } while( true );
    }
    plVar29 = (long *)0x0;
LAB_0051c9d0:
    lVar33 = 0;
  }
  if (*(char *)(*(long *)(pbVar12 + 0x20) + 0x48) == '\0') {
    FUN_004efc18(extraout_x1,param_1);
    pbVar12 = (byte *)FUN_005167d0();
  }
  else {
                    /* try { // try from 0051ca20 to 0051ca6f has its CatchHandler @ 0051ce44 */
    plVar14 = (long *)FUN_004efc18(extraout_x1,param_1);
    lVar34 = *plVar14;
    uVar18 = plVar14[1] - lVar34;
    if ((int)(uVar18 >> 4) < 1) {
      pbVar12 = (byte *)0x0;
    }
    else {
      lVar30 = *(long *)PTR_DAT_047cdbd8;
      uVar17 = uVar18 >> 4 & 0xffffffff;
      if (uVar17 < 5) {
        lVar22 = 0;
        pbVar12 = (byte *)0x0;
      }
      else {
        uVar18 = uVar18 >> 4 & 3;
        lVar22 = uVar17 - uVar18;
        puVar27 = (uint *)(lVar34 + 0x20);
        lVar23 = 0;
        lVar24 = 0;
        pbVar25 = (byte *)0x0;
        pbVar26 = (byte *)0x0;
        lVar13 = lVar22;
        local_80 = extraout_x1;
        do {
          uVar28 = (uint)plVar29;
          uVar6 = puVar27[-7];
          uVar7 = puVar27[-3];
          uVar21 = puVar27[1];
          uVar5 = puVar27[5];
          if (uVar6 == 3) {
            in_x4 = (ulong)puVar27[-8];
          }
          if (uVar7 == 3) {
            in_x5 = (ulong)puVar27[-4];
          }
          if (uVar21 == 3) {
            uVar28 = *puVar27;
          }
          if (uVar5 == 3) {
            unaff_x23 = (undefined *)(ulong)puVar27[4];
          }
          if (uVar6 == 3) {
            pbVar12 = *(byte **)(puVar27 + -6);
          }
          if (uVar7 == 3) {
            param_1 = *(byte **)(puVar27 + -2);
          }
          if (uVar21 == 3) {
            in_x7 = *(byte **)(puVar27 + 2);
          }
          if (uVar5 == 3) {
            local_80 = *(byte **)(puVar27 + 6);
          }
          uVar15 = (uint)in_x4;
          uVar16 = (uint)in_x5;
          uVar31 = (uint)unaff_x23;
          if (uVar6 == 3) {
            in_x4 = (ulong)*pbVar12;
          }
          if (uVar7 == 3) {
            in_x5 = (ulong)*param_1;
          }
          uVar15 = (uint)LZCOUNT(uVar15 | 1) ^ 0x1f;
          plVar29 = (long *)(ulong)uVar15;
          if (uVar21 == 3) {
            unaff_x23 = (undefined *)(ulong)*in_x7;
          }
          if (uVar5 == 3) {
            unaff_x24 = (long *)(ulong)*local_80;
          }
          uVar15 = uVar15 * 9 + 0x49;
          if ((uVar6 == 3) && ((in_x4 & 1) != 0)) {
            plVar29 = *(long **)(pbVar12 + 8);
          }
          uVar9 = uVar15 >> 6;
          if (((uint)in_x5 & (uint)(uVar7 == 3)) != 0) {
            pbVar12 = *(byte **)(param_1 + 8);
          }
          lVar19 = lVar24 + lVar30;
          if (((uint)unaff_x23 & (uint)(uVar21 == 3)) != 0) {
            uVar15 = (uint)*(undefined8 *)(in_x7 + 8);
          }
          in_x7 = pbVar25 + (ulong)uVar9 + lVar30;
          param_1 = pbVar26 + (ulong)(((uint)LZCOUNT(uVar16 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + lVar30;
          lVar2 = lVar19 + (ulong)(((uint)LZCOUNT(uVar28 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          if (((uint)unaff_x24 & (uint)(uVar5 == 3)) != 0) {
            lVar19 = *(long *)(local_80 + 8);
          }
          uVar28 = (uint)unaff_x24 >> 1 & 0x7f;
          if (uVar5 != 3 || ((ulong)unaff_x24 & 1) != 0) {
            uVar28 = (uint)lVar19;
          }
          lVar19 = lVar23 + lVar30 + (ulong)(((uint)LZCOUNT(uVar31 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                   (long)(int)uVar28 + (ulong)(((uint)LZCOUNT(uVar28 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          if (uVar5 != 3) {
            lVar19 = lVar23;
          }
          uVar5 = (uint)unaff_x23 >> 1 & 0x7f;
          if (uVar21 != 3 || ((ulong)unaff_x23 & 1) != 0) {
            uVar5 = uVar15;
          }
          lVar2 = lVar2 + (int)uVar5 + (ulong)(((uint)LZCOUNT(uVar5 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
          if (uVar21 != 3) {
            lVar2 = lVar24;
          }
          pbVar3 = (byte *)(ulong)((uint)in_x5 >> 1 & 0x7f);
          if (uVar7 != 3 || (in_x5 & 1) != 0) {
            pbVar3 = pbVar12;
          }
          pbVar3 = param_1 + (ulong)(((uint)LZCOUNT((uint)pbVar3 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                             (long)(int)(uint)pbVar3;
          if (uVar7 != 3) {
            pbVar3 = pbVar26;
          }
          uVar21 = (uint)in_x4 >> 1 & 0x7f;
          if (uVar6 != 3 || (in_x4 & 1) != 0) {
            uVar21 = (uint)plVar29;
          }
          pbVar4 = in_x7 + (ulong)(((uint)LZCOUNT(uVar21 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                           (long)(int)uVar21;
          if (uVar6 != 3) {
            pbVar4 = pbVar25;
          }
          lVar13 = lVar13 + -4;
          puVar27 = puVar27 + 0x10;
          lVar23 = lVar19;
          lVar24 = lVar2;
          pbVar25 = pbVar4;
          pbVar26 = pbVar3;
        } while (lVar13 != 0);
        pbVar12 = pbVar3 + (long)pbVar4 + lVar19 + lVar2;
        if (uVar18 == 0) goto LAB_0051cdfc;
      }
      lVar13 = lVar22 - uVar17;
      puVar20 = (undefined8 *)(lVar34 + lVar22 * 0x10 + 8);
      do {
        if (*(int *)((long)puVar20 + -4) == 3) {
          bVar8 = *(byte *)*puVar20;
          if ((bVar8 & 1) == 0) {
            uVar21 = (uint)(bVar8 >> 1);
          }
          else {
            uVar21 = (uint)*(undefined8 *)((byte *)*puVar20 + 8);
          }
          pbVar12 = pbVar12 + (ulong)(((uint)LZCOUNT(uVar21 | 1) ^ 0x1f) * 9 + 0x49 >> 6) +
                              (long)(int)uVar21 +
                              (ulong)(((uint)LZCOUNT(*(uint *)(puVar20 + -1) | 1) ^ 0x1f) * 9 + 0x49
                                     >> 6) + lVar30;
        }
        puVar20 = puVar20 + 2;
        bVar11 = lVar13 != -1;
        lVar13 = lVar13 + 1;
      } while (bVar11);
    }
  }
LAB_0051cdfc:
  if (local_78 != (long *)0x0) {
    local_70 = local_78;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return pbVar12 + lVar33;
}


