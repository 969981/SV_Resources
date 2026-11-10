/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb7168; name: FUN_01eb7168
 */


uint FUN_01eb7168(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_1c0;
  undefined8 *local_1b8 [4];
  undefined1 auStack_198 [344];
  undefined4 local_24;
  
  lVar3 = *param_3;
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    plVar2 = *(long **)(param_1 + 0xd0);
    uVar1 = 0;
    if (plVar2 != (long *)0x0) {
      memset(auStack_198,0,0x158);
      FUN_00f329b4(lVar3,auStack_198);
      FUN_016947d8(local_1b8);
      local_24 = 4;
      if (local_1b8[0] == (undefined8 *)0x0) {
        uVar4 = 0;
        uVar5 = 0;
      }
      else {
        FUN_00e5f2bc(&local_1c0,&local_24,local_1b8[0] + 1);
        FUN_01eb7254(&local_1c0,auStack_198,local_1b8[0] + 1);
        uVar4 = *local_1b8[0];
        uVar5 = *(undefined4 *)(local_1b8[0] + 3);
      }
      local_1c0 = FUN_00dc05e0(param_2);
      uVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,uVar4,uVar5,&local_1c0);
      FUN_01694aa8(local_1b8);
    }
  }
  return uVar1 & 1;
}


