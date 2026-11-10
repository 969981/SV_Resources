/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001cc124; name: FUN_001cc124
 */


long FUN_001cc124(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if ((param_2 == 0) && (param_3 == 0)) {
    if (lVar2 == 0) {
      return 0;
    }
  }
  else if (lVar2 == 0) {
    lVar2 = FUN_001ed3ec(*(undefined8 *)(param_1 + 0x20),&DAT_03c1ceee);
    *(long *)(param_1 + 0x48) = lVar2;
    if (lVar2 == 0) {
      return 1;
    }
  }
  iVar1 = FUN_001ed434(lVar2,param_2,param_3);
  return (ulong)(iVar1 != 0) << 1;
}


