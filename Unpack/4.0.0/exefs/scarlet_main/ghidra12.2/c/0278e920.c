/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0278e920; name: FUN_0278e920
 */


void FUN_0278e920(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = FUN_0278e8ec();
  if (param_3 < uVar1) {
    if ((*(long *)PTR_DAT_047d0a08 != 0) && (lVar2 = FUN_027e6980(), lVar2 != 0)) {
      lVar2 = FUN_027e6988();
      FUN_027e6978(param_1,*(undefined8 *)(lVar2 + (ulong)param_3 * 8));
      return;
    }
  }
  FUN_027c912c(param_1);
  return;
}


