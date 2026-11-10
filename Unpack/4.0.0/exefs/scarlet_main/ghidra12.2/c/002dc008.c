/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002dc008; name: FUN_002dc008
 */


ulong FUN_002dc008(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 local_28 [4];
  int local_24;
  
  local_24 = (int)param_2;
  if (*(int *)(param_1 + 0x4c) == 1) {
    if (0x7f < local_24) {
      uVar1 = FUN_002ea9e0(local_28,&local_24);
      uVar4 = FUN_002da6c4(param_1,local_28[0],local_28[0],0);
      if (1 < (int)uVar1) {
        lVar6 = (ulong)uVar1 - 1;
        puVar5 = (undefined1 *)((ulong)local_28 | 1);
        do {
          uVar2 = FUN_002da6c4(param_1,*puVar5,*puVar5,0);
          uVar4 = FUN_002d9f68(param_1,uVar4,uVar2);
          lVar6 = lVar6 + -1;
          puVar5 = puVar5 + 1;
        } while (lVar6 != 0);
      }
      uVar3 = uVar4 & 0xffffffff00000000;
      goto LAB_002dc0d4;
    }
  }
  else if (*(int *)(param_1 + 0x4c) != 2) {
    uVar3 = 0;
    uVar4 = 0;
    goto LAB_002dc0d4;
  }
  uVar4 = FUN_002da6c4(param_1,param_2,param_2 & 0xffffffff,param_3 & 1);
  uVar3 = uVar4 & 0xffffffff00000000;
LAB_002dc0d4:
  return uVar4 & 0xffffffff | uVar3;
}


