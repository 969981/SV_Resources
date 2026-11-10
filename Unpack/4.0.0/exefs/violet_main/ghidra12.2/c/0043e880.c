/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0043e880; name: FUN_0043e880
 */


undefined8 FUN_0043e880(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  code *pcVar2;
  
  if ((((param_3 >> 0x1f == 0) && (*(long *)(param_1 + 0x10) != 0)) &&
      (pcVar2 = *(code **)(*(long *)(param_1 + 0x10) + 0xb0), pcVar2 != (code *)0x0)) &&
     (iVar1 = (*pcVar2)(param_1,9,param_3,param_2), 0 < iVar1)) {
    return 1;
  }
  return 0;
}


