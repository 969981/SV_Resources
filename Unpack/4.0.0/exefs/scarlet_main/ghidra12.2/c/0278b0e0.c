/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


