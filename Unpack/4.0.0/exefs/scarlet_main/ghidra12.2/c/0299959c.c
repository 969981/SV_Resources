/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299959c; name: FUN_0299959c
 */


undefined8 FUN_0299959c(long param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar7 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)((long)param_2 + uVar7);
  }
  piVar2 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8) + 0x50)
                               ,param_3);
  if (piVar2 == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *piVar2;
    if (4 < iVar6) {
      iVar6 = 0;
    }
  }
  if (iVar6 == iVar1) {
    if (((*(ushort *)((long)param_2 - (long)*param_2) < 9) ||
        (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4], uVar7 == 0)) ||
       (*(int *)((long)param_2 + uVar7) == 0)) {
      return 1;
    }
    lVar3 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x30),param_3);
    if (lVar3 == 0) {
      return 0;
    }
    puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(lVar3 + 0x28))((undefined8 *)(lVar3 + 0x28));
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar1 != 0)) {
      uVar5 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar5;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    if (puVar4 != (undefined8 *)0x0) {
      do {
        if (puVar4 == (undefined8 *)PTR_DAT_047d3f08) {
          uVar5 = FUN_01780124(lVar3);
          return uVar5;
        }
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)0x0);
      return 0;
    }
  }
  return 0;
}


