/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f47ee0; name: FUN_01f47ee0
 */


void FUN_01f47ee0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  byte *__s;
  byte *local_28;
  
  if ((*(long *)(param_2 + 0x78) == 0) || (*(short *)(*(long *)(param_2 + 0x78) + 0x1a) == 0)) {
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
    if (plVar2 == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01f47fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))();
    return;
  }
  if (*(long *)(param_2 + 0x78) == 0) {
    lVar7 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)(param_2 + 0x78) + 0x10);
    lVar7 = 0;
    if (lVar8 != 0) {
      lVar7 = lVar8 + -0x28;
    }
  }
  FUN_027c91f8(&local_28,lVar7);
  if (local_28 == (byte *)0x0) {
LAB_01f47ff8:
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
      (**(code **)(*plVar2 + 0x18))();
    }
  }
  else {
    if ((*local_28 & 1) == 0) {
      __s = local_28 + 1;
      uVar6 = (ulong)(*local_28 >> 1);
    }
    else {
      __s = *(byte **)(local_28 + 0x10);
      if (__s == (byte *)0x0) goto LAB_01f47ff8;
      uVar6 = *(ulong *)(local_28 + 8);
    }
    if (uVar6 == 0) {
      uVar6 = strlen((char *)__s);
    }
    puVar9 = &DAT_cbf29ce484222645;
    bVar3 = *__s;
    pbVar10 = __s;
    while (bVar3 != 0) {
      pbVar10 = pbVar10 + 1;
      puVar9 = (undefined1 *)(((ulong)puVar9 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar10;
    }
    *param_1 = puVar9;
    param_1[1] = __s;
    param_1[2] = uVar6;
    param_1[3] = 0;
  }
  return;
}


