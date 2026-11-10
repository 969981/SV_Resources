/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298bf94; name: FUN_0298bf94
 */


void FUN_0298bf94(undefined8 param_1,long param_2,uint *param_3,undefined4 param_4,short param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  if (param_5 != 0x207) {
    uVar2 = FUN_01249340(param_1);
    uVar3 = FUN_01582534(param_1);
    uVar2 = FUN_0291c540(uVar2,uVar3,0x207,param_4,param_6);
    *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
    if ((*(long *)(param_2 + (ulong)*param_3 * 8) != 0) &&
       (uVar1 = *param_3 + 1, *param_3 = uVar1, 4 < uVar1)) {
      return;
    }
    if (param_5 == 0x206) goto LAB_0298c0a0;
  }
  uVar2 = FUN_01249340(param_1);
  uVar3 = FUN_01582534(param_1);
  uVar2 = FUN_0291c540(uVar2,uVar3,0x206,param_4,param_6);
  *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
  if (*(long *)(param_2 + (ulong)*param_3 * 8) == 0) {
    if (param_5 == 0x208) {
      return;
    }
  }
  else {
    uVar1 = *param_3 + 1;
    *param_3 = uVar1;
    if (param_5 == 0x208) {
      return;
    }
    if (4 < uVar1) {
      return;
    }
  }
LAB_0298c0a0:
  uVar2 = FUN_01249340(param_1);
  uVar3 = FUN_01582534(param_1);
  uVar2 = FUN_0291c540(uVar2,uVar3,0x208,param_4,param_6);
  *(undefined8 *)(param_2 + (ulong)*param_3 * 8) = uVar2;
  if (*(long *)(param_2 + (ulong)*param_3 * 8) != 0) {
    *param_3 = *param_3 + 1;
  }
  return;
}


