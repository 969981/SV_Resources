/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01831094; name: FUN_01831094
 */


void FUN_01831094(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  FUN_01831190();
  *param_1 = &PTR_FUN_04591fb8;
  param_1[4] = &PTR_LAB_04591fe8;
  puVar2 = param_1 + 5;
  do {
    *(undefined4 *)puVar2 = 0;
    puVar2[1] = 0;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined4 *)(puVar2 + 3) = 0;
    puVar2[4] = 0;
    *(undefined2 *)(puVar2 + 5) = 0;
    *(undefined4 *)(puVar2 + 6) = 0;
    puVar2[7] = 0;
    *(undefined2 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 9;
  } while (puVar2 != param_1 + 0x353);
  param_1[0x35a] = 0;
  param_1[0x359] = 0;
  param_1[0x358] = 0;
  param_1[0x357] = 0;
  param_1[0x356] = 0;
  param_1[0x355] = 0;
  puVar1 = PTR_DAT_047d8e88 + 0x10;
  param_1[0x354] = 0;
  param_1[0x35c] = 0;
  param_1[0x35d] = 0;
  param_1[0x35e] = 0;
  param_1[0x35f] = 0;
  param_1[0x360] = 0;
  param_1[0x361] = 0;
  param_1[0x362] = 0;
  param_1[0x35b] = puVar1;
  param_1[0x353] = puVar1;
  param_1[0x367] = 0;
  param_1[0x368] = 0;
  param_1[0x369] = 0;
  param_1[0x36a] = 0;
  param_1[0x36b] = 0;
  param_1[0x36c] = 0;
  param_1[0x36d] = 0;
  param_1[0x366] = puVar1;
  param_1[0x375] = 0;
  param_1[0x374] = 0;
  param_1[0x373] = 0;
  param_1[0x372] = 0;
  param_1[0x371] = 0;
  param_1[0x370] = 0;
  param_1[0x36f] = 0;
  param_1[0x36e] = puVar1;
  return;
}


