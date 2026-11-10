/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001fa3a8; name: FUN_001fa3a8
 */


int FUN_001fa3a8(long param_1,byte param_2,int param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  if (param_3 == 0) {
    iVar3 = -0x1f5;
  }
  else {
    lVar4 = FUN_001f45a0(param_1 + 0x890,0x98);
    if (lVar4 == 0) {
      iVar3 = -0x385;
    }
    else {
      FUN_001f9154();
      uVar1 = *param_4;
      uVar2 = param_4[1];
      *(undefined1 *)(lVar4 + 0x71) = 0;
      *(undefined8 *)(lVar4 + 0x60) = uVar1;
      *(undefined8 *)(lVar4 + 0x68) = uVar2;
      *(byte *)(lVar4 + 0x70) = param_2 & 1;
      FUN_001f4880(lVar4,0,param_3);
      iVar3 = FUN_001ee7d8(param_1,lVar4);
      if (iVar3 != 0) {
        FUN_001f489c(lVar4);
        FUN_001f45b0(param_1 + 0x890,lVar4);
      }
    }
  }
  return iVar3;
}


