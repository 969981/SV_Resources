/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00438e30; name: FUN_00438e30
 */


void FUN_00438e30(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,byte *param_7,uint *param_8)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_70;
  uint uStack_6c;
  byte local_68 [4];
  undefined1 local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  
  uVar3 = *param_8;
  uVar2 = *(undefined4 *)param_7;
  uStack_6c = *(uint *)(param_7 + 4);
  local_68[0] = *param_7;
  local_64 = (char)*(uint *)(param_7 + 4);
  uVar1 = (ulong)uStack_6c;
  local_68[1] = param_7[1];
  local_68[2] = param_7[2];
  local_68[3] = param_7[3];
  local_63 = param_7[5];
  local_62 = param_7[6];
  local_61 = param_7[7];
  if (param_3 != 0) {
    iVar4 = 0;
    local_70 = uVar2;
    do {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        FUN_004365c0(&local_70,param_4,param_5,param_6);
        uVar1 = (ulong)uStack_6c;
        local_68[1] = (byte)((uint)local_70 >> 8);
        local_68[2] = (byte)((uint)local_70 >> 0x10);
        local_68[3] = (byte)((uint)local_70 >> 0x18);
        local_63 = (byte)(uStack_6c >> 8);
        local_62 = (byte)(uStack_6c >> 0x10);
        iVar4 = iVar4 + 1;
        local_68[0] = (byte)local_70;
        local_64 = (char)uStack_6c;
        local_61 = (byte)(uStack_6c >> 0x18);
        uVar2 = local_70;
      }
      *param_2 = local_68[(int)uVar3] ^ *param_1;
      uVar3 = uVar3 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
    if (iVar4 != 0) {
      *param_7 = (byte)uVar2;
      param_7[3] = (byte)((uint)uVar2 >> 0x18);
      param_7[4] = (byte)uVar1;
      param_7[5] = (byte)(uVar1 >> 8);
      param_7[1] = (byte)((uint)uVar2 >> 8);
      param_7[2] = (byte)((uint)uVar2 >> 0x10);
      param_7[6] = (byte)(uVar1 >> 0x10);
      param_7[7] = (byte)(uVar1 >> 0x18);
    }
  }
  *param_8 = uVar3;
  return;
}


