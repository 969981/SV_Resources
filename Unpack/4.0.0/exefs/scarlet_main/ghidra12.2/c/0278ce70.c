/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278ce70; name: FUN_0278ce70
 */


undefined4 FUN_0278ce70(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    if (*(int *)(param_1 + 0x78) == 0x23) {
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      uVar1 = 0x200039;
    }
    else {
      if (*(int *)(param_1 + 0x78) != 0x3c) {
        return 0;
      }
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      uVar1 = 0x20000d;
    }
    FUN_0278ced4(local_18,uVar2,uVar1);
  }
  return local_18[0];
}


