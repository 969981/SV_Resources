/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02f57af8; name: FUN_02f57af8
 */


void FUN_02f57af8(long *param_1,ulong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar15 = *param_1;
  lVar7 = *(long *)(lVar15 + 0x38);
  iVar4 = *(int *)(lVar7 + (param_2 & 0xffffff) * 0xc0 + 0x80);
  lVar10 = param_1[0x71];
  uVar12 = (uint)param_2;
  if ((*(int *)(lVar15 + 0x818) != 1) && (*(int *)(lVar15 + 0x818) != 0x40)) {
    uVar8 = param_2 & 0xffffffff;
    do {
      uVar8 = (ulong)((uint)uVar8 & 0xffffff);
      if ((*(byte *)(lVar7 + uVar8 * 0xc0 + 0x88) & 1) != 0) {
        lVar7 = lVar7 + uVar8 * 0xc0;
        uVar2 = *(undefined4 *)(lVar7 + 0x50);
        uVar14 = *(undefined8 *)(lVar7 + 0xb0);
        iVar6 = (int)param_1[0x6b];
        lVar7 = (long)iVar6;
        if ((int)(*(uint *)((long)param_1 + 0x35c) & 0x7fffffff) <= iVar6) {
          FUN_02f5f5b8(param_1 + 0x6a,lVar7 + 1);
          iVar6 = (int)param_1[0x6b];
        }
        puVar1 = (undefined8 *)(param_1[0x6a] + (long)iVar6 * 0x20);
        *puVar1 = 0x503000020;
        *(undefined4 *)(puVar1 + 1) = uVar2;
        puVar1[2] = uVar14;
        *(bool *)(puVar1 + 3) = param_3 == 0;
        uVar2 = (undefined4)local_98;
        *(undefined4 *)((long)puVar1 + 0x1c) = local_98._3_4_;
        *(undefined4 *)((long)puVar1 + 0x19) = uVar2;
        *(int *)(param_1 + 0x6b) = (int)(lVar7 + 1);
        lVar7 = *(long *)(lVar15 + 0x38);
      }
      uVar3 = *(uint *)(lVar7 + uVar8 * 0xc0 + 0x84);
      uVar8 = (ulong)uVar3;
    } while (uVar3 != uVar12);
    goto LAB_02f57e80;
  }
  local_98 = 0;
  local_90 = 0x8000000000000000;
  lVar7 = tpidr_el0;
  lVar15 = *(long *)(lVar7 + 0x1000b8);
  if (lVar15 == 0) {
    lVar15 = FUN_00e5d3b4();
    *(long *)(lVar7 + 0x1000b8) = lVar15;
  }
  local_88 = *(long *)(*(long *)(lVar15 + 0x3d0) + 0x10);
  if (*(long *)(local_88 + 8) == 0) {
    local_78 = 0x50;
    local_70 = 0x50;
    if (local_88 == 0) goto LAB_02f57cbc;
    local_68 = 0x80;
    if (*(ulong *)(local_88 + 0x28) < 0x80) {
LAB_02f57bc8:
      local_80 = FUN_031cf3b4(local_88,&local_68);
    }
    else {
      local_80 = *(long *)(local_88 + 0x38);
      if (*(ulong *)(local_88 + 0x40) < local_80 + 0x80U) goto LAB_02f57bc8;
      *(ulong *)(local_88 + 0x38) = local_80 + 0x80U;
    }
  }
  else {
    local_88 = 0;
LAB_02f57cbc:
    local_70 = 0x50;
    local_78 = 0x50;
    local_80 = (**(code **)PTR_DAT_047d1a08)(1,&local_70,0x40);
  }
  puVar5 = PTR_PTR_047d1a50;
  local_90._4_4_ = 0x8000000a;
  lVar7 = *param_1;
  lVar15 = *(long *)(lVar7 + 0x38);
  uVar8 = param_2 & 0xffffffff;
  local_98 = local_80;
  do {
    uVar8 = (ulong)((uint)uVar8 & 0xffffff);
    if ((*(byte *)(lVar15 + uVar8 * 0xc0 + 0x88) & 1) != 0) {
      lVar9 = (long)(int)local_90;
      if ((int)(local_90._4_4_ & 0x7fffffff) <= (int)local_90) {
        FUN_02f0aac8(&local_98,puVar5,lVar9 + 1);
      }
      *(undefined8 *)(local_98 + (long)(int)local_90 * 8) =
           *(undefined8 *)(lVar15 + uVar8 * 0xc0 + 0xb0);
      local_90._0_4_ = (int)(lVar9 + 1);
      lVar15 = *(long *)(lVar7 + 0x38);
    }
    uVar3 = *(uint *)(lVar15 + uVar8 * 0xc0 + 0x84);
    uVar8 = (ulong)uVar3;
  } while (uVar3 != uVar12);
  lVar7 = *param_1;
  if (param_3 == 0) {
    lVar15 = lVar7 + 0x748;
  }
  else {
    lVar15 = lVar7 + 0x750;
  }
  FUN_02f3e808(lVar15,lVar7,local_98,(int)local_90);
  if (local_80 == local_98) {
    local_90._0_4_ = 0;
  }
  if (local_88 == 0) {
    (**(code **)(PTR_DAT_047d1a08 + 8))(1);
  }
  else {
    uVar8 = local_78 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulong *)(local_88 + 0x28) < uVar8) || (*(long *)(local_88 + 0x38) != uVar8 + local_80)) {
      if (local_80 != 0) {
        if (*(ulong *)(local_88 + 0x28) < uVar8 + 0x40) {
          *(int *)(*(long *)(local_88 + 0x30) + 0x20) =
               *(int *)(*(long *)(local_88 + 0x30) + 0x20) + -1;
          (**(code **)(**(long **)(local_88 + 0x10) + 0x18))
                    (*(long **)(local_88 + 0x10),local_80 - *(int *)(local_80 + -4),uVar8 + 0x44);
        }
        else {
          if (*(long *)(local_88 + 0x38) == uVar8 + local_80) {
            *(long *)(local_88 + 0x38) = local_80;
            goto LAB_02f57e54;
          }
          FUN_031cf778();
        }
      }
    }
    else {
      *(long *)(local_88 + 0x38) = local_80;
      if (*(long *)(local_88 + 0x48) == local_80) {
LAB_02f57e54:
        FUN_031cf578();
      }
    }
  }
  uVar3 = local_90._4_4_;
  uVar8 = (ulong)local_90._4_4_;
  local_90 = (ulong)local_90._4_4_ << 0x20;
  if ((-1 < (int)uVar3) && (local_98 != 0)) {
    (**(code **)(*(long *)puVar5 + 0x20))(puVar5,local_98,uVar8 << 3);
  }
LAB_02f57e80:
  if ((char)param_1[0x6c] == '\0') {
    piVar11 = (int *)(lVar10 + (long)iVar4 * 0x20 + 0x10);
    iVar4 = *piVar11;
    if ((param_3 == 0) && (iVar4 != -1)) {
      plVar13 = *(long **)(param_1[0x73] + (long)iVar4 * 8);
      *piVar11 = -1;
      param_2 = param_2 & 0xffffffff;
      do {
        uVar3 = *(uint *)(plVar13 + 1);
        uVar8 = (ulong)uVar3;
        if (0 < (int)uVar3) {
          lVar15 = *plVar13;
          lVar10 = 0;
          lVar7 = 0;
          do {
            if (*(uint *)(lVar15 + lVar7 * 4) == (uint)param_2) {
              if ((int)lVar7 != -1) {
                *(int *)(plVar13 + 1) = (int)((long)(int)uVar3 + -1);
                if ((int)uVar8 != 1) {
                  *(undefined4 *)(lVar15 + (lVar10 >> 0x1e)) =
                       *(undefined4 *)(lVar15 + ((long)(int)uVar3 + -1) * 4);
                }
              }
              break;
            }
            lVar7 = lVar7 + 1;
            lVar10 = lVar10 + 0x100000000;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        uVar3 = *(uint *)(*(long *)(*param_1 + 0x38) + (ulong)((uint)param_2 & 0xffffff) * 0xc0 +
                         0x84);
        param_2 = (ulong)uVar3;
      } while (uVar3 != uVar12);
      *(undefined1 *)((long)plVar13 + 0x24) = 1;
      if (*(char *)((long)plVar13 + 0x25) == '\0') {
        iVar6 = (int)param_1[0x67];
        lVar7 = (long)iVar6;
        if ((int)(*(uint *)((long)param_1 + 0x33c) & 0x7fffffff) <= iVar6) {
          FUN_0133bb88(param_1 + 0x66,PTR_PTR_047d1a50,lVar7 + 1);
          iVar6 = (int)param_1[0x67];
        }
        *(int *)(param_1[0x66] + (long)iVar6 * 4) = iVar4;
        *(int *)(param_1 + 0x67) = (int)(lVar7 + 1);
        *(undefined1 *)((long)plVar13 + 0x25) = 1;
      }
    }
  }
  return;
}


