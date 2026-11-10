/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005109fc; name: FUN_005109fc
 */


undefined8 FUN_005109fc(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_70;
  undefined1 local_6e;
  ulong local_58 [3];
  
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
                    /* try { // try from 00510a1c to 00510a23 has its CatchHandler @ 00510b90 */
  uVar4 = FUN_0050e12c(param_1,local_58);
  if ((uVar4 & 1) != 0) {
    do {
      local_70 = 0x2e02;
      local_6e = 0;
      bVar3 = *(byte *)(param_1 + 0x30);
      uVar5 = (ulong)(bVar3 >> 1);
      uVar4 = uVar5;
      if ((bVar3 & 1) != 0) {
        uVar4 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar4 != 1) {
LAB_00510b7c:
        local_86 = 0;
        local_88 = 0x2f02;
        uVar8 = 1;
        if ((local_58[0] & 1) == 0) {
          return 1;
        }
        goto LAB_00510b48;
      }
      if ((bVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '.') {
          pcVar6 = (char *)((ulong)&local_70 | 2);
          pcVar7 = (char *)(param_1 + 0x32);
          uVar4 = uVar5;
          do {
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) goto LAB_00510afc;
            cVar1 = *pcVar6;
            cVar2 = *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 == cVar1);
        }
        if ((bVar3 & 1) != 0) goto LAB_00510b10;
        if (*(char *)(param_1 + 0x31) != '/') goto LAB_00510b7c;
        pcVar6 = (char *)((ulong)&local_88 | 2);
        pcVar7 = (char *)(param_1 + 0x32);
        while (uVar5 = uVar5 - 1, uVar5 != 0) {
          cVar1 = *pcVar6;
          cVar2 = *pcVar7;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
          if (cVar2 != cVar1) goto LAB_00510b7c;
        }
LAB_00510b24:
        local_86 = 0;
                    /* try { // try from 00510b24 to 00510b2b has its CatchHandler @ 00510b94 */
        local_88 = 0x2f02;
        FUN_004fcda0(param_1 + 0x28);
      }
      else {
        if (**(char **)(param_1 + 0x40) != '.') {
LAB_00510b10:
          if (**(char **)(param_1 + 0x40) != '/') goto LAB_00510b7c;
          goto LAB_00510b24;
        }
LAB_00510afc:
                    /* try { // try from 00510afc to 00510b03 has its CatchHandler @ 00510b8c */
        FUN_004fcda0(param_1 + 0x28);
      }
                    /* try { // try from 00510b2c to 00510b37 has its CatchHandler @ 00510b98 */
      uVar4 = FUN_0050e12c(param_1,local_58);
    } while ((uVar4 & 1) != 0);
  }
  uVar8 = 0;
  if ((local_58[0] & 1) != 0) {
LAB_00510b48:
    FUN_0049e790(PTR_LAB_047cba48,local_58[2]);
  }
  return uVar8;
}


