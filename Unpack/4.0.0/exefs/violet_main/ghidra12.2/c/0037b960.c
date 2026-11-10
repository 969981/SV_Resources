/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037b960; name: FUN_0037b960
 */


undefined8 * FUN_0037b960(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  void *__ptr;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long local_90;
  char *local_88;
  undefined *puStack_80;
  byte local_78;
  undefined7 uStack_77;
  undefined8 local_68;
  
  lVar11 = 4;
  while( true ) {
    bVar4 = *(byte *)(param_1 + lVar11 + -4);
    if (bVar4 == 0) break;
    if (bVar4 == 0x3a) {
      lVar12 = lVar11 + -3;
      if (lVar12 != 0) {
        lVar13 = param_1 + lVar11;
        if ((*(char *)(lVar13 + -3) != '/') || (*(char *)(lVar13 + -2) != '/')) {
          lVar15 = -1;
          lVar13 = -1;
          goto LAB_0037bb08;
        }
        lVar15 = lVar11 + -1;
        bVar4 = *(byte *)(lVar13 + -1);
        lVar12 = lVar11;
        if (bVar4 != 0) goto LAB_0037bab4;
        lVar13 = -1;
        bVar5 = true;
        lVar12 = lVar15;
        local_90 = lVar15;
        goto LAB_0037bc20;
      }
      break;
    }
    uVar14 = (uint)bVar4;
    if ((0x19 < ((uVar14 & 0xffffffdf) - 0x41 & 0xff)) &&
       ((lVar11 == 4 ||
        ((9 < uVar14 - 0x30 &&
         ((0x2e < uVar14 || ((1L << ((ulong)bVar4 & 0x3f) & 0x680000000000U) == 0)))))))) break;
    lVar11 = lVar11 + 1;
  }
  local_90 = lVar11 + -4;
  if ((param_2 & 1) != 0) {
    return (undefined8 *)0x0;
  }
  local_88 = "scheme";
  goto LAB_0037ba08;
  while( true ) {
    lVar12 = local_90 + 1;
    bVar4 = bVar3;
    if (bVar3 == 0) break;
LAB_0037bab4:
    local_90 = lVar12;
    lVar12 = local_90 + -1;
    if ((1L << ((ulong)bVar4 & 0x3f) & 0x8000800800000000U) == 0) {
      lVar12 = -1;
    }
    bVar3 = *(byte *)(param_1 + local_90);
    lVar13 = -1;
    if (bVar4 < 0x40) {
      lVar13 = lVar12;
    }
    bVar5 = lVar13 == -1;
    if (!bVar5) break;
  }
  lVar12 = local_90;
  if (bVar3 != 0) {
    lVar12 = -1;
  }
LAB_0037bc20:
  if (!bVar5) {
    lVar12 = lVar13;
  }
  lVar13 = lVar12;
  if (lVar12 == -1) {
    if ((param_2 & 1) != 0) {
      return (undefined8 *)0x0;
    }
    local_88 = "authority";
  }
  else {
LAB_0037bb08:
    cVar10 = *(char *)(param_1 + lVar12);
    lVar1 = lVar12;
    while (local_90 = lVar1, cVar10 != '\0') {
      if ((cVar10 == '#') || (cVar10 == '?')) {
        if (lVar1 == -1) goto LAB_0037bbac;
        if (cVar10 == '?') {
          lVar17 = lVar1 + 1;
          local_90 = lVar17;
          iVar6 = FUN_0037bdd0(param_1,&local_90);
          if (iVar6 != 0) {
            cVar10 = *(char *)(param_1 + local_90);
            lVar18 = local_90;
            if (cVar10 == '\0') goto LAB_0037bc58;
            if (cVar10 == '#') goto LAB_0037bbd0;
          }
          if ((param_2 & 1) != 0) {
            return (undefined8 *)0x0;
          }
          local_88 = "query";
          goto LAB_0037ba08;
        }
        lVar17 = -1;
        lVar18 = -1;
LAB_0037bbd0:
        if (cVar10 != '#') {
LAB_0037bc58:
          lVar19 = -1;
          lVar20 = -1;
          goto LAB_0037bc60;
        }
        lVar19 = local_90 + 1;
        local_90 = lVar19;
        iVar6 = FUN_0037bdd0(param_1,&local_90);
        if ((iVar6 != 0) && (lVar20 = local_90, *(char *)(param_1 + local_90) == '\0'))
        goto LAB_0037bc60;
        if ((param_2 & 1) != 0) {
          return (undefined8 *)0x0;
        }
        local_88 = "fragment";
        goto LAB_0037ba08;
      }
      lVar1 = lVar1 + 1;
      cVar10 = *(char *)(param_1 + lVar1);
    }
    if (lVar1 != -1) {
      lVar18 = -1;
      lVar17 = -1;
      lVar19 = -1;
      lVar20 = -1;
LAB_0037bc60:
      puVar7 = (undefined8 *)FUN_0038c7b0(0x40);
      uVar8 = FUN_0037bee0(param_1,0,lVar11 + -4);
      *puVar7 = uVar8;
      uVar8 = FUN_0037bee0(param_1,lVar15,lVar13);
      puVar7[1] = uVar8;
      uVar8 = FUN_0037bee0(param_1,lVar12,lVar1);
      puVar7[2] = uVar8;
      uVar8 = FUN_0037bee0(param_1,lVar17,lVar18);
      puVar7[3] = uVar8;
      uVar8 = FUN_0037bee0(param_1,lVar19,lVar20);
      puVar7[7] = uVar8;
      pcVar9 = (char *)puVar7[3];
      if (pcVar9 != (char *)0x0) {
        plVar2 = puVar7 + 4;
        if (*pcVar9 == '\0') {
          *plVar2 = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          return puVar7;
        }
        FUN_0038d490(pcVar9,&DAT_03c8299e,plVar2,puVar7 + 5);
        uVar8 = FUN_0038c780(puVar7[5] << 3);
        puVar7[6] = uVar8;
        if (puVar7[5] == 0) {
          return puVar7;
        }
        uVar16 = 0;
        while( true ) {
          __ptr = *(void **)(*plVar2 + uVar16 * 8);
          FUN_0038d490(__ptr,&DAT_03c475c1,&local_78,&local_88);
          if (local_88 == (char *)0x0) break;
          *(undefined8 *)(*plVar2 + uVar16 * 8) = *(undefined8 *)CONCAT71(uStack_77,local_78);
          if (local_88 == (char *)0x1) {
            *(undefined8 *)(puVar7[6] + uVar16 * 8) = 0;
          }
          else {
            *(undefined8 *)(puVar7[6] + uVar16 * 8) =
                 *(undefined8 *)(CONCAT71(uStack_77,local_78) + 8);
            if ((char *)0x2 < local_88) {
              pcVar9 = (char *)0x2;
              do {
                free(*(void **)(CONCAT71(uStack_77,local_78) + (long)pcVar9 * 8));
                pcVar9 = pcVar9 + 1;
              } while (pcVar9 < local_88);
            }
          }
          free((void *)CONCAT71(uStack_77,local_78));
          free(__ptr);
          uVar16 = uVar16 + 1;
          if ((ulong)puVar7[5] <= uVar16) {
            return puVar7;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_0037bbac:
    if ((param_2 & 1) != 0) {
      return (undefined8 *)0x0;
    }
    local_88 = "path";
  }
LAB_0037ba08:
  puStack_80 = PTR_LAB_047cc7b8;
  FUN_00391b20(&local_78,"bad uri.%s: \'",0xd,&local_88,1);
  if ((local_78 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_68);
  }
  return (undefined8 *)0x0;
}


