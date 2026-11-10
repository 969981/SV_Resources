/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003748fc; name: FUN_003748fc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003748fc(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = _UNK_03cab998;
  uVar1 = _DAT_03cab990;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uVar2;
  *(undefined8 *)(param_1 + 2) = uVar1;
  auVar3 = FUN_0038dd50(0);
  *(undefined8 *)(param_1 + 10) = DAT_03cb5680;
  *(undefined1 (*) [16])(param_1 + 6) = auVar3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = param_2;
  return;
}


