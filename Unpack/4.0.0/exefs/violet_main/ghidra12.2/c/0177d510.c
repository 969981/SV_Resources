/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0177d510; name: FUN_0177d510
 */


void FUN_0177d510(void)

{
  int iVar1;
  ulong uVar2;
  
  if (((DAT_04840f88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04840f88), iVar1 != 0)) {
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_04840ee0);
    nn::mem::StandardAllocator::StandardAllocator((StandardAllocator *)&DAT_04840f28);
    DAT_04840f70 = 0;
    DAT_04840f78 = 0;
    DAT_04840f80 = 0;
    FUN_00100190(&LAB_02b28e1c,&DAT_04840ee0,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04840f88);
  }
  FUN_0177d630();
  nn::mem::StandardAllocator::Initialize(&DAT_04840f28,0,false);
  uVar2 = nn::mem::StandardAllocator::GetAllocatableSize();
  nn::mem::StandardAllocator::Allocate(0x4840f28);
  nn::mem::StandardAllocator::Free(&DAT_04840f28);
  DAT_04840f70 = (long)((double)uVar2 * 0.2);
  uVar2 = nn::mem::StandardAllocator::Allocate(0x4840f28);
  nn::mem::StandardAllocator::Initialize(&DAT_04840ee0,uVar2,SUB81(DAT_04840f70,0));
  DAT_04840f78 = uVar2;
  DAT_04840f80 = DAT_04840f70 + uVar2;
  return;
}


