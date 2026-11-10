/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d5610; name: FUN_003d5610
 */


void FUN_003d5610(long param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x550) + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    *param_2 = (long)&DAT_03cdd16c;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x20000) {
    *param_2 = (long)&DAT_03cdd16e;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x30000) {
    *param_2 = (long)&DAT_03cdd16c;
    *param_3 = 2;
    return;
  }
  if (*(long *)(param_1 + 0x770) == 0) {
    *param_2 = (long)&DAT_03cdd170;
    *param_3 = 5;
    return;
  }
  *param_2 = *(long *)(param_1 + 0x770);
  *param_3 = *(undefined8 *)(param_1 + 0x768);
  return;
}


