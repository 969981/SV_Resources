/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00314260; name: FUN_00314260
 */


ulong FUN_00314260(long param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  byte local_78 [16];
  ulong local_68;
  undefined1 auStack_60 [32];
  ulong local_40;
  undefined *puStack_38;
  ulong local_30;
  undefined *puStack_28;
  
  if (param_2 == param_3) {
    *(code **)(param_1 + 0x18) = FUN_00314260;
    return 0;
  }
  **(int **)(param_1 + 0x38) = **(int **)(param_1 + 0x38) + (*param_2 & 0x7f);
  pbVar4 = param_2 + 1;
  if ((char)*param_2 < '\0') {
    if (pbVar4 == param_3) {
      *(undefined1 **)(param_1 + 0x18) = &LAB_003143a0;
      return 0;
    }
    **(int **)(param_1 + 0x38) = **(int **)(param_1 + 0x38) + (param_2[1] & 0x7f) * 0x80;
    pbVar4 = param_2 + 2;
    if ((char)param_2[1] < '\0') {
      if (pbVar4 == param_3) {
        *(undefined1 **)(param_1 + 0x18) = &LAB_00314400;
        return 0;
      }
      **(int **)(param_1 + 0x38) = **(int **)(param_1 + 0x38) + (param_2[2] & 0x7f) * 0x4000;
      pbVar4 = param_2 + 3;
      if ((char)param_2[2] < '\0') {
        if (pbVar4 == param_3) {
          *(undefined1 **)(param_1 + 0x18) = &LAB_003144c0;
          return 0;
        }
        **(int **)(param_1 + 0x38) = **(int **)(param_1 + 0x38) + (param_2[3] & 0x7f) * 0x200000;
        pbVar4 = param_2 + 4;
        if (-1 < (char)param_2[3]) {
          puVar7 = *(undefined8 **)(param_1 + 0x20);
          *(undefined8 **)(param_1 + 0x20) = puVar7 + 1;
          UNRECOVERED_JUMPTABLE_00 = (code *)*puVar7;
          *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
                    /* WARNING: Could not recover jumptable at 0x00314354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*UNRECOVERED_JUMPTABLE_00)();
          return uVar2;
        }
        if (pbVar4 == param_3) {
          uVar2 = 0;
          puVar5 = (undefined1 *)0x314520;
        }
        else {
          bVar1 = *pbVar4;
          local_30 = (ulong)bVar1;
          if ((bVar1 & 0x70) == 0) {
            uVar6 = **(uint **)(param_1 + 0x38);
            if (!CARRY4(uVar6,(uint)bVar1 * 0x10000000)) {
              **(uint **)(param_1 + 0x38) = uVar6 + (uint)bVar1 * 0x10000000;
              param_2 = param_2 + 5;
              if (-1 < (char)*pbVar4) {
                puVar7 = *(undefined8 **)(param_1 + 0x20);
                *(undefined8 **)(param_1 + 0x20) = puVar7 + 1;
                UNRECOVERED_JUMPTABLE_00 = (code *)*puVar7;
                *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
                    /* WARNING: Could not recover jumptable at 0x0031467c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                uVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_1);
                return uVar2;
              }
              do {
                if (param_2 == param_3) {
                  uVar2 = 0;
                  puVar5 = (undefined1 *)0x3146c0;
LAB_003146fc:
                  *(undefined1 **)(param_1 + 0x18) = puVar5;
                  return uVar2;
                }
                if (*param_2 != 0x80) {
                  if (*param_2 == 0) {
                    puVar7 = *(undefined8 **)(param_1 + 0x20);
                    *(undefined8 **)(param_1 + 0x20) = puVar7 + 1;
                    UNRECOVERED_JUMPTABLE_00 = (code *)*puVar7;
                    *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
                    /* WARNING: Could not recover jumptable at 0x00314740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    uVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 + 1);
                    return uVar2;
                  }
                  local_40 = (ulong)**(uint **)(param_1 + 0x38);
                  puStack_38 = PTR_FUN_047cc7b0;
                  local_30 = (ulong)*param_2;
                  puStack_28 = PTR_FUN_047ccb10;
                  FUN_00391b20(local_78,
                               "integer overflow in hpack integer decoding: have 0x%08x, got byte 0x%02x sometime after byte 5"
                               ,0x5e,&local_40,2);
                  uVar2 = (ulong)local_78 | 1;
                  if ((local_78[0] & 1) != 0) {
                    uVar2 = local_68;
                  }
                    /* try { // try from 0031479c to 003147bf has its CatchHandler @ 00314810 */
                  FUN_00367770(auStack_60,uVar2);
                  uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                                       ,0x4d2,auStack_60,0,0);
                  if ((local_78[0] & 1) != 0) {
                    FUN_0049e790(PTR_LAB_047cba48,local_68);
                  }
                  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  if (*(long *)(param_1 + 0x10) == 0) {
                    uVar3 = uVar2;
                    if (4 < uVar2) {
                      uVar3 = FUN_00350fb0(uVar2);
                    }
                    *(ulong *)(param_1 + 0x10) = uVar3;
                  }
                  puVar5 = &LAB_00314840;
                  goto LAB_003146fc;
                }
                param_2 = param_2 + 1;
              } while( true );
            }
          }
          else {
            uVar6 = **(uint **)(param_1 + 0x38);
          }
          local_40 = (ulong)uVar6;
          puStack_28 = PTR_FUN_047ccb10;
          puStack_38 = PTR_FUN_047cc7b0;
          FUN_00391b20(local_78,
                       "integer overflow in hpack integer decoding: have 0x%08x, got byte 0x%02x on byte 5"
                       ,0x52,&local_40,2);
          uVar2 = (ulong)local_78 | 1;
          if ((local_78[0] & 1) != 0) {
            uVar2 = local_68;
          }
                    /* try { // try from 003145c4 to 003145e7 has its CatchHandler @ 00314698 */
          FUN_00367770(auStack_60,uVar2);
          uVar2 = FUN_00351340("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                               ,0x4b7,auStack_60,0,0);
          if ((local_78[0] & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,local_68);
          }
          if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (*(long *)(param_1 + 0x10) == 0) {
            uVar3 = uVar2;
            if (4 < uVar2) {
              uVar3 = FUN_00350fb0(uVar2);
            }
            *(ulong *)(param_1 + 0x10) = uVar3;
          }
          puVar5 = &LAB_00314840;
        }
        *(undefined1 **)(param_1 + 0x18) = puVar5;
        return uVar2;
      }
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar7 + 1;
  UNRECOVERED_JUMPTABLE_00 = (code *)*puVar7;
  *(code **)(param_1 + 0x18) = UNRECOVERED_JUMPTABLE_00;
                    /* WARNING: Could not recover jumptable at 0x003142a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE_00)(param_1,pbVar4);
  return uVar2;
}


