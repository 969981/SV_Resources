/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017f1764; name: FUN_017f1764
 */


undefined4 FUN_017f1764(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x1c8))
                    (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x98),0x1f);
  if ((((uVar1 & 1) == 0) && (*(short *)(param_1 + 0x9e) != 0x1a)) &&
     (*(char *)(param_1 + 0xa0) != '\x02')) {
    uVar2 = 0xfffffff6;
    if (*(char *)(param_1 + 0xa1) != '\x02') {
      uVar1 = (**(code **)(**(long **)(param_1 + 0x30) + 0x3d8))(*(long **)(param_1 + 0x30),2);
      uVar2 = 0xfffffff6;
      if ((uVar1 & 1) == 0) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0xfffffff6;
  }
  return uVar2;
}


