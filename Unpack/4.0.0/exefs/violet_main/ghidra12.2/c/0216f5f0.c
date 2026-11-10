/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0216f5f0; name: FUN_0216f5f0
 */


void FUN_0216f5f0(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  int *local_210 [58];
  
  if ((param_1 != param_2) && (lVar7 = param_1 + 0x1d0, lVar7 != param_2)) {
    lVar8 = 0;
    do {
      FUN_0113987c(local_210,lVar7);
      if (lVar7 != param_1) {
        lVar2 = lVar8;
        do {
          if ((*(ushort *)((long)local_210[0] - (long)*local_210[0]) < 9) ||
             (uVar5 = (ulong)((ushort *)((long)local_210[0] - (long)*local_210[0]))[4], uVar5 == 0))
          {
            uVar3 = 0;
          }
          else {
            uVar3 = *(uint *)((long)local_210[0] + uVar5);
          }
          piVar6 = *(int **)(param_1 + lVar2);
          if ((*(ushort *)((long)piVar6 - (long)*piVar6) < 9) ||
             (uVar5 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[4], uVar5 == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)((long)piVar6 + uVar5);
          }
          if (uVar4 <= uVar3) {
            lVar2 = param_1 + lVar2 + 0x1d0;
            goto LAB_0216f6c0;
          }
          FUN_0113a684(param_1 + lVar2 + 0x1d0);
          bVar1 = lVar2 != 0;
          lVar2 = lVar2 + -0x1d0;
        } while (bVar1);
      }
      lVar2 = param_1;
LAB_0216f6c0:
      FUN_0113a684(lVar2,local_210);
      FUN_01139754(local_210);
      lVar7 = lVar7 + 0x1d0;
      lVar8 = lVar8 + 0x1d0;
    } while (lVar7 != param_2);
  }
  return;
}


