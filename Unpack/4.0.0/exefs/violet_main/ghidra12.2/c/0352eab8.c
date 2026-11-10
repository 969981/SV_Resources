/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352eab8; name: FUN_0352eab8
 */


bool FUN_0352eab8(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  long local_38;
  int local_30;
  char local_28 [4];
  undefined1 auStack_24 [4];
  
  local_38 = *param_2;
  local_40 = (undefined4)param_2[1];
  local_30 = 0;
  local_48 = (undefined8 *)(PTR_DAT_047e7538 + 0x10);
  uVar3 = FUN_0353153c(&local_48,auStack_24,4,&local_68);
  if (((((uVar3 & 1) == 0) ||
       (uVar3 = (*(code *)*local_48)(&local_48,param_1 + 0x20,4,&local_68), (uVar3 & 1) == 0)) ||
      (uVar3 = (*(code *)*local_48)(&local_48,param_1 + 0x24,4,&local_68), (uVar3 & 1) == 0)) ||
     ((uVar3 = (*(code *)*local_48)(&local_48,local_28,1,&local_68), (uVar3 & 1) == 0 ||
      (uVar3 = (*(code *)*local_48)(&local_48,param_1 + 0x2a,2,&local_68),
      local_68 = PTR_DAT_047e7540, (uVar3 & 1) == 0)))) {
    bVar1 = false;
  }
  else {
    *(bool *)(param_1 + 0x28) = local_28[0] != '\0';
    local_50 = 0;
    local_68 = local_68 + 0x10;
    local_60 = (int)param_2[1] - local_30;
    local_58 = *param_2 + (long)local_30;
    iVar2 = FUN_03530cb4(param_1,&local_68);
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


