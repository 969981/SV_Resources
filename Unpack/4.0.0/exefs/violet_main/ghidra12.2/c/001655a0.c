/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001655a0; name: FUN_001655a0
 */


long FUN_001655a0(undefined8 *param_1,uint *param_2,ulong param_3,ulong *param_4,long param_5,
                 ulong param_6)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  long lVar6;
  void *pvVar7;
  ulong uVar8;
  
  lVar6 = param_3 - (long)param_2;
  if (lVar6 < 2) {
    FUN_0015c3d0();
    pcVar5 = *(code **)PTR_PTR_047cb868;
    if (pcVar5 == (code *)0x0) goto LAB_0016576c;
    pcVar4 = "OODLE ERROR : corruption : 2 <= rrPtrDiff( from_end - from_ptr )\n";
    uVar3 = 0x35;
  }
  else {
    bVar1 = (byte)*param_2;
    if ((char)bVar1 < '\0') {
      uVar2 = bVar1 >> 4 & 7;
      if ((bVar1 >> 4 & 7) == 0) {
        pvVar7 = (void *)((long)param_2 + 2);
        uVar8 = ((ulong)(ushort)*param_2 & 0xf) << 8 | (ulong)(ushort)((ushort)*param_2 >> 8);
        if (param_5 < (long)uVar8) {
          return -1;
        }
        if (param_3 < (long)pvVar7 + uVar8) {
          return -1;
        }
        if ((param_6 & 1) == 0) {
          *param_1 = pvVar7;
        }
        else {
          memmove((void *)*param_1,pvVar7,uVar8);
        }
        *param_4 = uVar8;
        return ((long)pvVar7 + uVar8) - (long)param_2;
      }
LAB_0016566c:
      lVar6 = FUN_00175150(uVar2,param_1,param_2,param_3,param_4,param_5);
      return lVar6;
    }
    if (3 < lVar6) {
      if (bVar1 >> 4 == 0) {
        pvVar7 = (void *)((long)param_2 + 3);
        uVar2 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
        if (((uVar2 & 0xffff) >> 10 != 0) ||
           (uVar8 = (ulong)((uVar2 >> 0x10 | uVar2 << 0x10) >> 8 & 0x3ffff), param_5 < (long)uVar8))
        {
          return -1;
        }
        if ((long)(param_3 - (long)pvVar7) < (long)uVar8) {
          return -1;
        }
        if ((param_6 & 1) == 0) {
          *param_1 = pvVar7;
        }
        else {
          memmove((void *)*param_1,pvVar7,uVar8);
        }
        *param_4 = uVar8;
        return (long)pvVar7 + (uVar8 - (long)param_2);
      }
      uVar2 = (uint)(int)(char)bVar1 >> 4 & 0xf;
      goto LAB_0016566c;
    }
    if (lVar6 != 3) {
      return -1;
    }
    if ((bVar1 == 0 && *(char *)((long)param_2 + 1) == '\0') && *(char *)((long)param_2 + 2) == '\0'
       ) {
      *param_1 = 0;
      *param_4 = 0;
      return 3;
    }
    FUN_0015c3d0();
    pcVar5 = *(code **)PTR_PTR_047cb868;
    if (pcVar5 == (code *)0x0) goto LAB_0016576c;
    pcVar4 = "OODLE ERROR : corruption : header == 0\n";
    uVar3 = 0x78;
  }
  (*pcVar5)(0,"v:/devel/projects/oodle2/core/newlz_arrays.inl",uVar3,pcVar4);
LAB_0016576c:
  FUN_0015c3f0();
  return -1;
}


