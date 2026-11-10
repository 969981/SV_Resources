/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b28e70; name: FUN_02b28e70
 */


void FUN_02b28e70(undefined8 *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 local_90;
  long lStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (((DAT_04840f88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840f88), iVar1 != 0)) {
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_04840ee0);
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_04840f28);
    DAT_04840f70 = 0;
    DAT_04840f78 = 0;
    DAT_04840f80 = 0;
    FUN_00100190(&LAB_02b28e1c,&DAT_04840ee0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840f88);
  }
  nn::mem::StandardAllocator::Hash();
  uVar2 = nn::mem::StandardAllocator::GetTotalFreeSize();
  uVar3 = nn::mem::StandardAllocator::GetAllocatableSize();
  nn::mem::StandardAllocator::Hash();
  lVar6 = lStack_88 - DAT_04840f70;
  uVar4 = nn::mem::StandardAllocator::GetTotalFreeSize();
  uVar5 = nn::mem::StandardAllocator::GetAllocatableSize();
  auVar7 = nn::os::GetVirtualAddressMemoryResourceUsage();
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[8] = auVar7._8_8_;
  param_1[9] = auVar7._0_8_;
  *param_1 = local_78;
  param_1[1] = uStack_70;
  param_1[4] = local_90;
  param_1[5] = lVar6;
  param_1[6] = uVar4;
  param_1[7] = uVar5;
  memset(param_1 + 10,0,0x80);
  if ((param_2 & 1) != 0) {
    memset(param_1 + 10,0,0x80);
    nn::mem::StandardAllocator::WalkAllocatedBlocks
              ((_func_int_void_ptr_ulong_void_ptr *)&DAT_04840ee0,&LAB_02b28ff0);
    nn::mem::StandardAllocator::WalkAllocatedBlocks
              ((_func_int_void_ptr_ulong_void_ptr *)&DAT_04840f28,&LAB_02b28ff0);
  }
  return;
}


