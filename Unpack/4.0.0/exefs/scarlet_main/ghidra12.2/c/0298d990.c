/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298d990; name: FUN_0298d990
 */


undefined8 FUN_0298d990(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x20);
  if (uVar2 == 0) {
    *(undefined8 *)(param_1 + 0x1c) = 0x100000000;
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 8) = *param_2;
    *(undefined8 *)(param_1 + 0x10) = uVar1;
  }
  else {
    uVar3 = FUN_0298fcd8(*(undefined4 *)(param_1 + 0x18));
    if (uVar3 <= uVar2) {
      return 0;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return 1;
}


