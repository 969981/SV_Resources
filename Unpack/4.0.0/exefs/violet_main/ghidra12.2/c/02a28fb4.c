/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02a28fb4; name: FUN_02a28fb4
 */


ulong FUN_02a28fb4(undefined1 param_1 [16])

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_0483adf8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0483adf8);
    if (iVar2 != 0) {
      FUN_00100190(&LAB_02a2ca1c,&DAT_0483ade8,&PTR_LOOP_04483000);
      __cxa_guard_release(&DAT_0483adf8);
    }
  }
  DAT_0483ae00 = DAT_0483ade8;
  fVar7 = *(float *)(DAT_0483ade8 + 0x28);
  fVar6 = param_1._0_4_ / fVar7;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar3 = (uint)fVar6;
  fVar6 = -param_1._8_4_ / fVar7;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uVar4 = (uint)fVar6;
  uVar5 = (uint)(5000.0 / fVar7);
  uVar1 = uVar5;
  if (uVar3 + 2 <= uVar5) {
    uVar1 = uVar3 + 2;
  }
  if (uVar4 + 2 <= uVar5) {
    uVar5 = uVar4 + 2;
  }
  if (uVar3 < 3) {
    uVar3 = 2;
  }
  if (uVar4 < 3) {
    uVar4 = 2;
  }
  return (ulong)(uVar3 - 2) & 0xffff | (ulong)(uVar4 - 2 & 0xffff) << 0x20 | (ulong)uVar5 << 0x30 |
         (ulong)(uVar1 << 0x10);
}


