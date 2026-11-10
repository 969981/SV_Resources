/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017631b4; name: FUN_017631b4
 */


void FUN_017631b4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  size_t sVar4;
  byte *pbVar5;
  long *plVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  
  pbVar8 = (byte *)*param_2;
  if (pbVar8 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar7 = *(undefined1 **)PTR_DAT_047d3e30;
    pbVar8 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar4 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    sVar4 = strlen((char *)pbVar8);
    bVar1 = *pbVar8;
    pbVar5 = pbVar8;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    plVar6 = (long *)0x0;
  }
  plVar3 = (long *)param_1[3];
  *param_1 = puVar7;
  param_1[1] = pbVar8;
  param_1[2] = sVar4;
  param_1[3] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[3] = plVar6;
  pbVar8 = (byte *)*param_3;
  if (pbVar8 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar7 = *(undefined1 **)PTR_DAT_047d3e30;
    pbVar8 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar4 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    sVar4 = strlen((char *)pbVar8);
    bVar1 = *pbVar8;
    pbVar5 = pbVar8;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    plVar6 = (long *)0x0;
  }
  plVar3 = (long *)param_1[7];
  param_1[4] = puVar7;
  param_1[5] = pbVar8;
  param_1[6] = sVar4;
  param_1[7] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[7] = plVar6;
  pbVar8 = (byte *)*param_4;
  if (pbVar8 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar7 = *(undefined1 **)PTR_DAT_047d3e30;
    pbVar8 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar4 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    sVar4 = strlen((char *)pbVar8);
    bVar1 = *pbVar8;
    pbVar5 = pbVar8;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    plVar6 = (long *)0x0;
  }
  plVar3 = (long *)param_1[0xb];
  param_1[8] = puVar7;
  param_1[9] = pbVar8;
  param_1[10] = sVar4;
  param_1[0xb] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[0xb] = plVar6;
  pbVar8 = (byte *)*param_5;
  if (pbVar8 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar7 = *(undefined1 **)PTR_DAT_047d3e30;
    pbVar8 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar4 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    sVar4 = strlen((char *)pbVar8);
    bVar1 = *pbVar8;
    pbVar5 = pbVar8;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    plVar6 = (long *)0x0;
  }
  plVar3 = (long *)param_1[0xf];
  param_1[0xc] = puVar7;
  param_1[0xd] = pbVar8;
  param_1[0xe] = sVar4;
  param_1[0xf] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[0xf] = plVar6;
  pbVar8 = (byte *)*param_6;
  if (pbVar8 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    puVar7 = *(undefined1 **)PTR_DAT_047d3e30;
    pbVar8 = *(byte **)(PTR_DAT_047d3e30 + 8);
    sVar4 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    plVar6 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    sVar4 = strlen((char *)pbVar8);
    bVar1 = *pbVar8;
    pbVar5 = pbVar8;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    plVar6 = (long *)0x0;
  }
  plVar3 = (long *)param_1[0x13];
  param_1[0x10] = puVar7;
  param_1[0x11] = pbVar8;
  param_1[0x12] = sVar4;
  param_1[0x13] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))();
  }
  param_1[0x13] = plVar6;
  return;
}


