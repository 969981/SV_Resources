/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02855d74; name: FUN_02855d74
 */


void FUN_02855d74(undefined8 param_1,undefined8 param_2,ushort param_3)

{
  ushort uVar1;
  long lVar2;
  
  uVar1 = FUN_02855ddc();
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


