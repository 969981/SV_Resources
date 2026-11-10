/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cc1a0; name: FUN_001cc1a0
 */


undefined8 FUN_001cc1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x48);
  if (lVar2 == 0) {
    lVar2 = FUN_001ed3ec(*(undefined8 *)(param_4 + 0x20),&DAT_03c1ceee);
    *(long *)(param_4 + 0x48) = lVar2;
    if (lVar2 == 0) {
      return 0xffffffffffffffff;
    }
  }
  uVar1 = FUN_001ed410(param_1,param_2,param_3,lVar2);
  return uVar1;
}


