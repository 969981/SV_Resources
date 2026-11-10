/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f66f4; name: FUN_001f66f4
 */


long FUN_001f66f4(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,ulong param_6)

{
  long lVar1;
  uint local_24;
  
  *param_2 = 0;
  lVar1 = FUN_001f6b1c(&local_24,(undefined8 *)(param_1 + 0xd8),param_2,
                       *(undefined4 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xd8),param_3,
                       param_4,param_5);
  if ((lVar1 == -1) || (param_6 < local_24)) {
    lVar1 = -0x20b;
  }
  else {
    *(ulong *)(param_1 + 0xb8) = (ulong)local_24;
  }
  return lVar1;
}


