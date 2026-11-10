/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c504ec; name: FUN_00c504ec
 */


void FUN_00c504ec(long param_1,long param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x180);
  if (pauVar1 != (undefined1 (*) [16])0x0) {
    if (pauVar1[3][0xc] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      local_28 = param_2 + 0x10;
      uStack_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_00c54a28(*(undefined8 *)(param_2 + 0x61c0),&local_38,*(undefined8 *)pauVar1[1],1)
      ;
      *pauVar1 = auVar2;
      pauVar1[3][0xc] = 0;
    }
    if (pauVar1[9][0xc] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      local_28 = param_2 + 0x10;
      uStack_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_00c56c7c(*(undefined8 *)(param_2 + 0x6200),&local_38,
                            *(undefined8 *)(pauVar1[5] + 8),1);
      *(undefined1 (*) [16])(pauVar1[4] + 8) = auVar2;
      pauVar1[9][0xc] = 0;
    }
    if (pauVar1[0xd][4] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      local_28 = param_2 + 0x10;
      uStack_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_00c55d98(*(undefined8 *)(param_2 + 0x6220),&local_38,*(undefined8 *)pauVar1[0xb],
                            1);
      pauVar1[10] = auVar2;
      pauVar1[0xd][4] = 0;
    }
    if (pauVar1[0x10][8] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      local_28 = param_2 + 0x10;
      uStack_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_00c58538(*(undefined8 *)(param_2 + 0x6240),&local_38,
                            *(undefined8 *)(pauVar1[0xe] + 8),1);
      *(undefined1 (*) [16])(pauVar1[0xd] + 8) = auVar2;
      pauVar1[0x10][8] = 0;
    }
    if (pauVar1[0x20][8] != '\0') {
      local_38 = *(undefined8 *)(param_2 + 8);
      local_28 = param_2 + 0x10;
      uStack_30 = *(undefined8 *)(param_2 + 0x6098);
      auVar2 = FUN_00c553f0(*(undefined8 *)(param_2 + 0x61e0),&local_38,
                            *(undefined8 *)(pauVar1[0x1e] + 8),1);
      *(undefined1 (*) [16])(pauVar1[0x1d] + 8) = auVar2;
      pauVar1[0x20][8] = 0;
    }
  }
  return;
}


