/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019bd260; name: FUN_019bd260
 */


void FUN_019bd260(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  uint local_58 [2];
  long *local_50 [4];
  undefined8 local_18;
  
  local_18 = param_4;
  FUN_01267a34(local_50,param_2,param_3);
  if (local_50[0] != (long *)0x0) {
    lVar4 = *local_50[0];
    lVar6 = local_50[0][2];
    lVar5 = lVar6 + 1;
    bVar1 = *(byte *)(lVar4 + lVar6);
    local_50[0][2] = lVar5;
    if (bVar1 < 0x81) {
      if (bVar1 == 0x80) {
        bVar1 = *(byte *)(lVar4 + lVar5);
        lVar5 = lVar6 + 2;
        local_50[0][2] = lVar5;
      }
      switch(bVar1) {
      case 1:
        bVar1 = *(byte *)(lVar4 + lVar5);
        local_50[0][2] = lVar5 + 1;
        if (bVar1 < 0x81) {
          if (bVar1 == 0x80) {
            bVar1 = *(byte *)(lVar4 + lVar5 + 1);
            local_50[0][2] = lVar5 + 2;
          }
          if (bVar1 != 0) {
            bVar7 = 0;
            do {
              local_58[0] = 0;
              if ((local_50[0] != (long *)0x0) &&
                 (uVar3 = FUN_019bd3fc(local_50[0],local_58), (uVar3 & 1) != 0)) {
                FUN_019bd578(param_1,local_58,&local_18);
              }
              bVar7 = bVar7 + 1;
            } while (bVar7 < bVar1);
          }
        }
        break;
      case 2:
        uVar2 = local_58[0] >> 8;
        local_58[0] = (uint)(ushort)((short)uVar2 << 8);
        uVar3 = FUN_01ec9510(local_50[0],local_58);
        if ((uVar3 & 1) != 0) {
          FUN_01ec956c(param_1,local_58,&local_18,1);
        }
        break;
      case 3:
        local_58[0] = (uint)local_58[0]._1_3_ << 8;
        uVar3 = FUN_01a05e90(local_50[0],local_58);
        if ((uVar3 & 1) != 0) {
          FUN_01ec92cc(param_1,local_58,&local_18);
        }
        break;
      case 4:
        local_58[0] = (uint)local_58[0]._1_3_ << 8;
        uVar3 = FUN_019bd458(local_50[0],local_58);
        if ((uVar3 & 1) != 0) {
          FUN_01844624(param_1,local_58,&local_18);
        }
        break;
      case 5:
        local_58[0] = (uint)local_58[0]._1_3_ << 8;
        uVar3 = FUN_01ec9960(local_50[0],local_58);
        if ((uVar3 & 1) != 0) {
          FUN_01ec9400(param_1,local_58,&local_18);
        }
      }
    }
  }
  FUN_01267b4c(local_50);
  return;
}


