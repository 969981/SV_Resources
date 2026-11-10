/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03376354; name: FUN_03376354
 */


int FUN_03376354(long *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  int iVar16;
  long *plVar17;
  ulong local_60;
  ulong uStack_58;
  ulong *local_38;
  
  if (param_2 == (ulong *)0x0) {
    iVar16 = 0;
  }
  else {
    uVar9 = *param_2;
    uVar3 = (uint)uVar9;
    puVar12 = param_2;
    if ((uVar9 & 1) == 0) {
      do {
        puVar12 = (ulong *)puVar12[1];
      } while ((*puVar12 & 1) == 0);
    }
    puVar13 = param_2;
    if ((puVar12[2] & 0x1f) == 1) {
      while ((uVar3 >> 0x14 & 1) == 0) {
        if (((uVar9 & 1) != 0) || (puVar13 = (ulong *)puVar13[1], puVar13 == (ulong *)0x0))
        goto LAB_033763f0;
        uVar9 = *puVar13;
        uVar3 = (uint)uVar9;
      }
      uVar9 = CONCAT44(uVar3,uVar3) & 0xfffff000fffff;
      if ((short)puVar13[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8)) +
                                      POPCOUNT((char)(uVar9 >> 0x10))) + 2] != 0) {
        param_2 = (ulong *)PTR_DAT_047e5f40;
      }
    }
LAB_033763f0:
    plVar17 = (long *)*param_1;
    local_38 = param_2;
    lVar6 = FUN_03379400(plVar17,&local_38);
    if ((lVar6 == 0) || (lVar10 = *plVar17, lVar10 == 0)) {
      lVar6 = *param_1;
      iVar16 = *(int *)(lVar6 + 0x48);
      uVar9 = *local_38;
      uVar3 = (uint)uVar9;
      if ((uVar3 >> 3 & 1) != 0) {
        puVar12 = local_38;
        uVar14 = uVar3;
        if ((uVar3 >> 3 & 1) == 0) {
          uVar15 = uVar9;
          do {
            if ((uVar15 & 1) != 0) {
              local_60 = 0;
              goto LAB_03376574;
            }
            puVar12 = (ulong *)puVar12[1];
            local_60 = 0;
            if (puVar12 == (ulong *)0x0) goto LAB_03376574;
            uVar15 = *puVar12;
            uVar14 = (uint)uVar15;
          } while ((uVar14 >> 3 & 1) == 0);
        }
        local_60 = 0;
        if (puVar12 != (ulong *)0x0) {
          local_60 = puVar12[(ulong)(byte)POPCOUNT((byte)uVar14 & 7) + 2];
        }
LAB_03376574:
        plVar17 = (long *)(lVar6 + 0x20);
        puVar12 = local_38;
        while ((uVar3 >> 0xf & 1) == 0) {
          if ((uVar9 & 9) != 0) {
            uStack_58 = 0;
            goto LAB_033765c0;
          }
          puVar12 = (ulong *)puVar12[1];
          uStack_58 = 0;
          if (puVar12 == (ulong *)0x0) goto LAB_033765c0;
          uVar9 = *puVar12;
          uVar3 = (uint)uVar9;
        }
        uVar9 = CONCAT44(uVar3,uVar3) & 0x7fff00007fff;
        uStack_58 = puVar12[(ulong)(byte)(POPCOUNT((char)uVar9) + POPCOUNT((char)(uVar9 >> 8))) + 2]
        ;
LAB_033765c0:
        iVar4 = FUN_03378a2c(plVar17,&local_60);
        iVar7 = *(int *)(lVar6 + 0x28);
        if (iVar7 == iVar4) {
          iVar8 = iVar4;
          if ((int)(*(uint *)(lVar6 + 0x2c) & 0x7fffffff) <= iVar4) {
            FUN_03378b40(plVar17,(long)(iVar4 + 1));
            iVar8 = *(int *)(lVar6 + 0x28);
          }
          puVar12 = (ulong *)(*(long *)(lVar6 + 0x20) + (long)iVar8 * 0x20);
          *(undefined4 *)((long)puVar12 + 0x14) = 0;
          *puVar12 = local_60;
          puVar12[1] = uStack_58;
          *(undefined1 *)(puVar12 + 3) = 0;
          *(int *)(lVar6 + 0x28) = iVar4 + 1;
        }
        lVar6 = *plVar17;
        puVar12 = local_38;
        if ((*local_38 & 1) == 0) {
          do {
            puVar12 = (ulong *)puVar12[1];
          } while ((*puVar12 & 1) == 0);
        }
        if ((local_38 == (ulong *)0x0) || ((puVar12[2] & 0x1f) != 1)) {
          uVar5 = FUN_031e9ec4(*param_1 + 0x68);
          lVar6 = lVar6 + (long)iVar4 * 0x20;
          if (iVar7 == iVar4) {
            *(int *)(lVar6 + 0x10) = iVar16;
            if (*(char *)(lVar6 + 0x18) == '\0') {
              *(undefined4 *)(lVar6 + 0x14) = uVar5;
              *(char *)(lVar6 + 0x18) = '\x01';
            }
            else {
              *(undefined4 *)(lVar6 + 0x14) = uVar5;
            }
          }
          else {
            iVar16 = *(int *)(lVar6 + 0x10);
            if (*(char *)(lVar6 + 0x18) == '\0') {
              *(undefined4 *)(lVar6 + 0x14) = uVar5;
              *(char *)(lVar6 + 0x18) = '\x01';
              *(ulong **)(*(long *)(*param_1 + 0x40) + (long)iVar16 * 8) = local_38;
            }
          }
        }
        else {
          lVar6 = lVar6 + (long)iVar4 * 0x20;
          piVar2 = (int *)(lVar6 + 0x10);
          if (iVar7 == iVar4) {
            *piVar2 = iVar16;
            pcVar11 = (char *)(lVar6 + 0x18);
            if (*pcVar11 != '\0') {
              *pcVar11 = '\0';
            }
          }
          else {
            iVar16 = *piVar2;
          }
        }
      }
      plVar17 = (long *)*param_1;
      uVar3 = FUN_03335048(plVar17,&local_38);
      if (*(uint *)(plVar17 + 1) == uVar3) {
        iVar7 = uVar3 + 1;
        if ((int)(*(uint *)((long)plVar17 + 0xc) & 0x7fffffff) <= (int)uVar3) {
          FUN_03335164(plVar17,PTR_PTR_047d1a50,(long)iVar7);
          uVar3 = *(uint *)(plVar17 + 1);
        }
        puVar1 = (undefined8 *)(*plVar17 + (long)(int)uVar3 * 0x10);
        *puVar1 = local_38;
        *(int *)(puVar1 + 1) = iVar16;
        *(int *)(plVar17 + 1) = iVar7;
      }
      else {
        *(int *)(*plVar17 + ((long)((ulong)uVar3 << 0x20) >> 0x1c) + 8) = iVar16;
      }
      lVar6 = *param_1;
      if (iVar16 == *(int *)(lVar6 + 0x48)) {
        iVar7 = iVar16;
        if ((int)(*(uint *)(lVar6 + 0x4c) & 0x7fffffff) <= iVar16) {
          FUN_031bc928(lVar6 + 0x40,PTR_PTR_047d1a50,(long)(iVar16 + 1));
          iVar7 = *(int *)(lVar6 + 0x48);
        }
        *(ulong **)(*(long *)(lVar6 + 0x40) + (long)iVar7 * 8) = local_38;
        *(int *)(lVar6 + 0x48) = iVar16 + 1;
      }
    }
    else {
      iVar16 = *(int *)(lVar10 + (long)*(int *)(lVar6 + 4) * 0x10 + 8);
    }
  }
  return iVar16;
}


