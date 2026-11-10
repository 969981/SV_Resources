/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00447f20; name: FUN_00447f20
 */


void FUN_00447f20(byte *param_1,byte *param_2,long param_3,undefined8 param_4,uint *param_5,
                 uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  
  uVar3 = *param_6;
  local_60 = (uint)(byte)*param_5 << 0x18 | (uint)*(byte *)((long)param_5 + 1) << 0x10 |
             (uint)*(byte *)((long)param_5 + 2) << 8 | (uint)*(byte *)((long)param_5 + 3);
  uStack_5c = (uint)(byte)param_5[1] << 0x18 | (uint)*(byte *)((long)param_5 + 5) << 0x10 |
              (uint)*(byte *)((long)param_5 + 6) << 8 | (uint)*(byte *)((long)param_5 + 7);
  local_58 = *param_5;
  local_54 = param_5[1];
  if (param_3 != 0) {
    iVar4 = 0;
    do {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        FUN_00447200(&local_60,param_4);
        uVar1 = (local_60 & 0xff00ff00) >> 8 | (local_60 & 0xff00ff) << 8;
        uVar2 = (uStack_5c & 0xff00ff00) >> 8 | (uStack_5c & 0xff00ff) << 8;
        iVar4 = iVar4 + 1;
        local_58 = uVar1 >> 0x10 | uVar1 << 0x10;
        local_54 = uVar2 >> 0x10 | uVar2 << 0x10;
      }
      *param_2 = *(byte *)((long)&local_58 + (long)(int)uVar3) ^ *param_1;
      uVar3 = uVar3 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
    if (iVar4 != 0) {
      *(byte *)((long)param_5 + 3) = (byte)local_60;
      *(byte *)((long)param_5 + 7) = (byte)uStack_5c;
      *(byte *)param_5 = (byte)(local_60 >> 0x18);
      *(byte *)((long)param_5 + 2) = (byte)(local_60 >> 8);
      *(byte *)((long)param_5 + 1) = (byte)(local_60 >> 0x10);
      *(byte *)((long)param_5 + 5) = (byte)(uStack_5c >> 0x10);
      *(byte *)(param_5 + 1) = (byte)(uStack_5c >> 0x18);
      *(byte *)((long)param_5 + 6) = (byte)(uStack_5c >> 8);
    }
  }
  *param_6 = uVar3;
  return;
}


