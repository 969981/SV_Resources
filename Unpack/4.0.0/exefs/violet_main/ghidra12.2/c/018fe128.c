/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018fe128; name: FUN_018fe128
 */


void FUN_018fe128(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  uVar3 = FUN_007ccad0();
  if ((uVar3 & 1) == 0) {
    local_40[0] = 0x1040c;
  }
  else {
    uVar3 = FUN_007ccae0();
    puVar1 = PTR_DAT_047d0a08;
    if ((uVar3 & 1) == 0) {
      local_40[0] = 0x10408;
    }
    else if (*(long *)PTR_DAT_047d0a08 == 0) {
      if ((long *)*param_2 != (long *)0x0) {
        uVar2 = (**(code **)(*(long *)*param_2 + 0xd8))();
        if (*(ushort *)(param_2 + 1) <= uVar2) {
          uVar4 = FUN_0078a12c();
          lVar5 = FUN_007bfa40(0x478,uVar4,8);
          if (lVar5 == 0) {
            local_40[0] = 0x10401;
            *(undefined8 *)PTR_DAT_047d1190 = 0;
          }
          else {
            lVar6 = 0;
            do {
              *(undefined4 *)(lVar5 + lVar6) = 0;
              lVar6 = lVar6 + 4;
            } while (lVar6 != 0x478);
            *(long *)PTR_DAT_047d1190 = lVar5;
            FUN_007ccd34(lVar5,param_2);
            *(long *)puVar1 = lVar5;
            uVar4 = (**(code **)(*(long *)*param_2 + 0xe0))();
            *(undefined8 *)(*(long *)puVar1 + 0x18) = uVar4;
            local_40[0] = 0;
          }
          goto LAB_018fe254;
        }
      }
      local_40[0] = 0x10407;
    }
    else {
      local_40[0] = 0x1040f;
    }
  }
LAB_018fe254:
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_00cbd7c0(param_1,local_40);
  return;
}


