/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00174c80; name: FUN_00174c80
 */


long FUN_00174c80(uint *param_1,ulong param_2,ulong *param_3,long param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar6 = param_2 - (long)param_1;
  if (lVar6 < 2) {
    FUN_0015c3d0();
    pcVar5 = *(code **)PTR_PTR_047cb868;
    if (pcVar5 == (code *)0x0) goto LAB_00174eb8;
    pcVar4 = "OODLE ERROR : corruption : 2 <= rrPtrDiff( from_end - from_ptr )\n";
    uVar3 = 0x30a;
  }
  else {
    bVar2 = (byte)*param_1;
    if ((char)bVar2 < '\0') {
      bVar2 = bVar2 >> 4 & 7;
      if (bVar2 == 0) {
        uVar8 = ((ulong)(ushort)*param_1 & 0xf) << 8 | (ulong)(ushort)((ushort)*param_1 >> 8);
        if (param_4 < (long)uVar8) {
          return -1;
        }
        uVar7 = (long)param_1 + uVar8 + 2;
        if (param_2 < uVar7) {
          return -1;
        }
        goto LAB_00174e48;
      }
      if (3 < lVar6) {
        if (5 < bVar2) {
          return -1;
        }
        uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
        uVar7 = (ulong)((uVar1 >> 0x10 | uVar1 << 0x10) >> 8 & 0x3ff);
        uVar8 = (long)param_1 + uVar7 + 3;
        if (param_2 < uVar8) {
          return -1;
        }
        uVar7 = uVar7 + ((uVar1 & 0xffff) >> 2 & 0x3ff) + 1;
        if (param_4 < (long)uVar7) {
          return -1;
        }
        *param_3 = uVar7;
        return uVar8 - (long)param_1;
      }
      FUN_0015c3d0();
      pcVar5 = *(code **)PTR_PTR_047cb868;
      if (pcVar5 == (code *)0x0) goto LAB_00174eb8;
      pcVar4 = "OODLE ERROR : corruption : 4 <= rrPtrDiff( from_end - from_ptr )\n";
      uVar3 = 0x327;
    }
    else {
      if (3 < lVar6) {
        if (((uint)(int)(char)bVar2 >> 4 & 0xf) == 0) {
          uVar1 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
          if ((uVar1 & 0xffff) >> 10 != 0) {
            return -1;
          }
          uVar8 = (ulong)((uVar1 >> 0x10 | uVar1 << 0x10) >> 8 & 0x3ffff);
          if (param_4 < (long)uVar8) {
            return -1;
          }
          if ((long)(param_2 - ((long)param_1 + 3)) < (long)uVar8) {
            return -1;
          }
          *param_3 = uVar8;
          return ((long)param_1 + 3 + uVar8) - (long)param_1;
        }
        if (lVar6 < 5) {
          return -1;
        }
        if (0x5f < bVar2) {
          return -1;
        }
        uVar1 = (*(uint *)((long)param_1 + 1) & 0xff00ff00) >> 8 |
                (*(uint *)((long)param_1 + 1) & 0xff00ff) << 8;
        uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
        uVar7 = (ulong)uVar1 & 0x3ffff;
        if ((long)(param_2 - ((long)param_1 + 5)) < (long)uVar7) {
          return -1;
        }
        uVar8 = (ulong)(CONCAT14(bVar2,uVar1) >> 0x12) & 0x3ffff;
        if (param_4 <= (long)uVar8) {
          return -1;
        }
        if (uVar8 < uVar7) {
          return -1;
        }
        uVar8 = uVar8 + 1;
        uVar7 = (long)param_1 + 5 + uVar7;
LAB_00174e48:
        *param_3 = uVar8;
        return uVar7 - (long)param_1;
      }
      if (lVar6 != 3) {
        return -1;
      }
      if ((bVar2 == 0 && *(char *)((long)param_1 + 1) == '\0') &&
          *(char *)((long)param_1 + 2) == '\0') {
        *param_3 = 0;
        return 3;
      }
      FUN_0015c3d0();
      pcVar5 = *(code **)PTR_PTR_047cb868;
      if (pcVar5 == (code *)0x0) goto LAB_00174eb8;
      pcVar4 = "OODLE ERROR : corruption : header == 0\n";
      uVar3 = 0x355;
    }
  }
  (*pcVar5)(0,"v:\\devel\\projects\\oodle2\\core\\newlz_arrays.cpp",uVar3,pcVar4);
LAB_00174eb8:
  FUN_0015c3f0();
  return -1;
}


