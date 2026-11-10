/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003427d0; name: FUN_003427d0
 */


undefined8 FUN_003427d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != 0) {
    do {
      lVar2 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_2 + 8),param_3,param_4);
      if (lVar2 == 0) {
        return *(undefined8 *)(param_2 + 0x10);
      }
      lVar1 = 0x18;
      if (lVar2 < 1) {
        lVar1 = 0x20;
      }
      param_2 = *(long *)(param_2 + lVar1);
    } while (param_2 != 0);
  }
  return 0;
}


