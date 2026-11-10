/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01920eb8; name: FUN_01920eb8
 */


bool FUN_01920eb8(long param_1,void *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  
  pbVar1 = (byte *)(param_1 + 0x2420);
  uVar2 = (ulong)*pbVar1;
  if (uVar2 < 0x42) {
    param_1 = param_1 + uVar2 * 0x8c;
    memcpy((void *)(param_1 + 8),param_2,0x54);
    *(undefined8 *)(param_1 + 0x5c) = *(undefined8 *)((long)param_2 + 0x54);
    *(undefined1 *)(param_1 + 100) = *(undefined1 *)((long)param_2 + 0x5c);
    FUN_01920f40(param_1 + 0x68,(long)param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)((long)param_2 + 0x84);
    *pbVar1 = *pbVar1 + 1;
  }
  return uVar2 < 0x42;
}


