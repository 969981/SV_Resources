/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01966638; name: FUN_01966638
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01966638(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long local_28;
  
  puVar1 = PTR_DAT_047d66f8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (((DAT_04865a38 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04865a38), iVar2 != 0)) {
    FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
    FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04865a38);
  }
  lVar3 = nn::os::GetTlsValue(DAT_04865a30);
  puVar1 = PTR_DAT_047e3080;
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(long *)(lVar3 + 0x80) != 0) {
      lVar5 = *(long *)(lVar3 + *(long *)(lVar3 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)(PTR_DAT_047e3080 + 0x10);
  param_1[1] = lVar5;
  param_1[4] = (long)(puVar1 + 0x88);
  plVar4 = param_1 + 5;
  *plVar4 = (long)(puVar1 + 0x138);
  param_1[7] = 0;
  param_1[6] = 0;
  FUN_00d1a3f4(param_1 + 6,plVar4);
  puVar1 = PTR_DAT_047e3088;
  *param_1 = (long)(PTR_DAT_047e3088 + 0x10);
  param_1[4] = (long)(puVar1 + 0xc0);
  *plVar4 = (long)(puVar1 + 0x170);
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 1;
  nn::os::InitializeLightEvent(param_1 + 9,0,1);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 100) = 0;
  puVar1 = PTR_DAT_047e3120;
  *param_1 = (long)(PTR_DAT_047e3120 + 0x10);
  param_1[4] = (long)(puVar1 + 0xe0);
  *plVar4 = (long)(puVar1 + 400);
  *(undefined2 *)(param_1 + 0xf) = 0xffff;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0x66) = 0x1010101;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x84) = 0x4170000041f00000;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x3f000000;
  param_1[0xe] = 0;
  param_1[0x1e] = 0;
  param_1[0x2c] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x18] = 0x3f0000003f000000;
  param_1[0x19] = 0x3f80000040000000;
  param_1[0x1a] = -0x417fffffc1800000;
  param_1[0x1b] = 0x3e800000be800000;
  lVar5 = _UNK_03cabe58;
  lVar3 = _DAT_03cabe50;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x27] = lVar5;
  param_1[0x26] = lVar3;
  FUN_01966a70(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x31) = 2;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_0196693c(param_1 + 0x35);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x39] = 0;
  FUN_0196693c(param_1 + 0x3c);
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  FUN_0196693c(param_1 + 0x43);
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x4d] = 0xf4b17a579f18960;
  param_1[0x4e] = -0x7d5d4e8add6295a5;
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_28,8);
  param_1[0x4d] = local_28;
  param_1[0x4e] = -0x7d5d4e8add6295a5;
  if (((*PTR_DAT_047d8c28 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_047d8c28), iVar2 != 0))
  {
    local_28 = FUN_00d44228();
    puVar1 = PTR_DAT_047d8c30;
    FUN_00d1e764(PTR_DAT_047d8c30,&local_28);
    FUN_00100190(PTR_LAB_047d9240,puVar1,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d8c28);
  }
  plVar4 = *(long **)PTR_DAT_047d8c30;
  param_1[0x4f] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  param_1[0x50] = 0;
  return;
}


