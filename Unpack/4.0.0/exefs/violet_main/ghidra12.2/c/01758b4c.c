/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01758b4c; name: FUN_01758b4c
 */


void FUN_01758b4c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  FUN_01758ee4();
  *param_1 = &PTR_FUN_045e1740;
  param_1[4] = &PTR_LAB_045e1770;
  uVar2 = *param_3;
  uVar1 = param_3[1];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_3 + 2);
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  memset(param_1 + 8,0,0x70);
  param_1[0x16] = param_2;
  param_1[0x17] = 0x1fffffffffffffff;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  FUN_01758d70(&local_60,param_2);
  uVar2 = local_60;
  local_60 = 0;
  lVar3 = param_1[8];
  param_1[8] = uVar2;
  if (lVar3 != 0) {
    FUN_027bc084(param_1 + 9);
  }
  param_1[10] = uStack_50;
  param_1[0xb] = local_48;
  param_1[9] = local_58;
  uVar2 = FUN_01758cd8(DAT_0485f048,*(undefined4 *)(param_1 + 5),param_2);
  param_1[0xc] = uVar2;
  FUN_01758e20(&local_60,param_2,param_1 + 0xc);
  uVar2 = local_60;
  local_60 = 0;
  lVar3 = param_1[0xd];
  param_1[0xd] = uVar2;
  if (lVar3 == 0) {
    param_1[0xf] = uStack_50;
    param_1[0x10] = local_48;
  }
  else {
    FUN_027bc130(param_1 + 0xe);
    param_1[0xf] = uStack_50;
    param_1[0x10] = local_48;
    uVar2 = param_1[0xd];
  }
  param_1[0xe] = local_58;
  FUN_002492b0(uVar2);
                    /* try { // try from 01758cb8 to 01758ccb has its CatchHandler @ 01758cd4 */
  FUN_0038dcd0(&DAT_047ed490,PTR_FUN_047cc1f8);
  return;
}


