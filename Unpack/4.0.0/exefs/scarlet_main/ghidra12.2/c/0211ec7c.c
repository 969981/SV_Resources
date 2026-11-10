/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0211ec7c; name: FUN_0211ec7c
 */


void FUN_0211ec7c(undefined8 *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  ushort *puVar7;
  uint *puVar8;
  int iVar9;
  ulong uVar10;
  char local_48 [8];
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_01340a44(local_48,param_1,1);
  if (local_48[0] != '\0') {
    piVar6 = (int *)*param_1;
    puVar7 = (ushort *)((long)piVar6 - (long)*piVar6);
    if (((0x16 < *puVar7) && ((ulong)puVar7[0xb] != 0)) &&
       (puVar8 = (uint *)((long)piVar6 + (ulong)puVar7[0xb]),
       puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8), 1 < *puVar8)) {
      puVar8 = puVar8 + 2;
      piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
      puVar8 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (8 - (long)*piVar1)));
      piVar1 = (int *)((long)puVar8 + (ulong)*puVar8);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar10 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar10 == 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = *(char *)((long)piVar1 + uVar10) != '\0';
      }
      iVar9 = 0;
      if ((ulong)puVar7[5] != 0) {
        iVar9 = *(int *)((long)piVar6 + (ulong)puVar7[5]);
      }
      if ((ulong)puVar7[4] == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((long)piVar6 + (ulong)puVar7[4]);
      }
      if (((*PTR_DAT_047d3be0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar3 != 0)) {
        FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3be0);
      }
      uVar4 = *(undefined8 *)PTR_DAT_047d3be8;
      *(undefined8 *)PTR_DAT_047dcd80 = uVar4;
      FUN_02110c84(uVar4,param_1,auStack_40,bVar2,iVar9 - iVar5);
      if (local_48[0] == '\0') {
        return;
      }
    }
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


