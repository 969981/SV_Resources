/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0123ddd4; name: FUN_0123ddd4
 */


void FUN_0123ddd4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  ulong uVar2;
  
  FUN_0123de68();
  FUN_0123de70();
  FUN_01245aa8();
  FUN_0123dfcc(param_1);
  FUN_0123df48(param_1);
  FUN_0124dc48(param_1);
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar2 = FUN_0123de78();
  if ((uVar2 & 1) == 0) {
    FUN_01246e90(param_1);
    FUN_01246b30();
  }
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar2 = FUN_0123de78();
  if ((uVar2 & 1) == 0) {
    FUN_0123de88(param_1);
  }
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar1 = FUN_01245aa0();
  *param_2 = uVar1;
  return;
}


