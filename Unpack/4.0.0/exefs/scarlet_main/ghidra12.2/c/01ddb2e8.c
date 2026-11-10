/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ddb2e8; name: FUN_01ddb2e8
 */


bool FUN_01ddb2e8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01dc28a8(*(undefined8 *)(param_1 + 0x1a8));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_01dd18b0(param_1,1);
    FUN_01dc2a18(*(undefined8 *)(param_1 + 0x1a8),0);
    FUN_01ddb340(*(undefined8 *)(param_1 + 0x1a8));
  }
  return bVar1;
}


