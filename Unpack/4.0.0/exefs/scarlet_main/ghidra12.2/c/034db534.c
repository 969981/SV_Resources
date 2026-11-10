/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034db534; name: FUN_034db534
 */


int FUN_034db534(long *param_1,long *param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  ushort uVar16;
  uint uVar17;
  
  pbVar11 = (byte *)*param_2 + 1;
  bVar4 = *(byte *)*param_2;
  uVar14 = bVar4 & 0x7f;
  *param_2 = (long)pbVar11;
  pbVar13 = pbVar11;
  if ((char)bVar4 < '\0') {
    do {
      pbVar11 = pbVar13 + 1;
      bVar4 = *pbVar13;
      uVar14 = bVar4 & 0x7f | uVar14 << 7;
      *param_2 = (long)pbVar11;
      pbVar13 = pbVar11;
    } while ((char)bVar4 < '\0');
  }
  if (uVar14 == 0) {
LAB_034db6fc:
    bVar4 = *pbVar11;
    *param_2 = (long)(pbVar11 + 1);
    uVar14 = bVar4 & 0x7f;
    if ((char)bVar4 < '\0') {
      pbVar11 = pbVar11 + 2;
      do {
        bVar4 = pbVar11[-1];
        *param_2 = (long)pbVar11;
        pbVar11 = pbVar11 + 1;
        uVar14 = bVar4 & 0x7f | uVar14 << 7;
      } while ((char)bVar4 < '\0');
    }
    if (uVar14 != 0) {
      uVar8 = (**(code **)(*param_1 + 0x78))(param_1);
      if ((uVar8 & 1) == 0) goto LAB_034db834;
      uVar17 = 0;
      do {
        uVar3 = *(undefined4 *)*param_2;
        *param_2 = (long)((undefined4 *)*param_2 + 1);
        lVar10 = (**(code **)(*param_1 + 0x60))(param_1,uVar3,1);
        if (lVar10 == 0) {
          return 2;
        }
        uVar5 = *(undefined1 *)*param_2;
        *param_2 = (long)((undefined1 *)*param_2 + 1);
        *(undefined1 *)(lVar10 + 0x40) = uVar5;
        pbVar13 = (byte *)*param_2 + 1;
        bVar4 = *(byte *)*param_2;
        uVar15 = bVar4 & 0x7f;
        *param_2 = (long)pbVar13;
        pbVar11 = pbVar13;
        if ((char)bVar4 < '\0') {
          do {
            pbVar13 = pbVar11 + 1;
            bVar4 = *pbVar11;
            uVar15 = bVar4 & 0x7f | uVar15 << 7;
            *param_2 = (long)pbVar13;
            pbVar11 = pbVar13;
          } while ((char)bVar4 < '\0');
        }
        uVar15 = uVar15 & 0xffff;
        if (uVar15 != 0) {
          while( true ) {
            uVar3 = *(undefined4 *)pbVar13;
            *param_2 = (long)(pbVar13 + 4);
            uVar2 = *(undefined4 *)(pbVar13 + 4);
            *param_2 = (long)(pbVar13 + 8);
            iVar7 = FUN_034dae74(lVar10,uVar2,uVar3,1);
            if (iVar7 != 1) {
              return iVar7;
            }
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) break;
            pbVar13 = (byte *)*param_2;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 != uVar14);
    }
    iVar7 = 1;
    *(undefined1 *)(param_1 + 1) = 1;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  else {
    uVar8 = (**(code **)(*param_1 + 0x78))(param_1);
    if ((uVar8 & 1) != 0) {
      plVar9 = (long *)(**(code **)(*param_1 + 0x38))(param_1);
      uVar17 = *(uint *)(plVar9 + 1);
      if (uVar17 <= uVar14) {
        if (*(uint *)((long)plVar9 + 0xc) < uVar14) {
          uVar15 = *(uint *)((long)plVar9 + 0xc) + (uVar14 - uVar17);
          lVar10 = (**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,*plVar9,(ulong)uVar15 << 2);
          if (lVar10 == 0) goto LAB_034db834;
          *plVar9 = lVar10;
          *(uint *)((long)plVar9 + 0xc) = uVar15;
        }
        if (uVar17 < uVar14) {
          lVar12 = (ulong)uVar14 - (ulong)uVar17;
          lVar10 = (ulong)uVar17 << 2;
          do {
            if (*plVar9 != 0) {
              puVar1 = (undefined2 *)(*plVar9 + lVar10);
              *puVar1 = 0xffff;
              *(undefined1 *)(puVar1 + 1) = 2;
              *(byte *)((long)puVar1 + 3) = *(byte *)((long)puVar1 + 3) & 0xfe;
            }
            lVar12 = lVar12 + -1;
            lVar10 = lVar10 + 4;
          } while (lVar12 != 0);
        }
      }
      uVar8 = 0;
      *(uint *)(plVar9 + 1) = uVar14;
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      do {
        pbVar11 = (byte *)*param_2;
        bVar4 = *pbVar11;
        *param_2 = (long)(pbVar11 + 1);
        uVar16 = bVar4 & 0x7f;
        if ((char)bVar4 < '\0') {
          pbVar11 = pbVar11 + 2;
          do {
            bVar4 = pbVar11[-1];
            *param_2 = (long)pbVar11;
            pbVar11 = pbVar11 + 1;
            uVar16 = bVar4 & 0x7f | uVar16 << 7;
          } while ((char)bVar4 < '\0');
        }
        *(ushort *)(*plVar9 + uVar8 * 4) = uVar16;
        uVar5 = *(undefined1 *)*param_2;
        *param_2 = (long)((undefined1 *)*param_2 + 1);
        *(undefined1 *)(*plVar9 + uVar8 * 4 + 2) = uVar5;
        cVar6 = *(char *)*param_2;
        *param_2 = (long)((char *)*param_2 + 1);
        lVar10 = *plVar9 + uVar8 * 4;
        uVar8 = uVar8 + 1;
        *(byte *)(lVar10 + 3) = *(byte *)(lVar10 + 3) & 0xfe | cVar6 != '\0';
      } while (uVar8 != uVar14);
      pbVar11 = (byte *)*param_2;
      goto LAB_034db6fc;
    }
LAB_034db834:
    iVar7 = 0x34;
  }
  return iVar7;
}


