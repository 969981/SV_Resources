/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e1398; name: FUN_007e1398
 */


void FUN_007e1398(undefined8 param_1,uint *param_2,ulong param_3,uint param_4,uint param_5,
                 int param_6,long param_7)

{
  Result *pRVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_70 [4];
  undefined4 local_60 [4];
  undefined4 local_50 [4];
  
  pRVar1 = (Result *)local_70;
  if ((char)param_2[0x12] == '\0') {
    if ((((param_3 != 0) && ((param_3 & 7) == 0)) && (param_5 != 0)) && (param_6 != 0)) {
      if ((uint)(param_6 * 0x40 + (int)((ulong)param_5 * 0x18)) <= param_4) {
        *param_2 = param_5;
        if (param_5 == 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0;
          puVar2 = (undefined8 *)(param_3 + 0x18);
          do {
            uVar3 = uVar3 + 2;
            puVar2[-3] = 0;
            puVar2[-2] = 0;
            puVar2[-1] = 0;
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2 = puVar2 + 6;
          } while (((ulong)param_5 & 0xfffffffe) != uVar3);
        }
        if ((param_5 & 1) != 0) {
          puVar2 = (undefined8 *)(param_3 + uVar3 * 0x18);
          puVar2[2] = 0;
          *puVar2 = 0;
          puVar2[1] = 0;
        }
        *(ulong *)(param_2 + 2) = param_3;
        FUN_007e1538(local_60,param_2 + 4,param_3 + ((ulong)param_5 * 0x18 & 0xfffffff8),
                     param_6 * 0x40,param_6);
        if (0 < (int)*param_2) {
          lVar4 = 0;
          lVar5 = 0x10;
          do {
            *(uint **)(*(long *)(param_2 + 2) + lVar5) = param_2 + 4;
            local_50[0] = 0;
            local_70[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_70);
            FUN_00cbd7c0(local_70,local_50);
            lVar4 = lVar4 + 1;
            lVar5 = lVar5 + 0x18;
          } while (lVar4 < (int)*param_2);
        }
        if (param_7 != 0) {
          *(long *)(param_2 + 0x10) = param_7;
        }
        *(undefined1 *)(param_2 + 0x12) = 1;
        local_50[0] = 0;
        local_70[0] = 0;
        goto LAB_007e13f0;
      }
    }
    local_50[0] = 0x10407;
  }
  else {
    local_50[0] = 0x10402;
  }
  local_60[0] = 0;
  pRVar1 = (Result *)local_60;
LAB_007e13f0:
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_50 | 4),pRVar1);
  FUN_00cbd7c0(param_1,local_50);
  return;
}


