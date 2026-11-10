/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7684c; name: FUN_00d7684c
 */


void FUN_00d7684c(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *__src;
  int iVar9;
  long *plVar10;
  ulong *local_b8;
  undefined8 local_b0;
  long local_a8;
  long *local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  long *local_80;
  long lStack_78;
  long local_70;
  ulong uStack_68;
  
  uVar3 = param_1[1];
  if (uVar3 < param_2) {
    uVar6 = param_1[2] * 0x40;
    uVar7 = param_2 - uVar3;
    if (uVar6 < uVar7 || uVar6 - uVar7 < uVar3) {
      plVar10 = param_1 + 3;
      local_a0 = (long *)*plVar10;
      local_98 = param_1[4];
      local_88 = local_88 & 0xffffffff00000000;
      local_a8 = 0;
      local_90 = 0;
      uVar3 = 0x7fffffffffffffff;
      if (local_98 < 0x1ffffffffffffff) {
        uVar3 = local_98 << 6;
      }
      local_b8 = (ulong *)0x0;
      local_b0 = 0;
      if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar6 < uVar3 >> 1) {
        uVar6 = param_1[2] << 7;
        uVar3 = param_2 + 0x3f & 0xffffffffffffffc0;
        if (uVar3 <= uVar6) {
          uVar3 = uVar6;
        }
      }
      FUN_00d76af4(&local_b8,uVar3);
      puVar8 = local_b8;
      __src = (ulong *)*param_1;
      uVar3 = param_1[1];
      local_b0 = uVar3 + uVar7;
      if ((long)uVar3 < 1) {
        uVar6 = 0;
      }
      else {
        uVar5 = uVar3 >> 6;
        memmove(local_b8,__src,uVar5 << 3);
        puVar8 = puVar8 + uVar5;
        uVar6 = uVar3 & 0x3f;
        if (uVar6 != 0) {
          uVar3 = 0xffffffffffffffff >> (-uVar6 & 0x3f);
          *puVar8 = *puVar8 & (uVar3 ^ 0xffffffffffffffff) | __src[uVar5] & uVar3;
        }
        __src = (ulong *)*param_1;
        uVar3 = param_1[1];
      }
      *param_1 = (long)local_b8;
      param_1[1] = local_b0;
      lVar4 = param_1[2];
      param_1[2] = local_a8;
      plVar1 = (long *)*plVar10;
      lStack_78 = param_1[4];
      local_70 = param_1[5];
      uStack_68 = param_1[6];
      param_1[5] = local_90;
      param_1[6] = local_88;
      *plVar10 = (long)local_a0;
      param_1[4] = local_98;
      local_b0 = uVar3;
      local_a8 = lVar4;
      local_a0 = plVar1;
      local_98 = lStack_78;
      local_90 = local_70;
      local_88 = uStack_68;
      local_80 = plVar1;
      if (__src != (ulong *)0x0) {
        local_b8 = __src;
        uVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if (((uVar3 & 1) == 0) || (lVar2 = FUN_00c4e600(), *(int *)(lVar2 + 0x12c8) < 1)) {
          (**(code **)(*plVar1 + 0x18))(plVar1,__src,lVar4 << 3,1);
          __src = local_b8;
        }
        else {
          FUN_00c48fe8(plVar1,__src,lVar4 << 3,1);
          __src = local_b8;
        }
      }
    }
    else {
      uVar6 = (ulong)((uint)uVar3 & 0x3f);
      param_1[1] = param_2;
      puVar8 = (ulong *)(*param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8));
      __src = local_b8;
    }
    local_b8 = puVar8;
    if (uVar7 != 0) {
      iVar9 = (int)uVar6;
      if ((param_3 & 1) == 0) {
        puVar8 = local_b8;
        if (iVar9 != 0) {
          uVar5 = (ulong)(0x40 - iVar9);
          uVar3 = uVar7;
          if (uVar5 <= uVar7) {
            uVar3 = uVar5;
          }
          uVar7 = uVar7 - uVar3;
          puVar8 = local_b8 + 1;
          *local_b8 = *local_b8 &
                      (0xffffffffffffffffU >> (uVar5 - uVar3 & 0x3f) & -1L << uVar6 ^
                      0xffffffffffffffff);
        }
        uVar3 = uVar7 >> 6;
        local_b8 = __src;
        memset(puVar8,0,uVar3 << 3);
        if ((uVar7 & 0x3f) != 0) {
          puVar8[uVar3] =
               puVar8[uVar3] &
               (0xffffffffffffffffU >> (-(uVar7 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
        }
      }
      else {
        uVar3 = local_b0 >> 0x20;
        local_b0 = CONCAT44((int)uVar3,iVar9);
        FUN_00d77870(&local_b8,uVar7);
      }
    }
  }
  else {
    param_1[1] = param_2;
  }
  return;
}


