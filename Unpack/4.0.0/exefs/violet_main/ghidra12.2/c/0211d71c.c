/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0211d71c; name: FUN_0211d71c
 */


float FUN_0211d71c(float param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  
  piVar3 = (int *)*param_2;
  puVar5 = (ushort *)((long)piVar3 - (long)*piVar3);
  if (*puVar5 < 0xb) {
    iVar2 = 0;
    iVar4 = 0;
    iVar1 = 0;
    if (*puVar5 < 9) goto LAB_0211d760;
  }
  else {
    iVar1 = 0;
    if ((ulong)puVar5[5] != 0) {
      iVar1 = *(int *)((long)piVar3 + (ulong)puVar5[5]);
    }
  }
  iVar2 = iVar1;
  iVar4 = 0;
  if ((ulong)puVar5[4] != 0) {
    iVar4 = *(int *)((long)piVar3 + (ulong)puVar5[4]);
  }
LAB_0211d760:
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar1 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  *(undefined8 *)PTR_DAT_047dcd80 = *(undefined8 *)PTR_DAT_047d3be8;
  return (float)(uint)(iVar2 - iVar4) * param_1;
}


