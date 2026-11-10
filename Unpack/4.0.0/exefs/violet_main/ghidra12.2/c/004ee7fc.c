/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ee7fc; name: FUN_004ee7fc
 */


bool FUN_004ee7fc(undefined8 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_60;
  long *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar2 = *(long *)(param_5 + 0x60);
  if (lVar2 == 0) {
    local_60 = PTR_DAT_047cdad0 + 0x10;
    plStack_58 = param_4;
                    /* try { // try from 004ee898 to 004ee8b3 has its CatchHandler @ 004ee8e0 */
    uVar1 = FUN_00524ee8(param_1,param_2,param_3,&local_60,param_6,param_7);
    FUN_00524f8c(&local_60);
  }
  else {
    uVar3 = *(undefined8 *)(param_5 + 0x68);
    uStack_48 = (**(code **)(*param_4 + 0x98))(param_4);
    local_60 = PTR_DAT_047cdac8 + 0x10;
    plStack_58 = (long *)lVar2;
    local_50 = uVar3;
                    /* try { // try from 004ee854 to 004ee86f has its CatchHandler @ 004ee8e4 */
    uVar1 = FUN_00524ee8(param_1,param_2,param_3,&local_60,param_6,param_7);
    FUN_00524f8c(&local_60);
  }
  return (uVar1 & 1) != 0;
}


