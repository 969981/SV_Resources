/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00449bd0; name: FUN_00449bd0
 */


void FUN_00449bd0(byte *param_1,byte *param_2,long param_3,undefined8 param_4,uint *param_5,
                 uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_48;
  uint local_44;
  
  uVar5 = *param_6;
  if (param_7 == 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar5 == 0) {
        uVar3 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
        local_48 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
        local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
        FUN_004485e0(&local_48,param_4);
        uVar3 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
        uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        *param_5 = uVar3 >> 0x10 | uVar3 << 0x10;
        param_5[1] = uVar4 >> 0x10 | uVar4 << 0x10;
      }
      bVar1 = *param_1;
      bVar2 = *(byte *)((long)param_5 + (long)(int)uVar5);
      *(byte *)((long)param_5 + (long)(int)uVar5) = bVar1;
      *param_2 = bVar2 ^ bVar1;
      uVar5 = uVar5 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar5 == 0) {
        uVar3 = (*param_5 & 0xff00ff00) >> 8 | (*param_5 & 0xff00ff) << 8;
        local_48 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar3 = (param_5[1] & 0xff00ff00) >> 8 | (param_5[1] & 0xff00ff) << 8;
        local_44 = uVar3 >> 0x10 | uVar3 << 0x10;
        FUN_004485e0(&local_48,param_4);
        uVar3 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
        uVar4 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        *param_5 = uVar3 >> 0x10 | uVar3 << 0x10;
        param_5[1] = uVar4 >> 0x10 | uVar4 << 0x10;
      }
      bVar1 = *(byte *)((long)param_5 + (long)(int)uVar5) ^ *param_1;
      *param_2 = bVar1;
      *(byte *)((long)param_5 + (long)(int)uVar5) = bVar1;
      uVar5 = uVar5 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  *param_6 = uVar5;
  return;
}


