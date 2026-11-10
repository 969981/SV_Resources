/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003a4300; name: FUN_003a4300
 */


undefined8 FUN_003a4300(long param_1,ulong *param_2)

{
  int iVar1;
  
  iVar1 = FUN_003a4380(param_1 + 0x18e0,param_2 + 1);
  if (iVar1 < 1) {
    if (0x3f < (uint)-iVar1) {
      return 0;
    }
    if ((*param_2 >> ((ulong)(uint)-iVar1 & 0x3f) & 1) != 0) {
      return 0;
    }
  }
  FUN_003a6e20(param_1 + 0xe90,param_1 + 0x18e0);
  return 1;
}


