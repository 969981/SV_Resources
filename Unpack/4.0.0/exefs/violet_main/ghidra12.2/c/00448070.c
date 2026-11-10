/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00448070; name: FUN_00448070
 */


void FUN_00448070(undefined8 *param_1,int param_2,byte *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_28;
  
  memcpy(param_1,&DAT_03cf703c,0x1048);
  if (0x47 < param_2) {
    param_2 = 0x48;
  }
  pbVar1 = param_3 + param_2;
  uVar5 = 0x243f6a88;
  lVar8 = 0;
  pbVar6 = param_3;
  while( true ) {
    pbVar2 = pbVar6 + 1;
    if (pbVar1 <= pbVar6 + 1) {
      pbVar2 = param_3;
    }
    pbVar3 = pbVar2 + 1;
    if (pbVar1 <= pbVar2 + 1) {
      pbVar3 = param_3;
    }
    pbVar4 = pbVar3 + 1;
    if (pbVar1 <= pbVar3 + 1) {
      pbVar4 = param_3;
    }
    *(uint *)((long)param_1 + lVar8) =
         ((uint)*pbVar4 | ((uint)*pbVar6 << 0x10 | (uint)*pbVar2 << 8 | (uint)*pbVar3) << 8) ^ uVar5
    ;
    if (lVar8 == 0x44) break;
    uVar5 = *(uint *)((long)param_1 + lVar8 + 4);
    pbVar6 = pbVar4 + 1;
    if (pbVar1 <= pbVar4 + 1) {
      pbVar6 = param_3;
    }
    lVar8 = lVar8 + 4;
  }
  local_28 = 0;
  FUN_00447200(&local_28,param_1);
  *param_1 = local_28;
  FUN_00447200(&local_28,param_1);
  param_1[1] = local_28;
  FUN_00447200(&local_28,param_1);
  param_1[2] = local_28;
  FUN_00447200(&local_28,param_1);
  param_1[3] = local_28;
  FUN_00447200(&local_28,param_1);
  param_1[4] = local_28;
  FUN_00447200(&local_28,param_1);
  param_1[5] = local_28;
  FUN_00447200(&local_28,param_1);
  param_1[6] = local_28;
  FUN_00447200(&local_28,param_1);
  param_1[7] = local_28;
  FUN_00447200(&local_28,param_1);
  uVar7 = 0xfffffffffffffffe;
  lVar8 = 0x48;
  param_1[8] = local_28;
  do {
    FUN_00447200(&local_28,param_1);
    uVar7 = uVar7 + 2;
    *(undefined8 *)((long)param_1 + lVar8) = local_28;
    lVar8 = lVar8 + 8;
  } while (uVar7 < 0x3fe);
  return;
}


