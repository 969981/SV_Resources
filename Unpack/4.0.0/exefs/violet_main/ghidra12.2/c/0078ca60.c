/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0078ca60; name: FUN_0078ca60
 */


void FUN_0078ca60(undefined8 *param_1)

{
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  *param_1 = 0;
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_38);
  *(undefined4 *)param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_018ff39c((undefined4 *)((long)param_1 + 4),local_38);
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}


