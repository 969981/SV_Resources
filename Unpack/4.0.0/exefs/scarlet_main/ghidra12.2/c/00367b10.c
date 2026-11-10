/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00367b10; name: FUN_00367b10
 */


void FUN_00367b10(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  size_t __n;
  ulong *puVar1;
  
  __n = param_4 - param_3;
  if (param_3 <= param_4) {
    puVar1 = (ulong *)(param_2 + 1);
    if (*param_2 == 0) {
      if (param_4 <= (byte)*puVar1) {
        *param_1 = 0;
        *(char *)(param_1 + 1) = (char)__n;
        memcpy((void *)((long)param_1 + 9),(byte *)((long)puVar1 + param_3 + 1),__n);
        return;
      }
    }
    else if (param_4 <= *puVar1) {
      *param_1 = *(undefined8 *)(*param_2 + 0x10);
      param_1[1] = __n;
      param_1[2] = param_2[2] + param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


