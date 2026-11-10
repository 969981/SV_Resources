/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02737758; name: FUN_02737758
 */


void FUN_02737758(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = strcmp(*(char **)(param_3 + 0x30),PTR_s_Probe_047e1340);
  if (iVar1 == 0) {
    FUN_01770efc(*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x600) = 0x1010101;
  }
  return;
}


