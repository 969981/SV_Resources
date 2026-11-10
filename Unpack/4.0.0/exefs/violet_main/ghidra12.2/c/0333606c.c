/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0333606c; name: FUN_0333606c
 */


void FUN_0333606c(long param_1,ulong param_2)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  size_t sVar8;
  void *pvVar9;
  ulong *puVar10;
  byte *pbVar11;
  undefined4 uVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  char *local_f8;
  char *pcStack_f0;
  char *local_e8;
  char *local_e0;
  char local_d8 [128];
  undefined4 local_58;
  
  lVar20 = *(long *)(param_1 + 0xb8);
  pcVar1 = (char *)(*(ulong *)(lVar20 + (-(param_2 >> 0x1f & 1) & 0xffffffe000000000 |
                                        (param_2 & 0xffffffff) << 5)) & 0xfffffffffffffffe);
  if (pcVar1 == (char *)0x0) {
    uVar22 = 0;
  }
  else {
    sVar8 = strlen(pcVar1);
    sVar8 = (size_t)((int)sVar8 + 1);
    pvVar9 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8);
    memcpy(pvVar9,pcVar1,sVar8);
    uVar22 = (ulong)pvVar9 | 1;
  }
  lVar20 = lVar20 + (long)(int)param_2 * 0x20;
  uVar3 = *(undefined4 *)(lVar20 + 8);
  pcVar1 = (char *)(uVar22 & 0xfffffffffffffffe);
  puVar19 = *(ulong **)(lVar20 + 0x10);
  puVar2 = *(undefined8 **)(lVar20 + 0x18);
  if (pcVar1 != (char *)0x0) {
    local_e8 = pcVar1;
    sVar8 = strlen(pcVar1);
    local_e0 = pcVar1 + sVar8;
    lVar20 = FUN_03342334(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x100) + 0x68) + 0x90),
                          &local_e8,uVar3);
    uVar4 = *(uint *)(param_1 + 100);
    if (0 < (int)uVar4) {
      uVar5 = (int)lVar20 * -0x61c8864f;
      uVar6 = (int)((ulong)lVar20 >> 0x20) * -0x61c8864f;
      uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
      uVar17 = (ulong)((uVar5 + (uVar5 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6) & uVar4);
      lVar16 = *(long *)(param_1 + 0x58);
      lVar18 = *(long *)(lVar16 + uVar17 * 0x10);
      if (lVar18 != -1) {
        if (lVar18 != lVar20) {
          do {
            uVar17 = (ulong)((int)uVar17 + 1U & uVar4);
            lVar18 = *(long *)(lVar16 + uVar17 * 0x10);
            if (lVar18 == -1) goto LAB_033361d4;
          } while (lVar18 != lVar20);
        }
        uVar17 = *(ulong *)(lVar16 + uVar17 * 0x10 + 8);
        puVar21 = (undefined8 *)0x0;
        iVar13 = (int)uVar17;
        if ((-1 < iVar13) && (iVar13 != 0x50000000)) {
          puVar21 = *(undefined8 **)(*(long *)(param_1 + 0x48) + (uVar17 & 0xffffffff) * 8);
        }
        goto LAB_03336374;
      }
    }
LAB_033361d4:
    puVar21 = (undefined8 *)0x0;
    goto LAB_03336374;
  }
  puVar10 = (ulong *)(**(code **)(**(long **)(param_1 + 0x108) + 0x30))
                               (*(long **)(param_1 + 0x108),puVar19);
  local_d8[0] = '\0';
  local_58 = 1;
  if (puVar10 != (ulong *)0x0) {
    puVar19 = puVar10;
  }
  local_e8 = local_d8;
  local_e0 = (char *)0x8000008000000001;
  FUN_031e12d8(puVar19,&local_e8,0,0);
  pcStack_f0 = local_e8 + (long)(int)local_e0 + -1;
  local_f8 = local_e8;
  puVar10 = puVar19;
  do {
    uVar17 = *puVar10;
    if (((uint)uVar17 >> 4 & 1) != 0) {
      uVar12 = (undefined4)puVar10[(ulong)(byte)POPCOUNT((byte)uVar17 & 0xf) + 2];
      goto LAB_03336288;
    }
  } while (((uVar17 & 9) == 0) && (puVar10 = (ulong *)puVar10[1], puVar10 != (ulong *)0x0));
  uVar12 = 0;
LAB_03336288:
  lVar20 = FUN_03342334(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x100) + 0x68) + 0x90),
                        &local_f8,uVar12);
  pcVar7 = local_e0;
  uVar4 = *(uint *)(param_1 + 100);
  if ((int)uVar4 < 1) {
LAB_03336348:
    puVar21 = (undefined8 *)0x0;
  }
  else {
    uVar5 = (int)lVar20 * -0x61c8864f;
    uVar6 = (int)((ulong)lVar20 >> 0x20) * -0x61c8864f;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar17 = (ulong)((uVar5 + (uVar5 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6) & uVar4);
    lVar16 = *(long *)(param_1 + 0x58);
    lVar18 = *(long *)(lVar16 + uVar17 * 0x10);
    if (lVar18 == -1) goto LAB_03336348;
    if (lVar18 != lVar20) {
      do {
        uVar17 = (ulong)((int)uVar17 + 1U & uVar4);
        lVar18 = *(long *)(lVar16 + uVar17 * 0x10);
        if (lVar18 == -1) goto LAB_03336348;
      } while (lVar18 != lVar20);
    }
    uVar17 = *(ulong *)(lVar16 + uVar17 * 0x10 + 8);
    puVar21 = (undefined8 *)0x0;
    iVar13 = (int)uVar17;
    if ((-1 < iVar13) && (iVar13 != 0x50000000)) {
      puVar21 = *(undefined8 **)(*(long *)(param_1 + 0x48) + (uVar17 & 0xffffffff) * 8);
    }
  }
  local_e0 = (char *)((ulong)local_e0 & 0xffffffff00000000);
  if ((-1 < (long)pcVar7) && (local_e8 != (char *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
  }
LAB_03336374:
  if (puVar21 == (undefined8 *)0x0) {
    if (pcVar1 == (char *)0x0) {
      uVar17 = 0;
    }
    else {
      sVar8 = strlen(pcVar1);
      sVar8 = (size_t)((int)sVar8 + 1);
      pvVar9 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar8);
      memcpy(pvVar9,pcVar1,sVar8);
      uVar17 = (ulong)pvVar9 | 1;
    }
    pcVar1 = (char *)(uVar17 & 0xfffffffffffffffe);
    local_e8 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_e0 = (char *)0x0;
    }
    else {
      sVar8 = strlen(pcVar1);
      local_e0 = pcVar1 + sVar8;
    }
    puVar21 = (undefined8 *)FUN_033364d4(param_1,&local_e8,uVar3,puVar19);
    if (puVar21 == (undefined8 *)0x0) {
      if ((pcVar1 == (char *)0x0) ||
         (pbVar11 = (byte *)(**(code **)(**(long **)(param_1 + 0x108) + 0x20))
                                      (*(long **)(param_1 + 0x108),pcVar1), pbVar11 == (byte *)0x0))
      {
        pbVar14 = (byte *)0x0;
      }
      else {
        pbVar15 = pbVar11;
        if ((*pbVar11 & 1) == 0) {
          do {
            pbVar15 = *(byte **)(pbVar15 + 8);
          } while ((*pbVar15 & 1) == 0);
        }
        pbVar14 = (byte *)0x0;
        if ((*(ulong *)(pbVar15 + 0x10) & 0x1f) != 7) {
          pbVar14 = pbVar11;
        }
      }
    }
    else {
      pbVar14 = (byte *)*puVar21;
    }
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = pbVar14;
    }
    if ((uVar17 & 1) != 0) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar17 - 1,0);
    }
  }
  else if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *puVar21;
  }
  if ((uVar22 & 1) != 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,uVar22 - 1,0);
  }
  return;
}


