/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f1c3ec; name: FUN_02f1c3ec
 */


undefined8 FUN_02f1c3ec(long *param_1,void *param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  void *__src;
  long lVar9;
  long local_70;
  undefined4 local_64;
  
  uVar1 = *(uint *)(param_1 + 1);
  __src = (void *)*param_1;
  uVar5 = param_3;
  if (param_3 <= *(uint *)((long)param_1 + 0x24) && param_3 < uVar1) {
    do {
      if (0.0 <= *(float *)((long)__src + (long)(int)uVar5 * 0x50 + 0x28)) {
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
    iVar3 = iVar3 + param_3 * 0x50 + -0x10;
    *(int *)(param_1 + 3) = iVar3;
    local_70 = (long)iVar3;
    lVar2 = (**(code **)PTR_DAT_047d1a08)(0,&local_70,0);
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
          memmove(param_2,__src,(ulong)uVar5 * 0x50);
        }
      }
      else {
        memcpy(param_2,__src,(ulong)uVar5 * 0x50);
        *(undefined4 *)(param_1 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x50);
        }
        *param_1 = 0;
        *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
      }
    }
    else {
      memcpy(param_2,__src,(ulong)uVar5 * 0x50);
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar9,0);
    }
  }
  *param_1 = (long)param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_3 | 0x80000000;
  if (uVar1 < param_3) {
    uVar5 = uVar1;
    while( true ) {
      param_2 = (void *)((long)param_2 + (long)(int)uVar5 * 0x50);
      memset(param_2,0,0x50);
      local_64 = 0;
      FUN_00cb06cc((long)param_2 + 0x19,&local_64);
      *(undefined4 *)((long)param_2 + 0x1a) = 0x3f003f00;
      *(undefined2 *)((long)param_2 + 0x20) = 0x201;
      *(undefined4 *)((long)param_2 + 0x2c) = 0x3f800000;
      *(undefined8 *)((long)param_2 + 0x24) = 0xbf8000003d4ccccd;
      *(undefined1 *)((long)param_2 + 0x30) = 0;
      *(undefined2 *)((long)param_2 + 0x32) = 0x3f80;
      *(undefined2 *)((long)param_2 + 0x3a) = 0x40a0;
      if (param_3 - 1 == uVar5) break;
      param_2 = (void *)*param_1;
      uVar5 = uVar5 + 1;
    }
    uVar5 = uVar1;
    if ((param_3 - uVar1 & 1) != 0) {
      uVar5 = uVar1 + 1;
      *(uint *)(*param_1 + (long)(int)uVar1 * 0x50 + 0x10) = uVar5;
    }
    if (~uVar1 + param_3 != 0) {
      do {
        lVar9 = (long)(int)uVar5;
        iVar3 = uVar5 + 1;
        uVar5 = uVar5 + 2;
        *(int *)(*param_1 + lVar9 * 0x50 + 0x10) = iVar3;
        *(uint *)(*param_1 + (long)iVar3 * 0x50 + 0x10) = uVar5;
      } while (param_3 != uVar5);
    }
    *(undefined4 *)(*param_1 + (long)(int)(param_3 - 1) * 0x50 + 0x10) = 0xffffffff;
    uVar5 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 != 0) {
      uVar4 = uVar5 & 0xffffff;
      if (uVar4 == 0xffffff) {
        *(uint *)((long)param_1 + 0x1c) = uVar5 & 0xff000000 | uVar1 & 0xffffff;
        return 0;
      }
      do {
        puVar7 = (uint *)(*param_1 + (long)(int)uVar4 * 0x50 + 0x10);
        uVar4 = *puVar7;
      } while (uVar4 != 0xffffffff);
      *puVar7 = uVar1;
      return 0;
    }
    *(uint *)((long)param_1 + 0x1c) = uVar5 & 0xff000000;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
    if (0 < (int)param_1[1]) {
      uVar6 = 0;
      uVar8 = 0;
      lVar9 = 0x28;
      do {
        uVar5 = (uint)uVar6;
        if (0.0 <= *(float *)(*param_1 + lVar9)) {
          *(uint *)((long)param_1 + 0x24) = uVar5;
        }
        else {
          if ((~*(uint *)((long)param_1 + 0x1c) & 0xffffff) == 0) {
            *(uint *)((long)param_1 + 0x1c) =
                 *(uint *)((long)param_1 + 0x1c) & 0xff000000 | uVar5 & 0xffffff;
          }
          else {
            *(uint *)(*param_1 + (long)(int)uVar8 * 0x50 + 0x10) = uVar5;
          }
          uVar8 = uVar6 & 0xffffffff;
        }
        uVar6 = uVar6 + 1;
        lVar9 = lVar9 + 0x50;
      } while ((long)uVar6 < (long)(int)param_1[1]);
      if (0 < (int)uVar8) {
        *(undefined4 *)(*param_1 + uVar8 * 0x50 + 0x10) = 0xffffffff;
        return 0;
      }
    }
  }
  return 0;
}


