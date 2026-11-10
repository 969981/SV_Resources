/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02e37ffc; name: FUN_02e37ffc
 */


undefined8 FUN_02e37ffc(long param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (uVar2 == 0) {
    if (*(char *)(*(long *)(param_1 + 0x38) + 0x8d) == '\x02') {
      *(undefined2 *)(param_1 + 0x98) = 0x102;
      *(undefined1 *)(param_1 + 0x9a) = 3;
    }
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x90);
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0x95) = (char)uVar1;
  }
  else {
    if (3 < uVar2) {
      return 1;
    }
    uVar3 = (**(code **)(&DAT_045ff4f0 + (long)(int)uVar2 * 0x10))
                      (param_1 + (*(long *)(&DAT_045ff4f8 + (long)(int)uVar2 * 0x10) >> 1),
                       (undefined4 *)(param_1 + 100));
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 100) = 0;
  }
  *param_2 = *param_2 + 1;
  return 0;
}


