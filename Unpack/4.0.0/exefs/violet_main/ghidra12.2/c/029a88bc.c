/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029a88bc; name: FUN_029a88bc
 */


void FUN_029a88bc(undefined8 param_1,int *param_2)

{
  char *__s;
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *local_70;
  char *pcStack_68;
  size_t local_60;
  long *local_58;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar7 == 0)) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar4 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_70 = *(undefined1 **)PTR_DAT_047d3e30;
    pcStack_68 = *(char **)(PTR_DAT_047d3e30 + 8);
    local_60 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_58 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    puVar1 = (uint *)((long)param_2 + uVar7);
    uVar8 = (ulong)*puVar1;
    __s = (char *)((long)puVar1 + uVar8 + 4);
    puVar6 = &DAT_cbf29ce484222645;
    local_60 = strlen(__s);
    bVar2 = *(byte *)((long)puVar1 + uVar8 + 4);
    if (bVar2 != 0) {
      pbVar5 = (byte *)((long)param_2 + uVar8 + uVar7 + 5);
      do {
        puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while (bVar2 != 0);
    }
    local_58 = (long *)0x0;
    local_70 = puVar6;
    pcStack_68 = __s;
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 7) ||
     (uVar7 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[3], uVar7 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = *(char *)((long)param_2 + uVar7) != '\0';
  }
  FUN_029aa18c(param_1,&local_70,bVar3);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  return;
}


