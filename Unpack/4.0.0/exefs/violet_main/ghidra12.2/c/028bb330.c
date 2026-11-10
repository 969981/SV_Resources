/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028bb330; name: FUN_028bb330
 */


void FUN_028bb330(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char *__s;
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  size_t sVar7;
  uint *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  ulong uVar11;
  
  puVar6 = (uint *)FUN_02614ac0();
  if ((puVar6 == (uint *)0x0) || (*puVar6 <= param_4)) {
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
                    /* WARNING: Could not recover jumptable at 0x028bb430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))();
      return;
    }
  }
  else {
    puVar8 = puVar6 + (ulong)param_4 + 1;
    uVar11 = (ulong)*puVar8;
    __s = (char *)((long)puVar8 + uVar11 + 4);
    puVar10 = &DAT_cbf29ce484222645;
    sVar7 = strlen(__s);
    bVar3 = *(byte *)((long)puVar8 + uVar11 + 4);
    if (bVar3 != 0) {
      pbVar9 = (byte *)((long)puVar6 + uVar11 + (ulong)param_4 * 4 + 9);
      do {
        puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar3) * 0x100000001b3);
        bVar3 = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (bVar3 != 0);
    }
    *param_1 = puVar10;
    param_1[1] = __s;
    param_1[2] = sVar7;
    param_1[3] = 0;
  }
  return;
}


