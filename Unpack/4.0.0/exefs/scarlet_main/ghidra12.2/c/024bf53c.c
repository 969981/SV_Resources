/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024bf53c; name: FUN_024bf53c
 */


undefined1  [16] FUN_024bf53c(undefined8 param_1,byte *param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  puVar1 = &LAB_024c10b4;
  if (DAT_0484cb18 == '\0') {
    puVar1 = (undefined1 *)0x0;
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
  fVar5 = (float)FUN_024c12dc(param_1,puVar1,0,&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  auVar6._0_8_ = (double)fVar5;
  auVar6._8_8_ = 0;
  return auVar6;
}


