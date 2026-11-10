/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02985e14; name: FUN_02985e14
 */


void FUN_02985e14(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [56];
  
  FUN_012466dc(auStack_58);
  FUN_02985e80(param_1,auStack_58,*param_3);
  FUN_02985f50(param_1,auStack_58);
  uVar1 = FUN_02985f80(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_0123de68(param_1);
    uVar2 = FUN_0123de70();
    FUN_0123fa5c(uVar2,4);
  }
  return;
}


