/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02003e08; name: FUN_02003e08
 */


void FUN_02003e08(undefined1 param_1 [16],long param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  void *__s;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  
  *(int *)(param_2 + 0x34) = param_3;
  *(int *)(param_2 + 0x38) = param_3;
  fVar14 = *(float *)(param_2 + 0x30) * (float)param_3;
  *(long *)(param_2 + 0x58) = param_1._8_8_;
  *(long *)(param_2 + 0x50) = param_1._0_8_;
  fVar16 = (param_1._0_4_ - fVar14) / 3.0;
  iVar10 = (int)fVar16;
  fVar14 = (param_1._8_4_ - fVar14) / 3.0;
  iVar12 = (int)fVar14;
  *(int *)(param_2 + 0x3c) = param_3;
  *(int *)(param_2 + 0x40) = param_3 * param_3;
  *(int *)(param_2 + 0x44) = param_3 * param_3;
  *(ulong *)(param_2 + 0x60) =
       CONCAT44(iVar12 - (uint)(fVar14 < (float)iVar12),iVar10 - (uint)(fVar16 < (float)iVar10));
  *(undefined4 *)(param_2 + 0x68) = 0;
  plVar1 = (long *)(param_2 + 0x48);
  FUN_00d7b8f0(*(undefined8 *)(param_2 + 8),plVar1);
  uVar5 = *(uint *)(param_2 + 0x44);
  __s = (void *)(**(code **)(**(long **)(param_2 + 8) + 0x10))
                          (*(long **)(param_2 + 8),(long)(int)uVar5 << 3,8);
  if ((0 < (int)uVar5) && (__s != (void *)0x0)) {
    memset(__s,0,(ulong)uVar5 << 3);
  }
  *plVar1 = (long)__s;
  if (((*PTR_DAT_047d9210 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar10 != 0)) {
    FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d9210);
  }
  *(undefined8 *)PTR_DAT_047d9220 = *(undefined8 *)PTR_DAT_047d9218;
  puVar7 = PTR_DAT_047dca00;
  puVar6 = PTR_DAT_047dc9f8;
  if ((*plVar1 != 0) && (0 < *(int *)(param_2 + 0x3c))) {
    iVar11 = *(int *)(param_2 + 0x60);
    iVar10 = *(int *)(param_2 + 100);
    iVar12 = *(int *)(param_2 + 0x38) + iVar11;
    iVar2 = *(int *)(param_2 + 0x3c) + iVar10;
    while( true ) {
      if (iVar11 < iVar12) {
        iVar13 = iVar11;
        while( true ) {
          iVar3 = *(int *)(param_2 + 100);
          iVar4 = *(int *)(param_2 + 0x38);
          uVar15 = *(undefined4 *)(param_2 + 0x54);
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            FUN_00100190(PTR_LAB_047dca48,puVar7,&PTR_LOOP_04483000);
            __cxa_guard_release(puVar6);
          }
          DAT_0483c5d8 = *(undefined8 *)puVar7;
          uVar9 = FUN_00d7b124(CONCAT44(uVar15,(float)iVar13 * 3.0 + 1.5));
          *(undefined8 *)(*plVar1 + (long)(iVar13 + (iVar4 * (iVar10 - iVar3) - iVar11)) * 8) =
               uVar9;
          if (iVar12 + -1 == iVar13) break;
          iVar11 = *(int *)(param_2 + 0x60);
          iVar13 = iVar13 + 1;
        }
      }
      iVar10 = iVar10 + 1;
      if (iVar2 <= iVar10) break;
      iVar11 = *(int *)(param_2 + 0x60);
    }
  }
  return;
}


