/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0131128c; name: FUN_0131128c
 */


void FUN_0131128c(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_047d1fb8 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_00888ed4(param_1 + 6);
  param_1[0xc] = (long)(param_1 + 0xc);
  param_1[0xd] = (long)(param_1 + 0xc);
  param_1[10] = (long)(param_1 + 10);
  param_1[0xb] = (long)(param_1 + 10);
  plVar2 = param_1 + 0x10;
  param_1[0xe] = (long)(param_1 + 0xe);
  param_1[0xf] = (long)(param_1 + 0xe);
  do {
    plVar2[3] = (long)(plVar2 + 3);
    plVar2[4] = (long)(plVar2 + 3);
    plVar2[6] = (long)(plVar2 + 6);
    plVar2[7] = (long)(plVar2 + 6);
    *plVar2 = (long)plVar2;
    plVar2[1] = (long)plVar2;
    plVar2[9] = (long)(plVar2 + 9);
    plVar2[10] = (long)(plVar2 + 9);
    plVar2 = plVar2 + 0xc;
  } while (plVar2 != param_1 + 0x310);
  param_1[0x310] = 0;
  *(undefined4 *)(param_1 + 0x375) = 0;
  *(undefined4 *)((long)param_1 + 0x1bcc) = 0;
  *(undefined2 *)(param_1 + 0x37a) = 0;
  *(undefined4 *)((long)param_1 + 0x1bd4) = 1;
  param_1[0x389] = 0;
  param_1[0x388] = 0;
  param_1[0x387] = 0;
  param_1[0x386] = 0;
  param_1[0x385] = 0;
  param_1[900] = 0;
  param_1[899] = 0;
  param_1[0x382] = 0;
  param_1[0x381] = 0;
  param_1[0x380] = 0;
  param_1[0x37f] = 0;
  param_1[0x37e] = 0;
  param_1[0x37d] = 0;
  param_1[0x37c] = 0;
  param_1[0x37b] = 0;
  *(undefined1 *)(param_1 + 0x38a) = 1;
  FUN_0119456c(param_1 + 0x38b);
  FUN_01194538(param_1 + 0x3a6);
  FUN_00fad31c(param_1 + 0x3af);
  param_1[0x3d4] = 0;
  param_1[0x3d3] = 0;
  puVar1 = PTR_DAT_047d1f48 + 0x10;
  param_1[0x3d9] = -1;
  param_1[0x3d5] = (long)puVar1;
  FUN_008874d4(param_1 + 0x3d5,0,0xc,0,0,0,1);
  param_1[0x3d9] = -1;
  *(undefined1 *)(param_1 + 0x3d8) = 0;
  param_1[0x3d5] = (long)(PTR_DAT_047d1fc0 + 0x10);
  memset(param_1 + 0x311,0,800);
  return;
}


