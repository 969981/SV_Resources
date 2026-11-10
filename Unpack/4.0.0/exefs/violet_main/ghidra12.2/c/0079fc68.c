/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0079fc68; name: FUN_0079fc68
 */


void FUN_0079fc68(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_60 [2];
  int local_50 [4];
  undefined2 local_38;
  undefined1 local_36;
  
  uVar5 = 0x1000100;
  lVar1 = FUN_007ec544();
  uVar7 = *(undefined4 *)((long)param_2 + 0xc);
  uVar6 = *param_2;
  FUN_007ebe58(local_50,lVar1,uVar6,uVar7);
  if (local_50[0] == 0) {
    uVar7 = *(undefined4 *)(lVar1 + 0x30);
    uVar5 = 0x1010100;
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
  }
  local_60[0] = CONCAT44(local_60[0]._4_4_,0x2c000000);
  local_38 = 0;
  local_36 = 0;
  lVar2 = FUN_007ebb00(lVar1,local_60,param_3,uVar7,&local_38,uVar5);
  if (lVar2 != 0) {
    FUN_007eba90(local_60,lVar1,uVar6);
    FUN_018ff39c(local_50,local_60);
    if (((local_50[0] == 0) && (*(long *)(param_1 + 0x1188) != 0)) &&
       (*(short *)(param_1 + 0x114e) != 0)) {
      uVar4 = 0;
      do {
        uVar3 = FUN_007967e8(*(long *)(*(long *)(param_1 + 0x88) + uVar4 * 8) + 0x10,param_3);
        if ((uVar3 & 1) != 0) {
          if ((short)uVar4 < 0) {
            return;
          }
          uVar3 = FUN_00796784(*(long *)(*(long *)(param_1 + 0x88) + uVar4 * 8) + 0x10);
          if ((uVar3 & 1) == 0) {
            return;
          }
          local_60[0] = 0;
          FUN_007935cc(local_60);
          *(undefined8 *)(*(long *)(param_1 + 0x1188) + uVar4 * 8) = local_60[0];
          return;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(param_1 + 0x114e));
    }
  }
  return;
}


