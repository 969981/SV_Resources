/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298d0ac; name: FUN_0298d0ac
 */


void FUN_0298d0ac(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30));
  uVar2 = FUN_01021c94(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x30),param_3);
  FUN_0294ec30(*(undefined8 *)(param_1 + 0x18),uVar1,uVar2);
  return;
}


