/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02785f14; name: FUN_02785f14
 */


void FUN_02785f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045df700;
  FUN_027851ac(param_1 + 0x4e);
  nn::bcat::DeliveryCacheProgress::~DeliveryCacheProgress((DeliveryCacheProgress *)(param_1 + 2));
  return;
}


