/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02789de0; name: FUN_02789de0
 */


void FUN_02789de0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  undefined **local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined **local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined4 local_344;
  undefined **local_340;
  undefined1 *puStack_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined **local_320;
  undefined1 auStack_318 [264];
  undefined **local_210;
  undefined1 *puStack_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined **local_1f0;
  undefined1 auStack_1e8 [264];
  undefined **local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined **local_c0;
  undefined1 auStack_b8 [88];
  
  plVar1 = DAT_0485e9d8;
  if ((DAT_0485e9d8 == (long *)0x0) || (*param_4 == 0)) {
    local_358 = (undefined **)CONCAT44(local_358._4_4_,0x10408);
    local_378 = (undefined **)((ulong)local_378 & 0xffffffff00000000);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_358 | 4),(Result *)&local_378);
    FUN_00cbd7c0(param_1,&local_358);
  }
  else {
    local_344 = 30000;
    local_358 = &PTR_LAB_045dfd60;
    puStack_338 = auStack_318;
    local_340 = &PTR_LAB_045dfd90;
    local_320 = &PTR_LAB_045dfde8;
    local_210 = &PTR_LAB_045dfd90;
    local_1f0 = &PTR_LAB_045dfde8;
    local_c0 = &PTR_LAB_045dfe78;
    local_348 = 0;
    local_330 = 0x100;
    local_200 = 0x100;
    local_e0 = &PTR_LAB_045dfe20;
    local_d0 = 0x50;
    puStack_208 = auStack_1e8;
    local_d8 = auStack_b8;
    memset(puStack_338,0,0x101);
    local_32c = 0;
    memset(auStack_1e8,0,0x101);
    local_1fc = 0;
    local_cc = 0;
    memset(auStack_b8,0,0x51);
    local_350 = *param_2;
    uStack_370 = *param_3;
    local_368 = param_3[1];
    uStack_360 = param_3[2];
    local_378 = &PTR_LAB_045dfeb0;
    (**(code **)(*plVar1 + 0x50))(param_1,plVar1,&local_358,&local_378);
  }
  return;
}


