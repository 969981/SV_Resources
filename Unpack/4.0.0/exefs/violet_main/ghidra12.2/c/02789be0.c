/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02789be0; name: FUN_02789be0
 */


void FUN_02789be0(void)

{
  undefined4 local_30 [4];
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_20 | 4),(Result *)local_30);
  if (DAT_047fb230 == '\x01') {
    if (DAT_047fb231 == '\x01') {
      FUN_018ffd50(local_30);
      FUN_018ff39c(local_20,local_30);
    }
    if (*(long *)PTR_DAT_047d0860 != 0) {
      FUN_02789b7c();
    }
    FUN_0078a088(0xe);
    DAT_047fb230 = '\0';
    FUN_00794a5c(local_30,0xe);
    FUN_018ff39c(local_20,local_30);
  }
  return;
}


