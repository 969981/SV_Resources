/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033e75d4; name: FUN_033e75d4
 */


void FUN_033e75d4(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (*(int *)((long)param_1 + 0x14) != 0) {
      uVar4 = 0;
      while( true ) {
        plVar5 = (long *)(lVar3 + uVar4 * 0x18);
        lVar1 = *plVar5;
        if (lVar1 != 0) {
          puVar6 = (uint *)(lVar3 + uVar4 * 0x18 + 0x10);
          uVar2 = *puVar6;
          if (uVar2 != 0) {
            uVar7 = 0;
            while( true ) {
              if (*(long *)(lVar1 + uVar7 * 8) != 0) {
                (**(code **)(*param_2 + 0x18))(param_2);
                *(undefined8 *)(*plVar5 + uVar7 * 8) = 0;
                uVar2 = *puVar6;
              }
              uVar7 = uVar7 + 1;
              if (uVar2 <= uVar7) break;
              lVar1 = *plVar5;
            }
            lVar1 = *plVar5;
          }
          (**(code **)(*param_2 + 0x18))(param_2,lVar1);
        }
        lVar3 = lVar3 + uVar4 * 0x18;
        uVar4 = uVar4 + 1;
        *(undefined4 *)(lVar3 + 8) = 0;
        *(undefined4 *)(lVar3 + 0x10) = 0;
        if (*(uint *)((long)param_1 + 0x14) <= uVar4) break;
        lVar3 = *param_1;
      }
      lVar3 = *param_1;
    }
    (**(code **)(*param_2 + 0x18))(param_2,lVar3);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    param_1[1] = 0;
  }
  return;
}


