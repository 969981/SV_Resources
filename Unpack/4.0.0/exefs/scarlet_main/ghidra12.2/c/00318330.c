/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00318330; name: FUN_00318330
 */


void FUN_00318330(long *param_1,char param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  FUN_003670f0(0x11);
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  *puVar1 = 0x6080000;
  *(char *)((long)puVar1 + 9) = (char)((ulong)param_3 >> 0x38);
  *(char *)((long)puVar1 + 10) = (char)((ulong)param_3 >> 0x30);
  *(char *)((long)puVar1 + 0xb) = (char)((ulong)param_3 >> 0x28);
  *(char *)(puVar1 + 3) = (char)((ulong)param_3 >> 0x20);
  *(char *)((long)puVar1 + 0xd) = (char)((ulong)param_3 >> 0x18);
  *(bool *)(puVar1 + 1) = param_2 != '\0';
  *(char *)((long)puVar1 + 0xe) = (char)((ulong)param_3 >> 0x10);
  *(undefined4 *)((long)puVar1 + 5) = 0;
  *(char *)((long)puVar1 + 0xf) = (char)((ulong)param_3 >> 8);
  *(char *)(puVar1 + 4) = (char)param_3;
  return;
}


