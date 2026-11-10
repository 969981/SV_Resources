/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00318e30; name: FUN_00318e30
 */


void FUN_00318e30(long *param_1,undefined4 param_2,int param_3,long param_4)

{
  undefined4 *puVar1;
  
  FUN_003670f0(0xd);
  *(long *)(param_4 + 0x10) = *(long *)(param_4 + 0x10) + 0xd;
  puVar1 = (undefined4 *)((long)param_1 + 9);
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)param_1[2];
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *puVar1 = 0x8040000;
  *(char *)((long)puVar1 + 5) = (char)((uint)param_2 >> 0x18);
  *(char *)((long)puVar1 + 6) = (char)((uint)param_2 >> 0x10);
  *(char *)((long)puVar1 + 7) = (char)((uint)param_2 >> 8);
  *(char *)((long)puVar1 + 9) = (char)((uint)param_3 >> 0x18);
  *(char *)((long)puVar1 + 10) = (char)((uint)param_3 >> 0x10);
  *(undefined1 *)(puVar1 + 1) = 0;
  *(char *)(puVar1 + 2) = (char)param_2;
  *(char *)((long)puVar1 + 0xb) = (char)((uint)param_3 >> 8);
  *(char *)(puVar1 + 3) = (char)param_3;
  return;
}


