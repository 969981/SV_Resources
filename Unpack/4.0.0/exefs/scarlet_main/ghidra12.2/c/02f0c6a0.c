/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f0c6a0; name: FUN_02f0c6a0
 */


undefined8 FUN_02f0c6a0(long *param_1,void *param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  void *__src;
  long lVar9;
  long local_58;
  
  uVar1 = *(uint *)(param_1 + 1);
  __src = (void *)*param_1;
  uVar5 = param_3;
  if (param_3 <= *(uint *)((long)param_1 + 0x24) && param_3 < uVar1) {
    do {
      if (*(int *)((long)__src + (long)(int)uVar5 * 0x38 + 0x14) != 0x7fffffff) {
        return 0x80040200;
      }
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  lVar9 = param_1[2];
  uVar5 = uVar1;
  if (param_3 <= uVar1) {
    uVar5 = param_3;
  }
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
    iVar3 = param_4;
    if (param_4 < 0x11) {
      iVar3 = 0x10;
    }
    iVar3 = iVar3 + param_3 * 0x38 + -0x10;
    *(int *)(param_1 + 3) = iVar3;
    local_58 = (long)iVar3;
    lVar2 = (**(code **)PTR_DAT_047d1a08)(0,&local_58,0);
    param_1[2] = lVar2;
    param_2 = (void *)(lVar2 + (param_4 + -1) & (long)-param_4);
  }
  else {
    param_1[2] = 0;
  }
  if (__src != (void *)0x0) {
    if (lVar9 == 0) {
      if (*(int *)((long)param_1 + 0xc) < 0) {
        if (param_2 != __src) {
          memmove(param_2,__src,(ulong)uVar5 * 0x38);
        }
      }
      else {
        memcpy(param_2,__src,(ulong)uVar5 * 0x38);
        *(undefined4 *)(param_1 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x38);
        }
        *param_1 = 0;
        *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
      }
    }
    else {
      memcpy(param_2,__src,(ulong)uVar5 * 0x38);
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar9,0);
    }
  }
  *param_1 = (long)param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_3 | 0x80000000;
  if (uVar1 < param_3) {
    *(undefined4 *)((long)param_2 + (long)(int)uVar1 * 0x38 + 0x14) = 0x7fffffff;
    uVar5 = uVar1 + 1;
    if (uVar5 != param_3) {
      if ((~uVar1 + param_3 & 1) != 0) {
        *(undefined4 *)(*param_1 + (long)(int)uVar5 * 0x38 + 0x14) = 0x7fffffff;
        uVar5 = uVar1 + 2;
      }
      if (param_3 - 2 != uVar1) {
        do {
          *(undefined4 *)(*param_1 + (long)(int)uVar5 * 0x38 + 0x14) = 0x7fffffff;
          iVar3 = uVar5 + 1;
          uVar5 = uVar5 + 2;
          *(undefined4 *)(*param_1 + (long)iVar3 * 0x38 + 0x14) = 0x7fffffff;
        } while (param_3 != uVar5);
      }
    }
    uVar5 = uVar1;
    if ((param_3 - uVar1 & 1) != 0) {
      uVar5 = uVar1 + 1;
      *(uint *)(*param_1 + (long)(int)uVar1 * 0x38 + 0x18) = uVar5;
    }
    if (~uVar1 + param_3 != 0) {
      do {
        lVar9 = (long)(int)uVar5;
        iVar3 = uVar5 + 1;
        uVar5 = uVar5 + 2;
        *(int *)(*param_1 + lVar9 * 0x38 + 0x18) = iVar3;
        *(uint *)(*param_1 + (long)iVar3 * 0x38 + 0x18) = uVar5;
      } while (param_3 != uVar5);
    }
    *(undefined4 *)(*param_1 + (long)(int)(param_3 - 1) * 0x38 + 0x18) = 0xffffffff;
    uVar5 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 != 0) {
      uVar4 = uVar5 & 0xffffff;
      if (uVar4 == 0xffffff) {
        *(uint *)((long)param_1 + 0x1c) = uVar5 & 0xff000000 | uVar1 & 0xffffff;
        return 0;
      }
      do {
        puVar8 = (uint *)(*param_1 + (long)(int)uVar4 * 0x38 + 0x18);
        uVar4 = *puVar8;
      } while (uVar4 != 0xffffffff);
      *puVar8 = uVar1;
      return 0;
    }
    *(uint *)((long)param_1 + 0x1c) = uVar5 & 0xff000000;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
    if (0 < (int)param_1[1]) {
      uVar6 = 0;
      uVar7 = 0;
      lVar9 = 0x14;
      do {
        uVar5 = (uint)uVar6;
        if (*(int *)(*param_1 + lVar9) == 0x7fffffff) {
          if ((~*(uint *)((long)param_1 + 0x1c) & 0xffffff) == 0) {
            *(uint *)((long)param_1 + 0x1c) =
                 *(uint *)((long)param_1 + 0x1c) & 0xff000000 | uVar5 & 0xffffff;
          }
          else {
            *(uint *)(*param_1 + (long)(int)uVar7 * 0x38 + 0x18) = uVar5;
          }
          uVar7 = uVar6 & 0xffffffff;
        }
        else {
          *(uint *)((long)param_1 + 0x24) = uVar5;
        }
        uVar6 = uVar6 + 1;
        lVar9 = lVar9 + 0x38;
      } while ((long)uVar6 < (long)(int)param_1[1]);
      if (0 < (int)uVar7) {
        *(undefined4 *)(*param_1 + uVar7 * 0x38 + 0x18) = 0xffffffff;
        return 0;
      }
    }
  }
  return 0;
}


