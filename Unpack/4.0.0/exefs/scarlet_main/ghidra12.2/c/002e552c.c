/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e552c; name: FUN_002e552c
 */


void FUN_002e552c(undefined8 param_1,undefined2 param_2)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_0049e770(PTR_FUN_047cba38,0x28);
  if (puVar1 != (undefined2 *)0x0) {
    puVar1[1] = param_2;
    *puVar1 = 0x14;
    puVar1[2] = 1;
    puVar1[0x13] = 0;
    *(undefined8 *)(puVar1 + 7) = 0;
    *(undefined8 *)(puVar1 + 3) = 0;
    *(undefined8 *)(puVar1 + 0xf) = 0;
    *(undefined8 *)(puVar1 + 0xb) = 0;
  }
  *(undefined8 *)(puVar1 + 0xc) = param_1;
  return;
}


