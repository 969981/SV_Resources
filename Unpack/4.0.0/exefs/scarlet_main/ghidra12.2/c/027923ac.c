/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027923ac; name: FUN_027923ac
 */


void FUN_027923ac(long param_1)

{
  undefined1 local_140 [8];
  undefined1 auStack_138 [252];
  char local_3c;
  undefined4 local_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined8 local_18;
  
  local_18 = 0;
  FUN_0278ded4(local_140,0,&local_18);
  memcpy((void *)(param_1 + 0xb0),auStack_138,0xfc);
  if (*(char *)(param_1 + 0x1ac) == '\0') {
    if (local_3c != '\0') {
      *(ulong *)(param_1 + 0x1b0) = CONCAT26(uStack_32,CONCAT24(uStack_34,local_38));
      *(undefined1 *)(param_1 + 0x1ac) = 1;
    }
  }
  else if (local_3c == '\0') {
    *(undefined1 *)(param_1 + 0x1ac) = 0;
  }
  else {
    *(undefined2 *)(param_1 + 0x1b4) = uStack_34;
    *(undefined4 *)(param_1 + 0x1b0) = local_38;
  }
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  return;
}


