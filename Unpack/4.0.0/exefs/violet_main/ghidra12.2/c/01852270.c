/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01852270; name: FUN_01852270
 */


void FUN_01852270(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  FUN_01582534();
  uVar1 = FUN_014813e4();
  uVar2 = FUN_01481400(uVar1,*param_3);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_014813f4(param_1,*param_3);
    uVar3 = FUN_01243584(param_1);
    FUN_018522e0(uVar3,uVar1,*(undefined2 *)(param_3 + 1));
    *param_2 = 1;
  }
  return;
}


