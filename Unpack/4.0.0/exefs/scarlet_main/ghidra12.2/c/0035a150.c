/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035a150; name: FUN_0035a150
 */


undefined8 FUN_0035a150(undefined8 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)((long)param_1 + 1) == '\x02') {
    param_2[1] = 0;
    *param_2 = 0;
    param_2[3] = 0;
    param_2[2] = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined1 *)((long)param_2 + 1) = 0x1c;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0xffff0000;
    param_2[0xd] = 0;
    param_2[0xc] = 0;
    param_2[0xf] = 0;
    param_2[0xe] = 0;
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[0xb] = 0;
    param_2[10] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    *(undefined4 *)((long)param_2 + 0x14) = *(undefined4 *)((long)param_1 + 4);
    uVar1 = *(undefined2 *)((long)param_1 + 2);
    *(undefined4 *)(param_2 + 0x10) = 0x1c;
    *(undefined2 *)((long)param_2 + 2) = uVar1;
    return 1;
  }
  return 0;
}


