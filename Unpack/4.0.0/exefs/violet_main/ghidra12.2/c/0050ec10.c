/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050ec10; name: FUN_0050ec10
 */


uint FUN_0050ec10(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined2 local_88;
  undefined1 local_86;
  undefined2 local_70;
  undefined1 local_6e;
  ulong local_58 [3];
  
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
                    /* try { // try from 0050ec2c to 0050ec33 has its CatchHandler @ 0050ed90 */
  uVar6 = FUN_00510334(param_1,local_58);
  if ((uVar6 & 1) != 0) {
    do {
      local_70 = 0x3e02;
      local_6e = 0;
      bVar3 = *(byte *)(param_1 + 0x30);
      uVar7 = (ulong)(bVar3 >> 1);
      uVar6 = uVar7;
      if ((bVar3 & 1) != 0) {
        uVar6 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar6 == 1) {
        if ((bVar3 & 1) != 0) {
          if (**(char **)(param_1 + 0x40) != '>') goto LAB_0050ed1c;
LAB_0050ed74:
                    /* try { // try from 0050ed74 to 0050ed7f has its CatchHandler @ 0050ed90 */
          uVar5 = FUN_0050d96c(param_1,local_58);
          uVar4 = uVar5;
          if ((local_58[0] & 1) == 0) goto LAB_0050ed58;
          goto LAB_0050ed48;
        }
        if (*(char *)(param_1 + 0x31) == '>') {
          pcVar8 = (char *)((ulong)&local_70 | 2);
          pcVar9 = (char *)(param_1 + 0x32);
          uVar6 = uVar7;
          do {
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_0050ed74;
            cVar1 = *pcVar8;
            cVar2 = *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 == cVar1);
        }
        local_88 = 0x7d02;
        local_86 = 0;
        if ((bVar3 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '}') {
            pcVar8 = (char *)((ulong)&local_88 | 2);
            pcVar9 = (char *)(param_1 + 0x32);
            do {
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_0050ed74;
              cVar1 = *pcVar8;
              cVar2 = *pcVar9;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 == cVar1);
          }
        }
        else {
LAB_0050ed1c:
          local_86 = 0;
          local_88 = 0x7d02;
          if (**(char **)(param_1 + 0x40) == '}') goto LAB_0050ed74;
        }
      }
      local_86 = 0;
                    /* try { // try from 0050ed30 to 0050ed37 has its CatchHandler @ 0050ed94 */
      local_88 = 0x7d02;
      uVar6 = FUN_0051061c(param_1);
    } while ((uVar6 & 1) != 0);
  }
  uVar5 = 0;
  uVar4 = 0;
  if ((local_58[0] & 1) != 0) {
LAB_0050ed48:
    uVar5 = uVar4;
    FUN_0049e790(PTR_LAB_047cba48,local_58[2]);
  }
LAB_0050ed58:
  return uVar5 & 1;
}


