/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00810d04; name: FUN_00810d04
 */


void FUN_00810d04(undefined8 param_1,undefined2 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong local_80 [2];
  int local_70 [4];
  undefined4 local_58 [2];
  
  puVar6 = local_80;
  local_70[0] = 0;
  local_80[0] = local_80[0] & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_80);
  uVar4 = FUN_0078cdf4(param_2 + 0x4ac);
  if ((uVar4 & 1) == 0) {
    iVar3 = FUN_007930a0(param_6);
    if ((iVar3 == 0) || (uVar5 = FUN_007930a0(param_7), (int)uVar5 == 0)) {
      uVar7 = 0x10408;
    }
    else {
      if (param_5 != 0) {
        *(long *)(param_2 + 0x4fc) = param_5;
        if (*(long *)(param_2 + 0x10) == 0) {
          *(undefined2 **)(param_2 + 0x10) = param_2 + 4;
        }
        FUN_00810be0(local_80,uVar5,param_6,param_2 + 0x218,param_2 + 0x448);
        uVar5 = FUN_018ff39c(local_70,local_80);
        if (local_70[0] == 0) {
          FUN_00810be0(local_80,uVar5,param_7,param_2 + 0x330,param_2 + 0x449);
          FUN_018ff39c(local_70,local_80);
          if (local_70[0] == 0) {
            uVar2 = *(undefined2 *)(param_8 + 0x18);
            *(undefined4 *)(param_2 + 0x500) = 0;
            *param_2 = uVar2;
            local_80[0] = 0;
            FUN_007935cc(local_80);
            *(ulong *)(param_2 + 0x504) = local_80[0];
            puVar1 = (undefined8 *)(param_2 + 0x18);
            param_2[0x508] = 0;
            *(undefined4 *)(param_2 + 0x502) = 0;
            *(undefined4 *)(param_2 + 0x50a) = 0;
            if (*(undefined8 **)(param_2 + 0x1c) != puVar1) {
              puVar8 = *(undefined8 **)(param_2 + 0x1c);
              do {
                puVar9 = (undefined8 *)puVar8[1];
                *puVar8 = 0;
                puVar8[1] = 0;
                FUN_0078fa04(param_2 + 0x24,param_2 + 0x24,
                             (long)*(int *)(param_2 + 0x2e) + (long)puVar8);
                puVar8 = puVar9;
              } while (puVar9 != puVar1);
            }
            FUN_0078f9d4(puVar1);
            FUN_00811da4(local_80,param_2 + 0x4ac,param_3,param_4,param_2);
            FUN_018ff39c(local_70,local_80);
            if (local_70[0] == 0) {
              local_80[0] = local_80[0] & 0xffffffff00000000;
              goto LAB_00810ebc;
            }
          }
        }
        puVar6 = (ulong *)local_70;
        goto LAB_00810ecc;
      }
      uVar7 = 0x10407;
    }
    local_80[0] = CONCAT44(local_80[0]._4_4_,uVar7);
  }
  else {
    local_80[0] = CONCAT44(local_80[0]._4_4_,0x10408);
  }
LAB_00810ebc:
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_58);
LAB_00810ecc:
  FUN_00cbd7c0(param_1,puVar6);
  return;
}


