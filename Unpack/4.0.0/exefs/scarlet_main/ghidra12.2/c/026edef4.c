/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026edef4; name: FUN_026edef4
 */


void FUN_026edef4(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 auStack_a0 [13];
  undefined8 local_38;
  
  if ((*param_2 != 0) && (lVar2 = *(long *)(*param_2 + 0x10), lVar2 != 0)) {
    puVar3 = *(undefined8 **)(lVar2 + 0x150);
    puVar1 = *(undefined8 **)(lVar2 + 0x158);
    auStack_a0[0] = param_1;
    if (puVar3 != puVar1) {
      local_38 = *puVar3;
      FUN_026eebd0(auStack_a0,&local_38);
      if (puVar3 + 1 != puVar1) {
        local_38 = puVar3[1];
        FUN_026eebd0(auStack_a0,&local_38);
        if (puVar3 + 2 != puVar1) {
          local_38 = puVar3[2];
          FUN_026eebd0(auStack_a0,&local_38);
          if (puVar3 + 3 != puVar1) {
            local_38 = puVar3[3];
            FUN_026eebd0(auStack_a0,&local_38);
            for (puVar3 = puVar3 + 4; puVar3 != puVar1; puVar3 = puVar3 + 1) {
              local_38 = *puVar3;
              FUN_026eebd0(auStack_a0,&local_38);
            }
          }
        }
      }
    }
    FUN_02ba9738(auStack_a0);
  }
  return;
}


