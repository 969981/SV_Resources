/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078ba6c; name: FUN_0078ba6c
 */


void FUN_0078ba6c(void)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)PTR_DAT_047d08c8;
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FUN_0078d39c(puVar1 + 0x17);
  FUN_0078c8b4(puVar1 + 4);
  memset((void *)*puVar1,0,0x460);
  memset((void *)puVar1[1],0,0x4a0);
  memset((void *)puVar1[2],0,0x2750);
  puVar1[3] = 0x400000000;
  *(undefined1 *)(puVar1 + 0xb0) = 0;
  *(undefined2 *)(puVar1 + 0xb5) = 0;
  FUN_0078b160(puVar1 + 0xb1);
  return;
}


