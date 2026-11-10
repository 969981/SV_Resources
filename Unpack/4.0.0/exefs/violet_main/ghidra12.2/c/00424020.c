/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00424020; name: FUN_00424020
 */


undefined8 FUN_00424020(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1a0 [264];
  undefined1 auStack_98 [60];
  byte local_5c [55];
  byte local_25;
  undefined1 local_24;
  
  uVar1 = FUN_00423f80(local_5c,0x39,param_2);
  if ((int)uVar1 != 0) {
    local_5c[0] = local_5c[0] & 0xfc;
    local_25 = local_25 | 0x80;
    local_24 = 0;
    FUN_00429d40(auStack_98,local_5c,0x39);
    FUN_0042a300(auStack_98,auStack_98);
    FUN_0042a300(auStack_98,auStack_98);
    FUN_00424c20(auStack_1a0,*(undefined8 *)PTR_PTR_047cd2d0,auStack_98);
    FUN_00426460(param_1,auStack_1a0);
    FUN_00429d30(auStack_98);
    FUN_00426670(auStack_1a0);
    FUN_00453300(local_5c,0x39);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


