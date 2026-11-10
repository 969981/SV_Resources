/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01b93ecc; name: FUN_01b93ecc
 */


undefined1  [16] FUN_01b93ecc(undefined8 param_1,byte *param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar1 = PTR_LAB_047d4f10;
  if (DAT_0480bd98 == '\0') {
    puVar1 = (undefined *)0x0;
  }
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_047d3e28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar3 != 0)) {
      FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d3e28);
    }
    local_60 = *(undefined1 **)PTR_DAT_047d3e30;
    pbStack_58 = *(byte **)(PTR_DAT_047d3e30 + 8);
    local_50 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
    local_48 = *(long **)(PTR_DAT_047d3e30 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar4 = param_2;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  fVar5 = (float)FUN_01b9453c(param_1,puVar1,0,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  auVar6._0_8_ = (double)fVar5;
  auVar6._8_8_ = 0;
  return auVar6;
}


