/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0127a02c; name: FUN_0127a02c
 */


void FUN_0127a02c(undefined8 *param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined **ppuVar2;
  undefined8 *puVar3;
  
  FUN_00d1a240(param_1,0x8009809f);
  *param_1 = &PTR_FUN_045de4c8;
  param_1[0x24] = 0;
  param_1[6] = &PTR_LAB_045de7a0;
  param_1[4] = &PTR_LAB_045de620;
  param_1[5] = &DAT_045de748;
  puVar3 = param_1 + 7;
  *puVar3 = &PTR_LAB_045de7c8;
  *(undefined4 *)(param_1 + 0x25) = 0;
  memset(param_1 + 0x26,0,0x50);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0x29] = &DAT_cbf29ce484222645;
  param_1[0x2a] = &DAT_03c886bc;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  if ((*(char *)(param_1 + 0xb) != '\0') || (*(char *)((long)param_1 + 0x59) != '\x05')) {
    uVar1 = *(undefined2 *)(param_1 + 0xb);
    *(undefined2 *)(param_1 + 0xb) = 0x500;
    if (param_1[9] == 0) {
      ppuVar2 = &PTR_LAB_045de7c8;
    }
    else {
      FUN_00c6a584(param_1[9],puVar3);
      ppuVar2 = (undefined **)*puVar3;
    }
    (*(code *)ppuVar2[4])(puVar3,uVar1);
  }
  FUN_01260630(param_1,param_2,0);
  param_1[0xc] = param_1[0xc] | 0xe;
  return;
}


