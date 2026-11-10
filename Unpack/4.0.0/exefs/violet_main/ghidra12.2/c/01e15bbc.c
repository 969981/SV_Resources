/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e15bbc; name: FUN_01e15bbc
 */


void FUN_01e15bbc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  size_t sVar6;
  byte *pbVar7;
  byte *__s;
  undefined1 *puVar8;
  
  __s = *(byte **)(param_2 + 8);
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar4 = PTR_DAT_047d3e30;
    uVar1 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar1;
    plVar2 = *(long **)(puVar4 + 0x18);
    param_1[2] = *(undefined8 *)(puVar4 + 0x10);
    param_1[3] = plVar2;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01e15c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  else {
    puVar8 = &DAT_cbf29ce484222645;
    sVar6 = strlen((char *)__s);
    bVar3 = *__s;
    pbVar7 = __s;
    while (bVar3 != 0) {
      pbVar7 = pbVar7 + 1;
      puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar7;
    }
    *param_1 = puVar8;
    param_1[1] = __s;
    param_1[2] = sVar6;
    param_1[3] = 0;
  }
  return;
}


