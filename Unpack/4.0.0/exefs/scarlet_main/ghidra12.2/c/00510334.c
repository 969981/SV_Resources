/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00510334; name: FUN_00510334
 */


undefined8 FUN_00510334(long param_1,byte *param_2)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  ushort local_38;
  undefined1 local_36;
  undefined8 local_28;
  
  local_38 = 0x3c02;
  local_36 = 0;
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar5 = (ulong)(bVar4 >> 1);
  uVar3 = uVar5;
  if ((bVar4 & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar3 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '<') {
        pcVar6 = (char *)(param_1 + 0x32);
        pcVar7 = (char *)((ulong)&local_38 | 2);
        do {
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_005103bc;
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 == cVar1);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '<') {
LAB_005103bc:
                    /* try { // try from 005103c0 to 005103c3 has its CatchHandler @ 00510478 */
      FUN_004fcda0(param_1 + 0x28);
      if ((*param_2 & 1) == 0) {
        pbVar8 = param_2 + 1;
        *param_2 = 2;
        bVar4 = 0x3e;
      }
      else {
        param_2[8] = 1;
        param_2[9] = 0;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        param_2[0xe] = 0;
        param_2[0xf] = 0;
        pbVar8 = *(byte **)(param_2 + 0x10);
        bVar4 = 0x3e;
      }
      goto LAB_00510448;
    }
  }
  local_38 = 0x7b02;
  local_36 = 0;
                    /* try { // try from 005103e8 to 005103ef has its CatchHandler @ 00510480 */
  uVar3 = FUN_0050d96c(param_1,&local_38);
  if ((local_38 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_28);
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if ((*param_2 & 1) == 0) {
    pbVar8 = param_2 + 1;
    *param_2 = 2;
  }
  else {
    param_2[8] = 1;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    pbVar8 = *(byte **)(param_2 + 0x10);
  }
  bVar4 = 0x7d;
LAB_00510448:
  *pbVar8 = bVar4;
  pbVar8[1] = 0;
  return 1;
}


