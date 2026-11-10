/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ebd8c; name: FUN_007ebd8c
 */


undefined8
FUN_007ebd8c(long param_1,long param_2,byte param_3,uint param_4,byte param_5,short param_6)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047d0860;
  if (((*(char *)(param_2 + 0x621) == '\0') &&
      (((*(int *)(param_1 + 8) == 0 || (((*(char *)(param_2 + 0x622) != '\0' ^ param_3) & 1) == 0))
       && (*(uint *)(param_2 + 0x5f8) <= param_4)))) &&
     (((*(char *)(param_2 + 0x623) != '\0' ^ param_5) & 1) == 0)) {
    if (param_6 == 0) {
      if (*(short *)(param_2 + 0x10) == 0) {
        return 1;
      }
      lVar2 = FUN_01f7c4e8(*(undefined8 *)PTR_DAT_047d0860);
      if (*(long *)(lVar2 + 0x98) == 0) {
        return 1;
      }
      lVar2 = FUN_01f7c4e8(*(undefined8 *)puVar1);
      if (*(short *)(param_2 + 0x10) == *(short *)(*(long *)(lVar2 + 0x98) + 0x38)) {
        return 1;
      }
    }
    else if (*(short *)(param_2 + 0x10) == param_6) {
      return 1;
    }
  }
  return 0;
}


