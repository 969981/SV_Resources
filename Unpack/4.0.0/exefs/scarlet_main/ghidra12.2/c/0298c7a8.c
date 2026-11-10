/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298c7a8; name: FUN_0298c7a8
 */


bool FUN_0298c7a8(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_0298c818(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_0298c820(uVar2,param_2,param_3,param_4);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_0292c938(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xd0),param_2,param_3,param_4);
  }
  return bVar1;
}


