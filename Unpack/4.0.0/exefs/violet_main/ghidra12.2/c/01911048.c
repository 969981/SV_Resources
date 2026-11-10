/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01911048; name: FUN_01911048
 */


int FUN_01911048(undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_0124e480();
  uVar4 = FUN_0191112c();
  if ((uVar4 & 1) != 0) {
    bVar1 = (**(code **)(*param_2 + 0x118))(param_2);
    bVar2 = (**(code **)(*param_3 + 0x118))(param_3);
    if (bVar1 < bVar2) {
      return 0x19a;
    }
  }
  FUN_0124e480(param_1);
  FUN_0170aedc();
  fVar5 = (float)FUN_01911124();
  if (fVar5 <= 0.0) {
    iVar3 = 0x1000;
  }
  else {
    FUN_0124e480(param_1);
    FUN_0170aedc();
    fVar5 = (float)FUN_01911124();
    FUN_0124e480(param_1);
    FUN_0170aedc();
    fVar6 = (float)FUN_01911124();
    fVar7 = 0.5;
    if (fVar5 <= 0.0) {
      fVar7 = -0.5;
    }
    iVar3 = (int)(fVar7 + fVar6 * 4096.0);
  }
  return iVar3;
}


