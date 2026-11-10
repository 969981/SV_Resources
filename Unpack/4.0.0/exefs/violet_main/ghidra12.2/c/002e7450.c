/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002e7450; name: FUN_002e7450
 */


undefined8 FUN_002e7450(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  
  uStack_30 = 0;
  local_38 = 0;
  local_60 = PTR_DAT_047cc938 + 0x10;
  uStack_40 = 0;
  local_48 = 0;
  local_28 = 0;
  local_24 = 1000000;
  uStack_50 = 0;
  local_58 = 0;
                    /* try { // try from 002e7490 to 002e749f has its CatchHandler @ 002e751c */
  lVar1 = FUN_002e90c0(&local_60,param_1,0,1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_70 = 0;
    local_78 = 0;
    local_64 = 1000000;
    uStack_80 = 0;
    local_88 = 0;
    local_a0 = PTR_DAT_047cc940 + 0x10;
    local_68 = 0;
    uStack_90 = 0;
    local_98 = 0;
                    /* try { // try from 002e74d0 to 002e74ef has its CatchHandler @ 002e7524 */
    uVar2 = FUN_002e90c0(&local_a0,lVar1,0,1);
    FUN_002e4804(lVar1);
    FUN_002e770c(&local_a0);
  }
  FUN_002e770c(&local_60);
  return uVar2;
}


