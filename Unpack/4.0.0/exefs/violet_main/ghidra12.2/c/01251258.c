/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01251258; name: FUN_01251258
 */


void FUN_01251258(undefined8 param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  uVar2 = FUN_0124a808();
  if (((uVar2 & 1) == 0) || (uVar2 = FUN_014603fc(param_1), (uVar2 & 1) == 0)) {
    if (*param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_014813f4(param_1);
    }
    uVar2 = FUN_02983ecc(param_1,param_3);
    if ((uVar2 & 1) != 0) {
      uVar4 = FUN_01243584(param_1);
      FUN_018522e0(uVar4,uVar3,*(undefined2 *)((long)param_3 + 0x42));
      bVar1 = FUN_02983f94(param_1,param_3);
      *param_2 = bVar1 & 1;
      uVar4 = FUN_01243584(param_1);
      FUN_018521d8(uVar4,uVar3);
      return;
    }
    bVar1 = FUN_02983f94(param_1,param_3);
    *param_2 = bVar1 & 1;
  }
  return;
}


