/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e50f18; name: FUN_02e50f18
 */


void FUN_02e50f18(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  code *pcVar4;
  code *local_b8;
  undefined1 auStack_a0 [96];
  undefined1 local_24 [4];
  
  puVar1 = *(undefined8 **)(*param_1 + 0xf0);
  puVar2 = *(undefined8 **)(*param_1 + 0xf8);
  if (puVar1 != puVar2) {
    uVar3 = *param_3;
    local_b8 = (code *)0x0;
    pcVar4 = (code *)0x0;
    if ((code *)puVar1[2] != (code *)0x0) {
      (*(code *)puVar1[2])(puVar1 + 4,auStack_a0);
      pcVar4 = (code *)*puVar1;
      local_b8 = (code *)puVar1[1];
    }
    local_24[0] = uVar3;
    (*pcVar4)(auStack_a0,param_2,local_24);
    if (local_b8 != (code *)0x0) {
      (*local_b8)(auStack_a0);
    }
    while (puVar1 = puVar1 + 0x10, puVar1 != puVar2) {
      local_b8 = (code *)0x0;
      pcVar4 = (code *)0x0;
      if ((code *)puVar1[2] != (code *)0x0) {
        (*(code *)puVar1[2])(puVar1 + 4,auStack_a0);
        pcVar4 = (code *)*puVar1;
        local_b8 = (code *)puVar1[1];
      }
      local_24[0] = uVar3;
      (*pcVar4)(auStack_a0,param_2,local_24);
      if (local_b8 != (code *)0x0) {
        (*local_b8)(auStack_a0);
      }
    }
  }
  return;
}


