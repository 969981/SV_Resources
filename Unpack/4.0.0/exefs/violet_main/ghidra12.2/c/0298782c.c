/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298782c; name: FUN_0298782c
 */


void FUN_0298782c(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_2458 [9256];
  
  FUN_0123de68();
  FUN_0123de70();
  FUN_01245aa8();
  FUN_01245ab0(param_1);
  FUN_010af048();
  FUN_0123f628(param_1);
  FUN_010aeff4();
  FUN_01245ab8(param_1);
  FUN_01249bcc();
  FUN_013708f4(auStack_2458);
  FUN_02987970(param_1,auStack_2458,*param_3);
  FUN_029879a0(param_1,auStack_2458);
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar3 = FUN_0123de78();
  if ((uVar3 & 1) == 0) {
    FUN_01246e90(param_1);
    FUN_01246b30();
  }
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar3 = FUN_0123de78();
  if ((uVar3 & 1) == 0) {
    FUN_029879d0(param_1);
    FUN_0123de68(param_1);
    FUN_0123de70();
    uVar3 = FUN_0123de78();
    if ((uVar3 & 1) == 0) {
      FUN_02987a14(param_1);
    }
    FUN_0123de68(param_1);
    FUN_0123de70();
    uVar3 = FUN_0123de78();
    if ((uVar3 & 1) == 0) {
      FUN_02987a40(param_1);
    }
    FUN_0123de68(param_1);
    FUN_0123de70();
    uVar2 = FUN_01245aa0();
    uVar3 = FUN_01245ac0(param_1,uVar2);
    if ((uVar3 & 1) != 0) {
      FUN_02987a6c(param_1);
    }
  }
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar1 = FUN_01245aa0();
  *param_2 = uVar1;
  return;
}


