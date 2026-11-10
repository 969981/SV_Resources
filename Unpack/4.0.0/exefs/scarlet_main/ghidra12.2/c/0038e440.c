/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0038e440; name: FUN_0038e440
 */


undefined1  [16] FUN_0038e440(uint param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  int *piVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_1 == 2) {
    FUN_0038e680(&local_20);
    auVar1._8_8_ = uStack_18;
    auVar1._0_8_ = local_20;
    return auVar1;
  }
  if (param_1 == 3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1 < 2) {
    nn::os::GetSystemTick();
    uVar2 = nn::os::ConvertToTimeSpan();
    uVar4 = ((long)uVar2 >> 0x20) * 0x26d694b3 + ((uVar2 & 0xffffffff) * 0x26d694b3 >> 0x20);
    piVar3 = (int *)(((long)(((long)uVar2 >> 0x20) * 0x112e0be8 + ((long)uVar4 >> 0x20) +
                            ((uVar2 & 0xffffffff) * 0x112e0be8 + (uVar4 & 0xffffffff) >> 0x20)) >>
                     0x1a) - ((long)uVar2 >> 0x3f));
    uVar4 = (ulong)(uint)((int)uVar2 + (int)piVar3 * -1000000000);
  }
  else {
    piVar3 = __errno_location();
    uVar4 = 0;
    *piVar3 = 0x16;
  }
  auVar5._8_8_ = uVar4 | (ulong)param_1 << 0x20;
  auVar5._0_8_ = piVar3;
  return auVar5;
}


