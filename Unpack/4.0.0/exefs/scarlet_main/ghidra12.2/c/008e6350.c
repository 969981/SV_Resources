/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008e6350; name: FUN_008e6350
 */


undefined8
FUN_008e6350(long param_1,undefined8 param_2,long param_3,uint param_4,undefined8 param_5,
            int *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  long lStack_58;
  uint local_50;
  undefined8 local_48;
  undefined1 local_40;
  int *local_38;
  
  local_40 = param_4 == 3;
  iVar1 = *param_6;
  if ((bool)local_40) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9b8) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9c0) = 6;
  local_60 = param_2;
  lStack_58 = param_3;
  local_50 = param_4;
  local_48 = param_5;
  local_38 = param_6;
  uVar2 = FUN_008c7c70(&local_60);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if (*(code **)(param_3 + 0x3f8) != (code *)0x0) {
      (**(code **)(param_3 + 0x3f8))(&local_60);
    }
    iVar1 = *param_6;
    *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9b8) = 0;
    uVar3 = 1;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x9e8 + 0x9c0) = 6;
  }
  return uVar3;
}


