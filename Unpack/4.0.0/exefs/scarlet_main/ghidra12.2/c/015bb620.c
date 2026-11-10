/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 015bb620; name: FUN_015bb620
 */


char * FUN_015bb620(undefined8 *param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  
  switch(*(undefined1 *)param_1[1]) {
  case 0:
    uVar1 = (ulong)*(ushort *)*param_1;
    if (3 < uVar1) {
      return "other_player_0";
    }
    ppuVar2 = &PTR_s_other_player_0_04554300;
    break;
  case 1:
  case 2:
    uVar1 = (ulong)*(ushort *)*param_1;
    if (3 < uVar1) {
      return "other_player_ride_0";
    }
    ppuVar2 = &PTR_s_other_player_ride_0_04554320;
    break;
  case 3:
    uVar1 = (ulong)*(ushort *)*param_1;
    if (3 < uVar1) {
      return "other_player_rotom_0";
    }
    ppuVar2 = &PTR_s_other_player_rotom_0_04554340;
    break;
  default:
    uVar1 = (ulong)*(ushort *)*param_1;
    if (3 < uVar1) {
      return "other_player_object_0";
    }
    ppuVar2 = &PTR_s_other_player_object_0_04554360;
  }
  return ppuVar2[uVar1];
}


