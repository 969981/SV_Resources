/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021be9c0; name: FUN_021be9c0
 */


bool FUN_021be9c0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    (*(code *)**(undefined8 **)(lVar2 + 8))((undefined8 *)(lVar2 + 8));
    uVar1 = FUN_021bea38();
    if (((uVar1 & 1) != 0) && (uVar1 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar1 & 1) == 0))
    {
      return *(long *)(lVar2 + 0xd0) == *(long *)*param_2;
    }
  }
  return false;
}


