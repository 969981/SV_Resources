/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01678ce8; name: FUN_01678ce8
 */


void FUN_01678ce8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x40) + 8);
  lVar14 = lVar12 + (ulong)*(byte *)(lVar12 + 0x938) * 0xc4;
  lVar13 = lVar14 + 0x18;
  cVar3 = *(char *)(lVar14 + 0x20);
  if (*(char *)(param_3 + 4) == '\0') {
    if (cVar3 == '\0') {
      return;
    }
    uVar9 = param_3[2];
    uVar15 = param_3[3];
    uVar11 = FUN_01678f00(param_1);
    FUN_01679420(uVar11,uVar9,lVar13,uVar15);
    return;
  }
  if (cVar3 == '\0') {
    FUN_016803e4(param_1,*param_3,param_3[2],param_3[1]);
    return;
  }
  if (*(char *)(lVar12 + (ulong)*(byte *)(lVar12 + 0x938) * 0xc4 + 0x21) == '\0') {
    uVar9 = param_3[2];
    uVar15 = param_3[3];
    uVar11 = FUN_01678f00(param_1);
    FUN_01679420(uVar11,uVar9,lVar13,uVar15);
  }
  lVar13 = *(long *)(param_1 + 0x20);
  lVar12 = *(long *)(*(long *)(*(long *)(lVar13 + 0x20) + 0x10) + 0x130);
  uVar5 = *(int *)(lVar12 + 8) - 1;
  uVar1 = 399;
  if (-1 < (int)uVar5) {
    uVar1 = uVar5;
  }
  *(undefined1 *)(lVar12 + (ulong)uVar1 * 0xc + 0x16) = 1;
  FUN_0129aff0(*(undefined8 *)(lVar13 + 0x18),0x7c);
  uVar8 = (**(code **)(*(long *)*param_3 + 0x200))();
  if ((uVar8 & 1) == 0) {
    uVar4 = *(undefined2 *)param_3[2];
    if (((*PTR_DAT_047d7940 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_047d7940), iVar7 != 0)) {
      FUN_00100190(PTR_LAB_047d7958,PTR_DAT_047d7948,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d7940);
    }
    uVar9 = *(undefined8 *)PTR_DAT_047d7948;
    *(undefined8 *)PTR_DAT_047d7950 = uVar9;
    piVar10 = (int *)FUN_00cf60cc(uVar9,uVar4);
    if (((0x30 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
        (uVar8 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[0x18], uVar8 != 0)) &&
       (*(char *)((long)piVar10 + uVar8) != '\0')) {
      FUN_0167fbc0(*(undefined8 *)(param_1 + 0x20),*param_3,0xc);
    }
  }
  uVar9 = param_3[1];
  puVar2 = (undefined2 *)param_3[2];
  uVar15 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_01678f08(uVar15,uVar6,*puVar2,uVar9,0x27);
  return;
}


