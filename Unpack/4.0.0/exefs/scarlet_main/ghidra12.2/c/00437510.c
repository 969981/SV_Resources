/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00437510; name: FUN_00437510
 */


void FUN_00437510(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined4 *param_5,
                 uint *param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar1 = *param_6;
  local_60 = *param_5;
  uStack_5c = param_5[1];
  local_58 = *param_5;
  local_54 = param_5[1];
  if (param_3 != 0) {
    iVar2 = 0;
    do {
      param_3 = param_3 + -1;
      if (uVar1 == 0) {
        FUN_004348c0(&local_60,param_4,1);
        iVar2 = iVar2 + 1;
        local_58 = local_60;
        local_54 = uStack_5c;
      }
      *param_2 = *(byte *)((long)&local_58 + (long)(int)uVar1) ^ *param_1;
      uVar1 = uVar1 + 1 & 7;
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
    } while (param_3 != 0);
    if (iVar2 != 0) {
      *(char *)param_5 = (char)local_60;
      *(char *)(param_5 + 1) = (char)uStack_5c;
      *(char *)((long)param_5 + 1) = (char)((uint)local_60 >> 8);
      *(char *)((long)param_5 + 3) = (char)((uint)local_60 >> 0x18);
      *(char *)((long)param_5 + 2) = (char)((uint)local_60 >> 0x10);
      *(char *)((long)param_5 + 6) = (char)((uint)uStack_5c >> 0x10);
      *(char *)((long)param_5 + 5) = (char)((uint)uStack_5c >> 8);
      *(char *)((long)param_5 + 7) = (char)((uint)uStack_5c >> 0x18);
    }
  }
  *param_6 = uVar1;
  return;
}


