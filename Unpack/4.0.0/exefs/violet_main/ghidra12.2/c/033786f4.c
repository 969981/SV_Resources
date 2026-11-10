/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033786f4; name: FUN_033786f4
 */


void FUN_033786f4(long *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  char *pcVar9;
  
  uVar7 = FUN_03378a2c();
  if (*(uint *)(param_1 + 1) == uVar7) {
    iVar1 = uVar7 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x7fffffff) <= (int)uVar7) {
      FUN_03378b40(param_1,(long)iVar1);
      uVar7 = *(uint *)(param_1 + 1);
    }
    puVar3 = (undefined8 *)(*param_1 + (long)(int)uVar7 * 0x20);
    uVar5 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar5;
    uVar6 = *param_3;
    *(undefined1 *)(puVar3 + 3) = 0;
    *(undefined4 *)(puVar3 + 2) = uVar6;
    if (*(char *)(param_3 + 2) != '\0') {
      *(undefined4 *)((long)puVar3 + 0x14) = param_3[1];
      *(undefined1 *)(puVar3 + 3) = 1;
    }
    *(int *)(param_1 + 1) = iVar1;
  }
  else {
    lVar8 = *param_1;
    lVar4 = lVar8 + ((long)((ulong)uVar7 << 0x20) >> 0x1b);
    *(undefined4 *)(lVar4 + 0x10) = *param_3;
    if (*(char *)(param_3 + 2) == '\0') {
      pcVar9 = (char *)(lVar8 + (long)(int)uVar7 * 0x20 + 0x18);
      if (*pcVar9 != '\0') {
        *pcVar9 = '\0';
      }
    }
    else {
      pcVar9 = (char *)(lVar8 + (long)(int)uVar7 * 0x20 + 0x18);
      puVar2 = (undefined4 *)(lVar4 + 0x14);
      if (*pcVar9 == '\0') {
        *puVar2 = param_3[1];
        *pcVar9 = '\x01';
      }
      else {
        *puVar2 = param_3[1];
      }
    }
  }
  return;
}


