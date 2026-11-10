/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0174e200; name: FUN_0174e200
 */


void FUN_0174e200(undefined8 *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  size_t sVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  
  pbVar5 = DAT_04841350;
  if (DAT_04841350 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar6 != 0)) {
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
                    /* WARNING: Could not recover jumptable at 0x0174e26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  else {
    puVar9 = &DAT_cbf29ce484222645;
    sVar7 = strlen((char *)DAT_04841350);
    bVar3 = *pbVar5;
    pbVar8 = pbVar5;
    while (bVar3 != 0) {
      pbVar8 = pbVar8 + 1;
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar8;
    }
    *param_1 = puVar9;
    param_1[1] = pbVar5;
    param_1[2] = sVar7;
    param_1[3] = 0;
  }
  return;
}


