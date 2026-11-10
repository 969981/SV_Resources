/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019af330; name: FUN_019af330
 */


void FUN_019af330(undefined8 *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  char local_48 [8];
  undefined1 auStack_40 [24];
  long *local_28;
  
  FUN_01340a44(local_48,param_1,1);
  if (local_48[0] == '\0') {
    return;
  }
  piVar4 = (int *)*param_1;
  if (((0x16 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
      (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb], uVar6 != 0)) &&
     (puVar5 = (uint *)((long)piVar4 + uVar6), puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5),
     1 < *puVar5)) {
    puVar5 = puVar5 + 2;
    piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (8 - (long)*piVar4)));
    piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
    if ((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 != 0)) {
      bVar1 = *(char *)((long)piVar4 + uVar6) != '\0';
      goto LAB_019af3dc;
    }
  }
  bVar1 = false;
LAB_019af3dc:
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar3;
  FUN_019af4a0(uVar3,param_1,auStack_40,bVar1);
  if ((local_48[0] != '\0') && (local_28 != (long *)0x0)) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


