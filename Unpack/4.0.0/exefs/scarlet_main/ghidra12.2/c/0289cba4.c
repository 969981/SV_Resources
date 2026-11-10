/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289cba4; name: FUN_0289cba4
 */


void FUN_0289cba4(long param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long local_58;
  undefined1 local_50;
  undefined8 local_48;
  char local_40 [8];
  undefined8 local_38;
  
  if ((*param_3 != 0) && (uVar1 = FUN_0289cb9c(), (uVar1 & 1) != 0)) {
    FUN_0289d1e0(local_40,param_1,param_2,param_3);
    if (local_40[0] != '\0') {
      local_50 = FUN_013fcabc(*param_3);
      local_58 = *param_2;
      local_48 = local_38;
      FUN_0289d3c8(param_1 + 0x318,&local_58);
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 800);
  puVar2 = *(undefined8 **)(param_1 + 0x318);
  while (puVar2 != puVar3) {
    if (puVar2[2] == *param_2) {
      puVar4 = puVar2;
      if (puVar2 + 3 != puVar3) {
        puVar5 = puVar2;
        do {
          puVar4 = puVar5 + 3;
          puVar5[2] = puVar5[5];
          *puVar5 = *puVar4;
          puVar5[1] = puVar5[4];
          puVar5 = puVar4;
        } while (puVar3 + -3 != puVar4);
      }
      puVar3 = puVar4;
      *(undefined8 **)(param_1 + 800) = puVar3;
    }
    else {
      puVar2 = puVar2 + 3;
    }
  }
  return;
}


