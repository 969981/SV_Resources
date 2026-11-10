/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00175150; name: FUN_00175150
 */


long FUN_00175150(uint param_1,long *param_2,uint *param_3,long param_4,long *param_5,long param_6,
                 long param_7,long param_8)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  
  if (5 < param_1) {
    return -1;
  }
  if ((char)*param_3 < '\0') {
    if (3 < param_4 - (long)param_3) {
      lVar8 = (long)param_3 + 3;
      uVar2 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
      uVar9 = (ulong)((uVar2 >> 0x10 | uVar2 << 0x10) >> 8 & 0x3ff);
      if (param_4 - lVar8 < (long)uVar9) {
        return -1;
      }
      lVar1 = uVar9 + ((uVar2 & 0xffff) >> 2 & 0x3ff) + 1;
      if (param_6 < lVar1) {
        return -1;
      }
      lVar3 = *param_2;
      goto joined_r0x00175214;
    }
    FUN_0015c3d0();
    pcVar7 = *(code **)PTR_PTR_047cb868;
    if (pcVar7 == (code *)0x0) goto LAB_00175338;
    pcVar5 = "OODLE ERROR : corruption : 4 <= rrPtrDiff( from_end - from_ptr )\n";
    uVar4 = 0x3ad;
  }
  else {
    if (4 < param_4 - (long)param_3) {
      uVar2 = (*(uint *)((long)param_3 + 1) & 0xff00ff00) >> 8 |
              (*(uint *)((long)param_3 + 1) & 0xff00ff) << 8;
      uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
      lVar8 = (long)param_3 + 5;
      uVar9 = (ulong)uVar2 & 0x3ffff;
      if (param_4 - lVar8 < (long)uVar9) {
        return -1;
      }
      uVar6 = (ulong)(CONCAT14((char)*param_3,uVar2) >> 0x12) & 0x3ffff;
      if (param_6 <= (long)uVar6) {
        return -1;
      }
      if (uVar6 < uVar9) {
        return -1;
      }
      lVar1 = uVar6 + 1;
      lVar3 = *param_2;
joined_r0x00175214:
      if (lVar3 == param_7) {
        if (param_8 - param_7 < lVar1) {
          return -1;
        }
        param_7 = param_7 + lVar1;
      }
      if (param_1 == 1) {
        uVar6 = FUN_0017b290(lVar8,uVar9,lVar3,lVar1,param_7,param_8);
      }
      else if (param_1 == 3) {
        uVar6 = FUN_00175af0(lVar8,uVar9,lVar3,lVar1,param_7,param_8);
      }
      else if (param_1 == 5) {
        uVar6 = FUN_0017f950(lVar8,uVar9,lVar3,lVar1,param_7,param_8);
      }
      else {
        uVar6 = FUN_00177150(lVar8,uVar9,lVar3,lVar1,param_1 == 4);
      }
      if (uVar9 == uVar6) {
        *param_5 = lVar1;
        return (lVar8 + uVar9) - (long)param_3;
      }
      return -1;
    }
    FUN_0015c3d0();
    pcVar7 = *(code **)PTR_PTR_047cb868;
    if (pcVar7 == (code *)0x0) goto LAB_00175338;
    pcVar5 = "OODLE ERROR : corruption : 5 <= rrPtrDiff( from_end - from_ptr )\n";
    uVar4 = 0x3cd;
  }
  (*pcVar7)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",uVar4,pcVar5);
LAB_00175338:
  FUN_0015c3f0();
  return -1;
}


