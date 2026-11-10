/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf9fc0; name: FUN_00cf9fc0
 */


undefined1  [16] FUN_00cf9fc0(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  auVar4 = FUN_00d04fb8();
  if (((auVar4._0_8_ & 0xff00000000) == 0) || (auVar4._8_4_ != 0)) {
    if (param_2 == (byte *)0x0) {
      if (((*PTR_DAT_047d3e28 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_047d3e28), iVar2 != 0)) {
        FUN_00100190(PTR_LAB_047d4118,PTR_DAT_047d3e30,&PTR_LOOP_04483000);
        __cxa_guard_release(PTR_DAT_047d3e28);
      }
      local_50 = *(undefined1 **)PTR_DAT_047d3e30;
      pbStack_48 = *(byte **)(PTR_DAT_047d3e30 + 8);
      local_40 = *(size_t *)(PTR_DAT_047d3e30 + 0x10);
      local_38 = *(long **)(PTR_DAT_047d3e30 + 0x18);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x18))();
      }
    }
    else {
      local_40 = strlen((char *)param_2);
      bVar1 = *param_2;
      local_50 = &DAT_cbf29ce484222645;
      pbVar3 = param_2;
      while (bVar1 != 0) {
        pbVar3 = pbVar3 + 1;
        local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar3;
      }
      local_38 = (long *)0x0;
      pbStack_48 = param_2;
    }
    FUN_00d06470(&DAT_0485f3c0,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
  }
  auVar4._8_8_ = auVar4._8_8_ & 0xffffffff;
  return auVar4;
}


