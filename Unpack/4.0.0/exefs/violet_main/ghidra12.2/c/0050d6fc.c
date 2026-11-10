/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0050d6fc; name: FUN_0050d6fc
 */


uint FUN_0050d6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  byte local_90 [8];
  ulong local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  uVar6 = FUN_0050e12c(param_1,param_3);
  puVar3 = PTR_LAB_047cba48;
  if ((uVar6 & 1) != 0) {
    local_78 = CONCAT53(local_78._3_5_,0x2e02);
    bVar4 = (*(byte *)(param_1 + 0x30) & 1) == 0;
    uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    uVar6 = uVar7;
    if (!bVar4) {
      uVar6 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar6 == 1) {
      do {
        if (bVar4) {
          if (*(char *)(param_1 + 0x31) != '.') break;
          pcVar8 = (char *)((ulong)&local_78 | 2);
          pcVar9 = (char *)(param_1 + 0x32);
          while (uVar7 = uVar7 - 1, uVar7 != 0) {
            cVar1 = *pcVar8;
            cVar2 = *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
            if (cVar2 != cVar1) goto LAB_0050d878;
          }
        }
        else if (**(char **)(param_1 + 0x40) != local_78._1_1_) break;
                    /* try { // try from 0050d7fc to 0050d803 has its CatchHandler @ 0050d960 */
        FUN_004fcda0(param_1 + 0x28);
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
                    /* try { // try from 0050d80c to 0050d817 has its CatchHandler @ 0050d93c */
        uVar6 = FUN_0050e12c(param_1,&local_78);
        if ((uVar6 & 1) == 0) {
          if ((local_78 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_68);
          }
          goto LAB_0050d8ec;
        }
                    /* try { // try from 0050d81c to 0050d82b has its CatchHandler @ 0050d938 */
        FUN_004a8ec0(local_90,&DAT_03bdface,&local_78);
        uVar6 = (ulong)(local_90[0] >> 1);
        uVar7 = (ulong)local_90 | 1;
        if ((local_90[0] & 1) != 0) {
          uVar6 = local_88;
          uVar7 = local_80;
        }
                    /* try { // try from 0050d844 to 0050d84b has its CatchHandler @ 0050d918 */
        FUN_0021d540(param_3,uVar7,uVar6);
        if ((local_90[0] & 1) != 0) {
          FUN_0049e790(puVar3,local_80);
        }
        if ((local_78 & 1) != 0) {
          FUN_0049e790(puVar3,local_68);
        }
        local_78 = CONCAT53(local_78._3_5_,0x2e02);
        bVar4 = (*(byte *)(param_1 + 0x30) & 1) == 0;
        uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
        uVar6 = uVar7;
        if (!bVar4) {
          uVar6 = *(ulong *)(param_1 + 0x38);
        }
      } while (uVar6 == 1);
    }
LAB_0050d878:
    local_78 = CONCAT53(local_78._3_5_,0x2f02);
                    /* try { // try from 0050d884 to 0050d88f has its CatchHandler @ 0050d914 */
    uVar6 = FUN_0050d96c(param_1,&local_78);
    if ((local_78 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_68);
    }
    if ((uVar6 & 1) != 0) {
      FUN_0021d540(param_3,&DAT_03bdfb3b,1);
      uVar5 = FUN_0050df60(param_1,param_2);
      goto LAB_0050d8f0;
    }
  }
LAB_0050d8ec:
  uVar5 = 0;
LAB_0050d8f0:
  return uVar5 & 1;
}


