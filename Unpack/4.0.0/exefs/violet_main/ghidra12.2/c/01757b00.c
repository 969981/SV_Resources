/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01757b00; name: FUN_01757b00
 */


void FUN_01757b00(undefined8 param_1,undefined8 *param_2)

{
  DAT_0485dd20 = param_2[2];
  DAT_0485dd10 = *param_2;
  DAT_0485dd18 = param_2[1];
  DAT_0485dd08 = param_1;
  nn::account::GetUserId((Uid *)&DAT_0485dd28,(UserHandle *)&DAT_0485dd10);
  return;
}


