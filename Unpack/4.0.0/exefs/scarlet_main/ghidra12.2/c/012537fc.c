/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012537fc; name: FUN_012537fc
 */


undefined8 FUN_012537fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  byte local_8 [4];
  byte local_4 [4];
  
  FUN_01253868(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x290),param_2,local_4,local_8);
  uVar2 = (ulong)local_4[0];
  if ((uVar2 == 5) || (*(byte *)(param_1 + uVar2 * 0x38 + 0x58) <= local_8[0])) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + uVar2 * 0x38 + (ulong)local_8[0] * 8 + 0x28);
  }
  return uVar1;
}


