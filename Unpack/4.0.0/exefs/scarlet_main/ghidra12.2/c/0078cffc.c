/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0078cffc; name: FUN_0078cffc
 */


void FUN_0078cffc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00792e30();
  *param_1 = (long)(PTR_DAT_047d0908 + 0x10);
  FUN_0078ca60(param_1 + 0xb);
  *(undefined4 *)(param_1 + 0x15) = 0;
  puVar1 = PTR_DAT_047d0910 + 0x10;
  lVar2 = 0;
  param_1[0x16] = (long)(PTR_DAT_047d0910 + 0x68);
  param_1[0x11] = 0;
  param_1[0x12] = (long)puVar1;
  param_1[0x13] = (long)(param_1 + 0x17);
  param_1[0x14] = 0x400;
  *(undefined1 *)(param_1 + 0x17) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0xb9) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0xbb) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)(plVar3 + 0x17) = 0;
  } while (lVar2 != 0x400);
  lVar2 = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  plVar3 = param_1;
  do {
    *(undefined2 *)((long)plVar3 + 0xb9) = 0;
    lVar2 = lVar2 + 4;
    *(undefined1 *)((long)plVar3 + 0xbb) = 0;
    plVar3 = (long *)((long)param_1 + lVar2);
    *(undefined1 *)(plVar3 + 0x17) = 0;
  } while (lVar2 != 0x400);
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  FUN_0078cac8(param_1 + 0xb);
  return;
}


