/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01246cdc; name: FUN_01246cdc
 */


void FUN_01246cdc(undefined8 param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined1 *)(param_2 + 0x15) = 0;
  if (*(char *)((long)param_2 + 0xa6) == '\0') {
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_01246e60:
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_01246e64:
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_01246e68:
    uVar2 = FUN_01246e90(param_1);
  }
  else {
    lVar3 = *param_2;
    *(undefined1 *)(param_2 + 0x15) = 1;
    while (lVar3 != 0) {
      uVar2 = FUN_01246e90(param_1);
      FUN_012470d4(uVar2,lVar3,0x73);
      bVar1 = *(byte *)(param_2 + 0x15);
      if (*(byte *)((long)param_2 + 0xa6) <= bVar1) {
        *(undefined1 *)(param_2 + 0x15) = 0;
        if (*(byte *)((long)param_2 + 0xa6) != 0) goto LAB_01246d58;
        goto LAB_01246e60;
      }
      *(byte *)(param_2 + 0x15) = bVar1 + 1;
      lVar3 = param_2[bVar1];
    }
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_01246d58:
    lVar3 = *param_2;
    *(undefined1 *)(param_2 + 0x15) = 1;
    while (lVar3 != 0) {
      uVar2 = FUN_01246e90(param_1);
      FUN_01246e98(uVar2,lVar3,0x74);
      bVar1 = *(byte *)(param_2 + 0x15);
      if (*(byte *)((long)param_2 + 0xa6) <= bVar1) {
        *(undefined1 *)(param_2 + 0x15) = 0;
        if (*(byte *)((long)param_2 + 0xa6) != 0) goto LAB_01246db0;
        goto LAB_01246e64;
      }
      *(byte *)(param_2 + 0x15) = bVar1 + 1;
      lVar3 = param_2[bVar1];
    }
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_01246db0:
    lVar3 = *param_2;
    *(undefined1 *)(param_2 + 0x15) = 1;
    while (lVar3 != 0) {
      uVar2 = FUN_01246e90(param_1);
      FUN_01246e98(uVar2,lVar3,0x72);
      bVar1 = *(byte *)(param_2 + 0x15);
      if (*(byte *)((long)param_2 + 0xa6) <= bVar1) {
        *(undefined1 *)(param_2 + 0x15) = 0;
        if (*(byte *)((long)param_2 + 0xa6) != 0) goto LAB_01246e08;
        goto LAB_01246e68;
      }
      *(byte *)(param_2 + 0x15) = bVar1 + 1;
      lVar3 = param_2[bVar1];
    }
    *(undefined1 *)(param_2 + 0x15) = 0;
LAB_01246e08:
    lVar3 = *param_2;
    *(undefined1 *)(param_2 + 0x15) = 1;
    uVar2 = FUN_01246e90(param_1);
    while (lVar3 != 0) {
      FUN_01246e98(uVar2,lVar3,0xd7);
      bVar1 = *(byte *)(param_2 + 0x15);
      if (*(byte *)((long)param_2 + 0xa6) <= bVar1) goto LAB_01246e68;
      *(byte *)(param_2 + 0x15) = bVar1 + 1;
      lVar3 = param_2[bVar1];
      uVar2 = FUN_01246e90(param_1);
    }
  }
  FUN_01247ad8(uVar2,param_2);
  FUN_01246e90(param_1);
  FUN_01247314();
  return;
}


