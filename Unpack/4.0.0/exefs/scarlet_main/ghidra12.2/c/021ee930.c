/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021ee930; name: FUN_021ee930
 */


void FUN_021ee930(long *param_1,uint param_2,long param_3)

{
  bool bVar1;
  short sVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_2 < 6) {
    uVar5 = (ulong)param_2;
    lVar3 = (**(code **)(*param_1 + 0x60))();
    if (lVar3 != 0) {
      if (((*(byte *)(*(long *)(*(long *)(param_3 + 0x70) + 0x10) + 4) >> 2 & 1) != 0) ||
         (sVar2 = FUN_00cf44f4(), sVar2 != 0)) {
        lVar3 = (**(code **)(*param_1 + 0x60))(param_1,uVar5);
        if ((*(byte *)(*(long *)(*(long *)(lVar3 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
          sVar2 = FUN_00cf44f4();
          bVar1 = sVar2 == 0;
        }
        else {
          bVar1 = false;
        }
        uVar4 = (**(code **)(*param_1 + 0x60))(param_1,uVar5);
        FUN_00feea48(uVar4,param_3);
        lVar3 = param_1[uVar5 + 0xc];
        *(undefined8 *)(lVar3 + 0x34) = 0;
        *(undefined8 *)(lVar3 + 0x2c) = 0;
        if (bVar1) {
          *(char *)(param_1 + 0x12) = (char)param_1[0x12] + '\x01';
        }
        if (*(byte *)((long)param_1 + 0x91) == param_2) {
          FUN_01a37c48(param_1);
          return;
        }
      }
    }
  }
  return;
}


