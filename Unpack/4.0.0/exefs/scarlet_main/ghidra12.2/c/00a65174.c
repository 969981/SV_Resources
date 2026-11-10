/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a65174; name: FUN_00a65174
 */


undefined8 FUN_00a65174(ushort *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  int *piVar11;
  byte bVar12;
  ulong uVar13;
  uint uVar14;
  
  puVar7 = PTR_LAB_047d7448;
  puVar6 = PTR_DAT_047d7440;
  puVar5 = PTR_DAT_047d7438;
  puVar4 = PTR_DAT_047d7430;
  if (param_2 == 0) {
    bVar12 = 0;
    do {
      uVar3 = *param_1;
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4,uVar3), iVar9 != 0)) {
        FUN_00100190(puVar7,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar4);
      }
      uVar10 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar10;
      piVar11 = (int *)FUN_00e9d320(uVar10,uVar3,bVar12);
      if (((8 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
          (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[4], uVar13 != 0)) &&
         (*(short *)((long)piVar11 + uVar13) != 0)) {
        bVar2 = 0;
        if ((*param_1 & 0xfffe) != 0x298 && *param_1 != 0x2e8) {
          bVar2 = bVar12;
        }
        uVar13 = FUN_00a65d24(param_1,param_3,bVar2);
        if ((uVar13 & 1) != 0) {
          return 1;
        }
      }
      bVar8 = bVar12 < 0x1f;
      bVar12 = bVar12 + 1;
    } while (bVar8);
  }
  else if (param_2 == 1) {
    bVar12 = 0;
    do {
      uVar3 = *param_1;
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4,uVar3), iVar9 != 0)) {
        FUN_00100190(puVar7,puVar5,&PTR_LOOP_04483000);
        __cxa_guard_release(puVar4);
      }
      uVar10 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar10;
      piVar11 = (int *)FUN_00e9d320(uVar10,uVar3,bVar12);
      if (((10 < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
          (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[5], uVar13 != 0)) &&
         (*(short *)((long)piVar11 + uVar13) != 0)) {
        bVar2 = 0;
        if ((*param_1 & 0xfffe) != 0x298 && *param_1 != 0x2e8) {
          bVar2 = bVar12;
        }
        uVar13 = FUN_00a65d24(param_1,param_3,bVar2);
        if ((uVar13 & 1) != 0) {
          return 1;
        }
      }
      bVar8 = bVar12 < 0x1f;
      bVar12 = bVar12 + 1;
    } while (bVar8);
  }
  else {
    uVar14 = 0;
    do {
      if (param_2 == 2) {
        uVar3 = *param_1;
        if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar4), iVar9 != 0)) {
          FUN_00100190(puVar7,puVar5,&PTR_LOOP_04483000);
          __cxa_guard_release(puVar4);
        }
        uVar10 = *(undefined8 *)puVar5;
        *(undefined8 *)puVar6 = uVar10;
        piVar11 = (int *)FUN_00e9d320(uVar10,uVar3,uVar14 & 0xff);
        if (((0xc < *(ushort *)((long)piVar11 - (long)*piVar11)) &&
            (uVar13 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[6], uVar13 != 0)) &&
           (*(short *)((long)piVar11 + uVar13) != 0)) {
          uVar1 = 0;
          if ((*param_1 & 0xfffe) != 0x298 && *param_1 != 0x2e8) {
            uVar1 = uVar14;
          }
          uVar13 = FUN_00a65d24(param_1,param_3,uVar1);
          if ((uVar13 & 1) != 0) {
            return 1;
          }
        }
      }
      uVar1 = uVar14 & 0xff;
      uVar14 = uVar14 + 1;
    } while (uVar1 < 0x1f);
  }
  return 0;
}


