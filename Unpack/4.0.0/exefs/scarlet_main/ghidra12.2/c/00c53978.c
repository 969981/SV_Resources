/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c53978; name: FUN_00c53978
 */


void FUN_00c53978(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint *puVar10;
  char cVar11;
  
  puVar2 = (uint *)param_1[1];
  for (puVar10 = (uint *)*param_1; puVar10 != puVar2; puVar10 = puVar10 + 10) {
    lVar7 = *(long *)(puVar10 + 2);
    uVar6 = *puVar10;
    if (lVar7 == 0) {
      if ((char)puVar10[6] == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_00c56adc(*param_2);
      }
      param_2[(ulong)uVar6 + 0xe] = uVar9;
      param_2[(ulong)uVar6 + 6] = 0;
    }
    else {
      if ((int)puVar10[4] < 0) {
        pcVar8 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30)
        ;
      }
      else {
        pcVar8 = (char *)FUN_00ccc070();
      }
      if ((char)puVar10[6] == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_00c56adc(*param_2);
      }
      param_2[(ulong)uVar6 + 0xe] = uVar9;
      if (*pcVar8 == '\0') {
        param_2[(ulong)uVar6 + 6] = 0;
      }
      else {
        lVar7 = *(long *)(pcVar8 + 8);
        param_2[(ulong)uVar6 + 6] = *(undefined8 *)(lVar7 + 0x40);
        uVar1 = *(ulong *)(lVar7 + 0x68);
        uVar3 = *(ulong *)(lVar7 + 0x70);
        uVar6 = uVar6 << 2;
        *(undefined8 *)((long)param_2 + (ulong)uVar6 * 4 + 0xc4) = 0;
        *(float *)((long)param_2 + (ulong)uVar6 * 4 + 0xcc) = (float)uVar1;
        *(float *)((long)param_2 + (ulong)uVar6 * 4 + 0xd0) = (float)uVar3;
        uVar9 = *(undefined8 *)(lVar7 + 0x68);
        uVar4 = *(undefined8 *)(lVar7 + 0x70);
        *(undefined8 *)((long)param_2 + (ulong)uVar6 * 4 + 0x144) = 0;
        *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x14c) = (int)uVar9;
        *(int *)((long)param_2 + (ulong)uVar6 * 4 + 0x150) = (int)uVar4;
      }
    }
    *(undefined1 *)(param_2 + 0x18) = 1;
  }
  lVar7 = param_1[7];
  if (lVar7 == 0) {
    cVar11 = '\0';
  }
  else {
    pcVar8 = (char *)FUN_00ccbbb0(*(undefined8 *)(*(long *)(lVar7 + 0x70) + 0x110),lVar7 + 0x30);
    cVar11 = *pcVar8;
    puVar10 = *(uint **)(pcVar8 + 8);
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00c56adc(*param_2,param_1 + 8);
  }
  param_2[0x17] = uVar9;
  if (cVar11 == '\0') {
    uVar9 = 0;
    param_2[0x16] = 0;
  }
  else {
    uVar9 = *(undefined8 *)(puVar10 + 0x10);
    param_2[0x16] = uVar9;
    if (param_2[6] == 0) {
      uVar1 = *(ulong *)(puVar10 + 0x1a);
      uVar3 = *(ulong *)(puVar10 + 0x1c);
      *(undefined8 *)((long)param_2 + 0xc4) = 0;
      *(float *)((long)param_2 + 0xcc) = (float)uVar1;
      *(float *)(param_2 + 0x1a) = (float)uVar3;
      uVar4 = *(undefined8 *)(puVar10 + 0x1a);
      uVar5 = *(undefined8 *)(puVar10 + 0x1c);
      *(undefined8 *)((long)param_2 + 0x144) = 0;
      *(int *)((long)param_2 + 0x14c) = (int)uVar4;
      *(int *)(param_2 + 0x2a) = (int)uVar5;
    }
  }
  *(undefined1 *)(param_2 + 0x18) = 1;
  (**(code **)PTR_DAT_047e0ca0)(param_2[5],8,param_2 + 6,param_2 + 0xe,uVar9);
  *(undefined1 *)(param_2 + 0x18) = 0;
  return;
}


