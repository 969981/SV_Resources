/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0183da74; name: FUN_0183da74
 */


undefined8 FUN_0183da74(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  byte local_28 [4];
  byte local_24 [4];
  
  uVar1 = FUN_0183db04(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),param_3,param_4);
  FUN_01253868(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar1,local_24,local_28);
  uVar3 = (ulong)local_24[0];
  if ((uVar3 < 5) && (local_28[0] < *(byte *)(param_2 + uVar3 * 0x38 + 0x58))) {
    uVar2 = *(undefined8 *)(param_2 + uVar3 * 0x38 + (ulong)local_28[0] * 8 + 0x28);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


