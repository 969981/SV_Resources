/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003361b8; name: FUN_003361b8
 */


ulong FUN_003361b8(void *param_1,void *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)((long)param_1 + 0x80);
  if (*(uint *)((long)param_2 + 0x80) < uVar1) {
    uVar2 = 1;
  }
  else {
    if (uVar1 < *(uint *)((long)param_2 + 0x80)) {
      return 0xffffffff;
    }
    uVar1 = memcmp(param_1,param_2,(ulong)uVar1);
    uVar2 = (ulong)uVar1;
    if (uVar1 == 0) {
      uVar2 = FUN_00343e20(*(undefined8 *)((long)param_1 + 0x88),
                           *(undefined8 *)((long)param_2 + 0x88));
      return uVar2;
    }
  }
  return uVar2;
}


