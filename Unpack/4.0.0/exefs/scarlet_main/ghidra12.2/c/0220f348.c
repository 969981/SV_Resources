/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0220f348; name: FUN_0220f348
 */


void FUN_0220f348(long param_1,ulong param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined4 *param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((((*(char *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18) != '\0') ||
       (*(long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8) != 0)) &&
      (param_2 < *(ulong *)(param_1 + 0xb0))) &&
     ((*(ulong *)(param_1 + 0x48) <= param_2 ||
      ((*(ulong *)(*(long *)(param_1 + 0x40) + (param_2 >> 3 & 0x1ffffffffffffff8)) >>
        (param_2 & 0x3f) & 1) == 0)))) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + param_2 * 0x80);
    uStack_28 = param_7[1];
    local_30 = *param_7;
    uStack_38 = param_8[1];
    local_40 = *param_8;
    local_48 = *param_3;
    uStack_4c = *param_4;
    local_50 = *param_5;
    uStack_54 = *param_6;
    local_58 = *param_9;
    (*(code *)*puVar1)(puVar1 + 4,&local_48,&uStack_4c,&local_50,&uStack_54,&local_30,&local_40,
                       &local_58);
    plVar2 = (long *)(*(long *)(param_1 + 0xc0) + param_2 * 0x18 + 8);
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      *plVar2 = lVar3 + -1;
    }
  }
  return;
}


