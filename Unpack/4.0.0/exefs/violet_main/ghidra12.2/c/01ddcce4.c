/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ddcce4; name: FUN_01ddcce4
 */


void FUN_01ddcce4(undefined8 param_1)

{
  short sVar1;
  long lVar2;
  
  lVar2 = FUN_0119579c();
  if (lVar2 != 0) {
    sVar1 = FUN_00e974e0(*(undefined8 *)(lVar2 + 0x70));
    if (sVar1 != 0) {
      FUN_01dd0490(param_1,sVar1);
      return;
    }
  }
  return;
}


