/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0035a1d0; name: FUN_0035a1d0
 */


undefined8 FUN_0035a1d0(undefined1 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  uint16_t uVar6;
  uint16_t *puVar7;
  char *pcVar8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  if (&local_a0 == (undefined8 *)param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar8 = param_1 + 1;
  cVar4 = *pcVar8;
  if (cVar4 == '\x1c') {
    if (*(long *)(param_1 + 8) == 0 && *(int *)(param_1 + 0x10) == -0x10000) {
      uStack_38 = 0;
      local_40 = 0;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_58 = 0;
      local_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      local_a0 = CONCAT44(*(undefined4 *)(param_1 + 0x14),
                          CONCAT22(*(undefined2 *)(param_1 + 2),0x200));
      local_20 = 0x10;
      pcVar8 = (char *)((ulong)&local_a0 | 1);
    }
    bVar5 = *(long *)(param_1 + 8) != 0 || *(int *)(param_1 + 0x10) != -0x10000;
    cVar4 = *pcVar8;
  }
  else {
    bVar5 = true;
  }
  if (cVar4 == '\x02') {
    piVar3 = (int *)(param_1 + 4);
    if (!bVar5) {
      piVar3 = (int *)((ulong)&local_a0 | 4);
    }
    if (*piVar3 == 0) {
      puVar7 = (uint16_t *)(param_1 + 2);
      if (!bVar5) {
        puVar7 = (uint16_t *)((ulong)&local_a0 | 2);
      }
LAB_0035a35c:
      uVar6 = ntohs(*puVar7);
      *param_2 = (uint)uVar6;
      return 1;
    }
  }
  else if (cVar4 == '\x1c') {
    puVar1 = (undefined8 *)param_1;
    if (!bVar5) {
      puVar1 = &local_a0;
    }
    puVar2 = param_1 + 8;
    if (!bVar5) {
      puVar2 = (undefined1 *)((ulong)&local_a0 | 8);
    }
    if (((((*(char *)((long)puVar1 + 8) == '\0') && (puVar2[1] == '\0')) && (puVar2[2] == '\0')) &&
        (((puVar2[3] == '\0' && (puVar2[4] == '\0')) &&
         ((puVar2[5] == '\0' && ((puVar2[6] == '\0' && (puVar2[7] == '\0')))))))) &&
       ((puVar2[8] == '\0' &&
        (((((puVar2[9] == '\0' && (puVar2[10] == '\0')) && (puVar2[0xb] == '\0')) &&
          ((puVar2[0xc] == '\0' && (puVar2[0xd] == '\0')))) &&
         ((puVar2[0xe] == '\0' && (puVar2[0xf] == '\0')))))))) {
      puVar7 = (uint16_t *)(param_1 + 2);
      if (!bVar5) {
        puVar7 = (uint16_t *)((ulong)&local_a0 | 2);
      }
      goto LAB_0035a35c;
    }
  }
  return 0;
}


