/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c4b05c; name: FUN_00c4b05c
 */


void FUN_00c4b05c(long *param_1,void *param_2,void *param_3,long param_4)

{
  void *pvVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  size_t __n;
  long lVar8;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *plStack_58;
  
  __n = param_4 - (long)param_3;
  if (0 < (long)__n) {
    plVar2 = (long *)param_1[1];
    lVar8 = (long)__n >> 3;
    if (param_1[2] - (long)plVar2 >> 3 < lVar8) {
      lVar5 = *param_1;
      uVar6 = param_1[4];
      uVar3 = lVar8 + ((long)plVar2 - lVar5 >> 3);
      if (0x7ffffffffffffffe < uVar6) {
        uVar6 = 0x7fffffffffffffff;
      }
      if (uVar6 < uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = param_1[2] - lVar5;
      uVar4 = lVar8 >> 2;
      if (uVar3 <= uVar4) {
        uVar3 = uVar4;
      }
      plVar2 = param_1 + 3;
      local_60 = (long *)0x0;
      if (uVar6 >> 1 <= (ulong)(lVar8 >> 3)) {
        uVar3 = uVar6;
      }
      plStack_58 = plVar2;
      if (uVar3 == 0) {
        local_78 = (long *)0x0;
      }
      else {
        local_78 = (long *)(**(code **)(*(long *)*plVar2 + 0x10))((long *)*plVar2,uVar3 << 3,8);
        if (local_78 == (long *)0x0) {
          (**(code **)(*(long *)*plVar2 + 0xe8))();
        }
      }
      local_70 = local_78 + ((long)param_2 - lVar5 >> 3);
      local_60 = local_78 + uVar3;
      local_68 = local_70;
      FUN_028f9bd0(&local_78,param_3,param_4);
      FUN_028f9cfc(param_1,&local_78,param_2);
      plVar2 = local_78;
      if ((long)local_68 - (long)local_70 != 0) {
        local_68 = local_68 + (((long)local_68 - (long)local_70) - 8U >> 3 ^ 0xffffffffffffffff);
      }
      if (local_78 != (long *)0x0) {
        lVar8 = (long)local_60 - (long)local_78;
        plVar7 = (long *)*plStack_58;
        uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
        if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar7 + 0x18))(plVar7,plVar2,lVar8,8);
        }
        else {
          FUN_00c48fe8(plVar7,plVar2,lVar8,8);
        }
      }
    }
    else {
      lVar5 = (long)plVar2 - (long)param_2 >> 3;
      if (lVar8 <= lVar5) {
        FUN_028f9960(param_1,param_2,plVar2,(void *)((long)param_2 + lVar8 * 8));
LAB_00c4b210:
        memmove(param_2,param_3,__n);
        return;
      }
      pvVar1 = (void *)((long)param_3 + lVar5 * 8);
      local_68 = plVar2 + (lVar8 - lVar5);
      local_78 = param_1;
      local_70 = plVar2;
      FUN_028f9ab0(param_1 + 3,pvVar1,param_4,&local_70);
      local_78[1] = (long)local_70;
      if (0 < (long)plVar2 - (long)param_2) {
        __n = (long)pvVar1 - (long)param_3;
        FUN_028f9960(param_1,param_2,plVar2,(void *)((long)param_2 + lVar8 * 8));
        if (__n != 0) goto LAB_00c4b210;
      }
    }
  }
  return;
}


