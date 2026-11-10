/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179b3c; name: FUN_03179b3c
 */


undefined8 FUN_03179b3c(void **param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  void *__dest;
  void *__src;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *__dest_00;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long *plVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  void *__src_00;
  void *__src_01;
  uint uVar16;
  void *local_70;
  undefined8 local_68;
  
  plVar11 = (long *)PTR_PTR_047d1a50;
  local_70 = (void *)0x0;
  local_68 = 0x8000000000000000;
  uVar3 = *(uint *)(param_2 + 1);
  if ((int)uVar3 < 1) {
    local_70 = (void *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    __src_00 = (void *)*param_2;
    local_70 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(ulong)uVar3 * 0x50);
    uVar16 = 0;
    local_68 = CONCAT44(uVar3,uVar3);
    pvVar15 = local_70;
    do {
      memcpy(pvVar15,__src_00,0x28);
      *(undefined8 *)((long)pvVar15 + 0x28) = 0;
      *(undefined8 *)((long)pvVar15 + 0x30) = 0x8000000000000000;
      uVar4 = *(uint *)((long)__src_00 + 0x30);
      if ((int)uVar4 < 1) {
        *(undefined8 *)((long)pvVar15 + 0x28) = 0;
        *(undefined8 *)((long)pvVar15 + 0x30) = 0x8000000000000000;
      }
      else {
        puVar12 = *(undefined4 **)((long)__src_00 + 0x28);
        puVar6 = (undefined4 *)(**(code **)(*plVar11 + 0x18))(plVar11,(ulong)uVar4 << 2);
        uVar2 = uVar4 & 7;
        *(undefined4 **)((long)pvVar15 + 0x28) = puVar6;
        *(uint *)((long)pvVar15 + 0x30) = uVar4;
        *(uint *)((long)pvVar15 + 0x34) = uVar4;
        if (6 < uVar4 - 1) {
          iVar10 = -(uVar4 & 0xfffffff8);
          puVar7 = puVar6;
          do {
            *puVar7 = *puVar12;
            puVar7[1] = puVar12[1];
            puVar7[2] = puVar12[2];
            puVar7[3] = puVar12[3];
            puVar7[4] = puVar12[4];
            puVar7[5] = puVar12[5];
            puVar7[6] = puVar12[6];
            puVar1 = puVar12 + 7;
            puVar6 = puVar7 + 8;
            puVar12 = puVar12 + 8;
            iVar10 = iVar10 + 8;
            puVar7[7] = *puVar1;
            puVar7 = puVar6;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar6 = *puVar12;
          puVar6 = puVar6 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      *(undefined4 *)((long)pvVar15 + 0x38) = *(undefined4 *)((long)__src_00 + 0x38);
      *(undefined8 *)((long)pvVar15 + 0x40) = 0;
      *(undefined8 *)((long)pvVar15 + 0x48) = 0x8000000000000000;
      uVar4 = *(uint *)((long)__src_00 + 0x48);
      if ((int)uVar4 < 1) {
        *(undefined8 *)((long)pvVar15 + 0x40) = 0;
        *(undefined8 *)((long)pvVar15 + 0x48) = 0x8000000000000000;
      }
      else {
        __src_01 = *(void **)((long)__src_00 + 0x40);
        __dest_00 = (void *)(**(code **)(*plVar11 + 0x18))(plVar11,(ulong)uVar4 * 0xc4);
        *(void **)((long)pvVar15 + 0x40) = __dest_00;
        uVar2 = uVar4 & 3;
        *(uint *)((long)pvVar15 + 0x48) = uVar4;
        *(uint *)((long)pvVar15 + 0x4c) = uVar4;
        if (2 < uVar4 - 1) {
          iVar10 = -(uVar4 & 0xfffffffc);
          do {
            memcpy(__dest_00,__src_01,0xc4);
            memcpy((void *)((long)__dest_00 + 0xc4),(void *)((long)__src_01 + 0xc4),0xc4);
            memcpy((void *)((long)__dest_00 + 0x188),(void *)((long)__src_01 + 0x188),0xc4);
            __dest = (void *)((long)__dest_00 + 0x24c);
            __src = (void *)((long)__src_01 + 0x24c);
            __dest_00 = (void *)((long)__dest_00 + 0x310);
            __src_01 = (void *)((long)__src_01 + 0x310);
            memcpy(__dest,__src,0xc4);
            iVar10 = iVar10 + 4;
          } while (iVar10 != 0);
        }
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          memcpy(__dest_00,__src_01,0xc4);
          __src_01 = (void *)((long)__src_01 + 0xc4);
          __dest_00 = (void *)((long)__dest_00 + 0xc4);
        }
      }
      uVar16 = uVar16 + 1;
      plVar11 = (long *)PTR_PTR_047d1a50;
      pvVar15 = (void *)((long)pvVar15 + 0x50);
      __src_00 = (void *)((long)__src_00 + 0x50);
    } while (uVar16 != uVar3);
  }
  puVar5 = PTR_PTR_047d1a50;
  if (&local_70 != param_1) {
    if (*(int *)(param_1 + 1) != 0) {
      lVar13 = 0;
      lVar14 = (long)*(int *)(param_1 + 1) * 0x50;
      pvVar15 = *param_1;
      do {
        uVar3 = *(uint *)((long)pvVar15 + lVar14 + -4);
        *(undefined4 *)((long)pvVar15 + lVar14 + -8) = 0;
        if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)pvVar15 + lVar14 + -0x10), lVar8 != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))(puVar5,lVar8,(ulong)uVar3 * 0xc4);
        }
        uVar3 = *(uint *)((long)pvVar15 + lVar14 + -0x1c);
        *(undefined8 *)((long)pvVar15 + lVar14 + -0x10) = 0;
        *(undefined4 *)((long)pvVar15 + lVar14 + -4) = 0x80000000;
        *(undefined4 *)((long)pvVar15 + lVar14 + -0x20) = 0;
        if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)pvVar15 + lVar14 + -0x28), lVar8 != 0)) {
          (**(code **)(*(long *)puVar5 + 0x20))(puVar5,lVar8,(ulong)uVar3 << 2);
        }
        lVar13 = lVar13 + 0x50;
        *(undefined8 *)((long)pvVar15 + lVar14 + -0x28) = 0;
        *(undefined4 *)((long)pvVar15 + lVar14 + -0x1c) = 0x80000000;
        pvVar15 = (void *)((long)pvVar15 + -0x50);
      } while (lVar14 != lVar13);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != (void *)0x0)) {
      (**(code **)(*(long *)puVar5 + 0x20))
                (puVar5,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x50);
    }
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x8000000000000000;
    FUN_0317ebe8(&local_70);
    *param_1 = local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (void *)0x0;
    local_68 = 0;
  }
  FUN_0317ead8(param_1);
  if ((int)local_68 != 0) {
    lVar13 = 0;
    lVar14 = (long)(int)local_68 * 0x50;
    pvVar15 = local_70;
    do {
      uVar3 = *(uint *)((long)pvVar15 + lVar14 + -4);
      *(undefined4 *)((long)pvVar15 + lVar14 + -8) = 0;
      if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)pvVar15 + lVar14 + -0x10), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))(puVar5,lVar8,(ulong)uVar3 * 0xc4);
      }
      uVar3 = *(uint *)((long)pvVar15 + lVar14 + -0x1c);
      *(undefined8 *)((long)pvVar15 + lVar14 + -0x10) = 0;
      *(undefined4 *)((long)pvVar15 + lVar14 + -4) = 0x80000000;
      *(undefined4 *)((long)pvVar15 + lVar14 + -0x20) = 0;
      if ((-1 < (int)uVar3) && (lVar8 = *(long *)((long)pvVar15 + lVar14 + -0x28), lVar8 != 0)) {
        (**(code **)(*(long *)puVar5 + 0x20))(puVar5,lVar8,(ulong)uVar3 << 2);
      }
      lVar13 = lVar13 + 0x50;
      *(undefined8 *)((long)pvVar15 + lVar14 + -0x28) = 0;
      *(undefined4 *)((long)pvVar15 + lVar14 + -0x1c) = 0x80000000;
      pvVar15 = (void *)((long)pvVar15 + -0x50);
    } while (lVar14 != lVar13);
  }
  lVar13 = local_68;
  uVar9 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar13) && (local_70 != (void *)0x0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_70,uVar9 * 0x50);
  }
  return 1;
}


