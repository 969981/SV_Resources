/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00888878; name: FUN_00888878
 */


int FUN_00888878(long param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_5c [4];
  int iStack_58;
  int iStack_54;
  short local_38 [2];
  uint local_34;
  
  uVar3 = FUN_00888360(param_1,&local_34,param_4,param_2);
  if ((uVar3 & 1) == 0) {
    iVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1bd1) == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(param_1 + 0x1bd8))();
      uVar3 = uVar3 & 0xffffffff;
    }
    uVar4 = (ulong)local_34;
    FUN_008889b0(param_1,uVar4,uVar3);
    nn::fontll::ScalableFontEngine::SetScale
              ((int)*(undefined8 *)(param_1 + 0x10) + (int)uVar3 * 0xb8,param_3 << 0x10,0,0);
    nn::fontll::ScalableFontEngine::GetError();
    iVar1 = nn::fontll::ScalableFontEngine::GetAdvance
                      ((short *)(*(long *)(param_1 + 0x10) + uVar3 * 0xb8),local_38,&iStack_54,
                       &iStack_58,(uint)auStack_5c,(ushort)param_2);
    if (iVar1 == 0xc9) {
      iVar2 = 0;
      *(undefined1 *)(param_1 + 0x1bd0) = 1;
    }
    else {
      iVar2 = 0;
      if (iVar1 == 0) {
        iVar2 = (int)(*(float *)(*(long *)(param_1 + 0x1bf0) + uVar4 * 0x1c + 0x10) *
                     (float)((int)*(short *)(*(long *)(param_1 + 0x1c10) + uVar4 * 2) +
                            (int)local_38[0]));
      }
    }
  }
  return iVar2;
}


