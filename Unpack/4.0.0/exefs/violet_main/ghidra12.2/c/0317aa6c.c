/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317aa6c; name: FUN_0317aa6c
 */


undefined8 FUN_0317aa6c(void **param_1,undefined8 *param_2)

{
  void *__dest;
  void *__src;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *__dest_00;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  void *__src_00;
  int iVar8;
  void *__dest_01;
  long *plVar9;
  uint uVar10;
  void *local_70;
  undefined8 local_68;
  
  plVar9 = (long *)PTR_PTR_047d1a50;
  local_70 = (void *)0x0;
  local_68 = 0x8000000000000000;
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 < 1) {
    local_70 = (void *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    pvVar7 = (void *)*param_2;
    local_70 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                 (PTR_PTR_047d1a50,(ulong)uVar2 << 6);
    uVar10 = 0;
    local_68 = CONCAT44(uVar2,uVar2);
    __dest_01 = local_70;
    do {
      memcpy(__dest_01,pvVar7,0x30);
      *(undefined8 *)((long)__dest_01 + 0x30) = 0;
      *(undefined8 *)((long)__dest_01 + 0x38) = 0x8000000000000000;
      uVar3 = *(uint *)((long)pvVar7 + 0x38);
      if ((int)uVar3 < 1) {
        *(undefined8 *)((long)__dest_01 + 0x30) = 0;
        *(undefined8 *)((long)__dest_01 + 0x38) = 0x8000000000000000;
      }
      else {
        __src_00 = *(void **)((long)pvVar7 + 0x30);
        __dest_00 = (void *)(**(code **)(*plVar9 + 0x18))(plVar9,(ulong)uVar3 * 0xb8);
        *(void **)((long)__dest_01 + 0x30) = __dest_00;
        uVar1 = uVar3 & 3;
        *(uint *)((long)__dest_01 + 0x38) = uVar3;
        *(uint *)((long)__dest_01 + 0x3c) = uVar3;
        if (2 < uVar3 - 1) {
          iVar8 = -(uVar3 & 0xfffffffc);
          do {
            memcpy(__dest_00,__src_00,0xb8);
            memcpy((void *)((long)__dest_00 + 0xb8),(void *)((long)__src_00 + 0xb8),0xb8);
            memcpy((void *)((long)__dest_00 + 0x170),(void *)((long)__src_00 + 0x170),0xb8);
            __dest = (void *)((long)__dest_00 + 0x228);
            __src = (void *)((long)__src_00 + 0x228);
            __dest_00 = (void *)((long)__dest_00 + 0x2e0);
            __src_00 = (void *)((long)__src_00 + 0x2e0);
            memcpy(__dest,__src,0xb8);
            iVar8 = iVar8 + 4;
            plVar9 = (long *)PTR_PTR_047d1a50;
          } while (iVar8 != 0);
        }
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          memcpy(__dest_00,__src_00,0xb8);
          __src_00 = (void *)((long)__src_00 + 0xb8);
          __dest_00 = (void *)((long)__dest_00 + 0xb8);
        }
      }
      uVar10 = uVar10 + 1;
      pvVar7 = (void *)((long)pvVar7 + 0x40);
      __dest_01 = (void *)((long)__dest_01 + 0x40);
    } while (uVar10 != uVar2);
  }
  if (&local_70 != param_1) {
    if (*(int *)(param_1 + 1) != 0) {
      pvVar7 = *param_1;
      lVar6 = (long)*(int *)(param_1 + 1) << 6;
      do {
        uVar2 = *(uint *)((long)pvVar7 + lVar6 + -4);
        *(undefined4 *)((long)pvVar7 + lVar6 + -8) = 0;
        if ((-1 < (int)uVar2) && (lVar4 = *(long *)((long)pvVar7 + lVar6 + -0x10), lVar4 != 0)) {
          (**(code **)(*plVar9 + 0x20))(plVar9,lVar4,(ulong)uVar2 * 0xb8);
        }
        lVar4 = lVar6 + -0x40;
        *(undefined8 *)((long)pvVar7 + lVar6 + -0x10) = 0;
        *(undefined4 *)((long)pvVar7 + lVar6 + -4) = 0x80000000;
        lVar6 = lVar4;
      } while (lVar4 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != (void *)0x0)) {
      (**(code **)(*plVar9 + 0x20))(plVar9,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) << 6);
    }
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x8000000000000000;
    FUN_0317fa50(&local_70);
    *param_1 = local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (void *)0x0;
    local_68 = 0;
  }
  FUN_0317f8f4(param_1);
  pvVar7 = local_70;
  if ((int)local_68 != 0) {
    lVar6 = (long)(int)local_68 << 6;
    do {
      uVar2 = *(uint *)((long)pvVar7 + lVar6 + -4);
      *(undefined4 *)((long)pvVar7 + lVar6 + -8) = 0;
      if ((-1 < (int)uVar2) && (lVar4 = *(long *)((long)pvVar7 + lVar6 + -0x10), lVar4 != 0)) {
        (**(code **)(*plVar9 + 0x20))(plVar9,lVar4,(ulong)uVar2 * 0xb8);
      }
      lVar4 = lVar6 + -0x40;
      *(undefined8 *)((long)pvVar7 + lVar6 + -0x10) = 0;
      *(undefined4 *)((long)pvVar7 + lVar6 + -4) = 0x80000000;
      lVar6 = lVar4;
    } while (lVar4 != 0);
  }
  lVar6 = local_68;
  uVar5 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_70 != (void *)0x0)) {
    (**(code **)(*plVar9 + 0x20))(plVar9,local_70,uVar5 << 6);
  }
  return 1;
}


