/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004015d0; name: FUN_004015d0
 */


undefined8 FUN_004015d0(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    return 0xffffffff;
  }
  uVar1 = FUN_003eb2b0();
  uVar2 = FUN_003eb2b0(*(undefined8 *)(param_1 + 0x10));
  uVar3 = FUN_003ec4e0(uVar1,uVar2);
  return uVar3;
}


