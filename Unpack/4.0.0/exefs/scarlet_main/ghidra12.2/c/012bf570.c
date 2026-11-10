/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012bf570; name: FUN_012bf570
 */


void FUN_012bf570(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_012bf770();
  puVar2 = PTR_DAT_047e2438;
  puVar1 = PTR_DAT_047e2438 + 0x10;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = (long)puVar1;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[4] = (long)(puVar2 + 0x40);
  param_1[5] = (long)puVar1;
  param_1[0x16] = (long)&DAT_03c886bc;
  param_1[0xe] = (long)&DAT_03c886bc;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (long)&DAT_cbf29ce484222645;
  param_1[0x10] = 0;
  param_1[0x11] = (long)&DAT_cbf29ce484222645;
  param_1[0x12] = (long)&DAT_03c886bc;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = (long)&DAT_cbf29ce484222645;
  FUN_012bf638(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((long)param_1 + 0x114) = 0x3f80000000000003;
  puVar1 = PTR_DAT_047dd9c0 + 0x10;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)((long)param_1 + 0x11c) = 0;
  param_1[0x24] = (long)puVar1;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  return;
}


