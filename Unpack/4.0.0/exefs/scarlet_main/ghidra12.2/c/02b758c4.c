/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b758c4; name: FUN_02b758c4
 */


void FUN_02b758c4(long param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    puVar2 = (undefined1 *)(param_1 + 0x18);
    do {
      *puVar2 = 0;
      *(undefined8 *)(puVar2 + -0x10) = 0xffffffff;
      *(undefined8 *)(puVar2 + -8) = 1;
      *(undefined ***)(puVar2 + -0x18) = &PTR_LAB_045aaae0;
      *(undefined4 *)(puVar2 + 8) = 0;
      memset(puVar2 + 0x10,0xff,0x200);
      uVar1 = uVar1 - 1;
      puVar2 = puVar2 + 0x230;
    } while (uVar1 != 0);
  }
  return;
}


