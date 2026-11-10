/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02980738; name: FUN_02980738
 */


void FUN_02980738(undefined8 param_1,char param_2,char param_3)

{
  undefined *puVar1;
  
  FUN_02980944();
  if ((byte)(param_2 - 1U) < 4) {
    puVar1 = &DAT_03d6a4d0;
    if (param_3 != '\x01') {
      puVar1 = &DAT_03d6a4cc;
    }
    if (-1 < *(int *)(puVar1 + (ulong)(byte)(param_2 - 1U) * 0xc)) {
      FUN_02943244(param_1,1);
      return;
    }
  }
  return;
}


