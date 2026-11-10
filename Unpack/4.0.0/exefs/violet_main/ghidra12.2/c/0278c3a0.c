/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278c3a0; name: FUN_0278c3a0
 */


void FUN_0278c3a0(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = nn::err::ErrorCode::IsValid();
  if ((uVar1 & 1) == 0) {
    return;
  }
  nn::err::ShowError(*param_1);
  return;
}


