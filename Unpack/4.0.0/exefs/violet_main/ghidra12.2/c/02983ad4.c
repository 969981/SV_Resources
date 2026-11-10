/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02983ad4; name: FUN_02983ad4
 */


void FUN_02983ad4(undefined8 param_1,uint *param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5,ushort *param_6,uint param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  iVar1 = FUN_02983c58(param_5);
  if (iVar1 == 2) {
    *param_2 = param_7 & 1;
    uVar4 = 1;
  }
  else if (iVar1 == 1) {
    iVar1 = FUN_0124e528(param_1,0);
    *param_2 = (param_6[1] & 0xf) + iVar1;
    param_2[1] = (uint)*param_6;
    FUN_01582534(param_1);
    uVar3 = FUN_014813ec();
    uVar2 = FUN_010e161c(uVar3,param_4);
    param_2[2] = uVar2 & 0xff;
    uVar4 = 3;
  }
  else {
    uVar4 = 0;
  }
  *param_3 = uVar4;
  return;
}


