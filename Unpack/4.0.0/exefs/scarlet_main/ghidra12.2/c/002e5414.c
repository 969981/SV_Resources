/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e5414; name: FUN_002e5414
 */


undefined2 * FUN_002e5414(undefined4 *param_1,uint param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  ulong uVar3;
  
  if ((int)param_2 < 1) {
    puVar2 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
    if (puVar2 != (undefined2 *)0x0) {
      puVar2[1] = param_3;
      *puVar2 = 2;
      puVar2[2] = 1;
      puVar2[0x13] = 0;
      *(undefined8 *)(puVar2 + 7) = 0;
      *(undefined8 *)(puVar2 + 3) = 0;
      *(undefined8 *)(puVar2 + 0xf) = 0;
      *(undefined8 *)(puVar2 + 0xb) = 0;
    }
  }
  else {
    uVar3 = (ulong)param_2;
    if (param_2 == 1) {
      uVar1 = *param_1;
      puVar2 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
      if (puVar2 != (undefined2 *)0x0) {
        puVar2[1] = param_3;
        *puVar2 = 3;
        puVar2[2] = 1;
        puVar2[0x13] = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 0xf) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
      }
      *(undefined4 *)(puVar2 + 0xc) = uVar1;
    }
    else {
      puVar2 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
      if (puVar2 != (undefined2 *)0x0) {
        puVar2[1] = param_3;
        *puVar2 = 4;
        puVar2[2] = 1;
        puVar2[0x13] = 0;
        *(undefined8 *)(puVar2 + 7) = 0;
        *(undefined8 *)(puVar2 + 3) = 0;
        *(undefined8 *)(puVar2 + 0xf) = 0;
        *(undefined8 *)(puVar2 + 0xb) = 0;
      }
      do {
        FUN_002e4cd4(puVar2,*param_1);
        uVar3 = uVar3 - 1;
        param_1 = param_1 + 1;
      } while (uVar3 != 0);
    }
  }
  return puVar2;
}


