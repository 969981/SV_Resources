/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00178eb0; name: FUN_00178eb0
 */


/* WARNING: Control flow encountered bad instruction data */

long FUN_00178eb0(long *param_1,long param_2,uint param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  long lVar12;
  uint *puVar13;
  ulong uVar14;
  uint local_8 [2];
  
  if (3 < param_3) {
    return -1;
  }
  if (param_3 != 0) {
    uVar5 = *(uint *)(param_4 + 2);
    lVar9 = (ulong)uVar5 + (int)param_3 * param_2;
    puVar4 = (uint *)*param_4;
    lVar10 = lVar9 + 7 >> 3;
    if (lVar10 <= param_4[1] - (long)puVar4) {
      lVar2 = lVar10;
      if (3 < lVar10) {
        lVar2 = 4;
      }
      puVar11 = (uint *)((long)puVar4 + (lVar10 - lVar2));
      plVar1 = (long *)((long)param_1 + param_2);
      lVar10 = *plVar1;
      local_8[0] = 0;
      local_8[1] = 0;
      if (7 < lVar9 + 7) {
        lVar12 = 0;
        do {
          *(undefined1 *)((long)local_8 + lVar12) = *(undefined1 *)((long)puVar11 + lVar12);
          lVar12 = lVar12 + 1;
        } while (lVar12 < lVar2);
      }
      if (param_3 == 1) {
        puVar13 = puVar4;
        do {
          bVar7 = puVar11 <= puVar13;
          puVar3 = puVar13;
          if (bVar7) {
            puVar3 = (uint *)((long)local_8 + ((long)puVar13 - (long)puVar11));
          }
          puVar13 = (uint *)((long)puVar3 + 1);
          uVar6 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
          uVar14 = (ulong)((uVar6 >> 0x10 | uVar6 << 0x10) >> (ulong)(0x18 - uVar5 & 0x1f) & 0xff);
          uVar14 = (uVar14 | uVar14 << 0x1c) & 0xf0000000f;
          uVar14 = uVar14 | uVar14 << 0xe;
          uVar14 = (uVar14 & 0x2000200020002) >> 1 | (uVar14 & 0x1000100010001) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          if (bVar7) {
            puVar11 = (uint *)((ulong)local_8 | 4);
          }
          plVar8 = param_1 + 1;
          *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) + *param_1 * 2;
          param_1 = plVar8;
        } while (plVar8 < plVar1);
      }
      else if (param_3 == 2) {
        puVar13 = puVar4;
        do {
          bVar7 = puVar11 <= puVar13;
          puVar3 = puVar13;
          if (bVar7) {
            puVar3 = (uint *)((long)local_8 + ((long)puVar13 - (long)puVar11));
          }
          puVar13 = (uint *)((long)puVar3 + 2);
          uVar6 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
          uVar14 = (ulong)((uVar6 >> 0x10 | uVar6 << 0x10) >> (ulong)(0x10 - uVar5 & 0x1f) & 0xffff)
          ;
          uVar14 = (uVar14 | uVar14 << 0x18) & 0xff000000ff;
          uVar14 = uVar14 | uVar14 << 0xc;
          uVar14 = (uVar14 & 0xc000c000c000c) >> 2 | (uVar14 & 0x3000300030003) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          if (bVar7) {
            puVar11 = (uint *)((ulong)local_8 | 4);
          }
          plVar8 = param_1 + 1;
          *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) + *param_1 * 4;
          param_1 = plVar8;
        } while (plVar8 < plVar1);
      }
      else {
        if (param_3 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar13 = puVar4;
        do {
          bVar7 = puVar11 <= puVar13;
          puVar3 = puVar13;
          if (bVar7) {
            puVar3 = (uint *)((long)local_8 + ((long)puVar13 - (long)puVar11));
          }
          puVar13 = (uint *)((long)puVar3 + 3);
          uVar6 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
          uVar14 = (ulong)((uVar6 >> 0x10 | uVar6 << 0x10) >> (ulong)(8 - uVar5 & 0x1f) & 0xffffff);
          uVar14 = (uVar14 | uVar14 << 0x14) & 0xfff00000fff;
          uVar14 = uVar14 | uVar14 << 10;
          uVar14 = (uVar14 & 0x38003800380038) >> 3 | (uVar14 & 0x7000700070007) << 8;
          uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
          if (bVar7) {
            puVar11 = (uint *)((ulong)local_8 | 4);
          }
          plVar8 = param_1 + 1;
          *param_1 = (uVar14 >> 0x20 | uVar14 << 0x20) + *param_1 * 8;
          param_1 = plVar8;
        } while (plVar8 < plVar1);
      }
      *plVar1 = lVar10;
      *param_4 = (long)puVar4 + (lVar9 >> 3);
      *(uint *)(param_4 + 2) = (uint)lVar9 & 7;
      return param_2;
    }
    param_2 = -1;
  }
  return param_2;
}


