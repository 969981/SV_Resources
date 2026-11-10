/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0050df60; name: FUN_0050df60
 */


undefined8 FUN_0050df60(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  uVar5 = FUN_0050e12c();
  puVar3 = PTR_LAB_047cba48;
  if ((uVar5 & 1) == 0) {
LAB_0050e0d8:
    uVar6 = 0;
  }
  else {
    bVar4 = (*(byte *)(param_1 + 0x30) & 1) == 0;
    uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    uVar5 = uVar7;
    if (!bVar4) {
      uVar5 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar5 == 1) {
      do {
        local_68 = CONCAT53(local_68._3_5_,0x2e02);
        if (bVar4) {
          if (*(char *)(param_1 + 0x31) != '.') break;
          pcVar8 = (char *)((ulong)&local_68 | 2);
          pcVar9 = (char *)(param_1 + 0x32);
          while (uVar7 = uVar7 - 1, uVar7 != 0) {
            cVar1 = *pcVar8;
            cVar2 = *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
            if (cVar2 != cVar1) goto LAB_0050e0b8;
          }
        }
        else if (**(char **)(param_1 + 0x40) != '.') break;
                    /* try { // try from 0050e050 to 0050e057 has its CatchHandler @ 0050e0f8 */
        FUN_004fcda0(param_1 + 0x28);
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
                    /* try { // try from 0050e060 to 0050e09f has its CatchHandler @ 0050e100 */
        uVar5 = FUN_0050e12c(param_1,&local_68);
        if ((uVar5 & 1) == 0) {
          if ((local_68 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_58);
          }
          goto LAB_0050e0d8;
        }
        FUN_0021d540(param_2,&DAT_03bdface,1);
        uVar5 = local_68 >> 1 & 0x7f;
        uVar7 = (ulong)&local_68 | 1;
        if ((local_68 & 1) != 0) {
          uVar5 = local_60;
          uVar7 = local_58;
        }
        FUN_0021d540(param_2,uVar7,uVar5);
        if ((local_68 & 1) != 0) {
          FUN_0049e790(puVar3,local_58);
        }
        bVar4 = (*(byte *)(param_1 + 0x30) & 1) == 0;
        uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
        uVar5 = uVar7;
        if (!bVar4) {
          uVar5 = *(ulong *)(param_1 + 0x38);
        }
      } while (uVar5 == 1);
    }
LAB_0050e0b8:
    uVar6 = 1;
  }
  return uVar6;
}


