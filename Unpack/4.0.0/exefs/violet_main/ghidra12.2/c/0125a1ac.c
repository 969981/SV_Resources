/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0125a1ac; name: FUN_0125a1ac
 */


void FUN_0125a1ac(undefined8 *param_1,long *param_2,size_t param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  byte *__s;
  
  puVar1 = (undefined8 *)PTR_PTR_047d4508;
  if (*param_2 != 0) {
    puVar1 = (undefined8 *)(*param_2 + 0x38);
  }
  __s = (byte *)*puVar1;
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar5 = PTR_DAT_047d3e30;
    uVar2 = *(undefined8 *)(PTR_DAT_047d3e30 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_047d3e30;
    param_1[1] = uVar2;
    plVar3 = *(long **)(puVar5 + 0x18);
    param_1[2] = *(undefined8 *)(puVar5 + 0x10);
    param_1[3] = plVar3;
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0125a224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))();
      return;
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = strlen((char *)__s);
    }
    puVar7 = &DAT_cbf29ce484222645;
    bVar4 = *__s;
    pbVar8 = __s;
    while (bVar4 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar4) * 0x100000001b3);
      bVar4 = *pbVar8;
    }
    *param_1 = puVar7;
    param_1[1] = __s;
    param_1[2] = param_3;
    param_1[3] = 0;
  }
  return;
}


