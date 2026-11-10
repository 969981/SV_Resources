/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01248678; name: FUN_01248678
 */


void FUN_01248678(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *param_2 = 0;
  uVar1 = (**(code **)(*(long *)*param_3 + 0x98))();
  FUN_01582534(param_1);
  uVar2 = FUN_014813e4();
  uVar3 = FUN_01481400(uVar2,uVar1);
  if (((uVar3 & 1) != 0) && (uVar3 = (**(code **)(*(long *)*param_3 + 0x200))(), (uVar3 & 1) == 0))
  {
    FUN_012486fc(param_1,*param_3);
    *param_2 = 1;
  }
  return;
}


