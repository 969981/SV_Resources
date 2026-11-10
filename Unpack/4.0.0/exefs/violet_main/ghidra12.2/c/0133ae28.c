/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0133ae28; name: FUN_0133ae28
 */


undefined8 FUN_0133ae28(long *param_1,void *param_2,uint param_3,int param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  void *__src;
  long lVar10;
  long local_48;
  
  uVar1 = *(uint *)(param_1 + 1);
  __src = (void *)*param_1;
  uVar4 = param_3;
  if (param_3 <= *(uint *)((long)param_1 + 0x24) && param_3 < uVar1) {
    do {
      if (*(char *)((long)__src + (long)(int)uVar4 * 0x70 + 0x38) != -1) {
        return 0x80040200;
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  lVar10 = param_1[2];
  uVar4 = uVar1;
  if (param_3 <= uVar1) {
    uVar4 = param_3;
  }
  if ((param_2 == (void *)0x0) && (param_3 != 0)) {
    iVar3 = param_4;
    if (param_4 < 0x11) {
      iVar3 = 0x10;
    }
    iVar3 = iVar3 + param_3 * 0x70 + -0x10;
    *(int *)(param_1 + 3) = iVar3;
    local_48 = (long)iVar3;
    lVar2 = (**(code **)PTR_DAT_047d1a08)(0,&local_48,0);
    param_1[2] = lVar2;
    param_2 = (void *)(lVar2 + (param_4 + -1) & (long)-param_4);
  }
  else {
    param_1[2] = 0;
  }
  if (__src != (void *)0x0) {
    if (lVar10 == 0) {
      if (*(int *)((long)param_1 + 0xc) < 0) {
        if (param_2 != __src) {
          memmove(param_2,__src,(ulong)uVar4 * 0x70);
        }
      }
      else {
        memcpy(param_2,__src,(ulong)uVar4 * 0x70);
        *(undefined4 *)(param_1 + 1) = 0;
        if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
          (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                    (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x70);
        }
        *param_1 = 0;
        *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
      }
    }
    else {
      memcpy(param_2,__src,(ulong)uVar4 * 0x70);
      (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar10,0);
    }
  }
  *param_1 = (long)param_2;
  *(uint *)(param_1 + 1) = param_3;
  *(uint *)((long)param_1 + 0xc) = param_3 | 0x80000000;
  if (uVar1 < param_3) {
    puVar9 = (undefined4 *)((long)param_2 + (long)(int)uVar1 * 0x70);
    *puVar9 = 0;
    FUN_00cb4dc0(0x411cf5c3,puVar9,1);
    *(undefined1 *)(puVar9 + 0xe) = 0xff;
    uVar4 = uVar1;
    while (uVar4 = uVar4 + 1, uVar4 != param_3) {
      puVar9 = (undefined4 *)(*param_1 + (long)(int)uVar4 * 0x70);
      *puVar9 = 0;
      FUN_00cb4dc0(0x411cf5c3,puVar9,1);
      *(undefined1 *)(puVar9 + 0xe) = 0xff;
    }
    uVar4 = uVar1;
    if ((param_3 - uVar1 & 1) != 0) {
      uVar4 = uVar1 + 1;
      *(uint *)(*param_1 + (long)(int)uVar1 * 0x70) = uVar4;
    }
    if (~uVar1 + param_3 != 0) {
      do {
        lVar10 = (long)(int)uVar4;
        iVar3 = uVar4 + 1;
        uVar4 = uVar4 + 2;
        *(int *)(*param_1 + lVar10 * 0x70) = iVar3;
        *(uint *)(*param_1 + (long)iVar3 * 0x70) = uVar4;
      } while (param_3 != uVar4);
    }
    *(undefined4 *)(*param_1 + (long)(int)(param_3 - 1) * 0x70) = 0xffffffff;
    uVar4 = *(uint *)((long)param_1 + 0x1c);
    if (uVar1 != 0) {
      uVar5 = uVar4 & 0xffffff;
      if (uVar5 == 0xffffff) {
        *(uint *)((long)param_1 + 0x1c) = uVar4 & 0xff000000 | uVar1 & 0xffffff;
        return 0;
      }
      do {
        puVar8 = (uint *)(*param_1 + (long)(int)uVar5 * 0x70);
        uVar5 = *puVar8;
      } while (uVar5 != 0xffffffff);
      *puVar8 = uVar1;
      return 0;
    }
    *(uint *)((long)param_1 + 0x1c) = uVar4 & 0xff000000;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *)((long)param_1 + 0x24) = 0xffffffff;
    if (0 < (int)param_1[1]) {
      uVar6 = 0;
      uVar7 = 0;
      lVar10 = 0x38;
      do {
        uVar4 = (uint)uVar6;
        if (*(char *)(*param_1 + lVar10) == -1) {
          if ((~*(uint *)((long)param_1 + 0x1c) & 0xffffff) == 0) {
            *(uint *)((long)param_1 + 0x1c) =
                 *(uint *)((long)param_1 + 0x1c) & 0xff000000 | uVar4 & 0xffffff;
          }
          else {
            *(uint *)(*param_1 + (long)(int)uVar7 * 0x70) = uVar4;
          }
          uVar7 = uVar6 & 0xffffffff;
        }
        else {
          *(uint *)((long)param_1 + 0x24) = uVar4;
        }
        uVar6 = uVar6 + 1;
        lVar10 = lVar10 + 0x70;
      } while ((long)uVar6 < (long)(int)param_1[1]);
      if (0 < (int)uVar7) {
        *(undefined4 *)(*param_1 + uVar7 * 0x70) = 0xffffffff;
        return 0;
      }
    }
  }
  return 0;
}


