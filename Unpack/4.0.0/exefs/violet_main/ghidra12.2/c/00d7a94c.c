/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d7a94c; name: FUN_00d7a94c
 */


void FUN_00d7a94c(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int local_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  undefined1 auStack_78 [8];
  
  if ((param_2 & 1) != 0) {
    if (((*PTR_DAT_047d9210 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d9210), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047dafb0,PTR_DAT_047d9218,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d9210);
    }
    lVar7 = *(long *)PTR_DAT_047d9218;
    *(long *)PTR_DAT_047d9220 = lVar7;
    iVar4 = *(int *)(param_1 + 0x44);
    if (0 < iVar4) {
      lVar11 = *(long *)(lVar7 + 0x28);
      lVar7 = 0;
      do {
        if (((*(long *)(param_1 + 0x48) != 0) &&
            (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + lVar7 * 8), lVar9 != 0)) &&
           ((*(byte *)(lVar9 + 0x18) >> 3 & 1) == 0)) {
          iVar2 = *(int *)(param_1 + 0x38);
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = (int)lVar7 / iVar2;
          }
          iVar1 = *(int *)(param_1 + 100) + iVar3;
          iVar2 = *(int *)(param_1 + 0x60) + ((int)lVar7 - iVar3 * iVar2);
          uVar6 = (uint)(((float)iVar2 * 3.0 + 1.5) / 500.0);
          uVar8 = (uint)(((float)iVar1 * 3.0 + 1.5) / -500.0);
          if ((uVar6 < 10 && uVar8 < 0xb) &&
             (lVar10 = *(long *)(lVar11 + (ulong)((uVar6 & 0xff) % 10) * 0x50 +
                                 (ulong)((uVar8 & 0xff) % 10) * 8 + 0x30), lVar10 != 0)) {
            local_80 = iVar2;
            iStack_7c = iVar1;
            uVar5 = FUN_00d7b224(lVar10,auStack_78,&local_80);
            if ((uVar5 & 1) != 0) {
              local_88 = iVar2;
              iStack_84 = iVar1;
              FUN_00d7b394(lVar9,lVar10,auStack_78,&local_88);
            }
            iVar4 = *(int *)(param_1 + 0x44);
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar4);
    }
  }
  return;
}


