/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007fa9e8; name: FUN_007fa9e8
 */


void FUN_007fa9e8(undefined8 param_1,long param_2,undefined4 *param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *local_78 [3];
  undefined2 local_60;
  undefined4 local_58 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0x10407;
  }
  else {
    lVar4 = *(long *)(param_2 + 0xd8);
    if (lVar4 != param_2 + 0xd0) {
      puVar1 = PTR_DAT_047d08c0 + 0x10;
      do {
        uVar2 = FUN_0078a324(param_5);
        if ((uVar2 & 1) == 0) {
LAB_007faa40:
          uVar2 = FUN_0078b108(lVar4 + 0x18,param_4);
          if ((uVar2 & 1) != 0) {
            *param_3 = *(undefined4 *)(lVar4 + 0x10);
            local_78[0] = (undefined *)((ulong)local_78[0] & 0xffffffff00000000);
            goto LAB_007faac8;
          }
        }
        else {
          local_78[0] = puVar1;
          FUN_0284e360(local_78,0xffffffff);
          local_60 = 0;
          uVar2 = FUN_0078b108(lVar4 + 0x38,local_78);
          if ((uVar2 & 1) != 0) {
            FUN_0284e3d4(local_78);
            goto LAB_007faa40;
          }
          uVar2 = FUN_0078b108(lVar4 + 0x38,param_5);
          FUN_0284e3d4(local_78);
          if ((uVar2 & 1) != 0) goto LAB_007faa40;
        }
        lVar4 = *(long *)(lVar4 + 8);
      } while (lVar4 != param_2 + 0xd0);
    }
    uVar3 = 0x2c0a;
    *param_3 = 0;
  }
  local_78[0] = (undefined *)CONCAT44(local_78[0]._4_4_,uVar3);
LAB_007faac8:
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_58);
  FUN_00cbd7c0(param_1,local_78);
  return;
}


