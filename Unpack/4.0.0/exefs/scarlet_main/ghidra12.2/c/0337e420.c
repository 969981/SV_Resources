/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0337e420; name: FUN_0337e420
 */


undefined8 * FUN_0337e420(long param_1,uint param_2,byte *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  
  if ((param_2 >> 4 & 1) != 0) {
    if ((param_3 == (byte *)0x0) && ((param_2 & 0xffffffef) == 9)) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),0x40);
      uVar5 = *(undefined8 *)(param_1 + 0xb0);
      puVar4[2] = 8;
      puVar4[3] = 0;
      *puVar4 = 0x30000f;
      puVar4[1] = 0;
      puVar4[4] = uVar5;
      puVar4[5] = "hkVariantArray";
      puVar4[6] = 0x80018;
      puVar4[7] = 0;
      return puVar4;
    }
    uVar5 = FUN_0337e420(param_1,param_2 & 0xffffffef,param_3,0);
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),0x78);
    uVar7 = *(undefined8 *)(param_1 + 0xa0);
    *puVar4 = 0x30800f;
    puVar4[1] = 0;
    puVar4[4] = uVar7;
    puVar4[5] = "hkArray";
    puVar4[7] = 0x80010;
    puVar4[8] = 0;
    puVar4[0xb] = 2;
    puVar4[2] = 8;
    puVar4[3] = uVar5;
    puVar4[10] = 0;
    puVar4[6] = puVar4 + 10;
    puVar1 = PTR_DAT_047e4b78;
    puVar4[0xc] = uVar5;
    puVar4[0xd] = &DAT_03c4f61e;
    puVar4[0xe] = puVar1;
    puVar4[0xf] = "tAllocator";
    return puVar4;
  }
  if ((param_2 >> 5 & 1) != 0) {
    puVar3 = (ulong *)FUN_0337e420(param_1,param_2 & 0xffffffdf,param_3,0);
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),0x68);
    puVar6 = puVar3;
    do {
      uVar8 = (uint)*puVar6;
      if ((uVar8 >> 0x14 & 1) != 0) {
        uVar12 = 0;
        if (puVar6 != (ulong *)0x0) {
          uVar8 = uVar8 & 0xfffff;
          uVar12 = (uint)(ushort)puVar6[(ulong)(byte)(POPCOUNT((char)uVar8) +
                                                      POPCOUNT((char)(uVar8 >> 8)) +
                                                     POPCOUNT((char)(uVar8 >> 0x10))) + 2];
        }
        goto LAB_0337e5ec;
      }
      if ((*puVar6 & 1) != 0) {
        uVar12 = 0;
        goto LAB_0337e5ec;
      }
      puVar6 = (ulong *)puVar6[1];
    } while (puVar6 != (ulong *)0x0);
    uVar12 = 0;
LAB_0337e5ec:
    puVar6 = puVar3;
    while( true ) {
      uVar8 = (uint)*puVar6;
      if ((uVar8 >> 0x14 & 1) != 0) {
        uVar9 = 0;
        if (puVar6 != (ulong *)0x0) {
          uVar8 = uVar8 & 0xfffff;
          uVar9 = (uint)puVar6[(ulong)(byte)(POPCOUNT((char)uVar8) + POPCOUNT((char)(uVar8 >> 8)) +
                                            POPCOUNT((char)(uVar8 >> 0x10))) + 2] & 0xfff0000;
        }
        goto LAB_0337e638;
      }
      if ((*puVar6 & 1) != 0) break;
      puVar6 = (ulong *)puVar6[1];
      if (puVar6 == (ulong *)0x0) {
        uVar9 = 0;
LAB_0337e638:
        *puVar4 = 0x30800f;
        puVar4[1] = 0;
        uVar8 = 8;
        if (param_4 != 0) {
          uVar8 = 0x28;
        }
        puVar4[2] = (long)(int)(uVar8 | param_4 << 8);
        puVar4[3] = puVar3;
        puVar1 = PTR_DAT_047e66f8;
        puVar4[7] = (ulong)(uVar9 | uVar12 * param_4 & 0xffff);
        puVar4[8] = 0;
        puVar4[0xb] = 1;
        puVar4[0xc] = puVar3;
        puVar4[4] = puVar1;
        puVar4[5] = &DAT_03bec20a;
        puVar4[10] = 0;
        puVar4[6] = puVar4 + 10;
        puVar4[0xd] = &DAT_03c4f61e;
        return puVar4;
      }
    }
    uVar9 = 0;
    goto LAB_0337e638;
  }
  puVar4 = (undefined8 *)PTR_DAT_047e6280;
  switch(param_2) {
  case 1:
    break;
  case 2:
    puVar4 = (undefined8 *)PTR_DAT_047e6860;
    break;
  case 3:
    puVar4 = (undefined8 *)PTR_DAT_047e6268;
    if (*(char *)(param_1 + 4) != '\0') {
      puVar4 = (undefined8 *)PTR_DAT_047e6868;
    }
    return puVar4;
  case 4:
    puVar14 = (undefined8 *)&DAT_047ae8d8;
    puVar4 = (undefined8 *)0x47ae908;
    goto LAB_0337e720;
  case 5:
    puVar14 = (undefined8 *)&DAT_047ae938;
    puVar4 = (undefined8 *)0x47ae968;
    goto LAB_0337e720;
  case 6:
    puVar14 = (undefined8 *)&DAT_047ae998;
    puVar4 = (undefined8 *)0x47ae9c8;
    goto LAB_0337e720;
  case 7:
    puVar14 = (undefined8 *)&DAT_047ae9f8;
    puVar4 = (undefined8 *)&DAT_047aea28;
LAB_0337e720:
    if (*(char *)(param_1 + 4) != '\0') {
      puVar4 = puVar14;
    }
    break;
  case 8:
    if (param_3 == (byte *)0x0) {
      puVar14 = (undefined8 *)PTR_DAT_047e5f40;
    }
    else {
      uVar12 = (uint)*param_3;
      uVar8 = 0x811c9dc5;
      if (*param_3 != 0) {
        pbVar11 = param_3;
        do {
          pbVar11 = pbVar11 + 1;
          uVar8 = (uVar8 ^ uVar12) * 0x1000193;
          uVar12 = (uint)*pbVar11;
        } while (uVar12 != 0);
      }
      uVar12 = *(uint *)(param_1 + 0x34);
      uVar15 = (ulong)(uVar12 & uVar8);
      lVar13 = *(long *)(param_1 + 0x28);
      uVar10 = *(ulong *)(lVar13 + uVar15 * 0x18);
      if (uVar10 != 0xffffffffffffffff) {
        do {
          if ((uVar10 == uVar8) &&
             (iVar2 = strcmp((char *)param_3,*(char **)(lVar13 + uVar15 * 0x18 + 8)), iVar2 == 0))
          goto LAB_0337e7dc;
          uVar15 = uVar15 + 1 & (long)(int)uVar12;
          uVar10 = *(ulong *)(lVar13 + uVar15 * 0x18);
        } while (uVar10 != 0xffffffffffffffff);
      }
      uVar15 = (ulong)(uVar12 + 1);
LAB_0337e7dc:
      if (((int)uVar12 < (int)uVar15) ||
         (puVar14 = *(undefined8 **)(lVar13 + (long)(int)uVar15 * 0x18 + 0x10),
         puVar14 == (undefined8 *)0x0)) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),0x40)
        ;
        *puVar14 = 0x90001d;
        puVar14[1] = 0;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[7] = 0;
        puVar14[2] = 7;
        puVar14[3] = 0;
        FUN_0324e488(param_1 + 0x28,param_3,puVar14);
      }
    }
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),0x70);
    puVar4[7] = 0x80008;
    *puVar4 = 0x30800f;
    puVar4[1] = 0;
    puVar4[2] = 6;
    puVar4[5] = &DAT_03c62cc9;
    puVar1 = PTR_DAT_047e66c0;
    puVar4[3] = puVar14;
    puVar4[4] = puVar1;
    puVar4[0xb] = 1;
    puVar4[0xc] = puVar14;
    puVar4[8] = 0;
    puVar4[10] = 0;
    puVar4[0xd] = &DAT_03c4f61e;
    puVar4[6] = puVar4 + 10;
    puVar4[4] = *(undefined8 *)(param_1 + 0xa8);
    break;
  case 9:
    if (param_3 == (byte *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uVar12 = (uint)*param_3;
      uVar8 = 0x811c9dc5;
      if (*param_3 != 0) {
        pbVar11 = param_3;
        do {
          pbVar11 = pbVar11 + 1;
          uVar8 = (uVar8 ^ uVar12) * 0x1000193;
          uVar12 = (uint)*pbVar11;
        } while (uVar12 != 0);
      }
      uVar12 = *(uint *)(param_1 + 0x34);
      uVar15 = (ulong)(uVar12 & uVar8);
      lVar13 = *(long *)(param_1 + 0x28);
      uVar10 = *(ulong *)(lVar13 + uVar15 * 0x18);
      if (uVar10 != 0xffffffffffffffff) {
        do {
          if ((uVar10 == uVar8) &&
             (iVar2 = strcmp((char *)param_3,*(char **)(lVar13 + uVar15 * 0x18 + 8)), iVar2 == 0))
          goto LAB_0337e8d4;
          uVar15 = uVar15 + 1 & (long)(int)uVar12;
          uVar10 = *(ulong *)(lVar13 + uVar15 * 0x18);
        } while (uVar10 != 0xffffffffffffffff);
      }
      uVar15 = (ulong)(uVar12 + 1);
LAB_0337e8d4:
      if (((int)uVar12 < (int)uVar15) ||
         (puVar4 = *(undefined8 **)(lVar13 + (long)(int)uVar15 * 0x18 + 0x10),
         puVar4 == (undefined8 *)0x0)) {
        puVar4 = (undefined8 *)
                 (**(code **)(**(long **)(param_1 + 0x68) + 0x18))(*(long **)(param_1 + 0x68),0x40);
        *puVar4 = 0x90001d;
        puVar4[1] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[2] = 7;
        puVar4[3] = 0;
        FUN_0324e488(param_1 + 0x28,param_3,puVar4);
      }
    }
    break;
  case 10:
    puVar4 = (undefined8 *)PTR_DAT_047e5c80;
    break;
  default:
    puVar4 = (undefined8 *)PTR_DAT_047e5da8;
  }
  return puVar4;
}


