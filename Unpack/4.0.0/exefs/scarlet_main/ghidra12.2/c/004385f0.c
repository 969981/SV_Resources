/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004385f0; name: FUN_004385f0
 */


void FUN_004385f0(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 *param_7,uint *param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  
  uVar3 = *param_8;
  if (param_9 == 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar3 == 0) {
        local_58 = *param_7;
        uStack_54 = param_7[1];
        FUN_004365c0(&local_58,param_4,param_5,param_6);
        *(char *)param_7 = (char)local_58;
        *(char *)(param_7 + 1) = (char)uStack_54;
        *(char *)((long)param_7 + 1) = (char)((uint)local_58 >> 8);
        *(char *)((long)param_7 + 3) = (char)((uint)local_58 >> 0x18);
        *(char *)((long)param_7 + 2) = (char)((uint)local_58 >> 0x10);
        *(char *)((long)param_7 + 6) = (char)((uint)uStack_54 >> 0x10);
        *(char *)((long)param_7 + 5) = (char)((uint)uStack_54 >> 8);
        *(char *)((long)param_7 + 7) = (char)((uint)uStack_54 >> 0x18);
      }
      bVar1 = *param_1;
      bVar2 = *(byte *)((long)param_7 + (long)(int)uVar3);
      *(byte *)((long)param_7 + (long)(int)uVar3) = bVar1;
      *param_2 = bVar2 ^ bVar1;
      uVar3 = uVar3 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      if (uVar3 == 0) {
        local_58 = *param_7;
        uStack_54 = param_7[1];
        FUN_004365c0(&local_58,param_4,param_5,param_6);
        *(char *)param_7 = (char)local_58;
        *(char *)(param_7 + 1) = (char)uStack_54;
        *(char *)((long)param_7 + 1) = (char)((uint)local_58 >> 8);
        *(char *)((long)param_7 + 3) = (char)((uint)local_58 >> 0x18);
        *(char *)((long)param_7 + 2) = (char)((uint)local_58 >> 0x10);
        *(char *)((long)param_7 + 6) = (char)((uint)uStack_54 >> 0x10);
        *(char *)((long)param_7 + 5) = (char)((uint)uStack_54 >> 8);
        *(char *)((long)param_7 + 7) = (char)((uint)uStack_54 >> 0x18);
      }
      bVar1 = *(byte *)((long)param_7 + (long)(int)uVar3) ^ *param_1;
      *param_2 = bVar1;
      *(byte *)((long)param_7 + (long)(int)uVar3) = bVar1;
      uVar3 = uVar3 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    }
  }
  *param_8 = uVar3;
  return;
}


