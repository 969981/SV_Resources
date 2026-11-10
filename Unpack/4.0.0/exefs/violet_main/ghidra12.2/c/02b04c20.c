/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b04c20; name: FUN_02b04c20
 */


void FUN_02b04c20(undefined8 *param_1,long param_2,ulong param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar1 = param_2 + 0xbbfc;
  if (param_4 != 3) {
    lVar1 = 0;
  }
  lVar2 = param_2 + 0xbc74;
  if (param_4 != 2) {
    lVar2 = lVar1;
  }
  lVar1 = param_2 + 0xbcec;
  if (param_4 != 1) {
    lVar1 = lVar2;
  }
  puVar4 = (undefined8 *)(lVar1 + (param_3 & 0xff) * 0x18);
  uVar3 = *puVar4;
  uVar5 = puVar4[2];
  param_1[1] = puVar4[1];
  param_1[2] = uVar5;
  *param_1 = uVar3;
  return;
}


