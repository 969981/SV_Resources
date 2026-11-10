/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00152640; name: FUN_00152640
 */


long FUN_00152640(undefined4 param_1,void *param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,void *param_7,undefined8 param_8)

{
  void *pvVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *__dest;
  long lVar5;
  int iVar6;
  uint uVar7;
  size_t __n;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  iVar6 = (int)param_5;
  if (iVar6 < 0) {
    iVar6 = 1;
  }
  switch(param_1) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 6:
  case 7:
  case 10:
    if (*(code **)(PTR_DAT_047cb870 + 0x60) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001526e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)(PTR_DAT_047cb870 + 0x60))
                        (param_1,param_2,param_3,param_4,param_5,param_6);
      return lVar5;
    }
    FUN_0015c3d0();
    if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
      (**(code **)PTR_PTR_047cb868)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xad7,
                 "OODLE ERROR : Legacy LZ Vtable not installed");
    }
    break;
  case 3:
    pvVar1 = (void *)((long)param_2 + param_3);
    local_68 = 0x200000004;
    local_60 = 0x100000000;
    local_58 = 0;
    lVar5 = param_4;
    if (param_2 < pvVar1) {
      pvVar3 = param_2;
      if (param_7 != (void *)0x0) {
        pvVar3 = param_7;
      }
      do {
        __n = (long)pvVar1 - (long)param_2;
        if (0x3ffff < (long)__n) {
          __n = 0x40000;
        }
        uVar2 = (long)param_2 - (long)pvVar3;
        if (uVar2 == 0) {
          uVar7 = 1;
        }
        else if (((uVar2 & 0x3ffff) == 0) && (*(int *)(param_6 + 8) != 0)) {
          uVar7 = (uint)(((long)*(int *)(param_6 + 0xc) - 1U & uVar2) == 0);
        }
        else {
          uVar7 = 0;
        }
        local_58 = CONCAT44(local_58._4_4_,uVar7);
        __dest = (void *)FUN_0015c610(&local_68,lVar5);
        memcpy(__dest,param_2,__n);
        param_2 = (void *)((long)param_2 + __n);
        lVar5 = (long)__dest + __n;
      } while (param_2 < pvVar1);
    }
    return lVar5 - param_4;
  case 4:
    lVar5 = FUN_00156b40(param_2,param_4,param_3,iVar6,param_6,param_7,param_8);
    return lVar5;
  case 8:
    lVar5 = FUN_0016db80(8,param_2,param_4,param_3,param_5,param_6);
    return lVar5;
  case 9:
    uVar4 = 9;
    goto LAB_001528a8;
  case 0xb:
    uVar4 = 0xb;
LAB_001528a8:
    lVar5 = FUN_001a0970(uVar4,param_2,param_4,param_3,param_5,param_6);
    return lVar5;
  case 0xc:
    lVar5 = FUN_0016dc60(0xc,param_2,param_4,param_3,iVar6,param_6);
    return lVar5;
  case 0xd:
    lVar5 = FUN_001b35d0(0xd,param_2,param_4,param_3,iVar6,param_6);
    return lVar5;
  default:
    FUN_0015c3d0(iVar6);
    if (*(code **)PTR_PTR_047cb868 != (code *)0x0) {
      (**(code **)PTR_PTR_047cb868)
                (0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",0xadd,
                 "OODLE ERROR : invalid compressor : %d\n",param_1);
    }
  }
  FUN_0015c3f0();
  return -1;
}


