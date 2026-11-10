/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051ef00; name: FUN_0051ef00
 */


uint FUN_0051ef00(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *__n;
  void *__s1;
  void *__s2;
  undefined **ppuVar3;
  undefined ***pppuVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 extraout_x1;
  long lVar13;
  undefined ***local_70;
  long *local_68;
  void *local_60;
  undefined **local_58;
  long *local_50;
  void *local_48;
  long local_40;
  undefined *puStack_38;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  lVar13 = *param_1;
  puVar9 = *(ulong **)(lVar13 + 0x30);
  if ((puVar9 != (ulong *)0x0) &&
     (puStack_38 = PTR_LAB_047cd728, local_40 = lVar13, *puVar9 != 0xffffffffffffffff)) {
    local_58 = &puStack_38;
    local_50 = &local_40;
    local_70 = &local_58;
    std::__call_once(puVar9,&local_70,(_func_void_void_ptr *)&LAB_0051d550);
  }
  uVar8 = 1;
  switch(*(undefined4 *)(PTR_DAT_047cd750 + (ulong)*(uint *)(lVar13 + 0x38) * 4)) {
  case 1:
    iVar5 = FUN_004f4d98(extraout_x1,param_2,*param_1);
    iVar6 = FUN_004f4d98(extraout_x1,param_3,*param_1);
    uVar8 = (uint)(iVar5 < iVar6);
    break;
  case 2:
    lVar13 = FUN_004f5110(extraout_x1,param_2,*param_1);
    lVar10 = FUN_004f5110(extraout_x1,param_3,*param_1);
    uVar8 = (uint)(lVar13 < lVar10);
    break;
  case 3:
    uVar8 = FUN_004f5488(extraout_x1,param_2,*param_1);
    uVar7 = FUN_004f5488(extraout_x1,param_3,*param_1);
    uVar8 = (uint)(uVar8 < uVar7);
    break;
  case 4:
    uVar11 = FUN_004f5800(extraout_x1,param_2,*param_1);
    uVar12 = FUN_004f5800(extraout_x1,param_3,*param_1);
    uVar8 = (uint)(uVar11 < uVar12);
    break;
  case 7:
    uVar7 = FUN_004f6278(extraout_x1,param_2,*param_1);
    uVar8 = FUN_004f6278(extraout_x1,param_3,*param_1);
    uVar8 = uVar8 & (uVar7 ^ 1);
    break;
  case 9:
    FUN_004f2fb0(&local_58,extraout_x1,param_2,*param_1);
                    /* try { // try from 0051f0b8 to 0051f0c7 has its CatchHandler @ 0051f1a4 */
    FUN_004f2fb0(&local_70,extraout_x1,param_3,*param_1);
    ppuVar3 = local_58;
    pppuVar4 = local_70;
    plVar1 = (long *)((ulong)local_70 >> 1 & 0x7f);
    if (((ulong)local_70 & 1) != 0) {
      plVar1 = local_68;
    }
    plVar2 = (long *)((ulong)local_58 >> 1 & 0x7f);
    if (((ulong)local_58 & 1) != 0) {
      plVar2 = local_50;
    }
    __n = plVar1;
    if (plVar2 <= plVar1) {
      __n = plVar2;
    }
    if (__n == (long *)0x0) {
LAB_0051f168:
      uVar8 = 0;
      if (plVar2 < plVar1) {
        uVar8 = 0xffffffff;
      }
    }
    else {
      __s1 = (void *)((ulong)&local_58 | 1);
      if (((ulong)local_58 & 1) != 0) {
        __s1 = local_48;
      }
      __s2 = (void *)((ulong)&local_70 | 1);
      if (((ulong)local_70 & 1) != 0) {
        __s2 = local_60;
      }
      uVar8 = memcmp(__s1,__s2,(size_t)__n);
      if (uVar8 == 0) goto LAB_0051f168;
    }
    if (((ulong)pppuVar4 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_60);
      ppuVar3 = local_58;
    }
    uVar8 = uVar8 >> 0x1f;
    if (((ulong)ppuVar3 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_48);
    }
  }
  return uVar8 & 1;
}


