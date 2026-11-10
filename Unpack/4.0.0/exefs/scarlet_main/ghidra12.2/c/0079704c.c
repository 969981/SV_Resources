/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0079704c; name: FUN_0079704c
 */


void FUN_0079704c(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_047d09e0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0xe) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  memset((void *)((long)param_1 + 0x5fc),0,4);
  FUN_00796584(param_1 + 0xc0);
  FUN_00796584(param_1 + 0xc5);
  *(undefined4 *)(param_1 + 1) = 0x32ab9864;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0xb;
  *(undefined4 *)((long)param_1 + 0xe) = 0;
  *(undefined2 *)((long)param_1 + 0x12) = 0;
  memset((void *)((long)param_1 + 0x15),0,8);
  memset((void *)((long)param_1 + 0x1d),0,0x10);
  *(undefined4 *)(param_1 + 0xbf) = 0x1c;
  memset((void *)((long)param_1 + 0x5fc),0,4);
  FUN_007965d8(param_1 + 0xc0);
  *(undefined2 *)((long)param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x1000000;
  FUN_007965d8(param_1 + 0xc5);
  *(undefined1 *)(param_1 + 0xc9) = 0;
  return;
}


