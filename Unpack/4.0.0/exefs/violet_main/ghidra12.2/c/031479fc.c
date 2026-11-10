/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031479fc; name: FUN_031479fc
 */


undefined8 FUN_031479fc(undefined4 **param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  void *__dest;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  void *__src;
  undefined4 *puVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *local_70;
  undefined8 local_68;
  
  puVar4 = PTR_PTR_047d1a50;
  local_70 = (undefined4 *)0x0;
  local_68 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 1) {
    local_70 = (undefined4 *)0x0;
    local_68 = -0x8000000000000000;
  }
  else {
    puVar10 = (undefined4 *)*param_2;
    local_70 = (undefined4 *)
               (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,(ulong)uVar1 * 0x30)
    ;
    uVar12 = 0;
    local_68 = CONCAT44(uVar1,uVar1);
    puVar9 = local_70;
    do {
      *puVar9 = *puVar10;
      puVar9[2] = puVar10[2];
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 0x8000000000000000;
      uVar2 = puVar10[6];
      uVar11 = (ulong)uVar2;
      if ((int)uVar2 < 1) {
        *(undefined8 *)(puVar9 + 4) = 0;
        *(undefined8 *)(puVar9 + 6) = 0x8000000000000000;
      }
      else {
        puVar8 = *(undefined4 **)(puVar10 + 4);
        puVar5 = (undefined4 *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,uVar11 * 0x68);
        *(undefined4 **)(puVar9 + 4) = puVar5;
        puVar9[6] = uVar2;
        puVar9[7] = uVar2;
        do {
          *puVar5 = *puVar8;
          FUN_030db080(puVar5 + 2,puVar8 + 2);
          uVar2 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar2;
          puVar8 = puVar8 + 0x1a;
          puVar5 = puVar5 + 0x1a;
        } while (uVar2 != 0);
      }
      __src = *(void **)(puVar10 + 8);
      if (*(int *)((long)__src + 4) == -2) {
        *(undefined **)(puVar9 + 8) = &DAT_03d7702c;
        iVar13 = 0;
      }
      else {
        iVar13 = puVar10[10];
        uVar11 = -(ulong)(iVar13 + 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar13 + 1U) << 3;
        __dest = (void *)(**(code **)(*(long *)puVar4 + 0x18))(puVar4,uVar11);
        *(void **)(puVar9 + 8) = __dest;
        memcpy(__dest,__src,uVar11);
      }
      uVar12 = uVar12 + 1;
      puVar9[10] = iVar13;
      puVar9 = puVar9 + 0xc;
      puVar10 = puVar10 + 0xc;
    } while (uVar12 != uVar1);
  }
  puVar3 = PTR_DAT_047d1a08;
  if (&local_70 != param_1) {
    if (*(int *)(param_1 + 1) != 0) {
      puVar10 = *param_1;
      puVar9 = puVar10 + (long)*(int *)(param_1 + 1) * 0xc;
      do {
        lVar6 = *(long *)(puVar9 + -4);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
          (**(code **)(puVar3 + 8))(puVar4[8],lVar6,0);
          *(undefined **)(puVar9 + -4) = &DAT_03d7702c;
          puVar9[-2] = 0;
        }
        if (puVar9[-6] != 0) {
          lVar7 = *(long *)(puVar9 + -8);
          lVar6 = (long)(int)puVar9[-6] * 0x68;
          do {
            FUN_030d9a14(lVar7 + -0x60 + lVar6);
            lVar6 = lVar6 + -0x68;
          } while (lVar6 != 0);
        }
        puVar8 = puVar9 + -0xc;
        puVar9[-6] = 0;
        if ((-1 < (int)puVar9[-5]) && (*(long *)(puVar9 + -8) != 0)) {
          (**(code **)(*(long *)puVar4 + 0x20))
                    (puVar4,*(long *)(puVar9 + -8),(ulong)(uint)puVar9[-5] * 0x68);
        }
        *(undefined8 *)(puVar9 + -8) = 0;
        puVar9[-5] = 0x80000000;
        puVar9 = puVar8;
      } while (puVar8 != puVar10);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != (undefined4 *)0x0)) {
      (**(code **)(*(long *)puVar4 + 0x20))
                (puVar4,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x30);
    }
    *param_1 = (undefined4 *)0x0;
    param_1[1] = (undefined4 *)0x8000000000000000;
    FUN_031516bc(&local_70);
    *param_1 = local_70;
    *(int *)(param_1 + 1) = (int)local_68;
    *(uint *)((long)param_1 + 0xc) = local_68._4_4_;
    local_70 = (undefined4 *)0x0;
    local_68 = 0;
  }
  FUN_031515ac(param_1);
  puVar9 = local_70;
  if ((int)local_68 != 0) {
    puVar10 = local_70 + (long)(int)local_68 * 0xc;
    do {
      lVar6 = *(long *)(puVar10 + -4);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 4) != -2)) {
        (**(code **)(puVar3 + 8))(puVar4[8],lVar6,0);
        *(undefined **)(puVar10 + -4) = &DAT_03d7702c;
        puVar10[-2] = 0;
      }
      if (puVar10[-6] != 0) {
        lVar7 = *(long *)(puVar10 + -8);
        lVar6 = (long)(int)puVar10[-6] * 0x68;
        do {
          FUN_030d9a14(lVar7 + -0x60 + lVar6);
          lVar6 = lVar6 + -0x68;
        } while (lVar6 != 0);
      }
      puVar8 = puVar10 + -0xc;
      puVar10[-6] = 0;
      if ((-1 < (int)puVar10[-5]) && (*(long *)(puVar10 + -8) != 0)) {
        (**(code **)(*(long *)puVar4 + 0x20))
                  (puVar4,*(long *)(puVar10 + -8),(ulong)(uint)puVar10[-5] * 0x68);
      }
      *(undefined8 *)(puVar10 + -8) = 0;
      puVar10[-5] = 0x80000000;
      puVar10 = puVar8;
    } while (puVar8 != puVar9);
  }
  lVar6 = local_68;
  uVar11 = (ulong)local_68._4_4_;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_70 != (undefined4 *)0x0)) {
    (**(code **)(*(long *)puVar4 + 0x20))(puVar4,local_70,uVar11 * 0x30);
  }
  return 1;
}


