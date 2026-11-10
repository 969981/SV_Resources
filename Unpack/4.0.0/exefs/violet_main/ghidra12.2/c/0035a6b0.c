/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0035a6b0; name: FUN_0035a6b0
 */


void FUN_0035a6b0(undefined8 *param_1,char *param_2,uint param_3)

{
  uint16_t uVar1;
  int iVar2;
  
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  iVar2 = inet_pton(0x1c,param_2,param_1 + 1);
  if (iVar2 == 1) {
    *(undefined1 *)((long)param_1 + 1) = 0x1c;
    *(undefined4 *)(param_1 + 0x10) = 0x1c;
  }
  else {
    iVar2 = inet_pton(2,param_2,(void *)((long)param_1 + 4));
    if (iVar2 != 1) goto LAB_0035a758;
    *(undefined1 *)((long)param_1 + 1) = 2;
    *(undefined4 *)(param_1 + 0x10) = 0x10;
  }
  if (param_3 < 0x10000) {
    uVar1 = htons((uint16_t)param_3);
    *(uint16_t *)((long)param_1 + 2) = uVar1;
    return;
  }
LAB_0035a758:
                    /* WARNING: Subroutine does not return */
  abort();
}


