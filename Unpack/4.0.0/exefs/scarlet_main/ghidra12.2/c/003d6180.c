/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003d6180; name: FUN_003d6180
 */


undefined8 FUN_003d6180(long param_1,int param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x550);
  uVar1 = *(uint *)(lVar2 + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    *param_3 = (long)&DAT_03cdd17e;
    return 1;
  }
  if (uVar1 == 0x20000) {
    *param_3 = (long)&DAT_03cdd180;
    return 1;
  }
  if (uVar1 == 0x30000) {
    *param_3 = (long)&DAT_03cdd17e;
    return 2;
  }
  if ((*(int *)(param_1 + 0x38) == param_2) && (*(long *)(lVar2 + 0x1a8) != 0)) {
    *param_3 = *(long *)(lVar2 + 0x1a8);
    return *(undefined8 *)(*(long *)(param_1 + 0x550) + 0x1b0);
  }
  if (*(long *)(lVar2 + 0x198) == 0) {
    *param_3 = (long)&DAT_03cdd182;
    return 0x1a;
  }
  *param_3 = *(long *)(lVar2 + 0x198);
  return *(undefined8 *)(*(long *)(param_1 + 0x550) + 0x1a0);
}


