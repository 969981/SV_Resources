/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278b0e0; name: FUN_0278b0e0
 */


void FUN_0278b0e0(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = FUN_0278b090();
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    uVar2 = nn::account::AsyncContext::GetResult();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  *(bool *)param_1 = bVar1;
  return;
}


