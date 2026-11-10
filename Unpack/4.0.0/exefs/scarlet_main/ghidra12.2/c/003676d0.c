/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003676d0; name: FUN_003676d0
 */


void FUN_003676d0(undefined8 *param_1,void *param_2,ulong param_3)

{
  undefined8 *__dest;
  undefined8 *local_40;
  undefined1 auStack_38 [8];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  if (param_3 < 0x18) {
    local_40 = (undefined8 *)0x0;
    auStack_38[0] = (char)param_3;
    if (param_3 == 0) goto LAB_00367758;
LAB_00367744:
    __dest = (undefined8 *)(auStack_38 + 1);
  }
  else {
    local_40 = (undefined8 *)FUN_0038c780(param_3 + 0x30);
    local_40[5] = 1;
    *(undefined4 *)(local_40 + 1) = 3;
    *local_40 = local_40 + 5;
    local_40[4] = local_40;
    local_40[2] = local_40;
    local_40[3] = &LAB_00368360;
    __dest = local_40 + 6;
    auStack_38 = (undefined1  [8])param_3;
    puStack_30 = __dest;
    if (local_40 == (undefined8 *)0x0) goto LAB_00367744;
  }
  memcpy(__dest,param_2,param_3);
LAB_00367758:
  param_1[1] = auStack_38;
  *param_1 = local_40;
  param_1[3] = uStack_28;
  param_1[2] = puStack_30;
  return;
}


