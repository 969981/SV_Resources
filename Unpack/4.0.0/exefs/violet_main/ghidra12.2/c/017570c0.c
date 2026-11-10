/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017570c0; name: FUN_017570c0
 */


void FUN_017570c0(undefined8 param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  uint *puVar5;
  ulong uVar6;
  code *local_98;
  undefined1 auStack_80 [96];
  
  local_98 = (code *)0x0;
  if (*(code **)(param_3 + 0x10) != (code *)0x0) {
    (**(code **)(param_3 + 0x10))(param_3 + 0x20,auStack_80);
    local_98 = *(code **)(param_3 + 8);
  }
  piVar4 = (int *)*param_2;
  if (((0x16 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
      (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[0xb], uVar6 != 0)) &&
     (puVar5 = (uint *)((long)piVar4 + uVar6), piVar4 = (int *)((long)puVar5 + (ulong)*puVar5),
     *piVar4 != 0)) {
    puVar5 = (uint *)(piVar4 + 1);
    piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
    puVar5 = (uint *)((long)piVar4 + (ulong)*(ushort *)((long)piVar4 + (8 - (long)*piVar4)));
    piVar4 = (int *)((long)puVar5 + (ulong)*puVar5);
    if ((4 < *(ushort *)((long)piVar4 - (long)*piVar4)) &&
       (uVar6 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2], uVar6 != 0)) {
      bVar1 = *(char *)((long)piVar4 + uVar6) != '\0';
      goto LAB_01757194;
    }
  }
  bVar1 = false;
LAB_01757194:
  if (((*PTR_DAT_047d3be0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3be0), iVar2 != 0))
  {
    FUN_00100190(PTR_LAB_047d89f0,PTR_DAT_047d3be8,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3be0);
  }
  uVar3 = *(undefined8 *)PTR_DAT_047d3be8;
  *(undefined8 *)PTR_DAT_047dcd80 = uVar3;
  FUN_0175723c(uVar3,param_2,bVar1);
  if (local_98 != (code *)0x0) {
    (*local_98)(auStack_80);
  }
  return;
}


