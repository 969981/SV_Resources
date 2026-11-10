/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 020fe4e8; name: FUN_020fe4e8
 */


undefined4 FUN_020fe4e8(long param_1,byte param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar1 = FUN_02923610(*(undefined8 *)(param_1 + 0x10));
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x10) + 0x38) + 0x499) >> 2 & 1) != 0) {
    plVar3 = (long *)0x0;
    if (param_2 < 5) {
      plVar3 = (long *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + (ulong)param_2 * 0x38 + 0x28);
    }
    if ((((char)plVar3[6] != '\0') && (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0)) &&
       (uVar2 = (**(code **)(*plVar3 + 0x560))(plVar3,8), 0 < (int)uVar2)) {
      if (5 < uVar2) {
        uVar2 = 6;
      }
      uVar1 = *(undefined4 *)(&DAT_03d69d1c + (ulong)(uVar2 - 1) * 4);
    }
  }
  return uVar1;
}


