/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a65ebc; name: FUN_00a65ebc
 */


uint FUN_00a65ebc(ulong param_1,ulong param_2,char param_3,uint param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  uint uVar8;
  undefined8 uVar9;
  
  if (((*PTR_DAT_047d8938 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d8938), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d8e20,PTR_DAT_047d8940,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8938);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d8940;
  uVar1 = param_1 & 0xffff | (param_2 & 0xffff) << 0x10;
  *(undefined8 *)PTR_DAT_047d8948 = uVar9;
  lVar5 = FUN_011b047c(uVar9,uVar1,0);
  lVar6 = FUN_011b047c(uVar9,uVar1 | 0x100000000,0);
  if (((*PTR_DAT_047d7430 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047d7430), iVar4 != 0))
  {
    FUN_00100190(PTR_LAB_047d7448,PTR_DAT_047d7438,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d7430);
  }
  uVar9 = *(undefined8 *)PTR_DAT_047d7438;
  *(undefined8 *)PTR_DAT_047d7440 = uVar9;
  piVar7 = (int *)FUN_00e9d320(uVar9,param_1 & 0xffffffff,param_2 & 0xffffffff);
  cVar2 = *(char *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (0x1c - (long)*piVar7)));
  if (cVar2 != '\x01') {
    if (cVar2 == '\x03') {
      bVar3 = (param_4 & 1) == 0;
      uVar8 = 6;
      goto LAB_00a65fc8;
    }
    if (param_3 != '\0' || (lVar5 == 0 || lVar6 == 0)) {
      if ((param_3 != '\x01' || (lVar5 == 0 || lVar6 == 0)) && (cVar2 != '\x02')) {
        return param_4 & 1;
      }
      bVar3 = (param_4 & 1) == 0;
      uVar8 = 4;
      goto LAB_00a65fc8;
    }
  }
  bVar3 = (param_4 & 1) == 0;
  uVar8 = 2;
LAB_00a65fc8:
  if (!bVar3) {
    uVar8 = uVar8 + 1;
  }
  return uVar8;
}


