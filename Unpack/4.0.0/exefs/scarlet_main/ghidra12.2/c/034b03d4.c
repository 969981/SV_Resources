/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b03d4; name: FUN_034b03d4
 */


undefined4 FUN_034b03d4(long param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  void *__dest;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  void *__src;
  void *pvVar15;
  uint uVar16;
  undefined8 local_58;
  
  uVar5 = FUN_034ac08c(param_1,*param_2);
  plVar11 = *(long **)(param_1 + 0x90);
  if (plVar11 == (long *)0x0) {
    return 1;
  }
  lVar8 = *param_2;
  plVar10 = (long *)*plVar11;
  uVar9 = *(uint *)(plVar11 + 1);
  if ((uVar9 == 0) || (*plVar10 == lVar8)) {
    plVar11 = plVar10;
  }
  else {
    lVar13 = (ulong)uVar9 * 0x10;
    plVar12 = plVar10;
    do {
      lVar13 = lVar13 + -0x10;
      if (lVar13 == 0) goto LAB_034b04cc;
      plVar11 = plVar12 + 2;
      plVar14 = plVar12 + 2;
      plVar12 = plVar11;
    } while (*plVar14 != lVar8);
  }
  plVar12 = plVar11 + 1;
  if ((plVar11 == plVar10 + (ulong)uVar9 * 2) || ((param_3 & 1) == 0)) {
    if (plVar11 == plVar10 + (ulong)uVar9 * 2) {
LAB_034b04cc:
      uVar5 = FUN_034ac08c(param_1,lVar8);
      puVar4 = PTR_DAT_047e2fd0;
      lVar8 = *param_2;
      uVar9 = *(uint *)(param_1 + 0xda);
      puVar7 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,0x78);
      if (puVar7 == (undefined8 *)0x0) {
        return 2;
      }
      *(ushort *)(puVar7 + 0xb) = uVar5;
      *puVar7 = &PTR_FUN_047c4370;
      *(byte *)((long)puVar7 + 0x5a) = (byte)(uVar9 >> 10) & 1;
      *(undefined4 *)(puVar7 + 0xe) = 0;
      *(byte *)((long)puVar7 + 0x5b) = (byte)(uVar9 >> 0xb) & 1;
      puVar7[2] = lVar8;
      *(undefined4 *)(puVar7 + 3) = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      *(undefined1 *)(puVar7 + 5) = 0xff;
      *(undefined1 *)(puVar7 + 6) = 0xff;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      if (uVar5 != 0) {
        local_58 = 0x10000;
        FUN_034a9bb0(param_1 + 0x38,puVar7,&local_58);
        FUN_034be3a4(puVar7,param_1);
      }
      uVar9 = 0xffffffff;
      lVar13 = param_1;
      do {
        lVar13 = *(long *)(lVar13 + 0x98);
        uVar9 = uVar9 + 1;
      } while (lVar13 != 0);
      uVar3 = 0x4000000000000000;
      if ((*(uint *)(param_1 + 0xda) & 0x20000) != 0) {
        uVar3 = 0x2000000000000000;
      }
      puVar7[0xd] = uVar3 | (ulong)uVar9 << 0x20 | (ulong)*(uint *)(param_1 + 0x18);
      plVar10 = *(long **)(param_1 + 0x90);
      plVar11 = (long *)*plVar10;
      uVar9 = *(uint *)(plVar10 + 1);
      if ((uVar9 == 0) || (*plVar11 == lVar8)) {
        plVar12 = plVar11;
      }
      else {
        lVar13 = (ulong)uVar9 * 0x10;
        plVar14 = plVar11;
        do {
          lVar13 = lVar13 + -0x10;
          if (lVar13 == 0) goto LAB_034b0690;
          plVar12 = plVar14 + 2;
          plVar1 = plVar14 + 2;
          plVar14 = plVar12;
        } while (*plVar1 != lVar8);
      }
      if (plVar12 == plVar11 + (ulong)uVar9 * 2) {
LAB_034b0690:
        uVar16 = *(uint *)((long)plVar10 + 0xc);
        if (uVar16 <= uVar9) {
          iVar2 = uVar16 + (uVar16 >> 1);
          if (uVar16 == 0) {
            iVar2 = 1;
          }
          uVar16 = iVar2 + uVar16;
          plVar11 = (long *)(**(code **)(puVar4 + 0x20))(0,plVar11,(ulong)uVar16 << 4);
          if (plVar11 == (long *)0x0) goto LAB_034b06f8;
          *plVar10 = (long)plVar11;
          *(uint *)((long)plVar10 + 0xc) = uVar16;
        }
        if (uVar16 <= uVar9) {
LAB_034b06f8:
          if (puVar7[9] != 0) {
            *(undefined4 *)(puVar7 + 10) = 0;
            (**(code **)(puVar4 + 0x30))(0);
            puVar7[9] = 0;
            *(undefined4 *)((long)puVar7 + 0x54) = 0;
          }
          (**(code **)*puVar7)(puVar7);
          (**(code **)(puVar4 + 0x30))(0,puVar7);
          return 2;
        }
        uVar9 = *(uint *)(plVar10 + 1);
        *(uint *)(plVar10 + 1) = uVar9 + 1;
        if (plVar11 == (long *)0x0) goto LAB_034b06f8;
        plVar11[(ulong)uVar9 * 2] = lVar8;
        plVar12 = plVar11 + (ulong)uVar9 * 2 + 1;
        *plVar12 = (long)puVar7;
      }
      else {
        plVar12 = plVar12 + 1;
        *plVar12 = (long)puVar7;
      }
      goto LAB_034b060c;
    }
    uVar6 = 1;
  }
  else {
    lVar13 = *plVar12;
    if (lVar13 == 0) {
      return 1;
    }
    uVar5 = *(ushort *)(lVar13 + 0x58);
    if (*(char *)((long)param_2 + 0x29) != '\0') {
      if (uVar5 == 0) {
        return 1;
      }
      if ((int)(uint)uVar5 <=
          (int)(((uint)*(ushort *)(lVar13 + 0x70) - (uint)*(ushort *)(lVar13 + 0x72)) -
               (uint)*(ushort *)((long)param_2 + 0x26))) {
        local_58 = 0;
        uVar6 = FUN_034e8098((int)param_2[4],lVar13 + 0x48,uVar5,lVar8,
                             *(uint *)(param_1 + 0xda) >> 10 & 1,
                             *(uint *)(param_1 + 0xda) >> 0xb & 1,&local_58,1);
        uVar5 = 1;
        *(short *)((long)param_2 + 0x26) = *(short *)((long)param_2 + 0x26) + 1;
        goto LAB_034b0610;
      }
      uVar5 = 1;
    }
LAB_034b060c:
    uVar6 = 1;
  }
LAB_034b0610:
  if (uVar5 == 0) {
    return uVar6;
  }
  pvVar15 = (void *)param_2[1];
  if (pvVar15 == (void *)0x0) {
    return uVar6;
  }
  uVar16 = *(uint *)((long)pvVar15 + 0x10);
  uVar9 = *(uint *)((long)pvVar15 + 0x14);
  lVar8 = 0;
  if (*plVar12 != 0) {
    lVar8 = *plVar12 + 0x48;
  }
  if (uVar16 < uVar9) goto LAB_034b07b4;
  iVar2 = uVar9 + (uVar9 >> 1);
  if (uVar9 == 0) {
    iVar2 = 1;
  }
  uVar9 = iVar2 + uVar9;
  __dest = pvVar15;
  if (uVar9 < 2) {
LAB_034b0688:
    if (__dest == (void *)0x0) {
      return uVar6;
    }
  }
  else {
    __src = *(void **)((long)pvVar15 + 8);
    if (pvVar15 != __src) {
      __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,(ulong)uVar9 << 3,1);
      goto LAB_034b0688;
    }
    __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar9 << 3,1);
    if (__dest == (void *)0x0) {
      return uVar6;
    }
    memcpy(__dest,__src,((ulong)uVar16 & 0x1fffffff) << 3);
  }
  *(void **)((long)pvVar15 + 8) = __dest;
  *(uint *)((long)pvVar15 + 0x14) = uVar9;
LAB_034b07b4:
  if (uVar16 < uVar9) {
    uVar9 = *(uint *)((long)pvVar15 + 0x10);
    *(uint *)((long)pvVar15 + 0x10) = uVar9 + 1;
    if (*(long *)((long)pvVar15 + 8) != 0) {
      *(long *)(*(long *)((long)pvVar15 + 8) + (ulong)uVar9 * 8) = lVar8;
    }
  }
  return uVar6;
}


