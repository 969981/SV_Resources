/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02987af4; name: FUN_02987af4
 */


void FUN_02987af4(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  ulong uVar2;
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
  FUN_02987bd4(param_1,auStack_2458,*param_3);
  FUN_02987c04(param_1,auStack_2458);
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
    FUN_02987c34(param_1);
  }
  FUN_0123de68(param_1);
  FUN_0123de70();
  uVar1 = FUN_01245aa0();
  *param_2 = uVar1;
  return;
}


