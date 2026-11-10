/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cbf64; name: FUN_007cbf64
 */


void FUN_007cbf64(undefined8 param_1,long param_2,undefined8 *param_3,void *param_4,uint *param_5,
                 uint param_6)

{
  uint uVar1;
  long lVar2;
  ErrorResultVariant *this;
  long *plVar3;
  ulong uVar4;
  Result *pRVar5;
  long lVar6;
  long lVar7;
  undefined4 local_80 [4];
  undefined4 local_70 [4];
  undefined4 local_58 [2];
  
  pRVar5 = (Result *)local_80;
  if ((((param_3 == (undefined8 *)0x0) || (param_4 == (void *)0x0)) || (param_6 == 0)) ||
     (param_5 == (uint *)0x0)) {
    local_70[0] = 0x10407;
  }
  else if (*(long *)(param_2 + 0x68) == 0) {
    local_70[0] = 0x10408;
  }
  else {
    lVar2 = FUN_007ec4a8(param_2);
    if ((lVar2 != 0) && (*(int *)(*(long *)(param_2 + 0x68) + 0x10) != 0)) {
      lVar2 = *(long *)(*(long *)(param_2 + 0x68) + 8);
      if (param_6 < *(uint *)(lVar2 + 0x5b4)) {
        local_70[0] = 0x10404;
        goto LAB_007cbff0;
      }
      if (lVar2 != 0) {
        do {
          plVar3 = (long *)FUN_007ec554(param_2);
          uVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,*(undefined8 *)(lVar2 + 0x5b8));
          if ((uVar4 & 1) != 0) {
            uVar1 = *(uint *)(lVar2 + 0x5b4);
            if (param_6 <= *(uint *)(lVar2 + 0x5b4)) {
              uVar1 = param_6;
            }
            memcpy(param_4,(void *)(lVar2 + 0x10),(ulong)uVar1);
            *param_5 = uVar1;
            this = (ErrorResultVariant *)((ulong)local_70 | 4);
            local_70[0] = 0;
            local_80[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_80);
            FUN_00cbd7c0(local_80,local_70);
            *param_3 = *(undefined8 *)(lVar2 + 0x5b8);
            lVar6 = *(long *)(param_2 + 0x68);
            FUN_0078fa2c(lVar6,lVar2);
            FUN_0078fa04(lVar6 + 0x18,lVar6 + 0x18,lVar2 + *(int *)(lVar6 + 0x2c));
            FUN_00797e54(param_2 + 0x10,*(undefined4 *)(*(long *)(param_2 + 0x68) + 0x10));
            pRVar5 = (Result *)local_58;
            local_70[0] = 0;
            local_58[0] = 0;
            goto LAB_007cc004;
          }
          lVar6 = *(long *)(param_2 + 0x68);
          lVar7 = *(long *)(lVar2 + 8);
          FUN_0078fa2c(lVar6,lVar2);
          FUN_0078fa04(lVar6 + 0x18,lVar6 + 0x18,lVar2 + *(int *)(lVar6 + 0x2c));
          lVar2 = lVar7;
        } while (lVar7 != lVar6);
      }
    }
    local_70[0] = 0x2c09;
  }
LAB_007cbff0:
  this = (ErrorResultVariant *)((ulong)local_70 | 4);
  local_80[0] = 0;
LAB_007cc004:
  nn::err::ErrorResultVariant::ErrorResultVariant(this,pRVar5);
  FUN_00cbd7c0(param_1,local_70);
  return;
}


