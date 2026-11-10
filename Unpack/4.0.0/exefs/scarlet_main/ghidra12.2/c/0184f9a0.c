/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0184f9a0; name: FUN_0184f9a0
 */


undefined * FUN_0184f9a0(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  
  if ((1 < *param_1) ||
     (puVar2 = *(undefined **)(param_1 + 8), *(undefined **)(param_1 + 8) == (undefined *)0x0)) {
    if ((*PTR_DAT_047d5910 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_047d5910);
      puVar2 = PTR_DAT_047d5918;
      if (iVar1 == 0) {
        return PTR_DAT_047d5918;
      }
      memset(PTR_DAT_047d5918,0,0x708);
      puVar3 = (undefined4 *)puVar2;
      do {
        *puVar3 = 0xffffffff;
        *(undefined2 *)(puVar3 + 1) = 0;
        *(undefined4 *)((long)puVar3 + 6) = 0xffffffff;
        *(undefined2 *)((long)puVar3 + 10) = 0;
        puVar3[3] = 0xffffffff;
        *(undefined2 *)(puVar3 + 4) = 0;
        *(undefined4 *)((long)puVar3 + 0x12) = 0xffffffff;
        *(undefined2 *)((long)puVar3 + 0x16) = 0;
        puVar3 = puVar3 + 6;
      } while (puVar3 != (undefined4 *)(puVar2 + 0x708));
      __cxa_guard_release(PTR_DAT_047d5910);
    }
    puVar2 = PTR_DAT_047d5918;
  }
  return puVar2;
}


