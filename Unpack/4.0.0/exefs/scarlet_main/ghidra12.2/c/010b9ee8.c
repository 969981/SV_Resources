/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010b9ee8; name: FUN_010b9ee8
 */


void FUN_010b9ee8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long local_68;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      local_68 = *(long *)(param_1 + 0xf8) + lVar1;
      FUN_02210874(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + lVar1),&local_68,param_2,
                   param_3,param_4,param_5,param_6,param_7,param_8);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 < *(ulong *)(param_1 + 0x130));
  }
  return;
}


