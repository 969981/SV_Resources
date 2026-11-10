/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0336db98; name: FUN_0336db98
 */


ulong * FUN_0336db98(long *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  ulong *puVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  size_t sVar13;
  long lVar14;
  char *local_e8;
  char *pcStack_e0;
  char *local_d8;
  char *local_d0;
  char acStack_c8 [128];
  undefined4 local_48;
  
  pcVar5 = (char *)*param_2;
  pcVar7 = (char *)param_2[1];
  if ((pcVar5 != pcVar7) && (*pcVar5 == '$')) {
    iVar1 = *(int *)(param_1[2] + 0x70);
    if (iVar1 != 0) {
      sVar13 = (long)pcVar7 - (long)(pcVar5 + 1);
      lVar14 = (long)iVar1 * 0x28;
      plVar11 = (long *)(*(long *)(param_1[2] + 0x68) + 8);
      do {
        pcVar7 = (char *)(plVar11[-1] & 0xfffffffffffffffe);
        if (pcVar7 == (char *)0x0) {
          if (sVar13 == 0) goto LAB_0336ddf8;
        }
        else {
          sVar3 = strlen(pcVar7);
          if ((sVar3 == sVar13) && (iVar1 = memcmp(pcVar5 + 1,pcVar7,sVar13), iVar1 == 0)) {
LAB_0336ddf8:
            pcVar5 = (char *)(*(ulong *)(*plVar11 + 8) & 0xfffffffffffffffe);
            if (pcVar5 == (char *)0x0) {
              lVar14 = 0;
            }
            else {
              sVar13 = strlen(pcVar5);
              lVar14 = (long)(int)sVar13;
            }
            local_d0 = pcVar5 + lVar14;
            local_d8 = pcVar5;
            puVar4 = (ulong *)(**(code **)(*param_1 + 8))(param_1,&local_d8);
            return puVar4;
          }
        }
        plVar11 = plVar11 + 5;
        lVar14 = lVar14 + -0x28;
      } while (lVar14 != 0);
    }
    return (ulong *)0x0;
  }
  local_d8 = acStack_c8;
  local_d0 = (char *)0x8000008000000000;
  local_48 = 1;
  FUN_031c6afc(&local_d8,pcVar5,(int)pcVar7 - (int)pcVar5);
  FUN_031c9cc4(&local_d8);
  pcVar5 = local_d8;
  plVar11 = (long *)param_1[3];
  pcVar7 = local_d8 + (long)(int)local_d0 + -1;
  local_e8 = local_d8;
  pcStack_e0 = pcVar7;
  uVar2 = FUN_0336e4d0(plVar11,&local_e8);
  if (*(uint *)(plVar11 + 1) == uVar2) {
    uVar6 = uVar2;
    if ((int)(*(uint *)((long)plVar11 + 0xc) & 0x7fffffff) <= (int)uVar2) {
      FUN_0336e688(plVar11,(long)(int)(uVar2 + 1));
      uVar6 = *(uint *)(plVar11 + 1);
    }
    lVar14 = *plVar11 + (long)(int)uVar6 * 0x10;
    FUN_031ca554(lVar14,pcVar5,pcVar7);
    *(undefined8 *)(lVar14 + 8) = 0;
    *(uint *)(plVar11 + 1) = uVar2 + 1;
  }
  puVar12 = (undefined8 *)(*plVar11 + ((long)((ulong)uVar2 << 0x20) >> 0x1c) + 8);
  puVar4 = (ulong *)*puVar12;
  if (puVar4 == (ulong *)&DAT_00000008) {
    puVar4 = (ulong *)0x0;
    goto LAB_0336de98;
  }
  if (puVar4 != (ulong *)0x0) goto LAB_0336de98;
  puVar4 = (ulong *)(**(code **)(**(long **)PTR_DAT_047ddc48 + 0x20))
                              (*(long **)PTR_DAT_047ddc48,local_d8);
  if (puVar4 == (ulong *)0x0) {
LAB_0336de8c:
    puVar4 = (ulong *)0x0;
    *puVar12 = 8;
  }
  else {
    uVar8 = *puVar4;
    puVar9 = puVar4;
    if ((uVar8 & 1) == 0) {
      puVar10 = puVar4;
      do {
        puVar10 = (ulong *)puVar10[1];
      } while ((*puVar10 & 1) == 0);
      if ((puVar10[2] & 0x1f) != 4) {
        puVar10 = puVar4;
        do {
          puVar10 = (ulong *)puVar10[1];
        } while ((*puVar10 & 1) == 0);
        if ((puVar10[2] & 0x1f) != 5) {
          if ((uVar8 & 1) != 0) goto LAB_0336de38;
          puVar10 = puVar4;
          do {
            puVar10 = (ulong *)puVar10[1];
          } while ((*puVar10 & 1) == 0);
          if ((puVar10[2] & 0x1f) != 2) {
            puVar10 = puVar4;
            do {
              puVar10 = (ulong *)puVar10[1];
            } while ((*puVar10 & 1) == 0);
            if ((puVar10[2] & 0x1f) != 3) {
              if ((uVar8 & 1) != 0) goto LAB_0336de58;
              puVar10 = puVar4;
              do {
                puVar10 = (ulong *)puVar10[1];
              } while ((*puVar10 & 1) == 0);
              if ((puVar10[2] & 0x1f) != 0) {
                do {
                  puVar9 = (ulong *)puVar9[1];
                } while ((*puVar9 & 1) == 0);
                goto LAB_0336de68;
              }
            }
          }
        }
      }
    }
    else if (((puVar4[2] & 0x1f) != 4) && ((puVar4[2] & 0x1f) != 5)) {
LAB_0336de38:
      if (((puVar4[2] & 0x1f) != 2) && ((puVar4[2] & 0x1f) != 3)) {
LAB_0336de58:
        if ((puVar4[2] & 0x1f) != 0) {
LAB_0336de68:
          if (((puVar9[2] & 0x1f) != 8) || (uVar8 = FUN_033670d0(puVar4), (uVar8 & 1) == 0))
          goto LAB_0336de8c;
        }
      }
    }
    *puVar12 = puVar4;
  }
LAB_0336de98:
  pcVar5 = local_d0;
  local_d0 = (char *)((ulong)local_d0 & 0xffffffff00000000);
  if ((-1 < (long)pcVar5) && (local_d8 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
  return puVar4;
}


