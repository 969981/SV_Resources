/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 013e2548; name: FUN_013e2548
 */


undefined8
FUN_013e2548(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 *param_6)

{
  char *__s;
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  uint *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 local_b0 [16];
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined1 *local_80;
  char *pcStack_78;
  size_t local_70;
  long *local_68;
  long *local_48;
  
  puVar9 = (uint *)*param_6;
  uVar3 = *puVar9;
  piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
  (**(code **)(*(long *)*param_5 + 0x40))(&local_48);
  plVar5 = local_48;
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar11 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_80 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_78 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_70 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_68 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar11);
    uVar12 = (ulong)*puVar2;
    __s = (char *)((long)puVar2 + uVar12 + 4);
    puVar10 = &DAT_cbf29ce484222645;
    local_70 = strlen(__s);
    bVar4 = *(byte *)((long)puVar2 + uVar12 + 4);
    if (bVar4 != 0) {
      pbVar8 = (byte *)((long)puVar9 + uVar12 + uVar11 + (ulong)uVar3 + 5);
      do {
        puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar4) * 0x100000001b3);
        bVar4 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar4 != 0);
    }
    local_68 = (long *)0x0;
    local_80 = puVar10;
    pcStack_78 = __s;
  }
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar11 == 0)) {
    lVar7 = 0;
  }
  else {
    puVar9 = (uint *)((long)piVar1 + uVar11);
    lVar7 = (long)puVar9 + (ulong)*puVar9;
  }
  local_b0 = FUN_00df61a4(lVar7);
  uStack_a0 = param_2;
  local_90 = param_3;
  FUN_013e2724(plVar5,&local_80,local_b0);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x60))();
  }
  return 0;
}


