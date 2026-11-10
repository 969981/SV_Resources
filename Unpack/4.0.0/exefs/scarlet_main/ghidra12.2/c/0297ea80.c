/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297ea80; name: FUN_0297ea80
 */


bool FUN_0297ea80(long param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0298c710(*(undefined8 *)(param_1 + 0x20));
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    FUN_0298d8c0(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  }
  return bVar1;
}


