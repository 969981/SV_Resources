/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0056d324; name: FUN_0056d324
 */


void FUN_0056d324(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  long lVar7;
  byte *pbVar8;
  undefined1 auStack_68 [8];
  byte *local_60;
  byte *local_58;
  long local_50;
  long *plStack_48;
  
  puVar2 = *(undefined **)(param_3 + 0x10);
  if (*(int *)(param_3 + 0x1c) != 2) {
    puVar2 = PTR_DAT_047ce0d0;
  }
  puVar6 = (undefined8 *)0x0;
  if (*(long *)(puVar2 + 0x20) != 0) {
    puVar6 = (undefined8 *)(*(long *)(puVar2 + 0x20) + 8);
  }
  if (*(int *)(puVar2 + 0x18) != 0) {
    puVar1 = puVar6 + *(int *)(puVar2 + 0x18);
    lVar7 = 0;
    do {
      uVar4 = *puVar6;
      plVar3 = (long *)FUN_005612c8(param_2);
      pbVar5 = (byte *)(*plVar3 + lVar7 * 0x20);
      if ((*pbVar5 & 1) == 0) {
        pbVar5 = pbVar5 + 1;
      }
      else {
        pbVar5 = *(byte **)(pbVar5 + 0x10);
      }
      FUN_00251b30(&local_60,pbVar5);
      FUN_002634a4(auStack_68,uVar4);
                    /* try { // try from 0056d3e8 to 0056d3fb has its CatchHandler @ 0056d474 */
      FUN_0056d4fc(param_1 + 8,&local_60,&local_60,auStack_68);
      FUN_01f6fb44(auStack_68);
      pbVar5 = local_60;
      if (local_60 != (byte *)0x0) {
        if (local_58 != local_60) {
          do {
            pbVar8 = local_58 + -0x20;
            if ((*pbVar8 & 1) != 0) {
              (**(code **)(**(long **)(local_58 + -8) + 0x18))
                        (*(long **)(local_58 + -8),*(undefined8 *)(local_58 + -0x10),
                         *(ulong *)(local_58 + -0x20) & 0xfffffffffffffffe,1);
            }
            local_58 = pbVar8;
          } while (pbVar5 != pbVar8);
        }
        local_58 = pbVar5;
        (**(code **)(*plStack_48 + 0x18))(plStack_48,local_60,local_50 - (long)local_60,8);
      }
      puVar6 = puVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (puVar6 != puVar1);
  }
  return;
}


