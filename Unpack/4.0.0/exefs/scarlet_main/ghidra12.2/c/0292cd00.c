/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292cd00; name: FUN_0292cd00
 */


undefined8 FUN_0292cd00(long param_1,void *param_2)

{
  memcpy((void *)(param_1 + 0x18),param_2,0x58);
  FUN_0292cda8((void *)(param_1 + 0x18));
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)((long)param_2 + 0x58);
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)((long)param_2 + 0x5a);
  *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)((long)param_2 + 0x5c);
  return 0x5e;
}


