/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029829e4; name: FUN_029829e4
 */


int FUN_029829e4(undefined8 param_1,byte *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  
  if (param_2[3] == 0) {
    iVar1 = 0x1000;
    if ((param_3 != 0) && (1 < *param_2)) {
      plVar2 = (long *)FUN_0124acbc(param_1);
      iVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,&DAT_03d6a508);
      fVar3 = 0.5;
      if ((float)iVar1 / 100.0 <= 0.0) {
        fVar3 = -0.5;
      }
      iVar1 = (int)(((float)iVar1 / 100.0) * 4096.0 + fVar3);
    }
  }
  else {
    iVar1 = 0x1000;
  }
  return iVar1;
}


