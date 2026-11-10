/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012459e0; name: FUN_012459e0
 */


void FUN_012459e0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  FUN_0123de68();
  FUN_0123de70();
  FUN_01245aa8();
  FUN_01245ab0(param_1);
  FUN_010af048();
  FUN_0123f628(param_1);
  FUN_010aeff4();
  FUN_01245ab8(param_1);
  FUN_01249bcc();
  FUN_01249340(param_1);
  FUN_010af004();
  FUN_01245b90(param_1,*param_3);
  FUN_01245b44(param_1);
  FUN_01245ae4(param_1);
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar2 = FUN_01245aa0();
  uVar3 = FUN_01245ac0(param_1,uVar2);
  if ((uVar3 & 1) != 0) {
    FUN_01245b18(param_1);
  }
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar1 = FUN_01245aa0();
  *param_2 = uVar1;
  return;
}


