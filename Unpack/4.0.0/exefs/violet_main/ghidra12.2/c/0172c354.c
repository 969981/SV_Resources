/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0172c354; name: FUN_0172c354
 */


void FUN_0172c354(undefined8 *param_1,long param_2)

{
  undefined1 auStack_60 [64];
  
  if (*(char *)(param_2 + 8) == '\0') {
    memcpy(auStack_60,&DAT_03d627e4,0x40);
    nn::crypto::detail::Sha256Impl::Update((void *)(param_2 + 0x10),(ulong)auStack_60);
    *(undefined1 *)(param_2 + 8) = 1;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  nn::crypto::detail::Sha256Impl::GetHash((void *)(param_2 + 0x10),(ulong)param_1);
  return;
}


